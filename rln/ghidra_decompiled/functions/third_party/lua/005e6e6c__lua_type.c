/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e6e6c
 * Function: lua_type
 * Signature: undefined __cdecl lua_type(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_type(lua_State*, int) */

undefined4 lua_type(lua_State *param_1,int param_2)

{
  lua_State *plVar1;
  undefined8 uVar2;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
                    /* try { // try from 005e6eb0 to 006e6ec3 has its CatchHandler @ 005e71c4 */
      if (param_2 == -0x2712) {
                    /* try { // try from 005e6ed8 to 006e6eeb has its CatchHandler @ 005e7264 */
        plVar1 = param_1 + 0x78;
      }
      else if (param_2 == -0x2711) {
        uVar2 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
        plVar1 = param_1 + 0x88;
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar2;
      }
      else if (param_2 == -10000) {
        plVar1 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
      }
      else {
                    /* try { // try from 005e6f0c to 006e6f33 has its CatchHandler @ 005e71c4 */
        if ((int)(uint)*(byte *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0xb) <
            (int)(-0x2712 - (long)param_2)) {
          return 0xffffffff;
        }
        plVar1 = (lua_State *)
                 (**(long **)(*(long *)(param_1 + 0x28) + 8) + (-0x2712 - (long)param_2) * 0x10 +
                 0x18);
      }
    }
    else {
      plVar1 = (lua_State *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar1 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
    if (*(lua_State **)(param_1 + 0x10) <= plVar1) {
      return 0xffffffff;
    }
  }
                    /* try { // try from 005e6f34 to 006e6f8b has its CatchHandler @ 005e6be0 */
  if (plVar1 != (lua_State *)&DAT_00699bc8) {
    return *(undefined4 *)(plVar1 + 8);
  }
  return 0xffffffff;
}


