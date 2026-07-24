/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fb52c
 * Function: FUN_005fb52c
 * Signature: undefined FUN_005fb52c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fb52c(lua_State *param_1)

{
  int iVar1;
  
                    /* try { // try from 005fb530 to 006fb53f has its CatchHandler @ 005fc0dc */
  iVar1 = lua_pushthread(param_1);
  if (iVar1 != 0) {
    lua_pushnil(param_1);
  }
  return 1;
}


