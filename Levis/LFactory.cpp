#include "LFactory.h"
#include "LTshirt.h"
#include "LTrousers.h"

LFactory& LFactory::getInstance() {
	static LFactory::autoLFactory instance(NULL);
	if(NULL == &(*instance)) {
		instance.reset(new LFactory());
	}
	return *instance;
}

ITshirt* LFactory::createTshirt() {
	return new LTshirt();
}

ITrousers* LFactory::createTrousers() {
	return new LTrousers();
}
