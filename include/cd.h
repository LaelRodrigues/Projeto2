/**
 * @file	cd.h
 * @brief	Definicao da classe Cd para representar um cd
 * @author	Lael Rodrigues(laelrodrigues7@gmail.com)
 * @since	31/05/2017	
 * @data	31/05/2017
 */

#ifndef CD_H
#define CD_H

#include <string>
using std::string;

#include "produto.h"

/** 
 * @class 	Cd cd.h
 * @brief	Classe que representa um cd
 * @details Os atributos de um cd sao estilo, artista
 *			e nome do album
 */

class Cd: public Produto {
	protected:
		string estilo;			/**< Estilo musical */
		string artista;			/**< Nome do artista */
		string nomeAlbum;		/**< Nome do album */	

	public:
		/** @brief Construtor padrao */
		Cd();

		/** @brief Retorna o estilo musical */
		string getEstilo();

		/** @brief Modifica o estilo musical */
		void setEstilo(string e);

		/** @brief Retorna o nome do artista */
		string getArtista();

		/** @brief Modifica o nome do artista */
		void setArtista(string a);

		/** @brief Retorna o nome do album */
		string getNomeAlbum();

		/** @brief Modifica o nome do album*/
		void setNomeAlbum(string na);
};

#endif