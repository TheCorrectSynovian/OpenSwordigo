/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f9850
 * Function: luaL_pushresult
 * Signature: undefined __cdecl luaL_pushresult(luaL_Buffer * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_pushresult(luaL_Buffer*) */

void luaL_pushresult(luaL_Buffer *param_1)

{
  int iVar1;
  luaL_Buffer *plVar2;
  
  plVar2 = param_1 + 0x18;
  if (*(long *)param_1 - (long)plVar2 == 0) {
    iVar1 = *(int *)(param_1 + 8);
  }
  else {
    lua_pushlstring(*(lua_State **)(param_1 + 0x10),(char *)plVar2,*(long *)param_1 - (long)plVar2);
    *(luaL_Buffer **)param_1 = plVar2;
    iVar1 = *(int *)(param_1 + 8) + 1;
    *(int *)(param_1 + 8) = iVar1;
  }
  lua_concat(*(lua_State **)(param_1 + 0x10),iVar1);
                    /* catch() { ... } // from try @ 005f97a8 with catch @ 005f98ac */
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}


