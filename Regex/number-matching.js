const { evalAllRegex } = require("./regexEvaluator");

/**
 * @type {RegExp[]}
 */
const regexps = [
    /0/,
    /1/,
    /9/,
    /[0-9]/,
    /1[0-9]/,
    /9[0-9]/,
    /[0-9][0-9]/,
    /[0-9]{1,2}/,
    /[1-9][0-9]{1}/,

];

evalAllRegex(regexps, "Please provide a test number: ").then(process.exit);

//(?<title>\w+), yes \k<title>/