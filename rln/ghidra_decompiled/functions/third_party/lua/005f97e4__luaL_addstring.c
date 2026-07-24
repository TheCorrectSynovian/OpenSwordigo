/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f97e4
 * Function: luaL_addstring
 * Signature: undefined __cdecl luaL_addstring(luaL_Buffer * param_1, char * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_addstring(luaL_Buffer*, char const*) */

void luaL_addstring(luaL_Buffer *param_1,char *param_2)

{
  luaL_Buffer lVar1;
  size_t sVar2;
  luaL_Buffer *plVar3;
  
  sVar2 = strlen(param_2);
  if (sVar2 != 0) {
    do {
      plVar3 = *(luaL_Buffer **)param_1;
      sVar2 = sVar2 - 1;
      if (param_1 + 0x418 <= plVar3) {
        luaL_prepbuffer(param_1);
        plVar3 = *(luaL_Buffer **)param_1;
      }
      lVar1 = (luaL_Buffer)*param_2;
      *(luaL_Buffer **)param_1 = plVar3 + 1;
      *plVar3 = lVar1;
      param_2 = (char *)(param_2 + 1);
    } while (sVar2 != 0);
  }
                    /* catch() { ... } // from try @ 005f97c0 with catch @ 005f9844 */
  return;
}


