function removeProperty(obj, key) {
  // your code here
  delete obj[key];
  console.log(obj[key]);
}
var obj = {
  name: "krish"
};
removeProperty(obj, "name");
