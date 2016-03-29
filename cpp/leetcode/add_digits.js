/**
 * @param {number} num
 * @return {number}
 */
var addDigits = function(num) {
  while(num >= 10) {
    num = num.toString().split('').reduce(function(memo, item){return parseInt(item) + memo;}, 0);
  }
  return num;
};
