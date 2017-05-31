/**
 * @file	produto.h
 * @brief	Definicao da classe Produto para representar um produto
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	31/05/2017
 * @data	31/05/2017
 */


#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>
using std::string;
/** 
 * @class 	Produto produto.h
 * @brief	Classe que representa um produto
 * @details Os atributos de um produto sao codigo, descricao
 *			e quantidade em estoque
 */

class Produto {
	protected:
		int codigo;			/**< Codigo do produto */
		string descricao;	/**< Descricao do produto */
		float preco;		/**< Preco do produto */
		int quantEstoque;	/**< Quantidade de produtos em estoque */

	public:

		/** @brief Construtor padrao */
		Produto();

		/** @brief Retorna o codigo do produto */
		int getCodigo();

		/** @brief Modifica o codigo do produto */
		void setCodigo(int c);

		/** @brief Retorna a descricao do produto */
		string getDecricao();

		/** @brief Modifcia a descricao do produto */
		void setDescricao(string d);

		/** @brief Retorna o preco do produto */
		float getPreco();

		/** @brief Modifica o preco do produto */
		void  setPreco(float p);

		/** @brief Retorna a quantidade de produtos em estoque */
		int getQuantEstoque();

		/** @brief Modifica a quantidade de produtos em estoque */
		void setQuantEstoque(int qd_estoque);
};

#endif