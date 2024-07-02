const MathUtils = {
    // Basic Random Number
    getRandomNumber: function() {
      return Math.random();
    },
  
    // Random Integer between 0 and a given maximum (exclusive)
    getRandomInt: function(max) {
      return Math.floor(Math.random() * max);
    },
  
    // Random Integer between a given minimum (inclusive) and maximum (exclusive)
    getRandomIntInRange: function(min, max) {
      min = Math.ceil(min);
      max = Math.floor(max);
      return Math.floor(Math.random() * (max - min) + min);
    },
  
    // Random Integer between a given minimum (inclusive) and maximum (inclusive)
    getRandomIntInclusive: function(min, max) {
      min = Math.ceil(min);
      max = Math.floor(max);
      return Math.floor(Math.random() * (max - min + 1) + min);
    },
  
    // Random Float between a given minimum (inclusive) and maximum (exclusive)
    getRandomFloat: function(min, max) {
      return Math.random() * (max - min) + min;
    },
  
    // Random Float between a given minimum (inclusive) and maximum (inclusive)
    getRandomFloatInclusive: function(min, max) {
      return Math.random() * (max - min) + min;
    },
  
    // Random Color Generator
    getRandomColor: function() {
      const letters = '0123456789ABCDEF';
      let color = '#';
      for (let i = 0; i < 6; i++) {
        color += letters[Math.floor(Math.random() * 16)];
      }
      return color;
    },
  
    // Floor
    floor: function(value) {
      return Math.floor(value);
    },
  
    // Round
    round: function(value) {
      return Math.round(value);
    },
  
    // Ceil
    ceil: function(value) {
      return Math.ceil(value);
    },
  
    // Square Root
    sqrt: function(value) {
      return Math.sqrt(value);
    },
  
    // Absolute Value
    abs: function(value) {
      return Math.abs(value);
    },
  
    // Power
    pow: function(base, exponent) {
      return Math.pow(base, exponent);
    }
  };
  
  // Usage examples:
  console.log(MathUtils.getRandomNumber());              // Random number between 0 and 1
  console.log(MathUtils.getRandomInt(10));               // Random integer between 0 and 9
  console.log(MathUtils.getRandomIntInRange(5, 10));     // Random integer between 5 and 9
  console.log(MathUtils.getRandomIntInclusive(5, 10));   // Random integer between 5 and 10
  console.log(MathUtils.getRandomFloat(5.5, 10.5));      // Random float between 5.5 and 10.5
  console.log(MathUtils.getRandomFloatInclusive(5.5, 10.5)); // Random float between 5.5 and 10.5
  console.log(MathUtils.getRandomColor());               // Random hex color code
  console.log(MathUtils.floor(5.95));                    // 5
  console.log(MathUtils.round(5.5));                     // 6
  console.log(MathUtils.ceil(5.1));                      // 6
  console.log(MathUtils.sqrt(25));                       // 5
  console.log(MathUtils.abs(-5));                        // 5
  console.log(MathUtils.pow(2, 3));                      // 8
  