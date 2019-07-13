var array = [
                [
                    ["firstName", "Vasanth"], ["lastName", "Raja"], ["age", 24], ["role", "JSWizard"]
                ],
                [  
                    ["firstName", "Sri"], ["lastName", "Devi"], ["age", 28], ["role", "Coder"]
                ]
            ];

function transformEmployeeData(arr) {
    var tranformEmployeeList = [];
    
    for(i=0;i<arr.length;i++){
        let temp=arr[i]
        let obj = {}
        for(j=0;j<temp.length;j++){
            let insideArr = temp[j]
            obj[insideArr[0]]=insideArr[1]
            //console.log(insideArr)
        }
        tranformEmployeeList[i]=obj
    }
    
    
    return tranformEmployeeList;
   }

console.log(transformEmployeeData(array))
