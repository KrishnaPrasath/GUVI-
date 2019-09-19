$(document).ready(function() {
  console.log("object");

  $("#color").on("click", function() {
    console.log("object");
    $("#holder div").css("background-color", "red");
  });

  $("#borders").on("click", function() {
    console.log("object");
    $(".box").css("border-radius", "10px");
  });

  $("#addBox").on("click", function() {
    let boxCount = $("#holder div").length;
    $("#holder").append(`<div class="box" id=${boxCount++}></div>`);
  });
});
