let fruit = "apple";
switch (fruit) {
  case "banana":
    console.log("Bananas are great!");
    break;
  case "apple":
    console.log("Apples are healthy!");
    break;
  case "orange":
    console.log("Oranges are full of vitamin C!");
    break;
  default:
    console.log("Unknown fruit");
}

let score = 85;
let grade;

switch (true) {
  case (score >= 90):
    grade = "A";
    break;
  case (score >= 80):
    grade = "B";
    break;
  case (score >= 70):
    grade = "C";
    break;
  case (score >= 60):
    grade = "D";
    break;
  default:
    grade = "F";
}

console.log(`Your grade is ${grade}`); // Outputs: Your grade is B
