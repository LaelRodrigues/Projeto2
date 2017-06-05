/**
 * @file	fruta.cpp
 * @brief	Implementacao dos metodos da classe Fruta para
 * 			representar uma fruta
 * @author	Lael Rodriugues (laelrodrigues7@gmail.com) 
 * @since	01/06/2017
 * @date	01/06/2017
 */

#include "fruta.h"

#include <cstdlib>
using std::exit;

#include <iostream>
using std::endl;
using std::cout;

Fruta::Fruta() {
	//construtor padrao
}

/**
 * @param _codigo Codigo do produto
 * @param _descricao Descricao do produto 
 * @param _preco Preco do produto
 * @param _quantEstoque Quantidade em estoque
 * @param _dataValidade Data de validade do produto
 * @param _numLote Numero do lote
 * @param _dataProducao Data de producao do lote
 */
Fruta::Fruta(int _codigo, string _descricao, float _preco, int _quantEstoque, 
		string _dataValidade, int _numLote, string _dataProducao){

	setCodigo(_codigo); 
	setDescricao(_descricao);
	setPreco(_preco);
	setQuantEstoque(_quantEstoque);
	setDataValidade(_dataValidade);
	setNumLote(_numLote);
	setDataProducao(_dataProducao);
}

/** @return Numero do lote */
int Fruta::getNumLote(){
	return numLote;
}

/**
 * @details caso o valor referente ao numero do lote seja invalido,
 *			programa exibe uma messagem de erro e encerra a execucao	 
 * @param nl Numero do lote 
 */
void Fruta::setNumLote(int nl){
	if(nl <= 0) {
		cout << "Erro: valor referente ao numero do lote e invalido" << endl;
		exit(1);
	}
	else {
		numLote = nl;
	}
}

/** @return Data de producao do lote */
string Fruta::getDataProducao(){
	return dataProducao;
}

/** 
  * @details caso o valor referente a data seja invalido,
 *			programa exibe uma messagem de erro e encerra a execucao	 
 * @param dp Data de producao do lote 
 */
void Fruta::setDataProducao(string dp){
	if(dp.size() != 10) {
		cout << "Erro: Valor referente a data de producao e invalido." << endl;
		exit(1);
	}
	else {
		dataProducao = dp;
	}
}