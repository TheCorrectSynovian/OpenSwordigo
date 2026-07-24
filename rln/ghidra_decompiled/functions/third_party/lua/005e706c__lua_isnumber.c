/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e706c
 * Function: lua_isnumber
 * Signature: undefined __cdecl lua_isnumber(lua_State * param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_isnumber(lua_State*, int) */

void lua_isnumber(lua_State *param_1,int param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  lua_State *plVar4;
  undefined8 uVar5;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 < 1) {
    if (param_2 < -9999) {
      if (param_2 == -0x2712) {
        plVar4 = param_1 + 0x78;
      }
      else if (param_2 == -0x2711) {
                    /* try { // try from 005e714c to 006e71f3 has its CatchHandler @ 005e6be0 */
        uVar5 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0x18);
        *(undefined4 *)(param_1 + 0x90) = 5;
        *(undefined8 *)(param_1 + 0x88) = uVar5;
        plVar4 = param_1 + 0x88;
      }
      else {
                    /* try { // try from 005e7124 to 006e714b has its CatchHandler @ 005e7480 */
        if (param_2 == -10000) {
          plVar4 = (lua_State *)(*(long *)(param_1 + 0x20) + 0xa0);
        }
        else {
          plVar4 = (lua_State *)&DAT_00699bc8;
          if ((int)(-0x2712 - (long)param_2) <=
              (int)(uint)*(byte *)(**(long **)(*(long *)(param_1 + 0x28) + 8) + 0xb)) {
            plVar4 = (lua_State *)
                     (**(long **)(*(long *)(param_1 + 0x28) + 8) + (-0x2712 - (long)param_2) * 0x10
                     + 0x18);
          }
        }
      }
    }
    else {
      plVar4 = (lua_State *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar4 = (lua_State *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x10 + -0x10);
    if (*(lua_State **)(param_1 + 0x10) <= plVar4) {
      plVar4 = (lua_State *)&DAT_00699bc8;
    }
  }
                    /* try { // try from 005e70c4 to 006e70e7 has its CatchHandler @ 005e74e0 */
  if (*(int *)(plVar4 + 8) == 3) {
    bVar2 = true;
  }
  else {
    lVar3 = FUN_005f5ef0(plVar4,auStack_38);
    bVar2 = lVar3 != 0;
  }
                    /* try { // try from 005e70f0 to 006e7103 has its CatchHandler @ 005e748c */
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


