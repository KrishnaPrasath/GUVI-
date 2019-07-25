function addProperty(obj, key) {
  obj[key] = true;
  console.log(obj);
}

var obje = {};
addProperty(obje, "myProperty");
