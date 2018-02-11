function addBola()
{
	var bola = document.createElement("div"); // Cria um novo elemento e guarda na variável.
	bola.setAttribute("class", "bola"); // Seta um atributo ao elemento criado acima.

	var p1 = Math.floor(Math.random() * 500); // Gera um número aleatório na posição 1, ou x.
	var p2 = Math.floor(Math.random() * 400); // Gera um número aleatório na posição 2, ou y.
	bola.setAttribute("style", "left:" + p1 + "px; top: " + p2 + "px;");
	bola.setAttribute("onclick", "estourar(this);"); // Deve-se passar como parâmetro o que estourar, ou seja, o próprio objeto (this).

	document.body.appendChild(bola); // Aplica o objeto configurado ao corpo do site.
}

function estourar(bolinha)
{
	document.body.removeChild(bolinha); // Remove do HTML o elemento criado anteriormente.
}

function iniciar()
{
	setInterval(addBola, 1000); // Seta um intervalo de tempo em milissegundos para uma função ser acionada. 1000 = 1s.
}