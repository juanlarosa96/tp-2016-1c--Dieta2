/*
 * protocolo.h
 *
 *  Created on: 15/5/2016
 *      Author: utnso
 */

#ifndef PROTOCOLO_H_
#define PROTOCOLO_H_

#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>

enum headers { //Constantes que identifican los headers de los mensajes

	programaAnsisop = 1, largoProgramaAnsisop = 2, tamanioDePagina = 3
};
int recibirHeader(int socketOrigen);
void enviarProgramaAnsisop(int socketDestino, char * codigo, int largoCodigo);
void recibirProgramaAnsisop(int socketOrigen, char * codigo, int largoCodigo);
int recibirLargoProgramaAnsisop(int socketOrigen);
int recibirTamanioPagina(int socketOrigen);
void enviarTamanioPagina(int socketDestino, int tamanioPagina);
int enviarPedidoPaginas(int socketUMC, int cantidadPaginas);

#endif /* PROTOCOLO_H_ */
