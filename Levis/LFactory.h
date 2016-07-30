#include "../AbstractFactory/Factory.h"

class LFactory : public Factory{
public:
	ITshirt* createTshirt();
	ITrousers* createTrousers();
};
