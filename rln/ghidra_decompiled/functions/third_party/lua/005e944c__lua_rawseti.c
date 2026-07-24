/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e944c
 * Function: lua_rawseti
 * Signature: undefined __cdecl lua_rawseti(lua_State * param_1, int param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_rawseti(lua_State*, int, int) */

void lua_rawseti(lua_State *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  lua_State *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
                    /* try { // try from 005e94a4 to 006e94b7 has its CatchHandler @ 005e9e54 */
      if (param_2 == -0x2712) {
        plVar2 = param_1 + 0x78;
      }
      else if (param_2 == -0x2711) {
        uVar3 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar3;
        plVar2 = param_1 + 0x88;
      }
      else if (param_2 == -10000) {
                    /* try { // try from 005e94c4 to 006e94ef has its CatchHandler @ 005e9df8 */
        plVar2 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
      }
      else {
                    /* try { // try from 005e9500 to 006e9513 has its CatchHandler @ 005e9df4 */
                    /* try { // try from 005e9520 to 006e954b has its CatchHandler @ 005e9dbc */
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
  lVar4 = *(long *)(param_1 + 0x10);
  puVar1 = (undefined8 *)FUN_005f49e8(param_1,*(undefined8 *)plVar2,param_3);
  *puVar1 = *(undefined8 *)(lVar4 + -0x10);
  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(lVar4 + -8);
  lVar4 = *(long *)(param_1 + 0x10);
                    /* try { // try from 005e955c to 006e956f has its CatchHandler @ 005e9db8 */
  if (((3 < *(int *)(lVar4 + -8)) && ((*(byte *)(*(long *)(lVar4 + -0x10) + 9) & 3) != 0)) &&
     ((*(byte *)(*(long *)plVar2 + 9) >> 2 & 1) != 0)) {
                    /* try { // try from 005e957c to 006e95a7 has its CatchHandler @ 005e9d80 */
    FUN_005ee46c(param_1);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  *(long *)(param_1 + 0x10) = lVar4 + -0x10;
  return;
}


