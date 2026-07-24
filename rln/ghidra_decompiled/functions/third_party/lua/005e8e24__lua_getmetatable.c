/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e8e24
 * Function: lua_getmetatable
 * Signature: undefined __cdecl lua_getmetatable(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_getmetatable(lua_State*, int) */

undefined8 lua_getmetatable(lua_State *param_1,int param_2)

{
  int iVar1;
  lua_State *plVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
                    /* try { // try from 005e8e6c to 006e8e77 has its CatchHandler @ 005ea224 */
      if (param_2 == -0x2712) {
        plVar2 = param_1 + 0x78;
                    /* try { // try from 005e8e98 to 006e8eab has its CatchHandler @ 005ea288 */
      }
      else if (param_2 == -0x2711) {
                    /* try { // try from 005e8eac to 006e8ec7 has its CatchHandler @ 005ea22c */
        uVar4 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar4;
        plVar2 = param_1 + 0x88;
      }
      else if (param_2 == -10000) {
        plVar2 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
                    /* try { // try from 005e8e90 to 006e8e93 has its CatchHandler @ 005ea30c */
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
                    /* try { // try from 005e8e38 to 006e8e4b has its CatchHandler @ 005ea370 */
    plVar2 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
    if (*(lua_State **)(param_1 + 0x10) <= plVar2) {
      plVar2 = (lua_State *)&DAT_00699bc8;
    }
  }
  iVar1 = *(int *)(plVar2 + 8);
  if ((iVar1 == 7) || (iVar1 == 5)) {
    lVar3 = *(long *)(*(long *)plVar2 + 0x10);
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 8 + 0xe0);
  }
  if (lVar3 == 0) {
    return 0;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  *plVar5 = lVar3;
  *(undefined4 *)(plVar5 + 1) = 5;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return 1;
}


