function func1() {
    let XMLHttpRequest1 = new XMLHttpRequest();
    let url1 = "https://dog.ceo/api/breeds/image/random";
    XMLHttpRequest1.open("GET", url1, true);

    XMLHttpRequest1.onreadystatechange = function () {
        /*if (XMLHttpRequest1.readyState == 3) {
            console.log("Loading...");
        }*/
        if (XMLHttpRequest1.readyState == 4) {
            let JSONResponse1 = JSON.parse(XMLHttpRequest1.responseText);
            /*console.log("Successful");
            console.log("Request result:" + JSONResponse1);
            console.log("Request result:" + JSONResponse1.message);*/
            
            let a1dog = document.getElementById("id1dog");
            a1dog.src = JSONResponse1.message;
        }
    }

    XMLHttpRequest1.send();
}
// id1 func1 url1 XMLHttpRequest1

//
function func2() {
    let url2 = "https://dog.ceo/api/breeds/image/random" 
    fetch(url2, { method: 'get' })
    .then(function(response) { 
        response.json().then(function(data){
            console.log('Resultado da Requisição: ' + data.message); 
                  
            let imgDog = document.getElementById("id2dog");
            imgDog.src = data.message;
        });
    })
    .catch(function(err) { 
        console.error('O seguinte erro ocorreu durante a requisição: ' + err);
    }); 
}
// id2 func2 url2 XMLHttpRequest1