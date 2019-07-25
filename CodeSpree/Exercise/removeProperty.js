function removeProperty(obj, key) {
  // your code here
  delete obj[key];
  console.log(obj);
}
var obj = {
  name: "krish"
};
removeProperty(obj, "name");
