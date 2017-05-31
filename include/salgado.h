/**
 * @file	salgado.h
 * @brief	Definicao da classe Salgado para representar um salgado
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	31/05/2017
 * @data	31/05/2017
 */

#ifndef SALGADO_H
#define SALGADO_H

#include "produto.h"

/** 
 * @class 	Salgado salgado.h
 * @brief	Classe que representa um salgado
 * @details Os atributos de um salgado sao quantidade de sodio,
 *			gluten e lactose
 */

class Salgado: public Produto {
	protected:
		float quantSodio;		/**< Quantidade de sodio contido no salgado */
		bool gluten;			/**< gluten */
		bool lactose;			/**< lactose */

	public:
		/** @brief Construtor padrao */
		Salgado();

		/** @brief Retorna a quantidade de sodio em miligramas contido no salgado */
		float getQuantSodio();

		/** @brief Modifica a quantidade de sodio em miligramas contido no salgado */
		void setNumLote(float qd_sodio);

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