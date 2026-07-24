/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fb6b4
 * Function: FUN_005fb6b4
 * Signature: undefined FUN_005fb6b4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_005fb6b4(lua_State *param_1,lua_State *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  lua_Debug alStack_c0 [120];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005fb6e8 to 006fb70f has its CatchHandler @ 005fc14c */
  if (param_1 == param_2) {
    iVar2 = 0;
  }
  else {
    iVar2 = lua_status(param_2);
    if (iVar2 == 1) {
      iVar2 = 1;
    }
    else if (iVar2 == 0) {
      iVar2 = lua_getstack(param_2,0,alStack_c0);
      if (iVar2 < 1) {
        iVar3 = lua_gettop(param_2);
        iVar2 = 3;
        if (iVar3 != 0) {
          iVar2 = 1;
        }
      }
      else {
        iVar2 = 2;
      }
    }
    else {
      iVar2 = 3;
    }
  }
  iVar3 = lua_checkstack(param_2,param_3);
  if (iVar3 == 0) {
                    /* try { // try from 005fb7e0 to 006fb7e7 has its CatchHandler @ 005fbf38 */
    luaL_error(param_1,"too many arguments to resume");
    if (iVar2 == 1) goto LAB_005fb764;
LAB_005fb7ec:
                    /* try { // try from 005fb7ec to 006fb7ff has its CatchHandler @ 005fbf34 */
    lua_pushfstring(param_1,"cannot resume %s coroutine",(&PTR_s_running_007d8b78)[iVar2]);
  }
  else {
    if (iVar2 != 1) goto LAB_005fb7ec;
LAB_005fb764:
                    /* try { // try from 005fb770 to 006fb79f has its CatchHandler @ 005fc160 */
    lua_xmove(param_1,param_2,param_3);
    lua_setlevel(param_1,param_2);
    uVar4 = lua_resume(param_2,param_3);
    if (uVar4 < 2) {
      iVar2 = lua_gettop(param_2);
      iVar3 = lua_checkstack(param_1,iVar2 + 1);
      if (iVar3 == 0) {
                    /* try { // try from 005fb7bc to 006fb7c3 has its CatchHandler @ 005fbf3c */
        luaL_error(param_1,"too many results to resume");
      }
                    /* try { // try from 005fb7cc to 006fb7cf has its CatchHandler @ 005fc160 */
      lua_xmove(param_2,param_1,iVar2);
      goto LAB_005fb820;
    }
    lua_xmove(param_2,param_1,1);
  }
  iVar2 = -1;
LAB_005fb820:
                    /* try { // try from 005fb82c to 006fb83b has its CatchHandler @ 005fc0a4 */
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}


