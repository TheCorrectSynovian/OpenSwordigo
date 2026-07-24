/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fa010
 * Function: luaL_loadstring
 * Signature: undefined __cdecl luaL_loadstring(lua_State * param_1, char * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_loadstring(lua_State*, char const*) */

void luaL_loadstring(lua_State *param_1,char *param_2)

{
  long lVar1;
  char *local_48;
  size_t sStack_40;
  long local_38;
  
                    /* try { // try from 005fa024 to 006fa04b has its CatchHandler @ 005fab60 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  sStack_40 = strlen(param_2);
  local_48 = param_2;
  lua_load(param_1,FUN_005f9ff0,&local_48,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 005fa06c to 006fa093 has its CatchHandler @ 005fafec */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


