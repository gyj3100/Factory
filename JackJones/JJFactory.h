#include "../AbstractFactory/Factory.h"

class JJFactory : public Factory{
public:
	typedef std::auto_ptr<JJFactory> autoJJFactory;
	static JJFactory& getInstance();
	ITshirt* createTshirt();
	ITrousers* createTrousers();
	~JJFactory() {
		std::cout << "delete JJFactory" << std::endl;
	}
};
