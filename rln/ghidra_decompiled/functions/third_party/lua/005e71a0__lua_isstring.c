/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e71a0
 * Function: lua_isstring
 * Signature: undefined __cdecl lua_isstring(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_isstring(lua_State*, int) */

bool lua_isstring(lua_State *param_1,int param_2)

{
  lua_State *plVar1;
  undefined8 uVar2;
  
  if (param_2 < 1) {
                    /* catch() { ... } // from try @ 005e6eb0 with catch @ 005e71c4
                       catch() { ... } // from try @ 005e6f0c with catch @ 005e71c4 */
    if (param_2 < -9999) {
      if (param_2 == -0x2712) {
        plVar1 = param_1 + 0x78;
      }
      else if (param_2 == -0x2711) {
        uVar2 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
        plVar1 = param_1 + 0x88;
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar2;
      }
      else {
                    /* try { // try from 005e71f4 to 006e7527 has its CatchHandler @ 005e7530 */
        if (param_2 == -10000) {
          plVar1 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
        }
        else {
          if ((int)(uint)*(byte *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0xb) <
              (int)(-0x2712 - (long)param_2)) {
            return false;
          }
                    /* catch() { ... } // from try @ 005e6ed8 with catch @ 005e7264 */
          plVar1 = (lua_State *)
                   (**(long **)(*(long *)(param_1 + 0x28) + 8) + (-0x2712 - (long)param_2) * 0x10 +
                   0x18);
        }
      }
    }
    else {
                    /* catch() { ... } // from try @ 005e6fb4 with catch @ 005e71d0 */
      plVar1 = (lua_State *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
                    /* catch() { ... } // from try @ 005e6e24 with catch @ 005e71b0 */
    plVar1 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
                    /* catch() { ... } // from try @ 005e6d24 with catch @ 005e71b4 */
                    /* catch() { ... } // from try @ 005e6f8c with catch @ 005e71b8
                       catch() { ... } // from try @ 005e6fe8 with catch @ 005e71b8 */
    if (*(lua_State **)(param_1 + 0x10) <= plVar1) {
      return false;
    }
  }
  if (plVar1 != (lua_State *)&DAT_00699bc8) {
    return *(int *)(plVar1 + 8) - 3U < 2;
  }
  return false;
}


