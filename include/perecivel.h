/**
 * @file	perecivel.h
 * @brief	Definicao da classe Perecivel para representar um produto perecivel
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	31/05/2017
 * @data	05/06/2017
 */

#ifndef PERECIVEL_H
#define PERECIVEL_H

#include <string>
using std::string;

/** 
 * @class 	Perecivel perecivel.h
 * @brief	Classe que representa um produto perecivel
 * @details O atributo de um produto perecivel é sua a
 *			data de validade
 */

class Perecivel {
	
	protected:
		string dataValidade; /**< Data de validade do produto */

	public:

		/** @brief Construtor padrao */
		Perecivel();

		/** @brief Construtor parametrizado */
		Perecivel(string _dataValidade);

		/** @brief Retorna A data de validade do produto */
		string getDataValidade();

		/** @brief Modifica A data de validade do produto  */
		void setDataValidade(string dv);

};

#endif