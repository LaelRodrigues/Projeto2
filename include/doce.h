/**
 * @file	doce.h
 * @brief	Definicao da classe Doce para representar um doce
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	31/05/2017	
 * @data	31/05/2017
 */

#ifndef DOCE_H
#define DOCE_H

#include "produto.h"

/** 
 * @class 	Doce doce.h
 * @brief	Classe que representa um doce
 * @details Os atributos de um doce sao quantidade de acucar,
 *			gluten e lactose
 */

class Doce: public Produto {
	protected:
		float quantAcucar;		/**< Quantidade de acucar contido no doce */
		bool gluten;			/**< gluten */
		bool lactose;			/**< lactose */

	public:
		/** @brief Construtor padrao */
		Doce();

		/** @brief Retorna a quantidade de acucar em miligramas contido no doce */
		float getQuantAcucar();

		/** @brief Modifica a quantidade de acucar em miligramas contido no doce */
		void setQuantAcucar(float qd_Acucar);

		/** @brief Retorna 1 se contem gluten e 0 se nao contem */
		bool getGluten();

		/** @brief Modifica para contem(1) ou nao contem(0) gluten */
		void setGluten(bool g);

		/** @brief Retorna 1 se contem lactose e 0 se nao contem */
		bool getLactose();

		/** @brief Modifica para contem(1) ou nao contem(0) lactose */
		void setLactose(bool l);
};

#endif