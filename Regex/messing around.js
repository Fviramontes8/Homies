const { evalAllRegex } = require("./regexEvaluator");

/**
 * @type {RegExp[]}
 */
const regexps = [
    /**
     * This is torture, but it matches phone numbers
     */
    /\(?\d{3}\)?[- ]?\(?\d{3}\)?[- ]?\(?\d{4}\)?/,
];

evalAllRegex(regexps, "Please provide a test number: ").then(process.exit);