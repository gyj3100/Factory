#include "JJFactory.h"
#include "JTshirt.h"
#include "JTrousers.h"

ITshirt* JJFactory::createTshirt() {
	return new JTshirt();
}

ITrousers* JJFactory::createTrousers() {
	return new JTrousers();
}
