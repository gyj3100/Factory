#include <iostream>
#include "../JackJones/JJFactory.h"
#include "../Calvin/CFactory.h"
#include "../Levis/LFactory.h"
/*
void create(Factory* factory,ITshirt** tshirt,ITrousers** trousers) {
	ITshirt* shirt = NULL;
	ITrousers* trous = NULL;
	*tshirt = ((shirt = factory->createTshirt()) == NULL ? NULL : shirt);
	*trousers = ((trous = factory->createTrousers()) == NULL ? NULL : trous);
}
*/

/*
int main(int,char**) {
	autoTshirt autoshirt;
	autoTrousers autotrousers;
	ITshirt* tshirt = NULL;
	ITrousers* trousers = NULL;
	JJFactory jFactory;
	create(&jFactory,&tshirt,&trousers);
	tshirt->show();
	trousers->show();
	delete tshirt;
	delete trousers;
	tshirt = NULL;
	trousers = NULL;
	LFactory lFactory;
	create(&lFactory,&tshirt,&trousers);
	tshirt->show();
	trousers->show();
	delete tshirt;
	delete trousers;
	tshirt = NULL;
	trousers = NULL;
	CFactory cFactory;
	create(&cFactory,&tshirt,&trousers);
	tshirt->show();
	trousers->show();
	delete tshirt;
	delete trousers;
	return 0;
}
*/

void create(Factory* factory,autoTshirt* autoshirt,autoTrousers* autotrousers) {
	ITshirt* shirt = NULL;
	ITrousers* trous = NULL;
	autoshirt->reset((shirt = factory->createTshirt()) == NULL ? NULL : shirt);
	autotrousers->reset((trous = factory->createTrousers()) == NULL ? NULL : trous);
}

int main(int,char**) {
	autoTshirt autotshirt;
	autoTrousers autotrousers;
	/*
	ITshirt* tshirt = NULL;
	ITrousers* trousers = NULL;
	*/
	JJFactory& jFactory = JJFactory::getInstance();
	create(&jFactory,&autotshirt,&autotrousers);
	autotshirt->show();
	autotrousers->show();
	/*
	delete tshirt;
	delete trousers;
	tshirt = NULL;
	trousers = NULL;
	*/
	LFactory& lFactory = LFactory::getInstance();
	create(&lFactory,&autotshirt,&autotrousers);
	autotshirt->show();
	autotrousers->show();
	/*
	delete tshirt;
	delete trousers;
	tshirt = NULL;
	trousers = NULL;
	*/
	CFactory& cFactory = CFactory::getInstance();
	create(&cFactory,&autotshirt,&autotrousers);
	autotshirt->show();
	autotrousers->show();
	/*
	delete tshirt;
	delete trousers;
	*/
	return 0;
}
