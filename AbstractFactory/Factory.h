#ifndef __Factory__
#define __Factory__
#include <memory>
#include "../Raiment/Tshirt.h"
#include "../Raiment/Trousers.h"
typedef std::auto_ptr<ITshirt> autoTshirt;
typedef std::auto_ptr<ITrousers> autoTrousers;
class Factory {
public:
	virtual ITshirt* createTshirt() = 0;
	virtual ITrousers* createTrousers() = 0;
	virtual ~Factory() {}
};
#endif
