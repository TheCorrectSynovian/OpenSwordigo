/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fd99c
 * Function: FUN_005fd99c
 * Signature: undefined FUN_005fd99c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_005fd99c(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  ulong local_280;
  long local_278;
  ulong local_270;
  lua_State *local_268;
  int local_260;
  long local_58;
  
                    /* try { // try from 005fd9b0 to 006fdac3 has its CatchHandler @ 005fd9b0
                       catch() { ... } // from try @ 005fd9b0 with catch @ 005fd9b0
                       catch() { ... } // from try @ 005fdb54 with catch @ 005fd9b0 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = lua_tolstring(param_1,-0x2713,&local_280);
  uVar3 = lua_tolstring(param_1,-0x2714,(ulong *)0x0);
  local_270 = lVar2 + local_280;
  local_278 = lVar2;
  local_268 = param_1;
  lVar4 = lua_tointeger(param_1,-0x2715);
  if (lVar4 <= (long)local_280) {
    uVar7 = lVar2 + lVar4;
    do {
      local_260 = 0;
      uVar5 = FUN_005fcdb4(&local_278,uVar7,uVar3);
      if (uVar5 != 0) {
        lVar2 = uVar5 - lVar2;
        if (uVar7 == uVar5) {
          lVar2 = lVar2 + 1;
        }
        lua_pushinteger(param_1,lVar2);
        lua_replace(param_1,-0x2715);
        iVar6 = local_260;
        if (local_260 == 0 && uVar7 != 0) {
          iVar6 = 1;
        }
        luaL_checkstack(local_268,iVar6,"too many captures");
        if (0 < iVar6) {
          iVar8 = 0;
          do {
                    /* try { // try from 005fdac4 to 006fdad7 has its CatchHandler @ 005fdd50 */
            FUN_005fd8d8(&local_278,iVar8,uVar7,uVar5);
                    /* try { // try from 005fdad8 to 006fdae3 has its CatchHandler @ 005fdce0 */
            iVar8 = iVar8 + 1;
          } while (iVar6 != iVar8);
        }
        goto LAB_005fda44;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 <= local_270);
  }
  iVar6 = 0;
LAB_005fda44:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


