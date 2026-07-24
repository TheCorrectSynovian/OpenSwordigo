/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e6bc0
 * Function: lua_replace
 * Signature: undefined __cdecl lua_replace(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_replace(lua_State*, int) */

void lua_replace(lua_State *param_1,int param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  lua_State *plVar4;
  undefined8 uVar5;
  
  if (param_2 == -0x2711) {
                    /* try { // try from 005e6be0 to 006e6c33 has its CatchHandler @ 005e6be0
                       catch() { ... } // from try @ 005e6be0 with catch @ 005e6be0
                       catch() { ... } // from try @ 005e6c48 with catch @ 005e6be0
                       catch() { ... } // from try @ 005e6d4c with catch @ 005e6be0
                       catch() { ... } // from try @ 005e6e4c with catch @ 005e6be0
                       catch() { ... } // from try @ 005e6f34 with catch @ 005e6be0
                       catch() { ... } // from try @ 005e7010 with catch @ 005e6be0
                       catch() { ... } // from try @ 005e714c with catch @ 005e6be0
                       catch() { ... } // from try @ 005e7528 with catch @ 005e6be0 */
    if (*(long *)(param_1 + 0x28) == *(long *)(param_1 + 0x50)) {
      FUN_005eb320(param_1,"no calling environment");
    }
LAB_005e6bfc:
    uVar5 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
    *(undefined4 *)(param_1 + 0x90) = 5;
    *(undefined8 *)(param_1 + 0x88) = uVar5;
    lVar2 = **(long **)(*(long *)(param_1 + 0x28) + 8);
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(*(long *)(param_1 + 0x10) + -0x10);
    lVar3 = *(long *)(param_1 + 0x10);
                    /* try { // try from 005e6c34 to 006e6c47 has its CatchHandler @ 005e7430 */
                    /* try { // try from 005e6c48 to 006e6cc3 has its CatchHandler @ 005e6be0 */
    if ((*(int *)(lVar3 + -8) < 4) || ((*(byte *)(*(long *)(lVar3 + -0x10) + 9) & 3) == 0))
    goto LAB_005e6d64;
    bVar1 = *(byte *)(lVar2 + 9);
  }
  else {
    if (param_2 < 1) {
      if (param_2 < -9999) {
        if (param_2 == -0x2712) {
          plVar4 = param_1 + 0x78;
        }
        else if (param_2 == -10000) {
          plVar4 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
        }
        else {
          if (param_2 == -0x2711) goto LAB_005e6bfc;
                    /* try { // try from 005e6cc4 to 006e6ce7 has its CatchHandler @ 005e73e4 */
          plVar4 = (lua_State *)&DAT_00699bc8;
          if ((int)(-0x2712 - (long)param_2) <=
              (int)(uint)*(byte *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0xb)) {
            plVar4 = (lua_State *)
                     (**(long **)(*(long *)(param_1 + 0x28) + 8) + (-0x2712 - (long)param_2) * 0x10
                     + 0x18);
          }
        }
      }
      else {
        plVar4 = (lua_State *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
      }
    }
    else {
      plVar4 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
      if (*(lua_State **)(param_1 + 0x10) <= plVar4) {
        plVar4 = (lua_State *)&DAT_00699bc8;
      }
    }
    lVar2 = *(long *)(param_1 + 0x10);
    *(undefined8 *)plVar4 = *(undefined8 *)(lVar2 + -0x10);
    *(undefined4 *)(plVar4 + 8) = *(undefined4 *)(lVar2 + -8);
                    /* try { // try from 005e6d24 to 006e6d4b has its CatchHandler @ 005e71b4 */
    if (((-0x2713 < param_2) || (lVar2 = *(long *)(param_1 + 0x10), *(int *)(lVar2 + -8) < 4)) ||
       ((*(byte *)(*(long *)(lVar2 + -0x10) + 9) & 3) == 0)) goto LAB_005e6d64;
                    /* try { // try from 005e6d4c to 006e6dc3 has its CatchHandler @ 005e6be0 */
    bVar1 = *(byte *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 9);
  }
  if ((bVar1 >> 2 & 1) != 0) {
    FUN_005ee334(param_1);
  }
LAB_005e6d64:
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  return;
}


