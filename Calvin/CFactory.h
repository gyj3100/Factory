#include "../AbstractFactory/Factory.h"

class CFactory : public Factory{
public:
	ITshirt* createTshirt();
	ITrousers* createTrousers();
};
