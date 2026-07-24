/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005eb12c
 * Function: FUN_005eb12c
 * Signature: undefined FUN_005eb12c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


char * FUN_005eb12c(long param_1,long param_2,uint param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  long *plVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  plVar4 = *(long **)(param_2 + 8);
                    /* catch() { ... } // from try @ 005eb090 with catch @ 005eb158 */
  if ((int)plVar4[1] != 6) {
LAB_005eb220:
    pcVar3 = (char *)0x0;
switchD_005eb1fc_caseD_1:
    return pcVar3;
  }
LAB_005eb174:
  lVar7 = *plVar4;
  if (*(char *)(lVar7 + 10) == '\0') {
    lVar9 = *(long *)(lVar7 + 0x20);
    if (*(long *)(param_1 + 0x28) == param_2) {
      lVar8 = *(long *)(param_1 + 0x30);
      *(long *)(param_2 + 0x18) = lVar8;
      lVar7 = *plVar4;
    }
    else {
                    /* catch() { ... } // from try @ 005eafc4 with catch @ 005eb190 */
      lVar8 = *(long *)(param_2 + 0x18);
    }
    iVar1 = (int)((ulong)(lVar8 - *(long *)(*(long *)(lVar7 + 0x20) + 0x18)) >> 2) + -1;
    lVar7 = FUN_005ed810(lVar9,param_3 + 1,iVar1);
    *param_4 = lVar7;
    if (lVar7 != 0) {
      return "local";
    }
    uVar2 = FUN_005eab24(lVar9,iVar1,param_3);
                    /* catch() { ... } // from try @ 005eafb0 with catch @ 005eb1ec */
    pcVar3 = (char *)0x0;
    switch(uVar2 & 0x3f) {
    case 0:
      goto switchD_005eb1fc_caseD_0;
    default:
      goto switchD_005eb1fc_caseD_1;
    case 4:
                    /* catch() { ... } // from try @ 005eaf6c with catch @ 005eb248 */
      if (*(long *)(lVar9 + 0x38) == 0) {
        puVar6 = &DAT_0069a393;
      }
      else {
        puVar6 = (undefined *)
                 (*(long *)(*(long *)(lVar9 + 0x38) + (ulong)(uVar2 >> 0x17) * 8) + 0x18);
      }
      *param_4 = (long)puVar6;
      return "upvalue";
    case 5:
      *param_4 = *(long *)(*(long *)(lVar9 + 0x10) + (ulong)(uVar2 >> 0xe) * 0x10) + 0x18;
      return "global";
    case 6:
      if ((uVar2 >> 0x16 & 1) != 0) {
        uVar5 = (ulong)(uVar2 >> 0xe & 0xff);
        if (*(int *)(*(long *)(lVar9 + 0x10) + uVar5 * 0x10 + 8) == 4) {
          puVar6 = (undefined *)(*(long *)(*(long *)(lVar9 + 0x10) + uVar5 * 0x10) + 0x18);
          goto LAB_005eb2f8;
        }
      }
                    /* try { // try from 005eb2f4 to 006eb39f has its CatchHandler @ 005eb2f4
                       catch() { ... } // from try @ 005eb2f4 with catch @ 005eb2f4
                       catch() { ... } // from try @ 005eb4bc with catch @ 005eb2f4
                       catch() { ... } // from try @ 005eb688 with catch @ 005eb2f4 */
      puVar6 = &DAT_0069a393;
LAB_005eb2f8:
      *param_4 = (long)puVar6;
      return "field";
    case 0xb:
      if ((uVar2 >> 0x16 & 1) == 0) {
LAB_005eb2d8:
        puVar6 = &DAT_0069a393;
      }
      else {
        uVar5 = (ulong)(uVar2 >> 0xe & 0xff);
        if (*(int *)(*(long *)(lVar9 + 0x10) + uVar5 * 0x10 + 8) != 4) goto LAB_005eb2d8;
        puVar6 = (undefined *)(*(long *)(*(long *)(lVar9 + 0x10) + uVar5 * 0x10) + 0x18);
      }
      pcVar3 = "method";
      *param_4 = (long)puVar6;
      goto switchD_005eb1fc_caseD_1;
    }
  }
  goto LAB_005eb220;
switchD_005eb1fc_caseD_0:
  param_3 = uVar2 >> 0x17;
  if (((uVar2 >> 6 & 0xff) <= param_3) || (plVar4 = *(long **)(param_2 + 8), (int)plVar4[1] != 6))
  goto LAB_005eb220;
  goto LAB_005eb174;
}


