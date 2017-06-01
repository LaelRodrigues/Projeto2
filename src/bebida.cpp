/**
 * @file	bebida.cpp
 * @brief	Implementacao dos metodos da classe Bebida para
 * 			representar uma bebida
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

Bebida::Bebida() {
	//Construtor padrao
}

/** @return Percentual de alcool contido na bebida */
float Bebida::getTeorAlcoolico(){
	return teorAlcoolico;
}

/**
 * @details caso o valor referente ao percentual de alcool
 *			presente na bebida seja invalido o programa exibe
 *			uma messagem de erro e encerra a execucao	 
 * @param ta Pecentual de alcool contido na bebida 
 */
void Bebida::setTeorAlcoolico(float ta){
	if(ta < 0) {
		cout << "Erro: Valor referente ao percentual de alcool e invalido" << endl;
		exit(1);
	}
	else {sdf
		teorAlcoolico = ta;
	}
}

/** @return Quantidade de acucar em miligramas contida na bebida */
float Bebida::getQuantAcucar(){
	return quantAcucar;
}

/**
 * @details caso o valor referente quantidade de acucar
 *			presenta na bebida seja invalido o programa exibe
 *			uma messagem de erro e encerra a execucao	 
 * @param qd_acucar Quantidade de acucar em miligramas contida na bebida 
 */
void Bebida::setQuantAcucar(float qd_acucar){
	if(qd_acucar < 0.0){
		cout << "Erro: Valor referente a quantidade de acucar e invalido" << endl;
		exit(1);
	}
	else {
		qd_acucar = quantAcucar;
	}
}