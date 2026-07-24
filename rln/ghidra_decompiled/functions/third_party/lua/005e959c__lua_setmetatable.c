/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e959c
 * Function: lua_setmetatable
 * Signature: undefined __cdecl lua_setmetatable(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_setmetatable(lua_State*, int) */

undefined8 lua_setmetatable(lua_State *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  lua_State *plVar3;
  undefined8 uVar4;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
                    /* try { // try from 005e95f0 to 006e95fb has its CatchHandler @ 005e9c30 */
      if (param_2 == -0x2712) {
                    /* try { // try from 005e961c to 006e962f has its CatchHandler @ 005e9c94 */
        plVar3 = param_1 + 0x78;
      }
      else if (param_2 == -0x2711) {
                    /* try { // try from 005e9630 to 006e964b has its CatchHandler @ 005e9c38 */
        uVar4 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar4;
        plVar3 = param_1 + 0x88;
      }
      else if (param_2 == -10000) {
                    /* try { // try from 005e9614 to 006e9617 has its CatchHandler @ 005e9d18 */
        plVar3 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
      }
      else {
                    /* try { // try from 005e964c to 006e979b has its CatchHandler @ 005e8c80 */
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
                    /* try { // try from 005e95bc to 006e95cf has its CatchHandler @ 005e9d7c */
    plVar3 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
    if (*(lua_State **)(param_1 + 0x10) <= plVar3) {
      plVar3 = (lua_State *)&DAT_00699bc8;
    }
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + -8) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + -0x10);
  }
  iVar1 = *(int *)(plVar3 + 8);
  if (iVar1 == 7) {
    *(long *)(*(long *)plVar3 + 0x10) = lVar2;
    if (((lVar2 != 0) && ((*(byte *)(lVar2 + 9) & 3) != 0)) &&
       ((*(byte *)(*(long *)plVar3 + 9) >> 2 & 1) != 0)) {
      FUN_005ee334(param_1);
    }
  }
  else if (iVar1 == 5) {
    *(long *)(*(long *)plVar3 + 0x10) = lVar2;
    if (((lVar2 != 0) && ((*(byte *)(lVar2 + 9) & 3) != 0)) &&
       ((*(byte *)(*(long *)plVar3 + 9) >> 2 & 1) != 0)) {
      FUN_005ee46c(param_1);
    }
  }
  else {
    *(long *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 8 + 0xe0) = lVar2;
  }
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  return 1;
}


