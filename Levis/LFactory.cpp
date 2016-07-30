#include "LFactory.h"
#include "LTshirt.h"
#include "LTrousers.h"

ITshirt* LFactory::createTshirt() {
	return new LTshirt();
}

ITrousers* LFactory::createTrousers() {
	return new LTrousers();
}
