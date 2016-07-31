#include "../Raiment/Trousers.h"

class CTrousers : public ITrousers {
public:
	void show();
	~CTrousers() {
		std::cout << "delete CTrousers" << std::endl;
	}
};
