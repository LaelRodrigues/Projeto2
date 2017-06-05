/**
 * @file	doce.cpp
 * @brief	Implementacao dos metodos da classe Doce para
 * 			representar uma doce
 * @author	Lael Rodriugues (laelrodrigues7@gmail.com) 
 * @since	01/05/2017
 * @date	03/06/2017
 */

#include "doce.h"

#include <cstdlib>
using std::exit;

#include <iostream>
using std::endl;
using std::cout;	

Doce::Doce() {
	//Construtor padrao
}

/**
 * @param _codigo Codigo do produto
 * @param _descricao Descricao do produto 
 * @param _preco Preco do produto
 * @param _quantEstoque Quantidade em estoque
 * @param _dataValidade Data de validade do produto
 * @param _quantAcucar Quantidade de acucar contido no doce
 * @param _gluten Define se o doce contem gluten ou nao
 * @param _lactose Define se o doce contem lactose ou nao
 */
Doce::Doce(int _codigo, string _descricao, float _preco, int _quantEstoque, 
		string _dataValidade, float _quantAcucar, bool _gluten, bool _lactose){
	
	setCodigo(_codigo); 
	setDescricao(_descricao);
	setPreco(_preco);
	setQuantEstoque(_quantEstoque);
	setDataValidade(_dataValidade);
	setQuantAcucar(_quantAcucar);
	setGluten(_gluten);
	setLactose(_lactose);
}

/** @return Quantidade de acucar em miligramas contido no doce */
float Doce::getQuantAcucar(){
	return quantAcucar;
}

/**
 * @details caso o valor referente quantidade de acucar
 *			presente na doce seja invalido o programa exibe
 *			uma messagem de erro e encerra a execucao	 
 * @param qd_acucar Quantidade de acucar em miligramas contido no doce
 */ 
void Doce::setQuantAcucar(float qd_acucar){

	if(qd_acucar < 0.0){
		cout << "Erro: Valor referente a quantidade de acucar e invalido" << endl;
		exit(1);
	}
	else {
		qd_acucar = quantAcucar;
	}
}

/** @return 1 se contem gluten e 0 se nao contem */
bool Doce::getGluten(){
	return gluten;
}

/**
 * @details Caso o valor que define se o doce contem ou nao
 *			gluten seja invalido, o programa exibe uma menssagem 
 *			de erro e encerra a execucao 
 * @param g Define se o doce contem gluten ou nao 
 */
void Doce::setGluten(bool g){
	if(g < 0 || g > 1) {
		cout << "Erro: Valor que define se o doce tem ou nao gluten e invalido." << endl;
		exit(1);
	}
	else {
		gluten = g;
	}

}

/** @brief 1 se contem lactose e 0 se nao contem */
bool Doce::getLactose(){
	return lactose;
}

/**
 * @details Caso o valor que define se o doce contem ou nao
 *			lactose seja invalido, o programa exibe uma mensagem 
 *			de erro e encerra a execucao 
 * @param l Define se o doce contem lactose ou nao 
 */
void Doce::setLactose(bool l){
	if(l < 0 || l > 1) {
		cout << "Erro: Valor que define se o doce tem ou nao lactose e invalido." << endl;
		exit(1);
	}
	else {
		lactose = l;
	}
}