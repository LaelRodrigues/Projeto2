/**
 * @file	cd.cpp
 * @brief	Implementacao dos metodos da classe Cd para
 * 			representar um cd
 * @author	Lael Rodriugues (laelrodrigues7@gmail.com) 
 * @since	03/06/2017
 * @date	03/06/2017
 */

#include "cd.h"

#include <cstdlib>
using std::exit;

#include <iostream>
using std::endl;
using std::cout;

Cd::Cd() {
	//construtor padrao
}

/**
 * @param _codigo Codigo do produto
 * @param _descricao Descricao do produto 
 * @param _preco Preco do produto
 * @param _quantEstoque Quantidade em estoque
 * @param _estilo Estilo musical
 * @param _artista Nome do artista 
 * @param _nomeAlbum Nome do album 
 */
Cd::Cd(int _codigo, string _descricao, float _preco, int _quantEstoque, 
			string _estilo, string _artista, string _nomeAlbum){

	setCodigo(_codigo); 
	setDescricao(_descricao);
	setPreco(_preco);
	setQuantEstoque(_quantEstoque);
	setEstilo(_estilo);
	setArtista(_artista);
	setNomeAlbum(_nomeAlbum);

}

/** @return Estilo musical */
string Cd::getEstilo(){
	return estilo;
}

/** @param e Estilo musical */
void Cd::setEstilo(string e){
	estilo = e;
}

/** @return Nome do artista */
string Cd::getArtista(){
	return artista;
}

/** @param a Nome do artista */
void Cd::setArtista(string a){
	artista = a;
}

/** @return Nome do album */
string Cd::getNomeAlbum(){
	return nomeAlbum;
}

/** @param na Nome do album */
void Cd::setNomeAlbum(string na){
	nomeAlbum = na;
}