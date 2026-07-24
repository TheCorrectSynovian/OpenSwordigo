/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e6f78
 * Function: lua_iscfunction
 * Signature: undefined __cdecl lua_iscfunction(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_iscfunction(lua_State*, int) */

bool lua_iscfunction(lua_State *param_1,int param_2)

{
  lua_State *plVar1;
  undefined8 uVar2;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      if (param_2 == -0x2712) {
                    /* try { // try from 005e6fe8 to 006e700f has its CatchHandler @ 005e71b8 */
        plVar1 = param_1 + 0x78;
      }
      else if (param_2 == -0x2711) {
        uVar2 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar2;
        plVar1 = param_1 + 0x88;
                    /* try { // try from 005e7010 to 006e70c3 has its CatchHandler @ 005e6be0 */
      }
      else if (param_2 == -10000) {
        plVar1 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
      }
      else {
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
                    /* try { // try from 005e6fb4 to 006e6fc7 has its CatchHandler @ 005e71d0 */
    }
  }
  else {
                    /* try { // try from 005e6f8c to 006e6f9f has its CatchHandler @ 005e71b8 */
    plVar1 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
    if (*(lua_State **)(param_1 + 0x10) <= plVar1) {
      plVar1 = (lua_State *)&DAT_00699bc8;
    }
  }
  if (*(int *)(plVar1 + 8) != 6) {
    return false;
  }
  return *(char *)(*(long *)plVar1 + 10) != '\0';
}


