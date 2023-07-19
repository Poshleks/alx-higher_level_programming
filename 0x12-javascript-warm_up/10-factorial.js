#!/usr/bin/node
// JS Script

function factorial (num) {
  if (isNaN(num) || num <= 1) {
    return 1;
  } else {
    return num * factorial(num - 1);
  }
}

let num = parseInt(process.argv[2]);

console.log(factorial(num));
