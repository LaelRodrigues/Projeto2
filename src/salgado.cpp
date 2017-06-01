/**
 * @file	salgado.cpp
 * @brief	Implementacao dos metodos da classe Salgado para
 * 			representar um salgado
 * @author	Lael Rodriugues (laelrodrigues7@gmail.com) 
 * @since	01/06/2017
 * @date	01/06/2017
 */

#include "salgado.h"

#include <cstdlib>
using std::exit;

#include <iostream>
using std::endl;
using std::cout;

Salgado::Salgado() {
	//construtor padrao
}
/** 
 * @return Quantidade de sodio em miligramas contido no salgado 
 */
float Salgado::getQuantSodio(){
	return quantSodio;
}

/** 
 * @details caso o valor referente a quantidade de sodio
 *			presente na salgado seja invalido, o programa exibe
 *			uma messagem de erro e encerra a execucao	 
 * @param qd_sodio Quantidade de sodio em miligramas contido no salgado
 */
void Salgado::setQuantSodio(float qd_sodio){
	if(qd_sodio < 0) {
		cout << "Erro: valor referente a quantidade de sodio e invalido" << endl;
		exit(1);
	}
	else {
		quantSodio = qd_sodio;
	}
}

/** @return 1 se contem gluten e 0 se nao contem */
bool Salgado::getGluten(){
	return gluten;
}

/**
 * @details Caso o valor que define se o salgado contem ou nao
 *			gluten seja invalido, o programa exibe uma mensagem 
 *			de erro e encerra a execucao 
 * @param g Define se o salgado contem gluten ou nao 
 */
void Salgado::setGluten(bool g){
	if(g < 0 || g > 1) {
		cout << "Erro: Valor que define se o salgado tem ou nao gluten e invalido" << endl;
		exit(1);
	}
	else {
		gluten = g;
	}
}

/** @return 1 se contem lactose e 0 se nao contem */
bool Salgado::getLactose(){
	return lactose;
}

/**
 * @details Caso o valor que define se o salgado contem ou nao
 *			lactose seja invalido, o programa exibe uma mensagem 
 *			de erro e encerra a execucao 
 * @param l Define se o salgado contem lactose ou nao 
 */
void Salgado::setLactose(bool l){
	if(l < 0 || l > 1) {
		cout << "Erro: Valor que define se o salgado tem ou nao lactose e invalido" << endl;
		exit(1);
	}
	else {
		lactose = l;
	}
}