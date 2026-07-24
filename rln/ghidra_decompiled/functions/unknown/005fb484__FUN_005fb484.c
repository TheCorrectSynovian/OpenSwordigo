/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fb484
 * Function: FUN_005fb484
 * Signature: undefined FUN_005fb484(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_005fb484(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = lua_tothread(param_1,1);
  if (lVar3 == 0) {
    luaL_argerror(param_1,1,"coroutine expected");
  }
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 005fb4cc to 006fb4d3 has its CatchHandler @ 005fbfb0 */
  uVar2 = FUN_005fb6b4(param_1,lVar3,iVar1 + -1);
  if ((int)uVar2 < 0) {
    lua_pushboolean(param_1,0);
    lua_insert(param_1,-2);
    iVar1 = 2;
  }
  else {
                    /* try { // try from 005fb4e4 to 006fb4eb has its CatchHandler @ 005fbfac */
    lua_pushboolean(param_1,1);
                    /* try { // try from 005fb4f0 to 006fb503 has its CatchHandler @ 005fbfa8 */
    iVar1 = uVar2 + 1;
    lua_insert(param_1,~uVar2);
  }
  return iVar1;
}


