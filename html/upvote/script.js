var counter = 3; 

function upvote() {
    counter++;
    // counter = counter + 1;
    // alert(counter);
    votes = document.getElementById("votes");
    votes.innerHTML = counter + " votes";
    // document.getElementById("votes").innerHTML = counter + " votes";
}

function downvote() {
    counter--;
    document.getElementById("votes").innerHTML = counter + " votes";
}