/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fca10
 * Function: FUN_005fca10
 * Signature: undefined FUN_005fca10(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fca10(lua_State *param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong local_468;
  long *local_460 [131];
  long local_48;
  
                    /* try { // try from 005fca14 to 006fca27 has its CatchHandler @ 005fcf38 */
  lVar1 = tpidr_el0;
                    /* try { // try from 005fca2c to 006fca37 has its CatchHandler @ 005fcee4 */
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = luaL_checklstring(param_1,1,&local_468);
                    /* try { // try from 005fca4c to 006fca57 has its CatchHandler @ 005fcf3c */
  luaL_buffinit(param_1,(luaL_Buffer *)local_460);
                    /* try { // try from 005fca58 to 006fca5f has its CatchHandler @ 005fce78 */
  if (local_468 != 0) {
                    /* try { // try from 005fca60 to 006fca6b has its CatchHandler @ 005fcf3c */
    uVar5 = 0;
    do {
                    /* try { // try from 005fca70 to 006fca8b has its CatchHandler @ 005fce84 */
      if (&local_48 <= local_460[0]) {
        luaL_prepbuffer((luaL_Buffer *)local_460);
      }
      plVar2 = local_460[0];
      iVar3 = toupper((uint)*(byte *)(lVar4 + uVar5));
      local_460[0] = (long *)((long)plVar2 + 1);
      *(char *)plVar2 = (char)iVar3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_468);
  }
  luaL_pushresult((luaL_Buffer *)local_460);
                    /* try { // try from 005fcab0 to 006fcab7 has its CatchHandler @ 005fce28 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005fcad8 to 006fcaff has its CatchHandler @ 005fce18 */
  __stack_chk_fail();
}


