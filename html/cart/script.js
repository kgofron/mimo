var cartItems = [];
var isTotalHidden = true;

var backpack = {
    name: "Backpack",
    price: 400
}

var camera = {
    name: "Camera",
    price: 300
}

function addToCart(item) {
    cartItems.push(item);
    document.getElementById("itemCounter").innerHTML = cartItems.length;
    showTotal();
}

function clickCart() {
    isTotalHidden = !isTotalHidden;
    showTotal();
}

function showTotal() {
    var orderTotal = document.getElementById("orderTotal");
//    var total = 0;
    orderTotal.innerHTML = "";

    if (isTotalHidden === false) {
        var total = 0;
        for (var i=0; i < cartItems.length; i++) {
            total += cartItems[i].price;
        } 
        //orderTotal.innerHTML = "Total: $" + cartItems.price.reduce((a,b) => a + b, 0);
        orderTotal.innerHTML = "Total: $" + total.toString();
        console.log(cartItems);
    }
/*   
    for (var i = 0; i < cartItems.length; i++) {
        total += cartItems[i].price;
        //alert(i);
    } */
/*
    alert(cartItems[0].price);
    alert(total); */
//    orderTotal.innerHTML = "Total: $" + total;
}