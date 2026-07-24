/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00576be8
 * Function: FUN_00576be8
 * Signature: undefined FUN_00576be8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00576be8(lua_State *param_1)

{
  int iVar1;
  ProgramState *this;
  undefined8 *puVar2;
  void *pvVar3;
  
                    /* try { // try from 00576bf4 to 00676c07 has its CatchHandler @ 0057c25c */
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar2 == (undefined8 *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
                    /* try { // try from 00576c08 to 00676c1b has its CatchHandler @ 0057c254 */
    pvVar3 = (void *)*puVar2;
  }
                    /* try { // try from 00576c1c to 00676c3b has its CatchHandler @ 0057c24c */
  lua_getmetatable(param_1,-2);
  lua_pushvalue(param_1,-2);
  lua_rawget(param_1,-2);
  iVar1 = lua_type(param_1,-1);
                    /* try { // try from 00576c44 to 00676c57 has its CatchHandler @ 0057c244 */
  if (iVar1 < 1) {
    lua_settop(param_1,-3);
                    /* try { // try from 00576c58 to 00676c6b has its CatchHandler @ 0057c23c */
    lua_getfenv(param_1,-2);
                    /* try { // try from 00576c6c to 00676c7f has its CatchHandler @ 0057c234 */
    lua_pushlightuserdata(param_1,pvVar3);
    lua_rawget(param_1,-2);
                    /* try { // try from 00576c80 to 00676c93 has its CatchHandler @ 0057c22c */
    iVar1 = lua_type(param_1,-1);
    if (iVar1 == 5) {
                    /* try { // try from 00576c94 to 00676cb3 has its CatchHandler @ 0057c224 */
      lua_pushvalue(param_1,-3);
      lua_rawget(param_1,-2);
    }
    else {
      lua_pushnil(param_1);
    }
  }
                    /* try { // try from 00576cbc to 00676ccf has its CatchHandler @ 0057c21c */
  return 1;
}


