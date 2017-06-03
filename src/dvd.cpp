/**
 * @file	dvd.cpp
 * @brief	Implementacao dos metodos da classe Dvd para
 * 			representar um dvd
 * @author	Lael Rodriugues (laelrodrigues7@gmail.com) 
 * @since	03/06/2017
 * @date	03/06/2017
 */

#include "dvd.h"

#include <cstdlib>
using std::exit;

#include <iostream>
using std::endl;
using std::cout;

Dvd::Dvd() {
	//construtor padrao
}

/** @return Titulo do dvd */
string Dvd::getTitulo(){
	return titulo;
}

/** @param t Titulo do dvd */
void Dvd::setTitulo(string t){
	titulo = t;
}

/** @return Genero do dvd */
string Dvd::getGenero(){
	return genero;
}

/** @param g Genero do dvd */
void Dvd::setGenero(string g){
	genero = g;
}

/** @Return Duracao total do dvd em minutos */
int Dvd::getDuracaoTotal(){
	return duracaoTotal;
}

/**
 * @details caso o valor referente a duracao total
 *			em minutos seja invalido, o programa exibe
 *			uma messagem de erro e encerra a execucao	
 * @param dt Duracao total do dvd em minutos
 */
void Dvd::setDuracaoTotal(int dt){

	if(dt <= 0) {
		cout << "Erro: valor referente a duracao total em minutos e invalido." << endl;
		exit(1);
	} 
	else { 
		duracaoTotal = dt;
	}
}