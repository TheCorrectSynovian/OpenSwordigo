/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fc7a8
 * Function: FUN_005fc7a8
 * Signature: undefined FUN_005fc7a8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fc7a8(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  ulong local_468;
  luaL_Buffer alStack_460 [1048];
  long local_48;
  
                    /* try { // try from 005fc7a8 to 006fc7af has its CatchHandler @ 005fd340 */
                    /* try { // try from 005fc7b8 to 006fc7bf has its CatchHandler @ 005fd2e0 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcVar3 = (char *)luaL_checklstring(param_1,1,&local_468);
  iVar2 = luaL_checkinteger(param_1,2);
  luaL_buffinit(param_1,alStack_460);
  if (0 < iVar2) {
    iVar2 = iVar2 + 1;
    do {
      luaL_addlstring(alStack_460,pcVar3,local_468);
      iVar2 = iVar2 + -1;
    } while (1 < iVar2);
  }
  luaL_pushresult(alStack_460);
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 005fc850 to 006fc877 has its CatchHandler @ 005fd268 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


