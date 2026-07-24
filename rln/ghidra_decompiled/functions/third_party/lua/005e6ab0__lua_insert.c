/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e6ab0
 * Function: lua_insert
 * Signature: undefined __cdecl lua_insert(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_insert(lua_State*, int) */

void lua_insert(lua_State *param_1,int param_2)

{
  lua_State *plVar1;
  undefined8 uVar2;
  lua_State *plVar3;
  lua_State *plVar4;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      if (param_2 == -0x2712) {
        plVar1 = param_1 + 0x78;
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
  plVar3 = *(lua_State **)(param_1 + 0x10);
  if (plVar1 < plVar3) {
    do {
      plVar4 = plVar3 + -0x10;
      *(undefined8 *)plVar3 = *(undefined8 *)plVar4;
      *(undefined4 *)(plVar3 + 8) = *(undefined4 *)(plVar3 + -8);
      plVar3 = plVar4;
    } while (plVar1 < plVar4);
    plVar3 = *(lua_State **)(param_1 + 0x10);
  }
  *(undefined8 *)plVar1 = *(undefined8 *)plVar3;
  *(undefined4 *)(plVar1 + 8) = *(undefined4 *)(plVar3 + 8);
  return;
}


