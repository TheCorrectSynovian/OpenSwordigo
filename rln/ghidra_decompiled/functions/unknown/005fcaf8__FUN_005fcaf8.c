/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fcaf8
 * Function: FUN_005fcaf8
 * Signature: undefined FUN_005fcaf8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_005fcaf8(lua_State *param_1,int param_2)

{
  void *__s1;
  ulong uVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  char *__s;
  long lVar6;
  void *pvVar7;
  char *pcVar8;
  ulong uVar9;
  int iVar10;
  void *__s_00;
  size_t __n;
  ulong uVar11;
  size_t __n_00;
  ulong local_298;
  ulong local_290;
  long local_288;
  ulong local_280;
  lua_State *local_278;
  int local_270;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005fcb28 to 006fcb4f has its CatchHandler @ 005fcf3c */
  lVar5 = luaL_checklstring(param_1,1,&local_290);
  __s = (char *)luaL_checklstring(param_1,2,&local_298);
  lVar6 = luaL_optinteger(param_1,3,1);
  uVar9 = (local_290 + 1 & lVar6 >> 0x3f) + lVar6;
  uVar9 = uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU);
  uVar11 = uVar9 - 1;
  uVar1 = local_290;
  if (uVar11 <= local_290) {
    uVar1 = uVar11;
  }
  uVar11 = 0;
  if (0 < (long)uVar9) {
    uVar11 = uVar1;
  }
  if ((param_2 == 0) ||
     ((iVar4 = lua_toboolean(param_1,4), iVar4 == 0 &&
      (pcVar8 = strpbrk(__s,"^$*+?.([%-"), pcVar8 != (char *)0x0)))) {
    cVar2 = *__s;
    uVar11 = lVar5 + uVar11;
    local_280 = lVar5 + local_290;
    local_288 = lVar5;
    local_278 = param_1;
    pcVar8 = __s + 1;
    if (cVar2 != '^') {
      pcVar8 = __s;
    }
    do {
      local_270 = 0;
      lVar6 = FUN_005fcdb4(&local_288,uVar11,pcVar8);
      if (lVar6 != 0) {
        if (param_2 == 0) {
          iVar4 = local_270;
          if (local_270 == 0 && uVar11 != 0) {
            iVar4 = 1;
          }
          luaL_checkstack(local_278,iVar4,"too many captures");
          if (0 < iVar4) {
            iVar10 = 0;
            do {
              FUN_005fd8d8(&local_288,iVar10,uVar11,lVar6);
              iVar10 = iVar10 + 1;
            } while (iVar4 != iVar10);
          }
        }
        else {
          lua_pushinteger(param_1,(1 - lVar5) + uVar11);
          lua_pushinteger(param_1,lVar6 - lVar5);
          iVar4 = local_270;
          luaL_checkstack(local_278,local_270,"too many captures");
          if (0 < iVar4) {
            iVar10 = 0;
            do {
              FUN_005fd8d8(&local_288,iVar10,0,0);
              iVar10 = iVar10 + 1;
            } while (iVar4 != iVar10);
          }
          iVar4 = iVar4 + 2;
        }
        goto LAB_005fcc8c;
      }
    } while ((uVar11 < local_280) && (uVar11 = uVar11 + 1, cVar2 != '^'));
  }
  else {
    pvVar7 = (void *)(lVar5 + uVar11);
    if (local_298 == 0) {
      if (pvVar7 != (void *)0x0) {
LAB_005fcd88:
        lua_pushinteger(param_1,(long)pvVar7 + (1 - lVar5));
        lua_pushinteger(param_1,(long)pvVar7 + (local_298 - lVar5));
        iVar4 = 2;
        goto LAB_005fcc8c;
      }
    }
    else {
                    /* try { // try from 005fcbb0 to 006fcbd7 has its CatchHandler @ 005fd258 */
      if (local_298 <= local_290 - uVar11) {
        __n = local_298 - 1;
        __n_00 = (local_290 - uVar11) - __n;
        if (__n_00 != 0) {
          cVar2 = *__s;
          __s_00 = pvVar7;
          do {
            pvVar7 = memchr(__s_00,(int)cVar2,__n_00);
            if (pvVar7 == (void *)0x0) break;
            __s1 = (void *)((long)pvVar7 + 1);
            iVar4 = memcmp(__s1,__s + 1,__n);
            if (iVar4 == 0) goto LAB_005fcd88;
                    /* try { // try from 005fcbf8 to 006fcbfb has its CatchHandler @ 005fd1dc */
                    /* try { // try from 005fcbfc to 006fce4b has its CatchHandler @ 005fc1b8 */
            __n_00 = (long)__s_00 + (__n_00 - (long)__s1);
            __s_00 = __s1;
          } while (__n_00 != 0);
        }
      }
    }
  }
  lua_pushnil(param_1);
  iVar4 = 1;
LAB_005fcc8c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


