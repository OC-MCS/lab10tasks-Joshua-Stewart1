#include "CargoShip.h"
#include "CruiseShip.h"

int main()
{
	Ship* ships[] = { new Ship("U.S.S. Maine", "12/13/77"),
	new CruiseShip("U.S.S. Murder", "3/14/89", 75),
	new CargoShip("M.S.S. Mary", "1/2/00", 1000) };

	for (int i = 0; i < 3; i++)
	{
		ships[i]->print();
	}

	return 0;
}