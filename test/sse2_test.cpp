#include <cstdint>
#include <iostream>
#include "internal/blake2b/blake2b.h"
#include "internal/blake2b/blake2b_sse2.h"
#include "internal/argon2/argon2_base.h"
#include "internal/argon2/argon2_sse2.h"
#include "tests.h"

using namespace std;
using namespace argonishche;

DECLARE_BLAKE2B_TESTS(SSE2)
DECLARE_ARGON2_TESTS(SSE2)

int main(int argc, char** argv) {
    RUN_BLAKE2B_TESTS(SSE2)
    RUN_ARGON2_TESTS(SSE2)
    return 0;
}
