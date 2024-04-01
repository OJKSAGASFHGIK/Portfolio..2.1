// for / 
let id1 = document.getElementById("id1")
for (a1 = 0; a1 < 3; a1++) {
    id1.textContent += a1 + " " ;}

// while / a1 id1
let id2 = document.getElementById("id2")
let a2 = 0;
while (a2 < 10) { 
    a2++;
    id2.textContent += a2 + " " ;}

// do/while / a2 id2
id3 = document.getElementById("id3")
let a3 = 0;
do {
    id3.textContent += a3 + " ";
    a3++; } while (a3 < 3);

// for of / a3 id3
id4 = document.getElementById("id4")
let a4 = ["Um", "Dois", "Três"];
for (var a4name of a4 ) {
    id4.textContent += a4name + " " ; }

// for in / a3extra id3extra
id4extra = document.getElementById("id4extra")
let a4extra = {"Um":1, "Dois":2, "Três":3};
for (var id4extraName in a4extra ) {
    id4extra.textContent += a4extra[id4extraName] + " " ; }

// continue break / a4 id4
id5 = document.getElementById("id5")
for (a5=0 ; a5<9 ; a5++) {
    if (a5 === 3) {
        continue
    } else if (a5 === 8) {
        break }
    id5.textContent += a5 + " " ; }

// / id5 a5
