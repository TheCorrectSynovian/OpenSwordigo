/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fc1e8
 * Function: FUN_005fc1e8
 * Signature: undefined FUN_005fc1e8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005fc1e8(lua_State *param_1)

{
                    /* try { // try from 005fc1fc to 006fc1ff has its CatchHandler @ 005fd1c8 */
                    /* try { // try from 005fc200 to 006fc273 has its CatchHandler @ 005fc1b8 */
  luaL_checklstring(param_1,1,(ulong *)0x0);
  luaL_checklstring(param_1,2,(ulong *)0x0);
  lua_settop(param_1,2);
  lua_pushinteger(param_1,0);
  lua_pushcclosure(param_1,FUN_005fd99c,3);
  return 1;
}


