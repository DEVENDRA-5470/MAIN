// let myarr=[23,56,73,22,67,89]
// let max=myarr[0]
// for(let i=0; i<myarr.length ;i++){
//     // console.log(myarr[i])
//     if (max<myarr[i]){
//         sg=max
//         max=myarr[i]
//     }
// }
// console.log("Second Greatest :" ,sg)
// console.log("Greatest Number :", max)


let arr=[1,2,3,4,2,3]
let unique=[]
for(let i=0 ; i<arr.length ;i++){
    let u=true;
    
    for(let k=0 ;k<arr.length ; k++){
        console.log(k,i,"--------------")
        if(i!==k && arr[k] == arr[i]){
            console.log(k,i)
            u=false;
            break
        }
    }

    if (u){
        unique.push(arr[i])
    }

}
console.log(unique)


