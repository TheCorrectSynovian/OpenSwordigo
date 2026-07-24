/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e7774
 * Function: lua_lessthan
 * Signature: undefined __cdecl lua_lessthan(lua_State * param_1, int param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_lessthan(lua_State*, int, int) */

undefined8 lua_lessthan(lua_State *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  lua_State *plVar2;
  lua_State *plVar3;
  
                    /* try { // try from 005e7778 to 006e779f has its CatchHandler @ 005e7b28 */
  if (param_2 < 1) {
    if (param_2 < -9999) {
      if (param_2 == -0x2712) {
        plVar2 = param_1 + 0x78;
      }
      else if (param_2 == -0x2711) {
        uVar1 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
                    /* try { // try from 005e7884 to 006e78ab has its CatchHandler @ 005e7b1c */
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar1;
        plVar2 = param_1 + 0x88;
      }
      else if (param_2 == -10000) {
        plVar2 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
      }
      else {
                    /* try { // try from 005e78ac to 006e7903 has its CatchHandler @ 005e7534 */
        plVar2 = (lua_State *)&DAT_00699bc8;
        if ((int)(-0x2712 - (long)param_2) <=
            (int)(uint)*(byte *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0xb)) {
          plVar2 = (lua_State *)
                   (**(long **)(*(long *)(param_1 + 0x28) + 8) + (-0x2712 - (long)param_2) * 0x10 +
                   0x18);
        }
      }
    }
    else {
      plVar2 = (lua_State *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar2 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
    if (*(lua_State **)(param_1 + 0x10) <= plVar2) {
      plVar2 = (lua_State *)&DAT_00699bc8;
    }
  }
                    /* try { // try from 005e7824 to 006e7847 has its CatchHandler @ 005e7c30 */
  if (param_3 < 1) {
    if (param_3 < -9999) {
      if (param_3 == -0x2712) {
        plVar3 = param_1 + 0x78;
      }
      else if (param_3 == -0x2711) {
        uVar1 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar1;
        plVar3 = param_1 + 0x88;
      }
      else if (param_3 == -10000) {
                    /* try { // try from 005e7850 to 006e7863 has its CatchHandler @ 005e7be0 */
        plVar3 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
      }
      else {
                    /* try { // try from 005e7904 to 006e7917 has its CatchHandler @ 005e7b40 */
                    /* try { // try from 005e7920 to 006e7933 has its CatchHandler @ 005e7b4c */
        plVar3 = (lua_State *)&DAT_00699bc8;
        if ((int)(-0x2712 - (long)param_3) <=
            (int)(uint)*(byte *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0xb)) {
          plVar3 = (lua_State *)
                   (**(long **)(*(long *)(param_1 + 0x28) + 8) + (-0x2712 - (long)param_3) * 0x10 +
                   0x18);
        }
      }
    }
    else {
      plVar3 = (lua_State *)(*(long *)(param_1 + 0x10) + (long)param_3 * 0x10);
    }
  }
  else {
                    /* try { // try from 005e77a0 to 006e7823 has its CatchHandler @ 005e7534 */
    plVar3 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_3 * 0x10 + -0x10);
    if (*(lua_State **)(param_1 + 0x10) <= plVar3) {
      plVar3 = (lua_State *)&DAT_00699bc8;
    }
  }
  if ((plVar2 != (lua_State *)&DAT_00699bc8) && (plVar3 != (lua_State *)&DAT_00699bc8)) {
    uVar1 = FUN_005f63fc();
    return uVar1;
  }
  return 0;
}


