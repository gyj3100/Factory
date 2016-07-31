#include "../AbstractFactory/Factory.h"

class CFactory : public Factory{
public:
	typedef std::auto_ptr<CFactory> autoCFactory;
	static CFactory& getInstance();
	ITshirt* createTshirt();
	ITrousers* createTrousers();
	~CFactory() {
		std::cout << "delete CFactory" << std::endl;
	}
};
