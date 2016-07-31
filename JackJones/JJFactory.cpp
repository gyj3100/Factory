#include "JJFactory.h"
#include "JTshirt.h"
#include "JTrousers.h"

JJFactory& JJFactory::getInstance() {
	static JJFactory::autoJJFactory instance(NULL);
	if(NULL == &(*instance)) {
		instance.reset(new JJFactory());
	}
	return *instance;
}

ITshirt* JJFactory::createTshirt() {
	return new JTshirt();
}

ITrousers* JJFactory::createTrousers() {
	return new JTrousers();
}
