/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e8258
 * Function: lua_tothread
 * Signature: undefined __cdecl lua_tothread(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_tothread(lua_State*, int) */

undefined8 lua_tothread(lua_State *param_1,int param_2)

{
  lua_State *plVar1;
  undefined8 uVar2;
  
  if (param_2 < 1) {
                    /* catch() { ... } // from try @ 005e8298 with catch @ 005e8284 */
    if (param_2 < -9999) {
                    /* try { // try from 005e8298 to 006e82bb has its CatchHandler @ 005e8284 */
      if (param_2 == -0x2712) {
        plVar1 = param_1 + 0x78;
      }
      else {
                    /* catch() { ... } // from try @ 005e8294 with catch @ 005e82a8 */
        if (param_2 == -0x2711) {
          uVar2 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
          *(undefined4 *)(param_1 + 0x90) = 5;
          *(undefined8 *)(param_1 + 0x88) = uVar2;
          plVar1 = param_1 + 0x88;
        }
        else if (param_2 == -10000) {
          plVar1 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
        }
        else {
          plVar1 = (lua_State *)&DAT_00699bc8;
          if ((int)(-0x2712 - (long)param_2) <=
              (int)(uint)*(byte *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0xb)) {
            plVar1 = (lua_State *)
                     (**(long **)(*(long *)(param_1 + 0x28) + 8) + (-0x2712 - (long)param_2) * 0x10
                     + 0x18);
          }
        }
      }
    }
    else {
      plVar1 = (lua_State *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
                    /* try { // try from 005e8294 to 006e8297 has its CatchHandler @ 005e82a8 */
    }
  }
  else {
                    /* try { // try from 005e8270 to 006e8283 has its CatchHandler @ 005e7eec */
    plVar1 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
                    /* catch() { ... } // from try @ 005e8100 with catch @ 005e8278
                       catch() { ... } // from try @ 005e8240 with catch @ 005e8278 */
    if (*(lua_State **)(param_1 + 0x10) <= plVar1) {
      plVar1 = (lua_State *)&DAT_00699bc8;
    }
  }
  if (*(int *)(plVar1 + 8) != 8) {
    return 0;
  }
  return *(undefined8 *)plVar1;
}


