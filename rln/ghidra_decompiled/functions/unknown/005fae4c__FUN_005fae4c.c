/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fae4c
 * Function: FUN_005fae4c
 * Signature: undefined FUN_005fae4c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fae4c(lua_State *param_1)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  byte *__nptr;
  ulong uVar4;
  byte *pbVar5;
  double dVar6;
  byte *local_50;
  long local_48;
  
                    /* try { // try from 005fae54 to 006fae8f has its CatchHandler @ 005f9c98 */
                    /* catch() { ... } // from try @ 005fa2b4 with catch @ 005fae58 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 005fa250 with catch @ 005fae6c */
  iVar3 = luaL_optinteger(param_1,2,10);
                    /* try { // try from 005fae90 to 006faeb7 has its CatchHandler @ 005fb16c */
  if (iVar3 == 10) {
    luaL_checkany(param_1,1);
    iVar3 = lua_isnumber(param_1,1);
    if (iVar3 != 0) {
      dVar6 = (double)lua_tonumber(param_1,1);
LAB_005faf3c:
      lua_pushnumber(param_1,dVar6);
      goto LAB_005faf44;
    }
  }
  else {
                    /* try { // try from 005faeb8 to 006faee3 has its CatchHandler @ 005f9c98 */
                    /* catch() { ... } // from try @ 005fa13c with catch @ 005faebc */
    __nptr = (byte *)luaL_checklstring(param_1,1,(ulong *)0x0);
                    /* catch() { ... } // from try @ 005fa0ec with catch @ 005faec0 */
    if (0x22 < iVar3 - 2U) {
      luaL_argerror(param_1,2,"base out of range");
    }
                    /* try { // try from 005faee4 to 006faeef has its CatchHandler @ 005fb16c */
                    /* try { // try from 005faef0 to 006faf23 has its CatchHandler @ 005f9c98 */
    uVar4 = strtoul((char *)__nptr,(char **)&local_50,iVar3);
    pbVar5 = local_50;
                    /* catch() { ... } // from try @ 005f9fc8 with catch @ 005faefc */
                    /* catch() { ... } // from try @ 005f9f68 with catch @ 005faf00 */
    if (__nptr != local_50) {
      bVar1 = *local_50;
      iVar3 = isspace((uint)bVar1);
      while (iVar3 != 0) {
        pbVar5 = pbVar5 + 1;
        bVar1 = *pbVar5;
        iVar3 = isspace((uint)bVar1);
        local_50 = pbVar5;
      }
      if (bVar1 == 0) {
        dVar6 = (double)uVar4;
        goto LAB_005faf3c;
      }
    }
  }
  lua_pushnil(param_1);
LAB_005faf44:
                    /* catch() { ... } // from try @ 005f9efc with catch @ 005faf50 */
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


