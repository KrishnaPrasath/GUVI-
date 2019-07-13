var array = [["make", "Ford"], ["model", "Mustang"], ["year", 1964]];

function fromListToObject(arr) {
     
var newObj={}
var temp;
 for( i=0;i<arr.length;i++){
    temp = arr[i]
    newObj[temp[0]]=temp[1]
 }
 return newObj
 
 }
 console.log(fromListToObject(array))
