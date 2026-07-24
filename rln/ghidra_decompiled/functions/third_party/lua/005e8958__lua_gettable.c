/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e8958
 * Function: lua_gettable
 * Signature: undefined __cdecl lua_gettable(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_gettable(lua_State*, int) */

void lua_gettable(lua_State *param_1,int param_2)

{
  lua_State *plVar1;
  undefined8 uVar2;
  
                    /* try { // try from 005e8958 to 006e8a17 has its CatchHandler @ 005e871c */
  if (param_2 < 1) {
    if (param_2 < -9999) {
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
        plVar1 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
      }
      else {
                    /* try { // try from 005e8a18 to 006e8a1f has its CatchHandler @ 005e8a20 */
                    /* catch() { ... } // from try @ 005e8a18 with catch @ 005e8a20
                       try { // try from 005e8a20 to 006e8a5f has its CatchHandler @ 005e871c */
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
    plVar1 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
    if (*(lua_State **)(param_1 + 0x10) <= plVar1) {
      plVar1 = (lua_State *)&DAT_00699bc8;
    }
  }
  FUN_005f6020(param_1,plVar1,*(long *)(param_1 + 0x10) + -0x10,*(long *)(param_1 + 0x10) + -0x10);
  return;
}


