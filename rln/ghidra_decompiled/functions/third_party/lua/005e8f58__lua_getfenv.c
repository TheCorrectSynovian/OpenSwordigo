/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e8f58
 * Function: lua_getfenv
 * Signature: undefined __cdecl lua_getfenv(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_getfenv(lua_State*, int) */

void lua_getfenv(lua_State *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  lua_State *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if (param_2 < 1) {
    if (param_2 < -9999) {
      if (param_2 == -0x2712) {
        plVar3 = param_1 + 0x78;
      }
      else if (param_2 == -0x2711) {
        uVar5 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar5;
        plVar3 = param_1 + 0x88;
      }
      else if (param_2 == -10000) {
        plVar3 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
      }
      else {
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
                    /* try { // try from 005e9024 to 006e9037 has its CatchHandler @ 005ea448 */
  iVar1 = *(int *)(plVar3 + 8);
  if (iVar1 == 8) {
    lVar4 = *(long *)plVar3;
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    *puVar6 = *(undefined8 *)(lVar4 + 0x78);
    uVar2 = *(undefined4 *)(lVar4 + 0x80);
  }
  else if ((iVar1 == 7) || (iVar1 == 6)) {
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    *puVar6 = *(undefined8 *)(*(long *)plVar3 + 0x18);
    uVar2 = 5;
  }
  else {
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = 0;
  }
  *(undefined4 *)(puVar6 + 1) = uVar2;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
                    /* try { // try from 005e9088 to 006e909b has its CatchHandler @ 005ea1a4 */
  return;
}


