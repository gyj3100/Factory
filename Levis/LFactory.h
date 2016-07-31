#include "../AbstractFactory/Factory.h"

class LFactory : public Factory{
public:
	typedef std::auto_ptr<LFactory> autoLFactory;
	static LFactory& getInstance();
	ITshirt* createTshirt();
	ITrousers* createTrousers();
	~LFactory() {
		std::cout << "delete LFactory" << std::endl;
	}
};
