/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fb850
 * Function: FUN_005fb850
 * Signature: undefined FUN_005fb850(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_005fb850(lua_State *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = lua_tothread(param_1,-0x2713);
  uVar1 = lua_gettop(param_1);
                    /* try { // try from 005fb878 to 006fb87f has its CatchHandler @ 005fbee4 */
  iVar2 = FUN_005fb6b4(param_1,uVar4,uVar1);
  if (iVar2 < 0) {
    iVar3 = lua_isstring(param_1,-1);
    if (iVar3 != 0) {
                    /* try { // try from 005fb8a0 to 006fb8c7 has its CatchHandler @ 005fbd8c */
      luaL_where(param_1,1);
      lua_insert(param_1,-2);
      lua_concat(param_1,2);
    }
    lua_error(param_1);
  }
                    /* try { // try from 005fb8c8 to 006fb8d3 has its CatchHandler @ 005fc160 */
                    /* try { // try from 005fb8d4 to 006fb8db has its CatchHandler @ 005fbee0 */
  return iVar2;
}


