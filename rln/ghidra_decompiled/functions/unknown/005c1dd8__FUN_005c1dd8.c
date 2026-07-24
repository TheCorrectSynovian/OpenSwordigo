/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c1dd8
 * Function: FUN_005c1dd8
 * Signature: undefined FUN_005c1dd8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005c1dd8(lua_State *param_1)

{
  long lVar1;
  double dVar2;
  undefined8 *puVar3;
  lua_State *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0xffffd8ee;
  local_48 = param_1;
  puVar3 = (undefined8 *)
           Caver::ProgramTable::PointerForPointerKey((ProgramTable *)&local_48,param_1);
  dVar2 = (double)lua_tonumber((lua_State *)*puVar3,1);
  *(undefined4 *)(puVar3 + 9) = 1;
  *(float *)((long)puVar3 + 0x4c) = (float)dVar2;
  lua_yield(param_1,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


