#include "../AbstractFactory/Factory.h"

class JJFactory : public Factory{
public:
	ITshirt* createTshirt();
	ITrousers* createTrousers();
};
