console.log("Cat Fact");

var request = new XMLHttpRequest();
var url = "https://cat-fact.herokuapp.com/facts/random";
request.open("GET", url, false);
request.send();
var response = request.responseText;
var data = JSON.parse( response );
console.log(data["text");
