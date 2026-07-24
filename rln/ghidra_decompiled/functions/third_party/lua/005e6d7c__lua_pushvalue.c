/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e6d7c
 * Function: lua_pushvalue
 * Signature: undefined __cdecl lua_pushvalue(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_pushvalue(lua_State*, int) */

void lua_pushvalue(lua_State *param_1,int param_2)

{
  lua_State *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
                    /* try { // try from 005e6dc4 to 006e6de7 has its CatchHandler @ 005e7348 */
      if (param_2 == -0x2712) {
        plVar1 = param_1 + 0x78;
                    /* try { // try from 005e6df0 to 006e6e03 has its CatchHandler @ 005e72f8 */
      }
      else if (param_2 == -0x2711) {
        uVar2 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar2;
        plVar1 = param_1 + 0x88;
      }
      else if (param_2 == -10000) {
        plVar1 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
      }
      else {
                    /* try { // try from 005e6e24 to 006e6e4b has its CatchHandler @ 005e71b0 */
        plVar1 = (lua_State *)&DAT_00699bc8;
        if ((int)(-0x2712 - (long)param_2) <=
            (int)(uint)*(byte *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0xb)) {
          plVar1 = (lua_State *)
                   (**(long **)(*(long *)(param_1 + 0x28) + 8) + (-0x2712 - (long)param_2) * 0x10 +
                   0x18);
        }
      }
    }
    else {
      plVar1 = (lua_State *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar1 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
    if (*(lua_State **)(param_1 + 0x10) <= plVar1) {
      plVar1 = (lua_State *)&DAT_00699bc8;
    }
  }
  puVar3 = *(undefined8 **)(param_1 + 0x10);
                    /* try { // try from 005e6e4c to 006e6eaf has its CatchHandler @ 005e6be0 */
  *puVar3 = *(undefined8 *)plVar1;
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(plVar1 + 8);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return;
}


