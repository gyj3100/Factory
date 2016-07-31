#include "../Raiment/Tshirt.h"

class LTshirt : public ITshirt {
public:
	void show();
	~LTshirt() {
		std::cout << "delete LTshirt" << std::endl;
	}
};
