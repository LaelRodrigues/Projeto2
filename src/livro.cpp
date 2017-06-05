/**
 * @file	livro.cpp
 * @brief	Implementacao dos metodos da classe Livro para
 * 			representar um livro
 * @author	Lael Rodriugues (laelrodrigues7@gmail.com) 
 * @since	03/06/2017
 * @date	03/06/2017
 */

#include "livro.h"

#include <cstdlib>
using std::exit;

#include <iostream>
using std::endl;
using std::cout;

Livro::Livro() {
	//construtor padrao
}

/**
 * @param _codigo Codigo do produto
 * @param _descricao Descricao do produto 
 * @param _preco Preco do produto
 * @param _quantEstoque Quantidade em estoque
 * @param _titulo Titulo do livro
 * @param _autor Nome do autor
 * @param _genero Genero do livro
 * @param _anoPublicacao Ano de publicacao do livro 
 */
Livro::Livro(int _codigo, string _descricao, float _preco, int _quantEstoque,
 		string _titulo, string _autor, string _genero, int _anoPublicacao) {

	setCodigo(_codigo); 
	setDescricao(_descricao);
	setPreco(_preco);
	setQuantEstoque(_quantEstoque);
	setTitulo(_titulo);
	setAutor(_autor);
	setGenero(_genero);
	setAnoPublicacao(_anoPublicacao);
}


/** @return Titulo do livro  */
string Livro::getTitulo(){
	return titulo;
}

/** @param t Titulo do livro */
void Livro::setTitulo(string t){
	titulo = t;
}

/** @return Nome do autor */
string Livro::getAutor(){
	return autor;
}

/** @param a Nome do autor */
void Livro::setAutor(string a){
	autor = a;
}

/** @return Genero do livro */
string Livro::getGenero(){
	return genero;
}

/** @param g Genero do livro */
void Livro::setGenero(string g){
	genero = g;
}

/** @return Ano de publicacao do livro */
int Livro::getAnoPublicacao(){
	return anoPublicacao;
}

/** 
 * @details Caso o valor referente ao ano de publicacao
 *			seja invalido, o programa exibe uma menssagem 
 *			de erro e encerra a execucao 
 * @param ap Ano de publicacao do livro 
 */
void Livro::setAnoPublicacao(int ap){
	if(ap <= 0){
		cout << "Erro: valor referente ao ano de publicacao e invalido." << endl;
		exit(1);
	}
	else {
		anoPublicacao = ap;
	}
}