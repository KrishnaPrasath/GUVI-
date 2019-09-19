$(document).ready(function() {
  $("#btn").on("click", function() {
    let data = $("#textBox").val();
    $("#ul").append(`<li>${data}</li>`);
  });
});
