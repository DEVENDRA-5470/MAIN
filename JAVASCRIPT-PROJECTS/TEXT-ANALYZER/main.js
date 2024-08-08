  // Function to analyze text
  function analyzeText() {
    const text = document.getElementById('randomTextArea').value;

    // Counting letters, words, and spaces
    const totalCharacterCount = text.length; // Total characters including spaces
    const letterCount = text.replace(/\s/g, '').length; // Total characters excluding spaces
    const wordCount = text.trim().split(/\s+/).filter(word => word !== '').length; // Total words
    const spaceCount = (text.match(/\s/g) || []).length; // Total spaces

    // Counting uppercase and lowercase letters
    const upperCaseCount = (text.match(/[A-Z]/g) ).length;
    const lowerCaseCount = (text.match(/[a-z]/g) ).length;

    // Displaying character count
    document.getElementById('charCount').innerHTML = `${totalCharacterCount} / 450`;

    // Displaying statistics
    document.getElementById('stats').innerHTML = `
      <p>Total character count (with spaces): ${totalCharacterCount}</p>
      <p>Total character count (without spaces): ${letterCount}</p>
      <p>Word count: ${wordCount}</p>
      <p>Space count: ${spaceCount}</p>
      <p>Uppercase letter count: ${upperCaseCount}</p>
      <p>Lowercase letter count: ${lowerCaseCount}</p>
    `;
  }

  // Add event listener to the textarea for input change
  document.getElementById('randomTextArea').addEventListener('input', analyzeText);

  // Initial call to analyzeText to display initial statistics
  analyzeText();