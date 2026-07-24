/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fc6d4
 * Function: FUN_005fc6d4
 * Signature: undefined FUN_005fc6d4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fc6d4(lua_State *param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong local_468;
  long *local_460 [131];
  long local_48;
  
                    /* try { // try from 005fc6e0 to 006fc703 has its CatchHandler @ 005fd494 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = luaL_checklstring(param_1,1,&local_468);
                    /* try { // try from 005fc714 to 006fc71f has its CatchHandler @ 005fd420 */
  luaL_buffinit(param_1,(luaL_Buffer *)local_460);
                    /* try { // try from 005fc720 to 006fc72b has its CatchHandler @ 005fd3d0 */
  if (local_468 != 0) {
    uVar5 = 0;
    do {
      if (&local_48 <= local_460[0]) {
        luaL_prepbuffer((luaL_Buffer *)local_460);
      }
      plVar2 = local_460[0];
      iVar3 = tolower((uint)*(byte *)(lVar4 + uVar5));
                    /* try { // try from 005fc74c to 006fc773 has its CatchHandler @ 005fd420 */
      local_460[0] = (long *)((long)plVar2 + 1);
      *(char *)plVar2 = (char)iVar3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_468);
  }
  luaL_pushresult((luaL_Buffer *)local_460);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


