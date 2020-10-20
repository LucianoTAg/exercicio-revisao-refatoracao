#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:

	double quotaTotalAnual() {
	  return getQuotaMensalVendas() * 12;
	}
	
};

