/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005facec
 * Function: FUN_005facec
 * Signature: undefined FUN_005facec(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005facec(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  
                    /* catch() { ... } // from try @ 005fa52c with catch @ 005facf8 */
  luaL_checktype(param_1,2,5);
  FUN_005fb244(param_1,0);
  lua_pushvalue(param_1,2);
  iVar1 = lua_isnumber(param_1,1);
                    /* catch() { ... } // from try @ 005fa518 with catch @ 005fad30 */
                    /* catch() { ... } // from try @ 005fa4a4 with catch @ 005fad34 */
                    /* catch() { ... } // from try @ 005fa45c with catch @ 005fad38 */
  if ((iVar1 == 0) || (dVar3 = (double)lua_tonumber(param_1,1), dVar3 != 0.0)) {
    iVar1 = lua_iscfunction(param_1,-2);
                    /* catch() { ... } // from try @ 005fa448 with catch @ 005fad94 */
    if ((iVar1 != 0) || (iVar1 = lua_setfenv(param_1,-2), iVar1 == 0)) {
      luaL_error(param_1,"\'setfenv\' cannot change environment of given object");
    }
    uVar2 = 1;
  }
  else {
    lua_pushthread(param_1);
    lua_insert(param_1,-2);
    lua_setfenv(param_1,-2);
    uVar2 = 0;
  }
  return uVar2;
}


