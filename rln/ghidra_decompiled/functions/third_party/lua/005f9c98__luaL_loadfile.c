/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f9c98
 * Function: luaL_loadfile
 * Signature: undefined __cdecl luaL_loadfile(lua_State * param_1, char * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* luaL_loadfile(lua_State*, char const*) */

undefined4 luaL_loadfile(lua_State *param_1,char *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  long lVar8;
  FILE *pFVar9;
  char *pcVar10;
  undefined4 local_468 [2];
  FILE *local_460;
  long local_58;
  
                    /* try { // try from 005f9c98 to 006f9d2b has its CatchHandler @ 005f9c98
                       catch() { ... } // from try @ 005f9c98 with catch @ 005f9c98
                       catch() { ... } // from try @ 005f9f10 with catch @ 005f9c98
                       catch() { ... } // from try @ 005f9f74 with catch @ 005f9c98
                       catch() { ... } // from try @ 005fa100 with catch @ 005f9c98
                       catch() { ... } // from try @ 005fa25c with catch @ 005f9c98
                       catch() { ... } // from try @ 005fa2b8 with catch @ 005f9c98
                       catch() { ... } // from try @ 005fa360 with catch @ 005f9c98
                       catch() { ... } // from try @ 005fa3c0 with catch @ 005f9c98
                       catch() { ... } // from try @ 005fa46c with catch @ 005f9c98
                       catch() { ... } // from try @ 005fa4a8 with catch @ 005f9c98
                       catch() { ... } // from try @ 005fa550 with catch @ 005f9c98
                       catch() { ... } // from try @ 005fa58c with catch @ 005f9c98
                       catch() { ... } // from try @ 005fa634 with catch @ 005f9c98
                       catch() { ... } // from try @ 005fabfc with catch @ 005f9c98
                       catch() { ... } // from try @ 005fae54 with catch @ 005f9c98
                       catch() { ... } // from try @ 005faeb8 with catch @ 005f9c98
                       catch() { ... } // from try @ 005faef0 with catch @ 005f9c98
                       catch() { ... } // from try @ 005faf80 with catch @ 005f9c98
                       catch() { ... } // from try @ 005fb0b4 with catch @ 005f9c98 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar3 = lua_gettop(param_1);
  iVar3 = iVar3 + 1;
  local_468[0] = 0;
  if (param_2 == (char *)0x0) {
                    /* try { // try from 005f9d40 to 006f9d53 has its CatchHandler @ 005fafac */
    lua_pushlstring(param_1,"=stdin",6);
                    /* try { // try from 005f9d54 to 006f9d5b has its CatchHandler @ 005faf90 */
                    /* try { // try from 005f9d5c to 006f9d6f has its CatchHandler @ 005faf8c */
    pFVar9 = (FILE *)PTR___sF_007e5cd0;
LAB_005f9d60:
    local_460 = pFVar9;
    iVar4 = getc(pFVar9);
    if (iVar4 == 0x23) {
                    /* try { // try from 005f9d70 to 006f9d83 has its CatchHandler @ 005fafa4 */
      local_468[0] = 1;
      do {
        iVar4 = getc(pFVar9);
                    /* try { // try from 005f9d84 to 006f9d93 has its CatchHandler @ 005fb050 */
        if (iVar4 == 10) {
          iVar4 = getc(pFVar9);
          goto LAB_005f9da4;
        }
      } while (iVar4 != -1);
      bVar2 = param_2 != (char *)0x0;
      iVar4 = -1;
    }
    else {
LAB_005f9da4:
      bVar2 = param_2 != (char *)0x0;
      if ((param_2 != (char *)0x0) && (iVar4 == 0x1b)) {
        pFVar9 = freopen(param_2,"rb",pFVar9);
                    /* try { // try from 005f9dcc to 006f9df3 has its CatchHandler @ 005fabb0 */
        local_460 = pFVar9;
        if (pFVar9 == (FILE *)0x0) {
          piVar6 = (int *)__errno();
          pcVar7 = strerror(*piVar6);
          lVar8 = lua_tolstring(param_1,iVar3,(ulong *)0x0);
          lVar8 = lVar8 + 1;
          pcVar10 = "reopen";
          goto LAB_005f9ed4;
        }
        do {
          iVar4 = getc(pFVar9);
          if (iVar4 == 0x1b) break;
        } while (iVar4 != -1);
        bVar2 = true;
        local_468[0] = 0;
      }
    }
    ungetc(iVar4,pFVar9);
    pcVar10 = (char *)lua_tolstring(param_1,-1,(ulong *)0x0);
                    /* try { // try from 005f9e14 to 006f9e3b has its CatchHandler @ 005fb050 */
    uVar5 = lua_load(param_1,FUN_005f9f24,local_468,pcVar10);
    pFVar9 = local_460;
    iVar4 = ferror(local_460);
    if (bVar2) {
      fclose(pFVar9);
    }
    if (iVar4 == 0) {
                    /* try { // try from 005f9e98 to 006f9e9b has its CatchHandler @ 005fafac */
      lua_remove(param_1,iVar3);
      goto LAB_005f9ef0;
    }
    lua_settop(param_1,iVar3);
    piVar6 = (int *)__errno();
                    /* try { // try from 005f9e5c to 006f9e5f has its CatchHandler @ 005fafa4 */
    pcVar7 = strerror(*piVar6);
    lVar8 = lua_tolstring(param_1,iVar3,(ulong *)0x0);
    lVar8 = lVar8 + 1;
    pcVar10 = "read";
  }
  else {
    lua_pushfstring(param_1,"@%s",param_2);
    local_460 = fopen(param_2,"r");
    pFVar9 = local_460;
    if (local_460 != (FILE *)0x0) goto LAB_005f9d60;
    piVar6 = (int *)__errno();
    pcVar7 = strerror(*piVar6);
    lVar8 = lua_tolstring(param_1,iVar3,(ulong *)0x0);
                    /* try { // try from 005f9d2c to 006f9d3f has its CatchHandler @ 005fafa0 */
    lVar8 = lVar8 + 1;
    pcVar10 = "open";
  }
LAB_005f9ed4:
  lua_pushfstring(param_1,"cannot %s %s: %s",pcVar10,lVar8,pcVar7);
  lua_remove(param_1,iVar3);
  uVar5 = 6;
LAB_005f9ef0:
                    /* try { // try from 005f9efc to 006f9f0f has its CatchHandler @ 005faf50 */
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 005f9f10 to 006f9f67 has its CatchHandler @ 005f9c98 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


