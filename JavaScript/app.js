// var username = prompt('Give me your username');
// alert("hello"+username);

var btnTranslate = document.querySelector("#btn-Translate");
var txtInput = document.querySelector("#txt-input");
var outputDiv = document.querySelector("#output");

// outputDiv.innerText = "Manish Basnet"

function clickHandler() {
    outputDiv.innerText = "LOl " + txtInput.value;
    };

btnTranslate.addEventListener("click", clickHandler())

// document.querySelectorAll("txt-area")
// .btnPrimary
// #input-btn
// "input[name='translator']"

