let ipArray = ["GUVI", "I", "am", "a geek"];
let length = ipArray.length;

function transformFirstAndLast(arr) {
    let newObj ={}
    let key,value
    key=arr[0]
    value=arr[length-1]
    newObj[key]=value
    return newObj

}
console.log(transformFirstAndLast(ipArray))


