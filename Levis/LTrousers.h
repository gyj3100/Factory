#include "../Raiment/Trousers.h"

class LTrousers : public ITrousers {
public:
	void show();
	~LTrousers() {
		std::cout << "delete LTrousers" << std::endl;
	}
};
