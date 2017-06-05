/**
 * @file	perecivel.cpp
 * @brief	Implementacao dos metodos da classe Perecivel para
 * 			representar um produto perecivel 
 * @author	Lael Rodriugues (laelrodrigues7@gmail.com) 
 * @since	03/06/2017
 * @date	05/06/2017
 */

#include "perecivel.h"

#include <cstdlib>
using std::exit;

#include <iostream>
using std::endl;
using std::cout;

Perecivel::Perecivel() {
	//construtor padrao
}

/** @param _dataValidade Data de validade do produto */
Perecivel::Perecivel(string _dataValidade){
	setDataValidade(_dataValidade);
}

/** @return Data de validade do produto */
string Perecivel::getDataValidade(){
	return dataValidade;
}

/**
 * @details Caso o valor que referente a data de validade
 *			do produto seja invalido, o programa exibe uma  
 *			menssagem de erro e encerra a execucao  
 * @param dv Data de validade do produto
 */
void Perecivel::setDataValidade(string dv) {

	if(dv.size() != 10) {
		cout << "Erro: valor referente a data de validade e invalido" << endl;
		exit(1);
	}
	else {
		dataValidade = dv;
	}
}
