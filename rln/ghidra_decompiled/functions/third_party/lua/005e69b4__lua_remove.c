/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e69b4
 * Function: lua_remove
 * Signature: undefined __cdecl lua_remove(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_remove(lua_State*, int) */

void lua_remove(lua_State *param_1,int param_2)

{
  lua_State *plVar1;
  lua_State *plVar2;
  undefined8 uVar3;
  
  if (param_2 < 1) {
                    /* try { // try from 005e69dc to 006e6a03 has its CatchHandler @ 005e6a0c */
    if (param_2 < -9999) {
      if (param_2 == -0x2712) {
        plVar2 = param_1 + 0x78;
      }
      else {
                    /* try { // try from 005e6a04 to 006e6a0f has its CatchHandler @ 005e6618 */
        if (param_2 == -0x2711) {
          uVar3 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
          *(undefined4 *)(param_1 + 0x90) = 5;
          *(undefined8 *)(param_1 + 0x88) = uVar3;
          plVar2 = param_1 + 0x88;
        }
        else {
                    /* catch() { ... } // from try @ 005e69dc with catch @ 005e6a0c */
          if (param_2 == -10000) {
            plVar2 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
          }
          else {
            plVar2 = (lua_State *)&DAT_00699bc8;
            if ((int)(-0x2712 - (long)param_2) <=
                (int)(uint)*(byte *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0xb)) {
              plVar2 = (lua_State *)
                       (**(long **)(*(long *)(param_1 + 0x28) + 8) +
                        (-0x2712 - (long)param_2) * 0x10 + 0x18);
            }
          }
        }
      }
    }
    else {
      plVar2 = (lua_State *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
                    /* catch() { ... } // from try @ 005e68ec with catch @ 005e69bc */
    plVar2 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
    if (*(lua_State **)(param_1 + 0x10) <= plVar2) {
      plVar2 = (lua_State *)&DAT_00699bc8;
    }
  }
  while( true ) {
    plVar1 = plVar2 + 0x10;
    if (*(lua_State **)(param_1 + 0x10) <= plVar1) break;
    *(undefined8 *)plVar2 = *(undefined8 *)plVar1;
    *(undefined4 *)(plVar2 + 8) = *(undefined4 *)(plVar2 + 0x18);
    plVar2 = plVar1;
  }
  *(lua_State **)(param_1 + 0x10) = *(lua_State **)(param_1 + 0x10) + -0x10;
  return;
}


