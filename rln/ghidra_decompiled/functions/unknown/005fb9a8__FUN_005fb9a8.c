/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fb9a8
 * Function: FUN_005fb9a8
 * Signature: undefined FUN_005fb9a8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_005fb9a8(lua_State *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar3 = luaL_checklstring(param_1,1,&local_60);
                    /* try { // try from 005fb9ec to 006fba13 has its CatchHandler @ 005fc148 */
  lVar4 = luaL_optinteger(param_1,2,1);
  uVar1 = (local_60 + 1 & lVar4 >> 0x3f) + lVar4;
  uVar6 = uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU);
  lVar4 = luaL_optinteger(param_1,3,uVar6);
  if ((long)uVar6 < 2) {
    uVar1 = 1;
  }
  uVar6 = (local_60 + 1 & lVar4 >> 0x3f) + lVar4;
  uVar6 = uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU);
  if (uVar6 <= local_60) {
    local_60 = uVar6;
  }
  if ((long)local_60 < (long)uVar1) {
    iVar5 = 0;
  }
  else {
    iVar5 = ((int)local_60 - (int)uVar1) + 1;
    if ((long)(uVar1 + (long)iVar5) <= (long)local_60) {
      luaL_error(param_1,"string slice too long");
    }
                    /* try { // try from 005fba78 to 006fbaa7 has its CatchHandler @ 005fc160 */
    luaL_checkstack(param_1,iVar5,"string slice too long");
    if (0 < iVar5) {
      lVar4 = 0;
      do {
        lua_pushinteger(param_1,(ulong)*(byte *)(lVar3 + uVar1 + -1 + lVar4));
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar5);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 005fbac4 to 006fbacb has its CatchHandler @ 005fbedc */
                    /* try { // try from 005fbad4 to 006fbae7 has its CatchHandler @ 005fc160 */
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


