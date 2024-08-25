// function createCounter() {
//     let count = 0; // This variable is in the outer function's scope

//     return function() {
//         count += 1; // The inner function modifies and accesses 'count'
//         return count; // Return the updated count
//     };
// }

// const myCounter = createCounter(); // Create a new counter

// console.log(myCounter()); // Logs: 1
// console.log(myCounter()); // Logs: 2
// console.log(myCounter()); // Logs: 3
// console.log(count)
// let count=10;
// console.log(count)


function createDiaryEntry(message) {
    let diaryNote = message; // Variable inside the outer function
    return function() {
        diaryNote+=diaryNote
        console.log(diaryNote); // Inner function accesses 'diaryNote'
    };
}

const myDiaryEntry = createDiaryEntry('Remember to buy groceries!');
// myDiaryEntry(); // Logs: 'Remember to buy groceries!'
