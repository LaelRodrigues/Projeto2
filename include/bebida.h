/**
 * @file	bebida.h
 * @brief	Definicao da classe Bebida para representar uma bebida
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	31/05/2017
 * @data	01/06/2017
 */

#ifndef BEBIDA_H
#define BEBIDA_H

#include "produto.h"

/** 
 * @class 	Bebida bebida.h
 * @brief	Classe que representa um bebida
 * @details Os atributos de uma bebida sao teor alcoolico
 *			e quantidade de acucar
 */

class Bebida: public Produto {
	
	protected:
		float teorAlcoolico;	/**< percentual de alcool contido na bebida */
		float quantAcucar;		/**< Quantidade de acucar contida na bebida*/

	public:
		/** @brief Construtor padrao */
		Bebida();

		/** @brief Retorna o percentual de alcool contido na bebida */
		float getTeorAlcoolico();

		/** @brief Modifica o percentual de alcool contido na bebida */
		void setTeorAlcoolico(float ta);

		/** @brief Retorna a quantidade de acucar em miligramas contido na bebida */
		float getQuantAcucar();

		/** @brief Modifica a quantidade de acucar em miligramas contida no bebida */
		void setQuantAcucar(float qd_acucar);
};

#endif