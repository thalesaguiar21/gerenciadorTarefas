#include "Processo.h"


/* Contrutores */
Processo::Processo(){
	pid = 0;
	ppid = 0;
	usoCpu = 0;
	usoMem = 0;
	numThreads = 0;
	usoGourmet = 0;
}

Processo::Processo(unsigned int pid, unsigned int ppid, unsigned int usoCpu, unsigned int usoMem, unsigned numThreads){
	this->pid = pid;
	this->ppid = ppid;
	this->usoCpu = usoCpu;
	this->usoMem = usoMem;
	this->numThreads = numThreads;
	usoGourmet = 0;
}

/* Setters */
void Processo::set_pid(unsigned int pid){
	this->pid = pid;
}

void Processo::set_ppid(unsigned int ppid){
	this->ppid = ppid;
}

void Processo::set_usoCpu(unsigned int usoCpu){
	this->usoCpu = usoCpu;
}

void Processo::set_usoMem(unsigned int usoMem){
	this->usoMem = usoMem;	
}

void Processo::set_numThreads(unsigned int numThreads){
	this->numThreads = numThreads;
}

/* Getters */
unsigned int Processo::get_pid(){
	return pid;
}

unsigned int Processo::get_ppid(){
	return ppid;
}

unsigned int Processo::get_usoCpu(){
	return usoCpu;
}

unsigned int Processo::get_usoMem(){
	return usoMem;
}

unsigned int Processo::get_numThreads(){
	return numThreads;
}

unsigned double Processo::get_usoGourmet(){
	return usoGourmet;
}


/* Outros métodos */

unsigned int tamGourmet(){
	usoGourmet = (4*usoCpu + 3*usoMem)/(7 * numThreads)
}