/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ea514
 * Function: lua_setlocal
 * Signature: undefined __cdecl lua_setlocal(lua_State * param_1, lua_Debug * param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* lua_setlocal(lua_State*, lua_Debug const*, int) */

char * lua_setlocal(lua_State *param_1,lua_Debug *param_2,int param_3)

{
  lua_State *plVar1;
  char *pcVar2;
  long lVar3;
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
  if ((((int)plVar7[1] == 6) && (lVar6 = *plVar7, *(char *)(lVar6 + 10) == '\0')) &&
     (lVar3 = *(long *)(lVar6 + 0x20), lVar3 != 0)) {
                    /* try { // try from 005ea5dc to 006ea5e3 has its CatchHandler @ 005ea7b4 */
    if (*(long **)(param_1 + 0x28) == plVar9) {
      lVar8 = *(long *)(param_1 + 0x30);
                    /* try { // try from 005ea5f8 to 006ea607 has its CatchHandler @ 005ea7f0 */
      *(long *)(lVar4 + lVar5 * 0x28 + 0x18) = lVar8;
      lVar6 = *plVar7;
    }
    else {
      lVar8 = *(long *)(lVar4 + lVar5 * 0x28 + 0x18);
    }
    pcVar2 = (char *)FUN_005ed810(lVar3,param_3,
                                  (int)((ulong)(lVar8 - *(long *)(*(long *)(lVar6 + 0x20) + 0x18))
                                       >> 2) + -1);
    if (pcVar2 == (char *)0x0) goto LAB_005ea558;
    lVar4 = *plVar9;
                    /* try { // try from 005ea628 to 006ea633 has its CatchHandler @ 005ea770 */
  }
  else {
LAB_005ea558:
    pcVar2 = (char *)0x0;
    lVar4 = *plVar9;
    plVar1 = param_1 + 0x10;
    if (*(long **)(param_1 + 0x28) != plVar9) {
      plVar1 = (lua_State *)(plVar9 + 6);
    }
    if ((param_3 < 1) || (*(long *)plVar1 - lVar4 >> 4 < (long)param_3)) goto LAB_005ea5b0;
    pcVar2 = "(*temporary)";
  }
  lVar5 = *(long *)(param_1 + 0x10);
  lVar4 = lVar4 + (long)param_3 * 0x10;
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(lVar5 + -0x10);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(lVar5 + -8);
LAB_005ea5b0:
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  return pcVar2;
}


