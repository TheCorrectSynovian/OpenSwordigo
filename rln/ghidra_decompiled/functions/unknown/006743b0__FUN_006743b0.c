/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006743b0
 * Function: FUN_006743b0
 * Signature: undefined FUN_006743b0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_006743b0(long param_1,char param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  long *plVar11;
  undefined8 *puVar12;
  long local_8;
  
                    /* catch() { ... } // from try @ 00674288 with catch @ 006743b8 */
  pcVar10 = *(char **)(param_1 + 0x18);
                    /* catch() { ... } // from try @ 00674204 with catch @ 006743c4
                       catch() { ... } // from try @ 00674354 with catch @ 006743c4 */
                    /* catch() { ... } // from try @ 0067430c with catch @ 006743d0 */
  plVar11 = &local_8;
  local_8 = 0;
  if (*pcVar10 == param_2) {
    *(char **)(param_1 + 0x18) = pcVar10 + 1;
                    /* try { // try from 00674a88 to 00774a8f has its CatchHandler @ 00674abc */
    uVar5 = FUN_00671f00(param_1,0x2e,0,0);
    return uVar5;
  }
  do {
    uVar1 = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x54) = 1;
    cVar2 = *pcVar10;
    if (cVar2 == 'L') {
      lVar6 = FUN_006776a4(param_1);
LAB_00674574:
      *(undefined4 *)(param_1 + 0x54) = uVar1;
      if (lVar6 == 0) {
        return 0;
      }
    }
    else {
      if (cVar2 == 'T') {
        lVar6 = FUN_00672cec(param_1);
        goto LAB_00674574;
      }
      if (cVar2 == 's') {
        if (pcVar10[1] == 'r') {
          *(char **)(param_1 + 0x18) = pcVar10 + 2;
          uVar5 = FUN_00674b04(param_1);
          uVar8 = FUN_006764b0(param_1);
          if (**(char **)(param_1 + 0x18) == 'I') {
            uVar9 = FUN_00672ec4(param_1);
            uVar8 = FUN_00671f00(param_1,4,uVar8,uVar9);
          }
          lVar6 = FUN_00671f00(param_1,1,uVar5,uVar8);
        }
        else {
          if (pcVar10[1] != 'p') goto LAB_00674464;
          *(char **)(param_1 + 0x18) = pcVar10 + 2;
          uVar5 = FUN_0067781c(param_1);
          lVar6 = FUN_00671f00(param_1,0x4a,uVar5,0);
        }
        goto LAB_00674574;
      }
      if (cVar2 == 'f') {
        if (pcVar10[1] != 'p') goto LAB_00674464;
        *(char **)(param_1 + 0x18) = pcVar10 + 2;
        if (pcVar10[2] == 'T') {
          lVar7 = 0;
          *(char **)(param_1 + 0x18) = pcVar10 + 3;
        }
        else {
          iVar3 = FUN_00672bbc(param_1);
          if (iVar3 + 1 == 0) goto switchD_00674708_default;
          lVar7 = (long)(iVar3 + 1);
        }
        iVar3 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar3) goto switchD_00674708_default;
        *(int *)(param_1 + 0x28) = iVar3 + 1;
        lVar6 = *(long *)(param_1 + 0x20) + (long)iVar3 * 0x18;
        if (lVar6 == 0) goto switchD_00674708_default;
        *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 0x18) = 6;
        *(long *)(lVar6 + 8) = lVar7;
      }
      else {
        if (9 < (byte)(cVar2 - 0x30U)) {
          if (cVar2 == 'o') {
            if (pcVar10[1] == 'n') {
              *(char **)(param_1 + 0x18) = pcVar10 + 2;
              goto LAB_006744d8;
            }
          }
          else if (((cVar2 == 't') || (cVar2 == 'i')) && (pcVar10[1] == 'l')) {
            uVar5 = 0;
            if (cVar2 == 't') {
              uVar5 = FUN_00674b04(param_1);
              pcVar10 = *(char **)(param_1 + 0x18);
            }
            *(char **)(param_1 + 0x18) = pcVar10 + 2;
            uVar8 = FUN_006743b0(param_1,0x45);
            lVar6 = FUN_00671f00(param_1,0x30,uVar5,uVar8);
            goto LAB_00674574;
          }
LAB_00674464:
          piVar4 = (int *)FUN_006762bc(param_1);
          if (piVar4 == (int *)0x0) goto switchD_00674708_default;
          iVar3 = *piVar4;
          if (iVar3 == 0x31) {
            puVar12 = *(undefined8 **)(piVar4 + 2);
            pcVar10 = (char *)*puVar12;
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(puVar12 + 2) + -2;
            iVar3 = strcmp(pcVar10,"st");
            if (iVar3 != 0) {
              switch(*(undefined4 *)((long)puVar12 + 0x14)) {
              case 0:
                goto switchD_00674708_caseD_0;
              case 1:
                goto switchD_00674730_caseD_1;
              case 2:
                goto switchD_00674730_caseD_2;
              case 3:
                goto switchD_00674730_caseD_3;
              default:
                goto switchD_00674708_default;
              }
            }
            uVar5 = FUN_00674b04(param_1);
          }
          else {
            if (iVar3 == 0x32) {
              switch(piVar4[2]) {
              case 0:
switchD_00674708_caseD_0:
                lVar6 = FUN_00671f00(param_1,0x35,piVar4,0);
                goto LAB_00674574;
              case 1:
                goto switchD_00674708_caseD_1;
              case 2:
                pcVar10 = (char *)0x0;
switchD_00674730_caseD_2:
                if ((((char *)**(undefined8 **)(piVar4 + 2))[1] == 'c') &&
                   ((cVar2 = *(char *)**(undefined8 **)(piVar4 + 2), (byte)(cVar2 + 0x8eU) < 2 ||
                    ((byte)(cVar2 + 0x9dU) < 2)))) {
                  uVar5 = FUN_00674b04(param_1);
                    /* catch() { ... } // from try @ 00674a90 with catch @ 00674a28
                       catch() { ... } // from try @ 00674ae8 with catch @ 00674a28 */
                }
                else {
                  uVar5 = FUN_0067781c(param_1);
                }
                iVar3 = strcmp(pcVar10,"cl");
                if (iVar3 == 0) {
                  uVar8 = FUN_006743b0(param_1,0x45);
                }
                else {
                  iVar3 = strcmp(pcVar10,"dt");
                  if ((iVar3 == 0) || (iVar3 = strcmp(pcVar10,"pt"), iVar3 == 0)) {
                    uVar8 = FUN_006764b0(param_1);
                    if (**(char **)(param_1 + 0x18) == 'I') {
                      uVar9 = FUN_00672ec4(param_1);
                      uVar8 = FUN_00671f00(param_1,4,uVar8,uVar9);
                    }
                  }
                  else {
                    uVar8 = FUN_0067781c(param_1);
                  }
                }
                uVar5 = FUN_00671f00(param_1,0x38,uVar5,uVar8);
                lVar6 = FUN_00671f00(param_1,0x37,piVar4,uVar5);
                goto LAB_00674574;
              case 3:
                pcVar10 = (char *)0x0;
switchD_00674730_caseD_3:
                iVar3 = strcmp(pcVar10,"qu");
                if (iVar3 == 0) {
                  uVar5 = FUN_0067781c(param_1);
                  uVar8 = FUN_0067781c(param_1);
                  uVar9 = FUN_0067781c(param_1);
                }
                else {
                  if ((*pcVar10 != 'n') || ((pcVar10[1] != 'a' && (pcVar10[1] != 'w'))))
                  goto switchD_00674708_default;
                  uVar5 = FUN_006743b0(param_1,0x5f);
                  uVar8 = FUN_00674b04(param_1);
                  pcVar10 = *(char **)(param_1 + 0x18);
                  cVar2 = *pcVar10;
                  if (cVar2 == 'E') {
                    uVar9 = 0;
                    *(char **)(param_1 + 0x18) = pcVar10 + 1;
                  }
                  else if (cVar2 == 'p') {
                    /* catch() { ... } // from try @ 00674a88 with catch @ 00674abc */
                    if (pcVar10[1] != 'i') goto switchD_00674708_default;
                    *(char **)(param_1 + 0x18) = pcVar10 + 2;
                    uVar9 = FUN_006743b0(param_1,0x45);
                    /* try { // try from 00674ae0 to 00774ae7 has its CatchHandler @ 00674af0 */
                    /* try { // try from 00674ae8 to 00774af3 has its CatchHandler @ 00674a28 */
                  }
                  else {
                    if ((cVar2 != 'i') || (pcVar10[1] != 'l')) {
switchD_00674708_default:
                      *(undefined4 *)(param_1 + 0x54) = uVar1;
                      return 0;
                    }
                    uVar9 = FUN_0067781c(param_1);
                  }
                }
                uVar8 = FUN_00671f00(param_1,0x3b,uVar8,uVar9);
                uVar5 = FUN_00671f00(param_1,0x3a,uVar5,uVar8);
                lVar6 = FUN_00671f00(param_1,0x39,piVar4,uVar5);
                goto LAB_00674574;
              default:
                goto switchD_00674708_default;
              }
            }
            if (iVar3 != 0x33) goto switchD_00674708_default;
            if (**(char **)(param_1 + 0x18) == '_') {
                    /* try { // try from 00674a90 to 00774adf has its CatchHandler @ 00674a28 */
              *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
              uVar5 = FUN_006743b0(param_1,0x45);
              goto LAB_006744ac;
            }
switchD_00674708_caseD_1:
            uVar5 = FUN_0067781c(param_1);
          }
LAB_006744ac:
          lVar6 = FUN_00671f00(param_1,0x36,piVar4,uVar5);
          goto LAB_00674574;
        }
LAB_006744d8:
        lVar6 = FUN_006764b0(param_1);
        if (lVar6 == 0) goto switchD_00674708_default;
        if (**(char **)(param_1 + 0x18) == 'I') {
          uVar5 = FUN_00672ec4(param_1);
          lVar6 = FUN_00671f00(param_1,4,lVar6,uVar5);
          goto LAB_00674574;
        }
      }
      *(undefined4 *)(param_1 + 0x54) = uVar1;
    }
    lVar6 = FUN_00671f00(param_1,0x2e,lVar6,0);
    *plVar11 = lVar6;
    if (lVar6 == 0) {
      return 0;
    }
    pcVar10 = *(char **)(param_1 + 0x18);
    plVar11 = (long *)(lVar6 + 0x10);
    if (*pcVar10 == param_2) {
      *(char **)(param_1 + 0x18) = pcVar10 + 1;
      return local_8;
    }
  } while( true );
switchD_00674730_caseD_1:
  cVar2 = *pcVar10;
  if (((cVar2 == 'm') || (cVar2 == 'p')) && (pcVar10[1] == cVar2)) {
    if (**(char **)(param_1 + 0x18) != '_') {
      uVar5 = FUN_0067781c(param_1);
      uVar5 = FUN_00671f00(param_1,0x38,uVar5,uVar5);
      goto LAB_006744ac;
    }
                    /* catch() { ... } // from try @ 00674ae0 with catch @ 00674af0 */
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  goto switchD_00674708_caseD_1;
}


