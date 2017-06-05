/**
 * @file	dvd.h
 * @brief	Definicao da classe Dvd para representar um dvd
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	31/05/2017	
 * @data	31/05/2017
 */

#ifndef DVD_H
#define DVD_H

#include <string>
using std::string;

#include "produto.h"

/** 
 * @class 	Dvd dvd.h
 * @brief	Classe que representa um dvd
 * @details Os atributos de um dvd sao titulo, genero
 *			e duracao total
 */

class Dvd: public Produto {
	protected:
		string titulo;			/**< Titulo do dvd */
		string genero;			/**< Genero do dvd */
		int duracaoTotal;		/**< Duracao total */

	public:

		/** @brief Construtor padrao */
		Dvd();

		/**@brief Construtor parametrizado */
		Dvd(int _codigo, string _descricao, float _preco, int _quantEstoque, string _titulo, string _genero, int _duracaoTotal);

		/** @brief Retorna o titulo do dvd */
		string getTitulo();

		/** @brief Modifica o titulo do dvd */
		void setTitulo(string t);

		/** @brief Retorna o genero do dvd */
		string getGenero();

		/** @brief Modifica o genero do dvd */
		void setGenero(string g);

		/** @brief Retorna a duracao total do dvd em minutos */
		int getDuracaoTotal();

		/** @brief Modifica a duracao total do dvd em minutos */
		void setDuracaoTotal(int dt);
};

#endif