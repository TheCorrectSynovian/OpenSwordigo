/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e7ce0
 * Function: lua_tolstring
 * Signature: undefined __cdecl lua_tolstring(lua_State * param_1, int param_2, ulong * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_tolstring(lua_State*, int, unsigned long*) */

long lua_tolstring(lua_State *param_1,int param_2,ulong *param_3)

{
  int iVar1;
  lua_State *plVar2;
  undefined8 uVar3;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
                    /* catch() { ... } // from try @ 005e7588 with catch @ 005e7db4 */
      if (param_2 == -0x2712) {
        plVar2 = param_1 + 0x78;
      }
      else if (param_2 == -0x2711) {
                    /* catch() { ... } // from try @ 005e7a30 with catch @ 005e7e64 */
        uVar3 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar3;
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
    plVar2 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
                    /* catch() { ... } // from try @ 005e7644 with catch @ 005e7d18 */
    if (*(lua_State **)(param_1 + 0x10) <= plVar2) {
      plVar2 = (lua_State *)&DAT_00699bc8;
    }
  }
  if (*(int *)(plVar2 + 8) != 4) {
    iVar1 = FUN_005f5f80(param_1);
    if (iVar1 == 0) {
      if (param_3 != (ulong *)0x0) {
        *param_3 = 0;
        return 0;
      }
      return 0;
    }
    if (*(ulong *)(*(long *)(param_1 + 0x20) + 0x70) <= *(ulong *)(*(long *)(param_1 + 0x20) + 0x78)
       ) {
      FUN_005edcb0(param_1);
    }
                    /* catch() { ... } // from try @ 005e7618 with catch @ 005e7d68 */
    if (param_2 < 1) {
      if (param_2 < -9999) {
        if (param_2 == -0x2712) {
                    /* try { // try from 005e7eac to 006e7eb7 has its CatchHandler @ 005e7534 */
          plVar2 = param_1 + 0x78;
        }
        else if (param_2 == -0x2711) {
          uVar3 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
          *(undefined4 *)(param_1 + 0x90) = 5;
          *(undefined8 *)(param_1 + 0x88) = uVar3;
          plVar2 = param_1 + 0x88;
        }
        else if (param_2 == -10000) {
          plVar2 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
        }
        else {
                    /* catch() { ... } // from try @ 005e80a4 with catch @ 005e7eec
                       catch() { ... } // from try @ 005e8270 with catch @ 005e7eec */
          plVar2 = (lua_State *)&DAT_00699bc8;
          if ((int)(-0x2712 - (long)param_2) <=
              (int)(uint)*(byte *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0xb)) {
            plVar2 = (lua_State *)
                     (**(long **)(*(long *)(param_1 + 0x28) + 8) + (-0x2712 - (long)param_2) * 0x10
                     + 0x18);
          }
        }
      }
      else {
                    /* catch() { ... } // from try @ 005e7a90 with catch @ 005e7e04 */
        plVar2 = (lua_State *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
      }
    }
    else {
      plVar2 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
      if (*(lua_State **)(param_1 + 0x10) <= plVar2) {
        plVar2 = (lua_State *)&DAT_00699bc8;
      }
    }
  }
  if (param_3 != (ulong *)0x0) {
    *param_3 = *(ulong *)(*(long *)plVar2 + 0x10);
  }
  return *(long *)plVar2 + 0x18;
}


