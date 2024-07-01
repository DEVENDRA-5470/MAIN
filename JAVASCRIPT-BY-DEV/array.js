// // Properties:
// 1.Array is a data structure used to store multiple and different types of data.
// 2.It is a collection of elements, each identified by an index or key.
// 3.Arrays are zero-based, means the first element is at index 0.
// 4.Arrays are mutable, means they can be modified after creation.
// 5. in JavaScript, arrays are dynamic data structures.that means arrays can grow or shrink dynamically as elements are added or removed. 
// 6.Arrays are objects in JavaScript, and they have their own set of methods.

// // Creating an array :
// let myArray = [1, 2, 3, 4, 5];
// let myArray = new Array(1, 2, 3, 4, 5


// // Accessing array elements :
// let myArray = [1, 2, 3, 4, 5];
// console.log(myArray[0]); // Output: 1
// console.log(myArray[4]); // Output: 5

// // Updating array:
// let myArray = [1, 2, 3, 4, 5];
// myArray[0] = 10;
// console.log(myArray); // Output: [10, 2, 3, 4, 5]

// // Traversing
// // 1.Using for loop :
// for (let i = 0; i < myArray.length; i++) {
//     console.log(myArray[i]);
//     // Output: 10, 2, 3, 4, 5
//     }

// // 2.  Using for in loop:
// for (let index in myArray) {
//     console.log(myArray[index]);
//     // Output: 10, 2, 3, 4, 5
//     }


// // 3.Using for...of loop :
// for (let element of myArray) {
//     console.log(element);
//     // Output: 10, 2, 3, 4, 5
//     }

// // 4.Using While loop
// let i = 0;
// while (i < myArray.length) {
//     console.log(myArray[i]);
//     i++;
//     // Output: 10, 2, 3, 4, 5
//     }

// // 5. Using Do while loop
// let i = 0;
// do {
//     console.log(myArray[i]);
//     i++;
//     } while (i < myArray.length);
//     // Output: 10, 2, 3, 4, 5


// // Methods:
// // 1. push() : Add element at end of array
// let myArray = [1, 2, 3, 4, 5];
// myArray.push(6, 7, 8);
// console.log(myArray);

// // 2.pop() : Remove element from last
// let myArray = [1, 2, 3, 4, 5];
// let poppedElement = myArray.pop();
// console.log(myArray); // Output: [1, 2, 3, 4]
// console.log(poppedElement); // Output: 5

// // 3.shift() :Remove ele from first index
// let myArray = [1, 2, 3, 4, 5];
// let shiftedElement = myArray.shift();
// console.log(myArray); // Output: [2, 3, 4, 5]
// console.log(shiftedElement); // Output: 1

//  //4.unshift():Adds one or more elements to the beginning of an array.
// let array = [2, 3, 4];
// let newLength = array.unshift(1); // Adds 1 to the beginning
// console.log(array); // Output: [1, 2, 3, 4]
// console.log(newLength); // Output: 4 (new length of the array)


// // 5.splice(): Returns a shallow copy of a portion of an array into a new array object selected from startIndex to endIndex.
// let array = [1, 2, 3, 4, 5];
// let newArray = array.slice(1, 4); // Extracts elements from index 1 to 3 (4 not included)
// console.log(newArray); // Output: [2, 3, 4]
// console.log(array); // Output: [1, 2, 3, 4, 5] (original array unchanged)

// // 6.concat(): Returns a new array comprised of the array on which it is called joined with the arrays and/or values provided as arguments.
// let array1 = [1, 2, 3];
// let array2 = [4, 5];
// let newArray = array1.concat(array2, 6, 7); // Concatenates arrays and values
// console.log(newArray); // Output: [1, 2, 3, 4, 5, 6, 7]




// // 7.reverse(): Reverse the array
// let myArray = [1, 2, 3, 4, 5];
// myArray.reverse();
// console.log(myArray); // Output: [5, 4, 3, 2,

// // 8. splice(startIndex, deleteCount, item1, item2, ...):
// let array = [1, 2, 3, 4, 5];
// array.splice(2, 2); // Removes 2 elements starting from index 2
// console.log(array); // Output: [1, 2, 5]

// let array = [1, 2, 3, 4, 5];
// array.splice(2, 0, 'a', 'b'); // Inserts 'a' and 'b' starting at index 2
// console.log(array); // Output: [1, 2, 'a', 'b', 3, 4, 5]

// let array = [1, 2, 3, 4, 5];
// array.splice(2, 1, 'x', 'y'); // Replaces 1 element at index 2 with 'x' and 'y'
// console.log(array); // Output: [1, 2, 'x', 'y', 4, 5]



// // 9.Remove():
// let myArray = [1, 2, 3, 4, 5];
// myArray.splice(2, 1);
// console.log(myArray); // Output: [1, 2, 4, 5]

// // 10:indexof():
// let myArray = [1, 2, 3, 4, 5];
// let index = myArray.indexOf(3);
// console.log(index); // Output: 2

// // 11 : lastindexof():
// let myArray = [1, 2, 3, 4, 5];
// let index = myArray.lastIndexOf(3);
// console.log(index); // Output: 2

// // 12.includes():
// let myArray = [1, 2, 3, 4, 5];
// let result = myArray.includes(3);
// console.log(result); // Output: true

// // Copy():
// let myArray = [1, 2, 3, 4, 5];
// let copyArray = [...myArray];
// console.log(copyArray); // Output: [1, 2, 3, 4,


// // ------------------Array Destructuring
// // Array destructuring allows you to unpack values from arrays or iterable objects into distinct variables. It provides a convenient way to extract multiple elements from an array and assign them to variables in a single statement.


// 1.Basic Destructuring:
// let numbers = [1, 2, 3];
// let [a, b, c] = numbers;
// console.log(a); // Output: 1
// console.log(b); // Output: 2
// console.log(c); // Output: 3


// 2.Skipping Elements:
// let numbers = [1, 2, 3, 4, 5];
// let [first, , third] = numbers;
// console.log(first); // Output: 1
// console.log(third); // Output: 3


// 3.Rest Operator (...):
// let numbers = [1, 2, 3, 4, 5];
// let [first, ...rest] = numbers;
// console.log(first); // Output: 1
// console.log(rest); // Output: [2, 3, 4, 5]

// 4.Default Values:
// let numbers = [1];
// let [a, b = 2] = numbers;
// console.log(a); // Output: 1
// console.log(b); // Output: 2 (default value assigned)

       

// // --------------------Array Structuring
// // Array structuring refers to the process of creating arrays in a structured way, either by directly assigning values or by using computed property names.

// 1.Basic Structuring:
// let [a, b, c] = [1, 2, 3];
// console.log(a); // Output: 1
// console.log(b); // Output: 2
// console.log(c); // Output: 3

// 2.Nested Arrays:
// let [a, [b, c]] = [1, [2, 3]];
// console.log(a); // Output: 1
// console.log(b); // Output: 2
// console.log(c); // Output: 3

// 3.Swapping Variables:
// let a = 1, b = 2;
// [a, b] = [b, a];
// console.log(a); // Output: 2
// console.log(b); // Output: 1

// 4.Ignoring Some Values:
// let [a, , c] = [1, 2, 3];
// console.log(a); // Output: 1
// console.log(c); // Output: 3


