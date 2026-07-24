/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f8984
 * Function: luaL_error
 * Signature: undefined __cdecl luaL_error(lua_State * param_1, char * param_2, ...)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_error(lua_State*, char const*, ...) */

void luaL_error(lua_State *param_1,char *param_2,...)

{
  long lVar1;
  int iVar2;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 *local_100;
  undefined1 **ppuStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  lua_Debug alStack_c0 [40];
  int local_98;
  undefined1 auStack_88 [64];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_130 = in_x2;
  uStack_128 = in_x3;
  local_120 = in_x4;
  uStack_118 = in_x5;
  local_110 = in_x6;
  uStack_108 = in_x7;
  iVar2 = lua_getstack(param_1,1,alStack_c0);
  if (iVar2 != 0) {
    lua_getinfo(param_1,"Sl",alStack_c0);
    if (0 < local_98) {
      lua_pushfstring(param_1,"%s:%d: ",auStack_88);
      goto LAB_005f8a54;
    }
  }
  lua_pushlstring(param_1,"",0);
LAB_005f8a54:
  uStack_e8 = 0xffffff80ffffffd0;
  local_100 = (undefined1 *)register0x00000008;
  ppuStack_f8 = &local_100;
  puStack_f0 = &local_130;
  lua_pushvfstring(param_1,param_2,&local_100);
  lua_concat(param_1,2);
  lua_error(param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


