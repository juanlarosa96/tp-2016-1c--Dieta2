/*
 * protocolo.h
 *
 *  Created on: 15/5/2016
 *      Author: utnso
 */

#ifndef LIBRERIASSO_PROTOCOLO_H_
#define LIBRERIASSO_PROTOCOLO_H_

#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include "structs.h"

enum headers { //Constantes que identifican los headers de los mensajes

	programaAnsisop = 1,
	largoProgramaAnsisop = 2,
	tamanioDePagina = 3,
	headerPcb = 4,
	iniciarPrograma = 11,
	inicioProgramaExito = 6,
	inicioProgramaError = 7,
	solicitarBytes = 8,
	almacenarBytes = 9,
	respuestaCPU = 10,
	resultadoEjecucion = 5

};
int recibirHeader(int socketOrigen);
void enviarProgramaAnsisop(int socketDestino, char * codigo, int largoCodigo);
void recibirProgramaAnsisop(int socketOrigen, char * codigo, int largoCodigo);
int recibirLargoProgramaAnsisop(int socketOrigen);
int recibirTamanioPagina(int socketOrigen);
void enviarTamanioPagina(int socketDestino, int tamanioPagina);
t_pcb recibirPcb(int socketOrigen);
void enviarPedidoPaginas(int socketUMC, int cantidadPaginas);
<<<<<<< HEAD
void enviarInicializacionPrograma(int socketUMC,uint32_t pid,int largoPrograma,char * programa, uint32_t paginas_codigo);
void recibirInicializacionPrograma(int socketUMC,uint32_t *pid,int* largoPrograma,char * programa, uint32_t *paginas_codigo);
int recibirRespuestaInicialicacion(int socketUMC);
void enviarSolicitudDeBytes(int socketUMC, uint32_t nroPagina, uint32_t offset, uint32_t size);
void recibirSolicitudDeBytes(int socketUMC, uint32_t *nroPagina, uint32_t *offset, uint32_t *size);
int recibirRespuestaCPU(int socketCpu, int * respuesta);
=======
void recibirResultadoDeEjecucionAnsisop(int socketNucleo,char * mensaje, int largoMensaje);
int recibirLargoResultadoDeEjecucionAnsisop(int socketNucleo);
void enviarResultadoDeEjecucionAnsisop(int socketDestino, char * mensaje, int largoMensaje);
>>>>>>> 578d0257b0dac30c1edf24bae644b79036a41e53

#endif /* LIBRERIASSOENWORSKPACE_PROTOCOLO_H_ */
