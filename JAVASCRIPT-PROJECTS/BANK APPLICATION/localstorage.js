let mainf=document.getElementById('main');
let deposite=document.getElementById('deposite');
let withdraw=document.getElementById('withdraw');
function main(){
        mainf.style.display="block";
        deposite.style.display="none";
        withdraw.style.display="none";


}

function depo(){
    deposite.style.display="block";
    mainf.style.display="none";
    withdraw.style.display="none";

}

function withd(){
    withdraw.style.display="block";
    deposite.style.display="none";
}




let entries = [];

function save_me(event) {
    event.preventDefault();

    let image=document.getElementById('customer-image');
    let email = document.getElementById("customer-email").value;
    let mobile = document.getElementById("customer-mobile").value;
    let name = document.getElementById("customer-name").value;
    let balance = document.getElementById("customer-balance").value;

    let customer_ac_no = document.getElementById('customer-ac-no').value || String(Math.round(Math.random() * 1000));

    let entry = {
        ac_no: customer_ac_no,
        email: email,
        mobile: mobile,
        name: name,
        balance: balance,
        created_date:new Date().toLocaleString(),
    };

    // Store the entry in localStorage using the ac_no as the key
    localStorage.setItem(`DREAMER${entry.ac_no}`, JSON.stringify(entry));

    document.querySelector("form").reset(); 
    get_data(); 
}


// --------------------------------

function del(button, DREAMERac_no) {
    // Remove the entry from localStorage
    localStorage.removeItem(`DREAMER${DREAMERac_no}`);

    // Remove the row from the table (permanent removal from the DOM)
    let row = button.closest('tr'); // Find the closest <tr> ancestor
    row.remove(); // Remove the row from the DOM
}

// --------------------------------------------------------

function get_data() {
    let entriesContainer = document.getElementById("list");
    entriesContainer.innerHTML = ''; // Clear existing entries

    // Iterate over localStorage keys to find entries
    for (let i = 0; i < localStorage.length; i++) {
        let key = localStorage.key(i);
        if (key.startsWith('DREAMER')) { // Check if the key starts with 'DREAMER'
            let entry = JSON.parse(localStorage.getItem(key));

            let row = `
            <tr class="bg-white border-b dark:bg-gray-800 dark:border-gray-700 hover:bg-black-500 dark:hover:bg-blue-700">
                <th scope="row" class="px-6 py-4 font-medium text-gray-900 whitespace-nowrap dark:text-white">
                    ${"DREAMER"+entry.ac_no}
                </th>
               
                <th scope="row" class="px-6 py-4 font-medium text-gray-900 whitespace-nowrap dark:text-white uppercase">
                    ${entry.name}
                </th>
                <td class="px-6 py-4 text-white">
                    ${entry.mobile}
                </td>
                <td class="px-6 py-4 text-white">
                    ${entry.email}
                </td>
                <td class="px-6 py-4 text-white">
                    ${entry.balance}
                </td>
                <td class="px-6 py-4 text-white">
                    ${entry.created_date}
                </td>
                <td class="px-6 py-4 text-white text-center">
                  <button class="bg-green-500 px-1 py-0.5 w-full rounded mt-1" onclick="edit(${entry.ac_no})">EDIT</button>
                  <br>
                  <button class="bg-red-500 px-1 py-0.5 rounded w-full mt-1" onclick="del(this, ${entry.ac_no})">DELETE</button>
                  <br>
                  <button class="bg-blue-600 px-1 py-0.5 rounded w-full mt-1" onclick="depo()">DEPOSIT</button>
                  <br>
                  <button class="bg-yellow-600 px-1 py-0.5 rounded w-full mt-1" onclick="withd()">WITHDRAW</button>
                </td>
            </tr>
            `;
            entriesContainer.innerHTML += row;
        }
    }
}





// --------------------------------------------
function edit(DREAMERac_no) {
    let entry = JSON.parse(localStorage.getItem(`DREAMER${DREAMERac_no}`));

    if (!entry) {
        alert("Entry not found.");
        return;
    }

    document.getElementById('customer-ac-no').value = entry.ac_no;
    document.getElementById("customer-name").value = entry.name;
    document.getElementById("customer-mobile").value = entry.mobile;
    document.getElementById("customer-email").value = entry.email;
    document.getElementById("customer-balance").value = entry.balance;
    document.getElementById("customer-image").value = entry.cus_image;
}




function deposite_amount(event) {
    event.preventDefault(); 
    let ac_no =document.getElementById('customer-ac').value;
    let depo_balance = parseInt(document.getElementById('balance-deposite').value);
    let entry = JSON.parse(localStorage.getItem(`${ac_no}`));
    if (entry){

        console.log(entry)
        entry.balance = parseInt(entry.balance) + depo_balance;
        localStorage.setItem(ac_no, JSON.stringify(entry));
        console.log(entry)
        get_data();
    }
    else{
        alert("Account not found...")
    }
    document.getElementById('deposite').reset();
}

function withdraw_amount(event) {
    event.preventDefault(); // Prevents the form from submitting normally
    let ac_no =document.getElementById('customer-ac-w').value;
    let depo_balance = parseInt(document.getElementById('balance-withdraw').value);
    let entry = JSON.parse(localStorage.getItem(`${ac_no}`));
    if (entry){

        console.log(entry)
        entry.balance = parseInt(entry.balance) - depo_balance;
        localStorage.setItem(ac_no, JSON.stringify(entry));
        console.log(entry)
        get_data();
    }
    else{
        alert("Account not found...")
    }
    document.getElementById('withdraw').reset();
}








get_data(); // Load the data on page load


// ------------------------------------------------------
