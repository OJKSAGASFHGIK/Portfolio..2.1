// length
let id15 = document.getElementById("id15")
let a19 = ["one","two","three"]
let a20 = a19.length
id15.textContent = a20 ;

// id15 a20
let id16 = document.getElementById("id16")
let a21 = ['one','two','three','four']
id16.textContent = a21.slice(1,3);

// id16 a21
let id17 = document.getElementById("id17");
a21.shift();
id17.textContent = a21;

// id17 a21
let id18 = document.getElementById("id18");
a21.unshift('one');
id18.textContent = a21;

// id18 a21
let id19 = document.getElementById("id19");
let a22 = [4,2,3,1];
let a23 = [5,7,6,8];
let a24 = a22.concat(a23);
id19.textContent = a24;
let id20 = document.getElementById("id20");
a24.sort();
id20.textContent = a24;
let id21 = document.getElementById("id21");
a24.reverse();
id21.textContent = a24;

// id21 a24
let id22 = document.getElementById("id22");
let a25 = a24.join(' - ');
id22.textContent = a25;

// id22 a25
let id23 = document.getElementById("id23");
let a26evenNumbers = a24.filter((a24) => a24 % 2 === 0);
let a26 = a26evenNumbers;
id23.textContent = a26evenNumbers;

// id23 a26

let id24 = document.getElementById("id24");
a26evenNumbers.splice(0,0,"Even numbers:");
id24.textContent = a26evenNumbers;
