#include "Processo.h"


/* Contrutores */
Processo::Processo()
{
	pid = 0;
	ppid = 0;
	useCpu = 0;
	useMem = 0;
	numThreads = 0;
}

Processo::Processo(unsigned int pid, unsigned int ppid, unsigned int useCpu,
		 		   unsigned int useMem, unsigned numThreads)
{
	this->pid = pid;
	this->ppid = ppid;
	this->useCpu = useCpu;
	this->useMem = useMem;
	this->numThreads = numThreads;
}

/* Setters */
void Processo::set_pid(unsigned int pid)
{
	this->pid = pid;
}

void Processo::set_ppid(unsigned int ppid)
{
	this->ppid = ppid;
}

void Processo::set_useCpu(unsigned int useCpu)
{
	this->useCpu = useCpu;
}

void Processo::set_useMem(unsigned int useMem)
{
	this->useMem = useMem;	
}

void Processo::set_numThreads(unsigned int numThreads)
{
	this->numThreads = numThreads;
}

/* Getters */
unsigned int Processo::get_pid()
{
	return pid;
}

unsigned int Processo::get_ppid()
{
	return ppid;
}

unsigned int Processo::get_useCpu()
{
	return useCpu;
}

unsigned int Processo::get_useMem()
{
	return useMem;
}

unsigned int Processo::get_numThreads()
{
	return numThreads;
}