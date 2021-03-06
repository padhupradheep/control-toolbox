/**********************************************************************************************************************
This file is part of the Control Toolbox (https://github.com/ethz-adrl/control-toolbox), copyright by ETH Zurich.
Licensed under the BSD-2 license (see LICENSE file in main directory)
**********************************************************************************************************************/

#include <ct/rbd/rbd.h>
#include "TaskspaceCostFunctionTest.h"

using namespace ct;
using namespace rbd;

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
