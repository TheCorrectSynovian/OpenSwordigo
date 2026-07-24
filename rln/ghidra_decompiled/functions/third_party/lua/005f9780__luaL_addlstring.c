/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f9780
 * Function: luaL_addlstring
 * Signature: undefined __cdecl luaL_addlstring(luaL_Buffer * param_1, char * param_2, ulong param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_addlstring(luaL_Buffer*, char const*, unsigned long) */

void luaL_addlstring(luaL_Buffer *param_1,char *param_2,ulong param_3)

{
  luaL_Buffer lVar1;
  luaL_Buffer *plVar2;
  
  if (param_3 != 0) {
    do {
      plVar2 = *(luaL_Buffer **)param_1;
                    /* try { // try from 005f97a8 to 006f97bb has its CatchHandler @ 005f98ac */
      param_3 = param_3 - 1;
      if (param_1 + 0x418 <= plVar2) {
        luaL_prepbuffer(param_1);
        plVar2 = *(luaL_Buffer **)param_1;
      }
                    /* try { // try from 005f97c0 to 006f97c7 has its CatchHandler @ 005f9844 */
      lVar1 = (luaL_Buffer)*param_2;
                    /* try { // try from 005f97c8 to 006f98d3 has its CatchHandler @ 005f972c */
      *(luaL_Buffer **)param_1 = plVar2 + 1;
      *plVar2 = lVar1;
      param_2 = (char *)(param_2 + 1);
    } while (param_3 != 0);
  }
  return;
}


