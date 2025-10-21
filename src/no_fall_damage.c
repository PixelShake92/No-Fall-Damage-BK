#include "modding.h"
#include "functions.h"
#include "variables.h"

RECOMP_IMPORT("*", int recomp_printf(const char* fmt, ...));

typedef struct {
    s32 damage;
    s32 state;
} struct_C0E0;

// Patch to remove all fall damage
RECOMP_PATCH s32 __bafalldamage_get_damage(struct_C0E0 *arg0, s32 height){
    arg0->damage = 0;  // Always set damage to 0
    return 0;          // Always return no damage state
}