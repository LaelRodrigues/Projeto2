/**
 * @file	bebida.cpp
 * @brief	Implementacao dos metodos da classe Bebida para
 * 			representar bebida
 * @author	Lael Rodriugues (laelrodrigues7@gmail.com) 
 * @since	31/05/2017
 * @date	01/06/2017
 */

#include "bebida.h"

#include <cstdlib>
using std::exit;

#include <iostream>
using std::endl;
using std::cout;	

Produto::Produto() {
	//Construtor padrao
}

/** @return Codigo do produto */
int Produto::getCodigo(){
	return codigo;
}

/** @param c Codigo do produto */
void Produto::setCodigo(int c){
	codigo = c;
}

/** @return Descricao do produto*/
string Produto::getDecricao(){
	return descricao;
}

/** @param d Descricao do produto */
void Produto::setDescricao(string d){
	descricao = d;
}

/** @return Preco do produto */
float Produto::getPreco() {
	return preco;
}

/**
 * @details caso o valor referente ao preco seja invalido,
 *			o programa exibe uma messagem de erro e encerra
 *			a execucao	 
 * @param p Preco do produto 
 */
void Produto::setPreco(float p){
	if(p < 0.0) {
		cout << "Erro: valor do preco do produto e invalido." << endl;
		exit(1);
	}
	else {
		preco = p;
	}
}

/** @return Quantidade do produto em estoque */
int Produto::getQuantEstoque(){
	return quantEstoque;
}

/**
 * @details caso o valor referente a quantidade do produto em
 *			estoque seja invalido, o programa exibe uma messagem
 *			de erro e encerra a execucao		
 * @param qd_estoque Quantidade do produto em estoque 
 */
void Produto::setQuantEstoque(int qd_estoque){
	if(qd_estoque  < 0) {
		cout << "Erro: valor da quantidade do produto em estoque e invalido." << endl;
		exit(1);
	}
	else {
		quantEstoque = qd_estoque;
	}
}
