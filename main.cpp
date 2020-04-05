#include <iostream>
#include "ancestorTree.h"
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"

using namespace doctest;
using namespace family;
using namespace std;

int main() {

   Context context;
   context.addFilter("reporters", "console");
   context.run();

    return 0;
}
