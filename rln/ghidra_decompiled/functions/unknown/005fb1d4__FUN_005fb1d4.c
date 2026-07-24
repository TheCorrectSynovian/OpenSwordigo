/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fb1d4
 * Function: FUN_005fb1d4
 * Signature: undefined FUN_005fb1d4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005fb1d4(lua_State *param_1)

{
  int iVar1;
  
  luaL_checkany(param_1,2);
                    /* try { // try from 005fb1f0 to 006fb227 has its CatchHandler @ 005fb1f0
                       catch() { ... } // from try @ 005fb1f0 with catch @ 005fb1f0
                       catch() { ... } // from try @ 005fb22c with catch @ 005fb1f0
                       catch() { ... } // from try @ 005fb2fc with catch @ 005fb1f0
                       catch() { ... } // from try @ 005fb33c with catch @ 005fb1f0
                       catch() { ... } // from try @ 005fbbe0 with catch @ 005fb1f0
                       catch() { ... } // from try @ 005fbfe4 with catch @ 005fb1f0
                       catch() { ... } // from try @ 005fc1ac with catch @ 005fb1f0 */
  lua_settop(param_1,2);
  lua_insert(param_1,1);
  iVar1 = lua_pcall(param_1,0,-1,1);
  lua_pushboolean(param_1,(uint)(iVar1 == 0));
                    /* try { // try from 005fb228 to 006fb22b has its CatchHandler @ 005fbfec */
                    /* try { // try from 005fb22c to 006fb29f has its CatchHandler @ 005fb1f0 */
  lua_replace(param_1,1);
  lua_gettop(param_1);
  return;
}


