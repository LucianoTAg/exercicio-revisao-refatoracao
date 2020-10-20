#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

  public:

    void setNome(std::string n) {
      nome = n;
    }

    std::string getNome() {
      return nome;
   }

    double getSalarioHora() {

      return salarioHora;

    }
    double getQuotaMensalVendas() {

      return quotaMensalVendas;

    }

    void setSalarioHora(double s) {
      salarioHora = s;
    }

    void setQuotaMensalVendas(double q) {
      quotaMensalVendas = q;
    }

    double pagamentoMes(double horasTrabalhadas) {
 
      double t = horasTrabalhadas;
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
      }
	    return t * salarioHora;
    }

    private:
      std::string nome;  
      double salarioHora;  
      double quotaMensalVendas;  
};

#endif