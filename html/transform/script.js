var cartItems=[];

var backpack = {
    name: "Backpack",
    price: 400
};

var camera = {
    name: "Camera",
    price: 300
};

function addToCart(item) {
    cartItems.push(item);
    //alert(cartItems);
    document.getElementById("itemCounter").innerHTML = cartItems.length;
};