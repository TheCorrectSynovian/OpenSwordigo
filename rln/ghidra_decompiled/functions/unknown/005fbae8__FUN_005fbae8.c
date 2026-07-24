/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fbae8
 * Function: FUN_005fbae8
 * Signature: undefined FUN_005fbae8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fbae8(lua_State *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  long *local_480 [131];
  long local_68;
  
                    /* try { // try from 005fbaf8 to 006fbaff has its CatchHandler @ 005fbed8 */
                    /* try { // try from 005fbb04 to 006fbb17 has its CatchHandler @ 005fbed4 */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar3 = lua_gettop(param_1);
  luaL_buffinit(param_1,(luaL_Buffer *)local_480);
  if (0 < iVar3) {
    iVar5 = 0;
                    /* try { // try from 005fbb44 to 006fbb53 has its CatchHandler @ 005fc06c */
    do {
      uVar4 = luaL_checkinteger(param_1,iVar5 + 1);
      if ((uVar4 & 0xffffff00) != 0) {
        luaL_argerror(param_1,iVar5 + 1,"invalid value");
      }
      if (&local_68 <= local_480[0]) {
        luaL_prepbuffer((luaL_Buffer *)local_480);
      }
      iVar5 = iVar5 + 1;
                    /* try { // try from 005fbb90 to 006fbb97 has its CatchHandler @ 005fbe84 */
      plVar1 = (long *)((long)local_480[0] + 1);
      *(char *)local_480[0] = (char)uVar4;
      local_480[0] = plVar1;
    } while (iVar3 != iVar5);
  }
  luaL_pushresult((luaL_Buffer *)local_480);
                    /* try { // try from 005fbbb8 to 006fbbdf has its CatchHandler @ 005fbd88 */
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005fbbe0 to 006fbdb7 has its CatchHandler @ 005fb1f0 */
  __stack_chk_fail();
}


