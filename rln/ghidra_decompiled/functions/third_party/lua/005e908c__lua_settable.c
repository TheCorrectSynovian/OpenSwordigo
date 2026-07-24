/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e908c
 * Function: lua_settable
 * Signature: undefined __cdecl lua_settable(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_settable(lua_State*, int) */

void lua_settable(lua_State *param_1,int param_2)

{
  lua_State *plVar1;
  undefined8 uVar2;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
                    /* try { // try from 005e90e4 to 006e90f7 has its CatchHandler @ 005ea140 */
      if (param_2 == -0x2712) {
        plVar1 = param_1 + 0x78;
      }
      else if (param_2 == -0x2711) {
        uVar2 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar2;
        plVar1 = param_1 + 0x88;
      }
      else if (param_2 == -10000) {
                    /* try { // try from 005e9104 to 006e912f has its CatchHandler @ 005ea108 */
        plVar1 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
      }
      else {
                    /* try { // try from 005e9140 to 006e9153 has its CatchHandler @ 005ea104 */
                    /* try { // try from 005e9160 to 006e918b has its CatchHandler @ 005ea0cc */
        plVar1 = (lua_State *)&DAT_00699bc8;
        if ((int)(-0x2712 - (long)param_2) <=
            (int)(uint)*(byte *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0xb)) {
          plVar1 = (lua_State *)
                   (**(long **)(*(long *)(param_1 + 0x28) + 8) + (-0x2712 - (long)param_2) * 0x10 +
                   0x18);
        }
      }
    }
    else {
      plVar1 = (lua_State *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
                    /* try { // try from 005e90a8 to 006e90d3 has its CatchHandler @ 005ea144 */
    plVar1 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
    if (*(lua_State **)(param_1 + 0x10) <= plVar1) {
      plVar1 = (lua_State *)&DAT_00699bc8;
    }
  }
  FUN_005f61e8(param_1,plVar1,*(long *)(param_1 + 0x10) + -0x20,*(long *)(param_1 + 0x10) + -0x10);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x20;
  return;
}


