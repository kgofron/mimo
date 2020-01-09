"use strict";
// run using: "node js_demo.js"
// 2020-1-7

function soundMaker(sound, times) {

    // closure
    function makeSound() {
        console.log(`${sound}`);
    }

    for(let i = 0; i < times; i++) {
        makeSound();
    }
}

//soundMaker("woof", 5);

function summation(arr) {
    let sum = 1;

    // closure
    function summer() {
        for(let i = 0; i < arr.length; i++) {
            sum *= arr[i];
        }
    }

    summer();
    return sum;
}
//console.log(summation([1,2,3,4]));

// Callback - not most common
let callback = function() {
    console.log("It has been 2 seconds!");
}
let timeToWait = 2000; // ms
global.setTimeout(callback, timeToWait);

// more likely to see:
global.setTimeout(function() {
    console.log("It has been 3 seconds!!");
}, 3000);
// ^^ This is ES5

// ES6:
//global.setTimeout(() => console.log("It has been 1 second!!!"),1000);
global.setTimeout(() => {console.log("It has been 1 second!!!")},1000);
// ^^ Preferred syntax

