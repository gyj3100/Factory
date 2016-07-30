#include "CFactory.h"
#include "CTshirt.h"
#include "CTrousers.h"

ITshirt* CFactory::createTshirt() {
	return new CTshirt();
}

ITrousers* CFactory::createTrousers() {
	return new CTrousers();
}
