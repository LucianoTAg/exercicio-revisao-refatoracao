#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:
    int getProjetos() {
      return projetos;
    }
  
    void setProjetos(int p) {
      projetos = p;
    }

  private:
	  int projetos;
};

