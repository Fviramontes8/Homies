const readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
});

/**
 *
 * @param {RegExp} regexp
 * @param {string} instring
 * @type {Promise<void>}
 */
function evalRegex(regexp, instring) {
    return new Promise((resolve, reject) => {
        let res = instring.match(regexp);
        if (!res || res.length === 0) {
            console.log(`${regexp.toString()} had no result in "${instring}"`);
        } else {
            console.log(`${regexp.toString()} results:`);
            res.forEach((val) => {
                console.log(`\t-`, val);
            });
        }
        resolve();
    });
}

module.exports = {
    /**
     *
     * @param {RegExp[]} regexps
     * @param {string} questionString
     * @return A promise resolving to an exit code, only 0
     * @type {Promise<number>}
     */
    evalAllRegex(regexps, questionString) {
        return new Promise((resolve, reject) => {
            readline.question(questionString, (instring) => {
                let count = 0;
                regexps.forEach((regex) => {
                    evalRegex(regex, instring).then(() => {
                        if (++count === regexps.length)
                            resolve(0);
                    });
                });
            });
        });
    }
};