#ifndef _PROCESSO_H_
#define _PROCESSO_H_

class Processo{
private:
	unsigned int pid;
	unsigned int ppid;
	unsigned int useCpu;
	unsigned int useMem;
	unsigned int numThreads;

public:
	/* Contrutores */

	Processo();

	/* Sobrecarga do construtor padrão. Inicializa um objeto do tipo Processo
	   com os atributos especificados durante a chamada.*/
	Processo(unsigned int pid, unsigned int ppid, unsigned int useCpu,
			 unsigned int useMem, unsigned numThreads);
	/* Setters */
	void set_pid(unsigned int pid);
	void set_ppid(unsigned int ppid);
	void set_useCpu(unsigned int useCpu);
	void set_useMem(unsigned int useMem);
	void set_numThreads(unsigned int numThreads);

	/* Getters */
	unsigned int get_pid();
	unsigned int get_ppid();
	unsigned int get_useCpu();
	unsigned int get_useMem();
	unsigned int get_numThreads();

};

#endif