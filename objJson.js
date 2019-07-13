
let rawObj = {"name": "RajiniKanth", "age": 33, "hasPets" : false};

function printAllValues(obj) {
    let result  = Object.values(obj)
    console.log(result)

}

printAllValues(rawObj)