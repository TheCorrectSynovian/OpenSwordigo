/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fc85c
 * Function: FUN_005fc85c
 * Signature: undefined FUN_005fc85c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fc85c(lua_State *param_1)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong local_468;
  long *local_460 [131];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar4 = luaL_checklstring(param_1,1,&local_468);
                    /* try { // try from 005fc894 to 006fc8bb has its CatchHandler @ 005fd494 */
  luaL_buffinit(param_1,(luaL_Buffer *)local_460);
  uVar5 = local_468 - 1;
  bVar2 = local_468 != 0;
  local_468 = uVar5;
  if (bVar2) {
    do {
      local_468 = uVar5;
      if (&local_48 <= local_460[0]) {
        luaL_prepbuffer((luaL_Buffer *)local_460);
                    /* try { // try from 005fc8cc to 006fc8db has its CatchHandler @ 005fd2d8 */
      }
      plVar1 = (long *)((long)local_460[0] + 1);
      *(undefined1 *)local_460[0] = *(undefined1 *)(lVar4 + local_468);
                    /* try { // try from 005fc8e0 to 006fc8e7 has its CatchHandler @ 005fd274 */
      uVar5 = local_468 - 1;
      bVar2 = local_468 != 0;
      local_468 = uVar5;
      local_460[0] = plVar1;
    } while (bVar2);
  }
  luaL_pushresult((luaL_Buffer *)local_460);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


