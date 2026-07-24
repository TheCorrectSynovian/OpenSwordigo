/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f99a0
 * Function: luaL_addvalue
 * Signature: undefined __cdecl luaL_addvalue(luaL_Buffer * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_addvalue(luaL_Buffer*) */

void luaL_addvalue(luaL_Buffer *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  void *__src;
  ulong uVar4;
  ulong uVar5;
  void *__dest;
  uint uVar6;
  lua_State *plVar7;
  luaL_Buffer *plVar8;
  luaL_Buffer *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar7 = *(lua_State **)(param_1 + 0x10);
  __src = (void *)lua_tolstring(plVar7,-1,(ulong *)&local_50);
  __dest = *(void **)param_1;
  if (param_1 + (0x418 - (long)__dest) < local_50) {
    plVar8 = param_1 + 0x18;
    if ((long)__dest - (long)plVar8 != 0) {
      lua_pushlstring(*(lua_State **)(param_1 + 0x10),(char *)plVar8,(long)__dest - (long)plVar8);
      *(luaL_Buffer **)param_1 = plVar8;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      lua_insert(plVar7,-2);
    }
    plVar8 = param_1 + 8;
    iVar1 = *(int *)plVar8;
    *(int *)plVar8 = iVar1 + 1;
    if (0 < iVar1) {
      plVar7 = *(lua_State **)(param_1 + 0x10);
      uVar4 = lua_objlen(plVar7,-1);
      uVar6 = 1;
      do {
        uVar5 = lua_objlen(plVar7,~uVar6);
        uVar2 = (uint)(uVar5 < uVar4 || 8 < (int)(*(int *)plVar8 - uVar6));
        if (uVar2 == 0) {
          uVar5 = 0;
        }
        uVar6 = uVar6 + uVar2;
      } while ((uVar2 != 0) && (uVar4 = uVar5 + uVar4, (int)uVar6 < *(int *)plVar8));
      lua_concat(plVar7,uVar6);
      *(uint *)plVar8 = (1 - uVar6) + *(int *)plVar8;
    }
  }
  else {
    memcpy(__dest,__src,(size_t)local_50);
    *(luaL_Buffer **)param_1 = local_50 + *(long *)param_1;
    lua_settop(plVar7,-2);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


