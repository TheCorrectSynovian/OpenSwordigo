/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fb68c
 * Function: FUN_005fb68c
 * Signature: undefined FUN_005fb68c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005fb68c(lua_State *param_1)

{
  int iVar1;
  
                    /* try { // try from 005fb698 to 006fb6c7 has its CatchHandler @ 005fbde4 */
  iVar1 = lua_gettop(param_1);
  lua_yield(param_1,iVar1);
  return;
}


