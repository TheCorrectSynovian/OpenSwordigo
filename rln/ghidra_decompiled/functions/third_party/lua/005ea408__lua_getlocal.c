/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ea408
 * Function: lua_getlocal
 * Signature: undefined __cdecl lua_getlocal(lua_State * param_1, lua_Debug * param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_getlocal(lua_State*, lua_Debug const*, int) */

char * lua_getlocal(lua_State *param_1,lua_Debug *param_2,int param_3)

{
  lua_State *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  lVar4 = *(long *)(param_1 + 0x50);
  lVar5 = (long)*(int *)(param_2 + 0x74);
  plVar9 = (long *)(lVar4 + lVar5 * 0x28);
  plVar7 = (long *)plVar9[1];
                    /* catch() { ... } // from try @ 005e9024 with catch @ 005ea448 */
  if ((((int)plVar7[1] == 6) && (lVar6 = *plVar7, *(char *)(lVar6 + 10) == '\0')) &&
     (lVar2 = *(long *)(lVar6 + 0x20), lVar2 != 0)) {
    if (*(long **)(param_1 + 0x28) == plVar9) {
      lVar8 = *(long *)(param_1 + 0x30);
                    /* catch() { ... } // from try @ 005e8cbc with catch @ 005ea4e0 */
      *(long *)(lVar4 + lVar5 * 0x28 + 0x18) = lVar8;
      lVar6 = *plVar7;
    }
    else {
      lVar8 = *(long *)(lVar4 + lVar5 * 0x28 + 0x18);
    }
                    /* try { // try from 005ea4ec to 006ea5db has its CatchHandler @ 005ea4ec
                       catch() { ... } // from try @ 005ea4ec with catch @ 005ea4ec
                       catch() { ... } // from try @ 005ea6cc with catch @ 005ea4ec
                       catch() { ... } // from try @ 005ea750 with catch @ 005ea4ec
                       catch() { ... } // from try @ 005ea8f8 with catch @ 005ea4ec */
    pcVar3 = (char *)FUN_005ed810(lVar2,param_3,
                                  (int)((ulong)(lVar8 - *(long *)(*(long *)(lVar6 + 0x20) + 0x18))
                                       >> 2) + -1);
    if (pcVar3 != (char *)0x0) {
      lVar4 = *plVar9;
      goto LAB_005ea48c;
    }
  }
                    /* catch() { ... } // from try @ 005e8d20 with catch @ 005ea44c */
  lVar4 = *plVar9;
  plVar1 = param_1 + 0x10;
  if (*(long **)(param_1 + 0x28) != plVar9) {
    plVar1 = (lua_State *)(plVar9 + 6);
  }
  if (param_3 < 1) {
    return (char *)0x0;
  }
  if (*(long *)plVar1 - lVar4 >> 4 < (long)param_3) {
    return (char *)0x0;
  }
  pcVar3 = "(*temporary)";
LAB_005ea48c:
  FUN_005e6740(param_1,lVar4 + (long)(param_3 + -1) * 0x10);
  return pcVar3;
}


