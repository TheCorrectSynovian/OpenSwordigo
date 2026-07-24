/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fa914
 * Function: FUN_005fa914
 * Signature: undefined FUN_005fa914(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fa914(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = 1;
  pcVar3 = (char *)luaL_checklstring(param_1,1,&local_40);
  pcVar4 = (char *)luaL_optlstring(param_1,2,pcVar3,(ulong *)0x0);
  iVar2 = luaL_loadbuffer(param_1,pcVar3,local_40,pcVar4);
  if (iVar2 != 0) {
    lua_pushnil(param_1);
    lua_insert(param_1,-2);
    uVar5 = 2;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


