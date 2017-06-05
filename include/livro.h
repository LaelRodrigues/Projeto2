/**
 * @file	livro.h
 * @brief	Definicao da classe Livro para representar um livro
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	31/05/2017	
 * @data	31/05/2017
 */

#ifndef LIVRO_H
#define LIVRO_H

#include <string>
using std::string;

#include "produto.h"

/** 
 * @class 	Livro livro.h
 * @brief	Classe que representa um livro
 * @details Os atributos de um livro sao titulo, autor,
 *			editora e ano de publicacao
 */

class Livro: public Produto {
	protected:
		string titulo;			/**< Titulo do livro */
		string autor;			/**< Autor do livro */
		string genero;			/**< Genero do livro */
		int anoPublicacao;	/**< Ano de publicacao */

	public:

		/** @brief Construtor padrao */
		Livro();

		/**@brief Construtor parametrizado */
		Livro(int _codigo, string _descricao, float _preco, int _quantEstoque, string _titulo, string _autor, string _genero, int _anoPublicacao);

		/** @brief Retorna o titulo do livro  */
		string getTitulo();

		/** @brief Modifica o titulo do livro */
		void setTitulo(string t);

		/** @brief Retorna o nome do autor */
		string getAutor();

		/** @brief Modifica o nome do autor */
		void setAutor(string a);

		/** @brief Retorna o genero do livro */
		string getGenero();

		/** @brief Modifica o genero do livro */
		void setGenero(string g);

		/** @brief Retorna o ano de publicacao do livro */
		int getAnoPublicacao();

		/** @brief Modifica o ano de publicacao do livro */
		void setAnoPublicacao(int ap);
	
};

#endif