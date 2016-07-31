#include "../Raiment/Trousers.h"

class JTrousers : public ITrousers {
public:
	void show();
	~JTrousers() {
		std::cout << "delete JTrousers" << std::endl;
	}
};
