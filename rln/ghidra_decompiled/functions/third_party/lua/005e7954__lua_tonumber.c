/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e7954
 * Function: lua_tonumber
 * Signature: undefined __cdecl lua_tonumber(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_tonumber(lua_State*, int) */

void lua_tonumber(lua_State *param_1,int param_2)

{
  long lVar1;
  lua_State *plVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
                    /* try { // try from 005e7954 to 006e797b has its CatchHandler @ 005e7b40 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 < 1) {
    if (param_2 < -9999) {
      if (param_2 == -0x2712) {
        plVar2 = param_1 + 0x78;
      }
      else if (param_2 == -0x2711) {
                    /* try { // try from 005e7a30 to 006e7a53 has its CatchHandler @ 005e7e64 */
        uVar3 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar3;
        plVar2 = param_1 + 0x88;
      }
      else if (param_2 == -10000) {
        plVar2 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
      }
      else {
                    /* try { // try from 005e7a5c to 006e7a6f has its CatchHandler @ 005e7e10 */
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
                    /* try { // try from 005e797c to 006e7a2f has its CatchHandler @ 005e7534 */
    plVar2 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
    if (*(lua_State **)(param_1 + 0x10) <= plVar2) {
      plVar2 = (lua_State *)&DAT_00699bc8;
    }
  }
  if ((*(int *)(plVar2 + 8) == 3) ||
     (plVar2 = (lua_State *)FUN_005f5ef0(plVar2,auStack_38), plVar2 != (lua_State *)0x0)) {
    uVar3 = *(undefined8 *)plVar2;
  }
  else {
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


