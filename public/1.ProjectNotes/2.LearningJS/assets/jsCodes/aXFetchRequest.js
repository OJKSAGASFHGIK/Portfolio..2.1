
const axios = require('axios');
axios.get('https://jsonplaceholder.typicode.com/users')
    .then(result => { console.log(result); })
    .catch(error => { console.log(error); });

/*
const https = require('https');

https
    .get('https://portfolio-2dot0.netlify.app/', (response) => {
        let data = '';
        response.on('data', (chunk) => {
            data += chunk;
        });
        response.on('end', () => {
            console.log(data);
        });
    })
    .on('error', (error) => {
        console.log(error);
    });
*/
/*
const adress = 'https://jsonplaceholder.typicode.com/users';
const endpoint = 'qualquer'
const verb = 'GET'

async function fetchDados() {
    const absorverDados = await fetch(adress + endpoint, {method: verb})
    const esperarDados = await absorverDados.json()
    console.log(esperarDados)
}

fetchDados()
*/