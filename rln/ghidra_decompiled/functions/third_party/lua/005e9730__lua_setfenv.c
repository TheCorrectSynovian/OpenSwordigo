/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e9730
 * Function: lua_setfenv
 * Signature: undefined __cdecl lua_setfenv(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_setfenv(lua_State*, int) */

undefined4 lua_setfenv(lua_State *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  lua_State *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      if (param_2 == -0x2712) {
        plVar3 = param_1 + 0x78;
      }
      else if (param_2 == -0x2711) {
                    /* try { // try from 005e97b0 to 006e97bb has its CatchHandler @ 005e9f18 */
        uVar5 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar5;
        plVar3 = param_1 + 0x88;
      }
      else if (param_2 == -10000) {
        plVar3 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
                    /* try { // try from 005e979c to 006e97af has its CatchHandler @ 005e9f80 */
      }
      else {
                    /* try { // try from 005e97f0 to 006e9803 has its CatchHandler @ 005e9f0c */
        plVar3 = (lua_State *)&DAT_00699bc8;
        if ((int)(-0x2712 - (long)param_2) <=
            (int)(uint)*(byte *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0xb)) {
          plVar3 = (lua_State *)
                   (**(long **)(*(long *)(param_1 + 0x28) + 8) + (-0x2712 - (long)param_2) * 0x10 +
                   0x18);
        }
      }
    }
    else {
      plVar3 = (lua_State *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar3 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
    if (*(lua_State **)(param_1 + 0x10) <= plVar3) {
      plVar3 = (lua_State *)&DAT_00699bc8;
    }
  }
                    /* try { // try from 005e9804 to 006e980f has its CatchHandler @ 005e9ed4 */
  iVar1 = *(int *)(plVar3 + 8);
                    /* try { // try from 005e9810 to 006e9c23 has its CatchHandler @ 005e8c80 */
  if ((iVar1 == 6) || (iVar1 == 7)) {
    *(undefined8 *)(*(long *)plVar3 + 0x18) = *(undefined8 *)(*(long *)(param_1 + 0x10) + -0x10);
  }
  else {
    if (iVar1 != 8) {
      uVar2 = 0;
      goto LAB_005e988c;
    }
    lVar4 = *(long *)plVar3;
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -0x10);
    *(undefined4 *)(lVar4 + 0x80) = 5;
    *(undefined8 *)(lVar4 + 0x78) = uVar5;
  }
  if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x10) + -0x10) + 9) & 3) != 0) &&
     ((*(byte *)(*(long *)plVar3 + 9) >> 2 & 1) != 0)) {
    FUN_005ee334();
  }
  uVar2 = 1;
LAB_005e988c:
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  return uVar2;
}


