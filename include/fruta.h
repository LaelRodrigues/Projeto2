/**
 * @file	fruta.h
 * @brief	Definicao da classe Fruta para representar uma fruta
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	31/05/2017	
 * @data	01/06/2017
 */

#ifndef FRUTA_H
#define FRUTA_H

#include "produto.h"
#include "perecivel.h"

/** 
 * @class 	Fruta fruta.h
 * @brief	Classe que representa um fruta
 * @details Os atributos de uma fruta sao numero e data de
 *			producao do lote   
 */

class Fruta: public Produto, Perecivel{
	
	protected:
		int numLote;			/**< Numero do lote */
		string dataProducao;	/**< data de producao do lote */

	public:
		/** @brief Construtor padrao */
		Fruta();

		/** @brief Construtor parametrizado */
		Fruta(int _codigo, string _descricao, float _preco, int _quantEstoque, string _dataValidade, int _numLote, string _dataProducao);

		/** @brief Retorna o numero do lote */
		int getNumLote();

		/** @brief Modifica o numero do lote */
		void setNumLote(int nl);

		/** @brief Retorna a data de producao do lote */
		string getDataProducao();

		/** @brief Modifica a data de producao do lote */
		void setDataProducao(string dp);
};

#endif