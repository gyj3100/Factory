#include "../Raiment/Tshirt.h"

class CTshirt : public ITshirt {
public:
	void show();
	~CTshirt() {
		std::cout << "delete CTshirt" << std::endl;
	}
};
