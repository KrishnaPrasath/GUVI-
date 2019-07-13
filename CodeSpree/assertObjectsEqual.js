
var expected = {foo: "krish", bar: 6};
var actual = {foo: "Krish", bar: 6}


function assertObjectsEqual(actual, expected, testName){
    // your code here
    let flag=0;
    for(var key in actual){
 
            if(actual[key]==expected[key]){
               flag+=1
            }
        
    }
    if(flag==2){
        console.log("Passed")
    }else{
        console.log("Failed")
    }
       
    }
   

   assertObjectsEqual(actual,expected,"check equality")
