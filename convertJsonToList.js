let rawObj = {"name": "RajiniKanth", "age": 33, "hasPets" : false};

function convertObjectToList(rawObj) {
    let result=Object.entries(rawObj)
    console.log(result)
}

convertObjectToList(rawObj)