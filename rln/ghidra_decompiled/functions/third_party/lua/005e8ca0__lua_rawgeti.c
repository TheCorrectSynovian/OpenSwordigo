/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e8ca0
 * Function: lua_rawgeti
 * Signature: undefined __cdecl lua_rawgeti(lua_State * param_1, int param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_rawgeti(lua_State*, int, int) */

void lua_rawgeti(lua_State *param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  lua_State *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      if (param_2 == -0x2712) {
                    /* try { // try from 005e8d20 to 006e8d33 has its CatchHandler @ 005ea44c */
        plVar2 = param_1 + 0x78;
      }
      else if (param_2 == -0x2711) {
        uVar4 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
                    /* try { // try from 005e8d40 to 006e8d6b has its CatchHandler @ 005ea3ec */
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar4;
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
                    /* try { // try from 005e8cbc to 006e8ccf has its CatchHandler @ 005ea4e0 */
    plVar2 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
    if (*(lua_State **)(param_1 + 0x10) <= plVar2) {
      plVar2 = (lua_State *)&DAT_00699bc8;
    }
  }
                    /* try { // try from 005e8d7c to 006e8d8f has its CatchHandler @ 005ea3e8 */
  puVar1 = (undefined8 *)FUN_005f4034(*(undefined8 *)plVar2,param_3);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *puVar3 = *puVar1;
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar1 + 1);
                    /* try { // try from 005e8d9c to 006e8dc7 has its CatchHandler @ 005ea3b0 */
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return;
}


