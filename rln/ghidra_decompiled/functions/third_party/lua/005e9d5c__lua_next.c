/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e9d5c
 * Function: lua_next
 * Signature: undefined __cdecl lua_next(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_next(lua_State*, int) */

void lua_next(lua_State *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  lua_State *plVar3;
  undefined8 uVar4;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      if (param_2 == -0x2712) {
        plVar3 = param_1 + 0x78;
      }
      else {
                    /* catch() { ... } // from try @ 005e955c with catch @ 005e9db8 */
                    /* catch() { ... } // from try @ 005e9520 with catch @ 005e9dbc */
        if (param_2 == -0x2711) {
                    /* catch() { ... } // from try @ 005e9500 with catch @ 005e9df4 */
          uVar4 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
                    /* catch() { ... } // from try @ 005e94c4 with catch @ 005e9df8 */
          *(undefined4 *)(param_1 + 0x90) = 5;
          *(undefined8 *)(param_1 + 0x88) = uVar4;
          plVar3 = param_1 + 0x88;
        }
        else if (param_2 == -10000) {
          plVar3 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
        }
        else {
          plVar3 = (lua_State *)&DAT_00699bc8;
          if ((int)(-0x2712 - (long)param_2) <=
              (int)(uint)*(byte *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0xb)) {
            plVar3 = (lua_State *)
                     (**(long **)(*(long *)(param_1 + 0x28) + 8) + (-0x2712 - (long)param_2) * 0x10
                     + 0x18);
          }
        }
      }
    }
    else {
      plVar3 = (lua_State *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
                    /* catch() { ... } // from try @ 005e95bc with catch @ 005e9d7c */
                    /* catch() { ... } // from try @ 005e957c with catch @ 005e9d80 */
    plVar3 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
    if (*(lua_State **)(param_1 + 0x10) <= plVar3) {
      plVar3 = (lua_State *)&DAT_00699bc8;
    }
  }
  iVar2 = FUN_005f3794(param_1,*(undefined8 *)plVar3,*(long *)(param_1 + 0x10) + -0x10);
                    /* catch() { ... } // from try @ 005e94a4 with catch @ 005e9e54 */
  lVar1 = *(long *)(param_1 + 0x10) + -0x10;
  if (iVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x10) + 0x10;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}


