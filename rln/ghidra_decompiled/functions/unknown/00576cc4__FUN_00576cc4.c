/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00576cc4
 * Function: FUN_00576cc4
 * Signature: undefined FUN_00576cc4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00576cc4(lua_State *param_1)

{
  int iVar1;
  ProgramState *this;
  undefined8 *puVar2;
  void *pvVar3;
  
                    /* try { // try from 00576cd0 to 00676ce3 has its CatchHandler @ 0057c214 */
  this = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  puVar2 = (undefined8 *)Caver::ProgramState::PointerAtStackIndex(this,1);
  if (puVar2 == (undefined8 *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
                    /* try { // try from 00576ce4 to 00676cf7 has its CatchHandler @ 0057c20c */
    pvVar3 = (void *)*puVar2;
  }
                    /* try { // try from 00576cf8 to 00676d0b has its CatchHandler @ 0057c204 */
  lua_getfenv(param_1,-3);
  lua_pushlightuserdata(param_1,pvVar3);
                    /* try { // try from 00576d0c to 00676d2b has its CatchHandler @ 00579b14 */
  lua_rawget(param_1,-2);
  iVar1 = lua_type(param_1,-1);
  if (iVar1 != 5) {
    lua_settop(param_1,-2);
                    /* try { // try from 00576d34 to 00676d47 has its CatchHandler @ 00579b10 */
    lua_createtable(param_1,0,0);
                    /* try { // try from 00576d48 to 00676d5b has its CatchHandler @ 00579ab0 */
    lua_pushlightuserdata(param_1,pvVar3);
    lua_pushvalue(param_1,-2);
                    /* try { // try from 00576d5c to 00676d6f has its CatchHandler @ 00579a50 */
    lua_rawset(param_1,-4);
  }
                    /* try { // try from 00576d70 to 00676d83 has its CatchHandler @ 005799f0 */
  lua_pushvalue(param_1,-4);
  lua_pushvalue(param_1,-4);
                    /* try { // try from 00576d84 to 00676da3 has its CatchHandler @ 0057998c */
  lua_rawset(param_1,-3);
  return 0;
}


