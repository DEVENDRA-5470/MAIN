// --------------------------- String
// Properties of String
// Creation of String
// Accessing of String
// Modifying of String
// Traversing of String
// In-builted methods of String
// Assignments

//--------------------------- Properties :
// 1.String is a data structure used to store series of charecter like name,address, numbers.
// 2.String is a primitive data type in JavaScript.
// 3.String is immutable in JavaScript means once string is created it can't be changed.
// 4.String is a sequence of charecters enclosed in single quotes or double quotes.
// 5.String can be created using string literal or using new keyword with String constructor.
// 6.String can be accessed using index number.
// 7.String have various in-builted method.

// -------------------Creation of String
// let str1 = "Hello World";
// let str2 = new String("Hello World");

// -------------------Accessing of string.
// let str = "Hello World";
// console.log(str[0]); // H
// console.log(str[1]); // e


//---------------------Modifying of string
// let str = "Hello World";
// str = str + " JavaScript";
// console.log(str); // Hello World JavaScript

//--------------------- Traversing of String.
// 1.Using For loop.
// let str = "Hello World";
// for(let i = 0; i < str.length; i++){
//     console.log(str[i]);
// }


// 2.Using for in loop.
// let str = "Hello World";
// for(let i in str){
//     console.log(str[i]);
// }

// 3.Using for of loop.
// let str = "Hello World";
// for(let char of str){
//     console.log(char);
// }

// 4.While loop
// let str = "Hello World";
// let i = 0;
// while(i < str.length){
//     console.log(str[i]);
//     i++;
// }

// 5.Do while loop.
// let str = "Hello World";
// let i = 0;
// do{
//     console.log(str[i]);
//     i++;
// }while(i < str.length);



//-------------------In-builted methods of String
// 1. toUpperCase()
// let str = "hello world";
// console.log(str.toUpperCase()); // HELLO WORLD

// 2.toLowerCase()
// let str = "HELLO WORLD";
// console.log(str.toLowerCase()); // hello world

// 3.join()
// let arr = ["Hello", "World", "JavaScript"];
// console.log(arr.join()); // Hello,World,JavaScript
// console.log(arr.join(" ")); // Hello World JavaScript
// console.log(arr.join("-")); // Hello-World-JavaScript

// 4.concat()
// let str1 = "Hello";
// let str2 = "World";
// console.log(str1.concat(str2)); // HelloWorld
// console.log(str1.concat(" ", str2)); // Hello World

// 5.include()
// let str = "Hello World";
// console.log(str.includes("Hello")); // true
// console.log(str.includes("World")); // true  
// console.log(str.includes("JavaScript")); // false
// console.log(str.includes("JavaScript", 10)); // true

// 6.slice()
// let str = "Hello World";
// console.log(str.slice(0, 5)); // Hello
// console.log(str.slice(6, 11)); // World
// console.log(str.slice(0, 5).toUpperCase()); // HELLO

// 7.substring()
// let str = "Hello World";
// console.log(str.substring(0, 5)); // Hello
// console.log(str.substring(6, 11)); // World
// console.log(str.substring(0, 5).toUpperCase()); // HELLO

// 8.replace()
// let str = "Hello World";
// console.log(str.replace("Hello", "Hi")); // Hi World

// 9.trim()
// let str = "   Hello World   ";
// console.log(str.trim()); // Hello World

// 10.trimstart()
// let str = "   Hello World   ";
// console.log(str.trimStart()); // Hello World   |
// console.log(str.trimStart().length); // 14

// 11.trimend()
// let str = "   Hello World   ";
// console.log(str.trimEnd()); //   Hello World|
// console.log(str.trimEnd().length); // 14


// 12.padstart()
// let str = "Hello World";
// console.log(str.padStart(28, "JavaScript")); // JavaScriptHello World    
// console.log(str.padStart(20, "JavaScript").length); // 20
// console.log(str.padStart(20, "JavaScript").toUpperCase());

// 13.padend()
// let str = "Hello World";
// console.log(str.padEnd(28, "JavaScript")); // Hello WorldJavaScript
// console.log(str.padEnd(20, "JavaScript").length); // 20

// 14.charat()
// let str = "Hello World";
// console.log(str.charAt(0)); // H
// console.log(str.charAt(11)); // d
// console.log(str.charAt(12)); // undefined

// 15.split()
// let str = "Hello World";
// console.log(str.split(" ")); // ["Hello", "World"]
// console.log(str.split(" ").length); // 2

// 16.repeat()
// let str = "Hello World";
// console.log(str.repeat(3)); // Hello WorldHello WorldHello World

// 17.search()
// let str = "Hello World";
// console.log(str.search("World")); // 6

// 18.match()
// let str = "Hello World";
// console.log(str.match("World")); // ["World"]

// 19.startswith()
// let str = "Hello World";
// console.log(str.startsWith("Hello")); // true
// console.log(str.startsWith("World")); // false

// 20.endswith()
// let str = "Hello World";
// console.log(str.endsWith("World")); // true
// console.log(str.endsWith("Hello")); // false



// Assignments
// 1. Write a function that takes a string and returns the string with the first letter capitalized.
// function capitalize(str) {
//     return str.charAt(0).toUpperCase() + str.slice(1);
// }
// console.log(capitalize("hello world")); // Hello World

