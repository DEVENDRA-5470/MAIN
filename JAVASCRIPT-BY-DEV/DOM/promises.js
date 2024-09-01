// A promise in javascript is like a guarantee that something will happen
// in the future.
// It represents a task (like getting data from a server) that is happening
// in the background.

// A Promise Can have three phases:
// 1.Pending : it will waiting to finish.
// 2.Resloved(Fullfilled) : The task completed sucessfully.
// 3.Reject  : The task failed.


// Think of it as ordering food at a restaurant :
// 1.You place your order (Promise is created).
// 2.While you wait other things can happen (Promise is pending).
// 3.You get your food (the promise is fullfilled) Or something goes wrong (the promise is rejected).

// You can use .then() to do something when the promise fullfilled.
// and .catch() to handle errors if the promise rejected.

function orderFood() {
    return new Promise((resolve, reject) => {
      let foodReady = 1; // Simulate food readiness
  
      if (foodReady) {
        resolve("Your food is ready! 🍽️");
      } else {
        reject("Sorry, we are out of food! 🚫");
      }
    });
  }
  
  orderFood()
    .then(message => 
        
        console.log(message),
        console.log("Hello")           // Handle resolved promise
    )  // Handle resolved promise

    .catch(error => console.log(error));    // Handle rejected promise

    async function serveFood() {
        try {
          let message = await orderFood(); // Wait for the promise to resolve or reject
          console.log("Hello")           // Handle resolved promise
          console.log(message); 
        } catch (error) {
          console.log(error);              // Handle rejected promise
        }
      }
      
      // Call the async function
      //serveFood();
        