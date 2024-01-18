// a3Conditions.html
// if else if // a6 id2

let id3 = document.getElementById("id3")
function a7funcHour() {
    const time = new Date();
    const hour = time.getHours();
    return hour;
}

function a7func2Greeting(time) {
    let a7greeting ;

    if (time < 6) { a7greeting = "Good dawn!" }
    else if (time < 12) { a7greeting = "Good morning!" }
    else if (time < 18) { a7greeting = "Good afternoon!" }
    else if (time < 24) { a7greeting = "Good night!" }
    return a7greeting ;
}

let a8time = a7funcHour();
let a8greeting = a7func2Greeting(a8time)
id3.textContent = a8greeting;


// switch // a8 id3
let id4 = document.getElementById("id4")
const a9day = new Date().getDay();
const a9week = [0,1,2,3,4,5,6];
let a9dayWeek = a9week[a9day];
switch (a9dayWeek) {
    case 1: // It's like if
    case 2: // It's like else if
    case 3: // It's like else if
    case 4: // It's like else if
    case 5: // It's like else if
        id4.textContent = "We're in mid-week."; break;
    case 0:
    case 6:
        id4.textContent = "It's the weekend."; break;
    default: // It's like else
        id4.textContent = "Maybe you have a bug..."; break;
}