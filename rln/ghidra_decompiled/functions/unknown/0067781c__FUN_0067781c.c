/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0067781c
 * Function: FUN_0067781c
 * Signature: undefined FUN_0067781c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int * FUN_0067781c(long param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  undefined8 *puVar9;
  
  pcVar7 = *(char **)(param_1 + 0x18);
  cVar1 = *pcVar7;
  if (cVar1 == 'L') {
    piVar3 = (int *)FUN_006776a4();
    return piVar3;
  }
  if (cVar1 == 'T') {
    piVar3 = (int *)FUN_00672cec();
    return piVar3;
  }
  if (cVar1 == 's') {
    if (pcVar7[1] == 'r') {
      *(char **)(param_1 + 0x18) = pcVar7 + 2;
      piVar3 = (int *)FUN_00674b04();
      uVar4 = FUN_006764b0(param_1);
      if (**(char **)(param_1 + 0x18) == 'I') {
        uVar6 = FUN_00672ec4(param_1);
                    /* try { // try from 00677dd0 to 00777ddb has its CatchHandler @ 00677ed4 */
                    /* try { // try from 00677ddc to 00777de3 has its CatchHandler @ 00677e64 */
        uVar4 = FUN_00671f00(param_1,4,uVar4,uVar6);
                    /* try { // try from 00677de4 to 00777ed7 has its CatchHandler @ 00677d9c */
      }
      uVar6 = 1;
      goto LAB_0067790c;
    }
    if (pcVar7[1] == 'p') {
      *(char **)(param_1 + 0x18) = pcVar7 + 2;
      piVar3 = (int *)FUN_0067781c();
      uVar6 = 0x4a;
      uVar4 = 0;
      goto LAB_00677a48;
    }
  }
  else if (cVar1 == 'f') {
    if (pcVar7[1] == 'p') {
      *(char **)(param_1 + 0x18) = pcVar7 + 2;
      if (pcVar7[2] == 'T') {
        lVar8 = 0;
        *(char **)(param_1 + 0x18) = pcVar7 + 3;
      }
      else {
        iVar2 = FUN_00672bbc();
        lVar8 = (long)(iVar2 + 1);
        if (iVar2 + 1 == 0) {
          return (int *)0x0;
        }
      }
      iVar2 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) <= iVar2) {
        return (int *)0x0;
      }
      *(int *)(param_1 + 0x28) = iVar2 + 1;
      piVar3 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0x18);
      if (piVar3 == (int *)0x0) {
        return (int *)0x0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0x18) = 6;
      *(long *)(piVar3 + 2) = lVar8;
      return piVar3;
    }
  }
  else {
    if ((byte)(cVar1 - 0x30U) < 10) {
LAB_00677868:
      piVar3 = (int *)FUN_006764b0(param_1);
      if (piVar3 == (int *)0x0) {
        return (int *)0x0;
      }
      if (**(char **)(param_1 + 0x18) != 'I') {
        return piVar3;
      }
      uVar4 = FUN_00672ec4(param_1);
      uVar6 = 4;
      goto LAB_00677a48;
    }
    if (cVar1 == 'o') {
      if (pcVar7[1] == 'n') {
        *(char **)(param_1 + 0x18) = pcVar7 + 2;
        goto LAB_00677868;
      }
    }
    else if (((cVar1 == 't') || (cVar1 == 'i')) && (pcVar7[1] == 'l')) {
      piVar3 = (int *)0x0;
      if (cVar1 == 't') {
        piVar3 = (int *)FUN_00674b04(param_1);
        pcVar7 = *(char **)(param_1 + 0x18);
      }
      *(char **)(param_1 + 0x18) = pcVar7 + 2;
      uVar4 = FUN_006743b0(param_1,0x45);
      uVar6 = 0x30;
      goto LAB_00677a48;
    }
  }
  piVar3 = (int *)FUN_006762bc(param_1);
  if (piVar3 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar2 = *piVar3;
  if (iVar2 == 0x31) {
    puVar9 = *(undefined8 **)(piVar3 + 2);
    pcVar7 = (char *)*puVar9;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(puVar9 + 2) + -2;
    iVar2 = strcmp(pcVar7,"st");
    if (iVar2 != 0) {
      switch(*(undefined4 *)((long)puVar9 + 0x14)) {
      case 0:
        goto switchD_00677ab0_caseD_0;
      case 1:
        goto switchD_00677b34_caseD_1;
      case 2:
        goto switchD_00677b34_caseD_2;
      case 3:
        goto switchD_00677b34_caseD_3;
      default:
        goto switchD_00677ab0_default;
      }
    }
    uVar4 = FUN_00674b04(param_1);
  }
  else {
    if (iVar2 == 0x32) {
      switch(piVar3[2]) {
      case 0:
switchD_00677ab0_caseD_0:
        uVar6 = 0x35;
        uVar4 = 0;
LAB_00677a48:
        piVar3 = (int *)FUN_00671f00(param_1,uVar6,piVar3,uVar4);
        return piVar3;
      case 1:
        goto switchD_00677ab0_caseD_1;
      case 2:
                    /* try { // try from 00677c14 to 00777c47 has its CatchHandler @ 00677c14
                       catch() { ... } // from try @ 00677c14 with catch @ 00677c14
                       catch() { ... } // from try @ 00677c54 with catch @ 00677c14 */
        pcVar7 = (char *)0x0;
switchD_00677b34_caseD_2:
                    /* try { // try from 00677d9c to 00777dcf has its CatchHandler @ 00677d9c
                       catch() { ... } // from try @ 00677d9c with catch @ 00677d9c
                       catch() { ... } // from try @ 00677de4 with catch @ 00677d9c */
        if ((((char *)**(undefined8 **)(piVar3 + 2))[1] == 'c') &&
           ((cVar1 = *(char *)**(undefined8 **)(piVar3 + 2), (byte)(cVar1 + 0x8eU) < 2 ||
            ((byte)(cVar1 + 0x9dU) < 2)))) {
          uVar4 = FUN_00674b04(param_1);
        }
        else {
          uVar4 = FUN_0067781c(param_1);
        }
        iVar2 = strcmp(pcVar7,"cl");
                    /* try { // try from 00677c48 to 00777c53 has its CatchHandler @ 00677cd8 */
        if (iVar2 == 0) {
          uVar6 = FUN_006743b0(param_1,0x45);
        }
        else {
                    /* try { // try from 00677c54 to 00777d47 has its CatchHandler @ 00677c14 */
          iVar2 = strcmp(pcVar7,"dt");
          if ((iVar2 == 0) || (iVar2 = strcmp(pcVar7,"pt"), iVar2 == 0)) {
            uVar6 = FUN_006764b0(param_1);
            if (**(char **)(param_1 + 0x18) == 'I') {
              uVar5 = FUN_00672ec4(param_1);
              uVar6 = FUN_00671f00(param_1,4,uVar6,uVar5);
            }
          }
          else {
            uVar6 = FUN_0067781c(param_1);
          }
        }
        uVar4 = FUN_00671f00(param_1,0x38,uVar4,uVar6);
        uVar6 = 0x37;
        goto LAB_0067790c;
      case 3:
        pcVar7 = (char *)0x0;
switchD_00677b34_caseD_3:
        iVar2 = strcmp(pcVar7,"qu");
        if (iVar2 == 0) {
          uVar4 = FUN_0067781c(param_1);
          uVar6 = FUN_0067781c(param_1);
          uVar5 = FUN_0067781c(param_1);
        }
        else {
          if (*pcVar7 != 'n') {
            return (int *)0x0;
          }
          if ((pcVar7[1] != 'a') && (pcVar7[1] != 'w')) {
            return (int *)0x0;
          }
          uVar4 = FUN_006743b0(param_1,0x5f);
          uVar6 = FUN_00674b04(param_1);
          pcVar7 = *(char **)(param_1 + 0x18);
          cVar1 = *pcVar7;
          if (cVar1 == 'E') {
            uVar5 = 0;
            *(char **)(param_1 + 0x18) = pcVar7 + 1;
          }
          else if (cVar1 == 'p') {
            if (pcVar7[1] != 'i') {
              return (int *)0x0;
            }
            *(char **)(param_1 + 0x18) = pcVar7 + 2;
            uVar5 = FUN_006743b0(param_1,0x45);
                    /* catch() { ... } // from try @ 00677ddc with catch @ 00677e64 */
          }
          else {
            if ((cVar1 != 'i') || (pcVar7[1] != 'l')) {
switchD_00677ab0_default:
              return (int *)0x0;
            }
            uVar5 = FUN_0067781c(param_1);
          }
        }
        uVar6 = FUN_00671f00(param_1,0x3b,uVar6,uVar5);
        uVar4 = FUN_00671f00(param_1,0x3a,uVar4,uVar6);
        uVar6 = 0x39;
        goto LAB_0067790c;
      default:
        goto switchD_00677ab0_default;
      }
    }
    if (iVar2 != 0x33) {
      return (int *)0x0;
    }
    if (**(char **)(param_1 + 0x18) == '_') {
      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
      uVar4 = FUN_006743b0(param_1,0x45);
      goto LAB_00677900;
    }
switchD_00677ab0_caseD_1:
    uVar4 = FUN_0067781c(param_1);
  }
LAB_00677900:
  uVar6 = 0x36;
LAB_0067790c:
  piVar3 = (int *)FUN_00671f00(param_1,uVar6,piVar3,uVar4);
  return piVar3;
switchD_00677b34_caseD_1:
  cVar1 = *pcVar7;
                    /* catch() { ... } // from try @ 00677c48 with catch @ 00677cd8 */
  if (((cVar1 == 'm') || (cVar1 == 'p')) && (pcVar7[1] == cVar1)) {
    if (**(char **)(param_1 + 0x18) != '_') {
      uVar4 = FUN_0067781c(param_1);
      uVar4 = FUN_00671f00(param_1,0x38,uVar4,uVar4);
      goto LAB_00677900;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  goto switchD_00677ab0_caseD_1;
}


