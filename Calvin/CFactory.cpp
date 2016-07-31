#include "CFactory.h"
#include "CTshirt.h"
#include "CTrousers.h"

CFactory& CFactory::getInstance() {
	static CFactory::autoCFactory instance(NULL);
	if(NULL == &(*instance)) {
		instance.reset(new CFactory());
	}
	return *instance;
}

ITshirt* CFactory::createTshirt() {
	return new CTshirt();
}

ITrousers* CFactory::createTrousers() {
	return new CTrousers();
}
