/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fb55c
 * Function: FUN_005fb55c
 * Signature: undefined FUN_005fb55c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fb55c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  lua_State *plVar3;
  long lVar4;
  lua_Debug alStack_b0 [120];
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 005fb574 to 006fb57b has its CatchHandler @ 005fbf58 */
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (lua_State *)lua_tothread(param_1,1);
  if (plVar3 == (lua_State *)0x0) {
                    /* try { // try from 005fb5d0 to 006fb5d7 has its CatchHandler @ 005fbf40 */
                    /* try { // try from 005fb5d8 to 006fb63f has its CatchHandler @ 005fc160 */
    luaL_argerror(param_1,1,"coroutine expected");
    if (param_1 == (lua_State *)0x0) goto LAB_005fb5e8;
  }
  else if (plVar3 == param_1) {
LAB_005fb5e8:
    lVar4 = 0;
    goto LAB_005fb614;
  }
                    /* try { // try from 005fb59c to 006fb5c3 has its CatchHandler @ 005fbd90 */
  iVar2 = lua_status(plVar3);
  if (iVar2 == 1) {
    lVar4 = 1;
  }
  else if (iVar2 == 0) {
    iVar2 = lua_getstack(plVar3,0,alStack_b0);
    if (iVar2 < 1) {
      iVar2 = lua_gettop(plVar3);
      lVar4 = 3;
      if (iVar2 != 0) {
        lVar4 = 1;
      }
    }
    else {
                    /* try { // try from 005fb5c4 to 006fb5cf has its CatchHandler @ 005fc160 */
      lVar4 = 2;
    }
  }
  else {
    lVar4 = 3;
  }
LAB_005fb614:
  lua_pushstring(param_1,(&PTR_s_running_007d8b78)[lVar4]);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 005fb644 to 006fb64f has its CatchHandler @ 005fc14c */
  return 1;
}


