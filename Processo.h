#ifndef _PROCESSO_H_
#define _PROCESSO_H_

class Processo{
private:
	unsigned int pid;
	unsigned int ppid;
	unsigned int usoCpu;
	unsigned int usoMem;
	unsigned int numThreads;
	unsigned double usoGourmet;

public:
	/* Contrutores */

	Processo();

	/* Sobrecarga do construtor padrão. Inicializa um objeto do tipo Processo
	   com os atributos especificados durante a chamada.*/
	Processo(unsigned int pid, unsigned int ppid, unsigned int usoCpu,
			 unsigned int usoMem, unsigned numThreads);
	/* Setters */
	void set_pid(unsigned int pid);
	void set_ppid(unsigned int ppid);
	void set_usoCpu(unsigned int usoCpu);
	void set_usoMem(unsigned int usoMem);
	void set_numThreads(unsigned int numThreads);

	/* Getters */
	unsigned int get_pid();
	unsigned int get_ppid();
	unsigned int get_usoCpu();
	unsigned int get_usoMem();
	unsigned int get_numThreads();
	unsigned double get_usoGourmet();

	/* Outros métodos */

	/* Cria uma média, usando a seguinte fórmula:
	   (4*usoCpu + 3*usoMem) / (7*numThreads)*/
	unsigned int tamGourmet();

};

#endif