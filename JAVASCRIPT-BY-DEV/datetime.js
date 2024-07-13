let time=new Date()
let hour=time.getHours()
let minute=time.getMinutes()
let second=time.getSeconds()
console.log(hour)
console.log(minute)
console.log(second)

// ------------- Setdatetime
let date = new Date();
date.setFullYear(2025);
date.setMonth(0); // December (0-based)
date.setDate(25);
date.setHours(10);
date.setMinutes(30);
date.setSeconds(15);
console.log(date);
