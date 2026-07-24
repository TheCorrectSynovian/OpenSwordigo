/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f9f9c
 * Function: luaL_loadbuffer
 * Signature: undefined __cdecl luaL_loadbuffer(lua_State * param_1, char * param_2, ulong param_3, char * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_loadbuffer(lua_State*, char const*, unsigned long, char const*) */

void luaL_loadbuffer(lua_State *param_1,char *param_2,ulong param_3,char *param_4)

{
  long lVar1;
  char *local_38;
  ulong uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = param_2;
  uStack_30 = param_3;
                    /* try { // try from 005f9fc8 to 006f9fdb has its CatchHandler @ 005faefc */
  lua_load(param_1,FUN_005f9ff0,&local_38,param_4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 005f9fdc to 006f9feb has its CatchHandler @ 005fafec */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


