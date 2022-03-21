const { evalAllRegex } = require("./regexEvaluator");

/**
 * @type {RegExp[]}
 */
const regexps = [
    /Hello [Ww]orld/,
];

evalAllRegex(regexps, "Please provide a test string: ").then(process.exit);