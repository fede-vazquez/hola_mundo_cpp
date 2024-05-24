// [] Declarar las variables que vamos a usar
// [] Ponermos esa variable en la funcion mostrarMensaje()
// [] Mostrar lo que me devuelve

/*
    funcionalidad de mostrarMensaje
    [*] Tipar la función, declarar la función, pasar los parametros (en caso de ser necesario)
    [*] Llamar a la función que retorna algo por consola, y el valor de unTexto
*/
function mostrarMensaje(unTexto){
    console.log(unTexto)
}

const texto = "Un re texto"
const userName = "Pepito123"

mostrarMensaje(texto)
mostrarMensaje(userName)


/*
    contar el largo de la cadena
    [*] Declaramos e inicializamos la variable <tipo texto>
    [*] Ponemos esa variable en la funcion contarCaracteres()
    [*] Guardar lo que me deveulva la funcion largoDeLaCadena
    [*] Muestro largoDeLaCadena
*/

/*
    funcionalidad de contarCaracteres
    [*] Declaramos el tipo de dato, nombre y parametros de la funcion (en JS no hay que tiparla)
    [*] Iteramos unTexto (si usamos un while ACORDATE DEL CONTADOR)
    [*] Hasta que la cadena sea nula
    [*] Inicializar una variable contador = 0
    [*] Por cada iteración contador++
    [*] Retornamos contador
*/
function contarCaracteres(unTexto){
    let contador = 0

    while(unTexto[contador] != null){
        contador++
    }

    return contador
}

const texto2 = "Hola Mundo!"

const totalDeCaracteres = contarCaracteres(texto2)

console.log("El largo de la cadena es: " + totalDeCaracteres)