/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e7bc0
 * Function: lua_toboolean
 * Signature: undefined __cdecl lua_toboolean(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_toboolean(lua_State*, int) */

bool lua_toboolean(lua_State *param_1,int param_2)

{
  int iVar1;
  lua_State *plVar2;
  undefined8 uVar3;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
                    /* catch() { ... } // from try @ 005e7824 with catch @ 005e7c30 */
      if (param_2 == -0x2712) {
        plVar2 = param_1 + 0x78;
        iVar1 = *(int *)(param_1 + 0x80);
      }
      else if (param_2 == -0x2711) {
                    /* catch() { ... } // from try @ 005e7744 with catch @ 005e7c7c */
        uVar3 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
        plVar2 = param_1 + 0x88;
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar3;
        iVar1 = *(int *)(param_1 + 0x90);
      }
      else if (param_2 == -10000) {
        plVar2 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
        iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0xa8);
      }
      else {
                    /* catch() { ... } // from try @ 005e7718 with catch @ 005e7ccc */
        plVar2 = (lua_State *)&DAT_00699bc8;
        if ((int)(-0x2712 - (long)param_2) <=
            (int)(uint)*(byte *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0xb)) {
          plVar2 = (lua_State *)
                   (**(long **)(*(long *)(param_1 + 0x28) + 8) + (-0x2712 - (long)param_2) * 0x10 +
                   0x18);
        }
        iVar1 = *(int *)(plVar2 + 8);
      }
    }
    else {
      plVar2 = (lua_State *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
      iVar1 = *(int *)(plVar2 + 8);
    }
  }
  else {
    plVar2 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
                    /* catch() { ... } // from try @ 005e7850 with catch @ 005e7be0 */
    if (*(lua_State **)(param_1 + 0x10) <= plVar2) {
      plVar2 = (lua_State *)&DAT_00699bc8;
    }
    iVar1 = *(int *)(plVar2 + 8);
  }
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      return *(int *)plVar2 != 0;
    }
    return true;
  }
  return false;
}


