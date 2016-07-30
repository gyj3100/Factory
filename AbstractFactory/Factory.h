#ifndef __Factory__
#define __Factory__
#include "../Raiment/Tshirt.h"
#include "../Raiment/Trousers.h"
class Factory {
public:
	virtual ITshirt* createTshirt() = 0;
	virtual ITrousers* createTrousers() = 0;
};
#endif
