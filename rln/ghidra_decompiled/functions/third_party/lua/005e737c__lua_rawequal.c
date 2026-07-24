/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e737c
 * Function: lua_rawequal
 * Signature: undefined __cdecl lua_rawequal(lua_State * param_1, int param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_rawequal(lua_State*, int, int) */

undefined8 lua_rawequal(lua_State *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  lua_State *plVar2;
  lua_State *plVar3;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      if (param_2 == -0x2712) {
        plVar2 = param_1 + 0x78;
      }
      else if (param_2 == -0x2711) {
                    /* catch() { ... } // from try @ 005e7124 with catch @ 005e7480 */
        uVar1 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
                    /* catch() { ... } // from try @ 005e70f0 with catch @ 005e748c */
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar1;
        plVar2 = param_1 + 0x88;
      }
      else if (param_2 == -10000) {
        plVar2 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
      }
      else {
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
                    /* catch() { ... } // from try @ 005e6cf0 with catch @ 005e7394 */
    plVar2 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
    if (*(lua_State **)(param_1 + 0x10) <= plVar2) {
      plVar2 = (lua_State *)&DAT_00699bc8;
    }
  }
  if (param_3 < 1) {
                    /* catch() { ... } // from try @ 005e6cc4 with catch @ 005e73e4 */
    if (param_3 < -9999) {
      if (param_3 == -0x2712) {
        plVar3 = param_1 + 0x78;
                    /* catch() { ... } // from try @ 005e70c4 with catch @ 005e74e0 */
      }
      else if (param_3 == -0x2711) {
        uVar1 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar1;
        plVar3 = param_1 + 0x88;
      }
      else if (param_3 == -10000) {
        plVar3 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
      }
      else {
                    /* try { // try from 005e7528 to 006e7533 has its CatchHandler @ 005e6be0 */
                    /* catch() { ... } // from try @ 005e71f4 with catch @ 005e7530 */
                    /* try { // try from 005e7534 to 006e7587 has its CatchHandler @ 005e7534
                       catch() { ... } // from try @ 005e7534 with catch @ 005e7534
                       catch() { ... } // from try @ 005e759c with catch @ 005e7534
                       catch() { ... } // from try @ 005e76a0 with catch @ 005e7534
                       catch() { ... } // from try @ 005e77a0 with catch @ 005e7534
                       catch() { ... } // from try @ 005e78ac with catch @ 005e7534
                       catch() { ... } // from try @ 005e797c with catch @ 005e7534
                       catch() { ... } // from try @ 005e7ab8 with catch @ 005e7534
                       catch() { ... } // from try @ 005e7eac with catch @ 005e7534 */
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
    plVar3 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_3 * 0x10 + -0x10);
    if (*(lua_State **)(param_1 + 0x10) <= plVar3) {
      plVar3 = (lua_State *)&DAT_00699bc8;
    }
  }
  if ((plVar2 != (lua_State *)&DAT_00699bc8) && (plVar3 != (lua_State *)&DAT_00699bc8)) {
    uVar1 = FUN_005eee84(plVar2);
    return uVar1;
  }
  return 0;
}


