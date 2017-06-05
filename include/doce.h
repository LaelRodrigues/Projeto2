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
#include "perecivel.h"

/** 
 * @class 	Doce doce.h
 * @brief	Classe que representa um doce
 * @details Os atributos de um doce sao quantidade de acucar,
 *			gluten e lactose
 */

class Doce: public Produto, Perecivel {
	protected:
		float quantAcucar;		/**< Quantidade de acucar contido no doce */
		bool gluten;			/**< gluten */
		bool lactose;			/**< lactose */

	public:
		/** @brief Construtor padrao */
		Doce();

		/**@brief Construtor parametrizado */
		Doce(int _codigo, string _descricao, float _preco, int _quantEstoque, string _dataValidade, float _quantAcucar, bool _gluten, bool _lactose);

		/** @brief Retorna a quantidade de acucar em miligramas contido no doce */
		float getQuantAcucar();

		/** @brief Modifica a quantidade de acucar em miligramas contido no doce */
		void setQuantAcucar(float qd_acucar);

		/** @brief Retorna 1 se contem gluten e 0 se nao contem */
		bool getGluten();

		/** @brief Modifica para 1 se contem gluten ou para 0 se nao contem */
		void setGluten(bool g);

		/** @brief Retorna 1 se contem lactose e 0 se nao contem */
		bool getLactose();

		/** @brief Modifica para 1 se contem lactose ou para 0 se nao contem */
		void setLactose(bool l);
};

#endif