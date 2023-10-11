#include "3-calc.h"

/***/
int main(int argc, char argv[])
{
	(get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
}
