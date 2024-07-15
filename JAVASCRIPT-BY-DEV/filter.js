// // //----------------- Filter function
// // 1.HOF
// // A higher-order function is a concept from functional programming that refers to a function that meets at least one of the following criteria:
// // Takes Functions as Arguments: It can accept other functions as parameters.
// // Returns a Function: It can return a function as its output.

// // 2. The filter function in JavaScript creates a new array with all elements that pass the test implemented by the provided callback function.

// // The `filter` function in JavaScript creates a new array with all elements that pass the test implemented by the provided function. It's a very useful method for working with arrays when you want to create a subset of the array based on certain conditions.


// ```javascript
// array.filter(callback(element[, index[, array]])[, thisArg])
// ```

// // - **callback**: A function that is called for every element of the array. It should return `true` to keep the element, `false` otherwise.
// //   - **element**: The current element being processed in the array.
// .

// // ### Example

// // Here's a simple example that filters out all the numbers in an array that are less than 10:

// ```javascript
// const numbers = [5, 12, 8, 130, 44];

// const filteredNumbers = numbers.filter(function(number) {
//   return number >= 10;
// });

// console.log(filteredNumbers);
// // Output: [12, 130, 44]
// ```

// ### Using Arrow Functions

// You can also use arrow functions for a more concise syntax:

// ```javascript
// const numbers = [5, 12, 8, 130, 44];

// const filteredNumbers = numbers.filter(number => number >= 10);

// console.log(filteredNumbers);
// // Output: [12, 130, 44]
// ```

// ### Filtering Objects

// You can also use the `filter` method to filter an array of objects. For example, let's say you have an array of objects representing people and you want to filter out those who are older than 18:

// ```javascript
// const people = [
//   { name: 'John', age: 15 },
//   { name: 'Jane', age: 20 },
//   { name: 'Mike', age: 17 },
//   { name: 'Mary', age: 22 }
// ];

// const adults = people.filter(person => person.age > 18);

// console.log(adults);
// // Output: [ { name: 'Jane', age: 20 }, { name: 'Mary', age: 22 } ]
// ```

// The `filter` method is very powerful and can be used in a wide range of scenarios where you need to create a subset of an array based on specific criteria.