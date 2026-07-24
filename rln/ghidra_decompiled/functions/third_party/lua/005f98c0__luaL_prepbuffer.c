/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f98c0
 * Function: luaL_prepbuffer
 * Signature: undefined __cdecl luaL_prepbuffer(luaL_Buffer * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_prepbuffer(luaL_Buffer*) */

luaL_Buffer * luaL_prepbuffer(luaL_Buffer *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  luaL_Buffer *plVar5;
  lua_State *plVar6;
  uint uVar7;
  
                    /* try { // try from 005f98d4 to 006f9c73 has its CatchHandler @ 005f9c94 */
  plVar5 = param_1 + 0x18;
  if (*(long *)param_1 - (long)plVar5 != 0) {
    lua_pushlstring(*(lua_State **)(param_1 + 0x10),(char *)plVar5,*(long *)param_1 - (long)plVar5);
    iVar1 = *(int *)(param_1 + 8);
    *(luaL_Buffer **)param_1 = plVar5;
    *(int *)(param_1 + 8) = iVar1 + 1;
    if (0 < iVar1) {
      plVar6 = *(lua_State **)(param_1 + 0x10);
      uVar3 = lua_objlen(plVar6,-1);
      uVar7 = 1;
      do {
        uVar4 = lua_objlen(plVar6,~uVar7);
        uVar2 = (uint)(uVar4 < uVar3 || 8 < (int)(*(int *)(param_1 + 8) - uVar7));
        if (uVar2 == 0) {
          uVar4 = 0;
        }
        uVar7 = uVar7 + uVar2;
      } while ((uVar2 != 0) && (uVar3 = uVar4 + uVar3, (int)uVar7 < *(int *)(param_1 + 8)));
      lua_concat(plVar6,uVar7);
      *(uint *)(param_1 + 8) = (1 - uVar7) + *(int *)(param_1 + 8);
    }
  }
  return plVar5;
}


