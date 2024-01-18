let id1name = document.getElementById("id1name");

function Pessoa(nome, idade) {
    this.nome = nome;
    this.idade = idade;
}

function func1list() {
    let pessoas = [new Pessoa("Clara", 23),
        new Pessoa("Pedro", 21),
        new Pessoa("Isadora", 27)];
    let texto = " ";
    for (let output1 of pessoas) {
        texto += `</br>${output1["nome"]} ${output1["idade"]}`;
    }
    return texto ;
}
id1name.innerHTML = func1list();

/*
text += `${output1["nome"]} : ${output1["idade"]} <br/>`
*/
// id1 pessoa1

//
