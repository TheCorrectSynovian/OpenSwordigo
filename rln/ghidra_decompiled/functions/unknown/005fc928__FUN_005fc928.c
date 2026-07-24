/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fc928
 * Function: FUN_005fc928
 * Signature: undefined FUN_005fc928(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fc928(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 005fc940 to 006fc947 has its CatchHandler @ 005fd474 */
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = luaL_checklstring(param_1,1,&local_40);
  lVar3 = luaL_checkinteger(param_1,2);
                    /* try { // try from 005fc96c to 006fc973 has its CatchHandler @ 005fd424 */
  lVar3 = (local_40 + 1 & lVar3 >> 0x3f) + lVar3;
  lVar4 = luaL_optinteger(param_1,3,-1);
                    /* try { // try from 005fc994 to 006fc9bb has its CatchHandler @ 005fd2dc */
  uVar6 = (local_40 + 1 & lVar4 >> 0x3f) + lVar4;
  uVar6 = uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU);
  if (lVar3 < 2) {
    lVar3 = 1;
  }
  if ((long)uVar6 <= (long)local_40) {
    local_40 = uVar6;
  }
  if ((long)local_40 < lVar3) {
    pcVar5 = "";
    local_40 = 0;
  }
  else {
    pcVar5 = (char *)(lVar2 + lVar3 + -1);
    local_40 = (1 - lVar3) + local_40;
                    /* try { // try from 005fc9dc to 006fca03 has its CatchHandler @ 005fd4e4 */
  }
  lua_pushlstring(param_1,pcVar5,local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


