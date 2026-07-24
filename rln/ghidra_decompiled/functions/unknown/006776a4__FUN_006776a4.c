/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006776a4
 * Function: FUN_006776a4
 * Signature: undefined FUN_006776a4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_006776a4(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  pcVar6 = *(char **)(param_1 + 0x18);
  if (*pcVar6 != 'L') {
    return 0;
  }
  pcVar4 = pcVar6 + 1;
  *(char **)(param_1 + 0x18) = pcVar4;
  if (pcVar6[1] == 'Z') {
    cVar3 = 'Z';
  }
  else {
    if (pcVar6[1] != '_') {
      piVar1 = (int *)FUN_00674b04();
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      if ((*piVar1 == 0x27) && (*(int *)(*(long *)(piVar1 + 2) + 0x1c) != 0)) {
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - *(int *)(*(long *)(piVar1 + 2) + 8);
      }
      pcVar4 = *(char **)(param_1 + 0x18);
      uVar7 = 0x3c;
      cVar3 = *pcVar4;
      pcVar6 = pcVar4;
      if (cVar3 == 'n') {
        pcVar6 = pcVar4 + 1;
        *(char **)(param_1 + 0x18) = pcVar6;
        uVar7 = 0x3d;
        cVar3 = pcVar4[1];
      }
      pcVar4 = pcVar6;
      if (cVar3 == 'E') {
        iVar5 = 0;
      }
      else {
        do {
          if (cVar3 == '\0') {
            return 0;
          }
          pcVar4 = pcVar4 + 1;
          *(char **)(param_1 + 0x18) = pcVar4;
          cVar3 = *pcVar4;
        } while (cVar3 != 'E');
        iVar5 = (int)pcVar4 - (int)pcVar6;
      }
      uVar2 = FUN_00671fa0(param_1,pcVar6,iVar5);
      uVar7 = FUN_00671f00(param_1,uVar7,piVar1,uVar2);
      pcVar4 = *(char **)(param_1 + 0x18);
      cVar3 = *pcVar4;
      goto LAB_0067777c;
    }
    pcVar4 = pcVar6 + 2;
    *(char **)(param_1 + 0x18) = pcVar4;
    cVar3 = pcVar6[2];
  }
  uVar7 = 0;
  if (cVar3 == 'Z') {
    *(char **)(param_1 + 0x18) = pcVar4 + 1;
    uVar7 = FUN_00676fe0(param_1,0);
    pcVar4 = *(char **)(param_1 + 0x18);
    cVar3 = *pcVar4;
  }
LAB_0067777c:
  if (cVar3 != 'E') {
    return 0;
  }
  *(char **)(param_1 + 0x18) = pcVar4 + 1;
  return uVar7;
}


