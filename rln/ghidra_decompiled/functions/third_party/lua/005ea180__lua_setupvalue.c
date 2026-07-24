/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ea180
 * Function: lua_setupvalue
 * Signature: undefined __cdecl lua_setupvalue(lua_State * param_1, int param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_setupvalue(lua_State*, int, int) */

undefined * lua_setupvalue(lua_State *param_1,int param_2,int param_3)

{
  lua_State *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      if (param_2 == -0x2712) {
        plVar1 = param_1 + 0x78;
      }
      else if (param_2 == -0x2711) {
        uVar4 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar4;
        plVar1 = param_1 + 0x88;
      }
      else {
                    /* catch() { ... } // from try @ 005e8e6c with catch @ 005ea224
                       catch() { ... } // from try @ 005e9c24 with catch @ 005ea224 */
        if (param_2 == -10000) {
                    /* catch() { ... } // from try @ 005e8eac with catch @ 005ea22c */
          plVar1 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
        }
        else {
                    /* catch() { ... } // from try @ 005e8e90 with catch @ 005ea30c */
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
    }
  }
  else {
    plVar1 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
                    /* catch() { ... } // from try @ 005e9440 with catch @ 005ea1a0 */
    if (*(lua_State **)(param_1 + 0x10) <= plVar1) {
      plVar1 = (lua_State *)&DAT_00699bc8;
    }
  }
  if (*(int *)(plVar1 + 8) == 6) {
    lVar2 = *(long *)plVar1;
    if (*(char *)(lVar2 + 10) == '\0') {
      if ((param_3 < 1) || (*(int *)(*(long *)(lVar2 + 0x20) + 0x48) < param_3)) goto LAB_005ea250;
      lVar5 = (-(ulong)((uint)param_3 >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)param_3 << 3) - 8
      ;
      puVar3 = *(undefined8 **)(*(long *)(lVar2 + lVar5 + 0x28) + 0x10);
      puVar6 = (undefined *)(*(long *)(*(long *)(*(long *)(lVar2 + 0x20) + 0x38) + lVar5) + 0x18);
    }
    else {
      if ((param_3 < 1) || ((int)(uint)*(byte *)(lVar2 + 0xb) < param_3)) goto LAB_005ea250;
      puVar3 = (undefined8 *)(lVar2 + (long)param_3 * 0x10 + 0x18);
      puVar6 = &DAT_0068fbeb;
    }
    lVar2 = *(long *)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 005e8e98 with catch @ 005ea288 */
    *(long *)(param_1 + 0x10) = lVar2 + -0x10;
    *puVar3 = *(undefined8 *)(lVar2 + -0x10);
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(lVar2 + -8);
    if (((3 < (int)(*(long **)(param_1 + 0x10))[1]) &&
        ((*(byte *)(**(long **)(param_1 + 0x10) + 9) & 3) != 0)) &&
       ((*(byte *)(*(long *)plVar1 + 9) >> 2 & 1) != 0)) {
      FUN_005ee334();
    }
  }
  else {
LAB_005ea250:
    puVar6 = (undefined *)0x0;
  }
  return puVar6;
}


