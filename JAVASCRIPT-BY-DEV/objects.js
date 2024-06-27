//----------------------------- Objects
// Properties of String
// Creation of String
// Accessing of String
// Modifying of String
// Traversing of String
// In-builted methods of String
// Assignments

//------------ Properties
// 1.Objects are data structure which store the data in key:value form of different types of data.
// 2.Objects key must be unique.
// 3.Objects are mutable.
// 4.Objects are created using {}.
// 5.Objects are created using new Object().

//-------------Creation of Objects
// 1.Using {}.
let profile={
    name:"Rahul",
    age:20,
    gender:"Male",
    hobbies:["Cricket","Football","Chess"],
    show:function(){
        console.log(this.name,this.age,this.gender,this.hobbies);
    }
    }

 // 2.Using new Object().
    let profile1=new Object();
    profile1.name="Rahul";
    profile1.age=20;
    profile1.gender="Male";
    profile1.hobbies=["Cricket","Football","Chess"];
    profile1.show=function(){
        console.log(this.name,this.age,this.gender,this.hobbies);
    }


// ------------------------Acessing of objects.
// 1.Using dot operator.
profile.name;
profile.age;
profile.gender;
profile.hobbies;
profile.show();
// 2.Using bracket operator.
profile["name"];
profile["age"];
profile["gender"];
profile["hobbies"];
profile["show"]();


//-------------- Methods.
// 1.Keys
// const person = {
//     name: 'John',
//     age: 30,
//     city: 'New York'
// };

// console.log(Object.keys(person)); // ['name', 'age', 'city']


// 2.Values
// const person = {
//     name: 'John',
//     age: 30,
//     city: 'New York'
// };
// console.log(Object.values(person)); // ['John', 30, 'New York']


// 3.Entries
// const person = {
//     name: 'John',
//     age: 30,
//     city: 'New York'
// };
// console.log(Object.entries(person)); // [['name', 'John'], ['age', 30],  
// ['city', 'New York']]


// 4.seal():  Prevents new properties from being added to an object and marks all existing properties as non-configurable. Values of present properties can still be changed as long as they are writable.
// const person = {
//     name: 'John',
//     age: 30,
//     city: 'New York'
// };
// Object.seal(person);
// person.name = 'Mike';
// console.log(person); // { name: 'John', age: 30, city: ' 
// New York' }


// 5.freeze(): Freezes an object: other code cannot delete or change its properties. Prevents new properties from being added, existing properties from being removed, and property descriptors from being changed.

// const person = {
//     name: 'John',
//     age: 30,
//     city: 'New York'
// };
// Object.freeze(person);
// person.name = 'Mike';
// console.log(person); // { name: 'John', age: 30, city: '
// New York' }



// 6.isSealed()
// const person = {
//     name: 'John',
//     age: 30,
//     city: 'New York'
// };
// Object.seal(person);
// console.log(Object.isSealed(person)); // true


// 7.isFrozen()
// const person = {
//     name: 'John',
//     age: 30,
//     city: 'New York'
// };
// Object.freeze(person);
// console.log(Object.isFrozen(person)); // true

//------------------- Travesing.
// 1.for loop
// const person = {
//     name: 'John',
//     age: 30,
//     city: 'New York'
// };
// for (let key in person) {
//     console.log(key); // name, age, city
// }

// 2.for...of loop
// const person = {
//     name: 'John',
//     age: 30,
//     city: 'New York'
// };

// for (let key of Object.keys(person)) {
//     console.log(key); // name, age, city
// }


// for (let value of Object.values(person)) {
//     console.log(value); // John, 30, New York
// }

// 3. for loop
// const person = {
//     name: 'John',
//     age: 30,
//     city: 'New York'
// };
// for (let i=0 ; i<obje.length;i++){
//     console.log(obje[i]); // John, 30, New York
// }

// 4.While loop
// const person = {
//     name: 'John',
//     age: 30,
//     city: 'New York'
// };
// let i=0;
// while (i<obje.length){
//     console.log(obje[i]); // John, 30, New York
//     i++;
// }


