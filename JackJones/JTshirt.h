#include "../Raiment/Tshirt.h"

class JTshirt : public ITshirt {
public:
	void show();
	~JTshirt() {
		std::cout << "delete JTshirt" << std::endl;
	}
};
