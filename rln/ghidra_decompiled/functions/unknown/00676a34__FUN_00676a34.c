/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00676a34
 * Function: FUN_00676a34
 * Signature: undefined FUN_00676a34(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_00676a34(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  int *piVar11;
  undefined1 *puVar12;
  char cVar13;
  long lVar14;
  long local_8;
  
  puVar12 = *(undefined1 **)(param_1 + 0x18);
                    /* try { // try from 00676a44 to 00776b37 has its CatchHandler @ 006769f4 */
  switch(*puVar12) {
  case 0x4e:
    *(undefined1 **)(param_1 + 0x18) = puVar12 + 1;
    plVar5 = (long *)FUN_00672000(param_1,&local_8,1);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    pcVar4 = *(char **)(param_1 + 0x18);
    cVar13 = *pcVar4;
    if (cVar13 == 'O') {
      uVar8 = 0x20;
      iVar1 = *(int *)(param_1 + 0x50) + 3;
    }
    else {
      lVar3 = 0;
      if (cVar13 != 'R') {
        lVar14 = 0;
        goto LAB_00676bb0;
      }
                    /* catch() { ... } // from try @ 00676de8 with catch @ 00676e94 */
      uVar8 = 0x1f;
      iVar1 = *(int *)(param_1 + 0x50) + 2;
    }
    *(int *)(param_1 + 0x50) = iVar1;
    *(char **)(param_1 + 0x18) = pcVar4 + 1;
    lVar14 = 0;
    lVar3 = FUN_00671f00(param_1,uVar8,0,0);
    pcVar4 = *(char **)(param_1 + 0x18);
    cVar13 = *pcVar4;
LAB_00676bb0:
    do {
      if (cVar13 == '\0') {
LAB_00676e38:
        *plVar5 = 0;
        return 0;
      }
      pcVar9 = pcVar4;
      if (cVar13 == 'D') {
                    /* try { // try from 00676e10 to 00776f03 has its CatchHandler @ 00676d9c */
        if ((pcVar4[1] & 0xdfU) == 0x54) {
          lVar10 = FUN_00674b04();
          goto LAB_00676e20;
        }
        lVar10 = FUN_006764b0(param_1);
        goto LAB_00676e20;
      }
      do {
        if ((((byte)(cVar13 - 0x30U) < 10) || ((byte)(cVar13 + 0x9fU) < 0x1a)) ||
           ((cVar13 == 'C' || cVar13 == 'U' || (cVar13 == 'L')))) {
          lVar10 = FUN_006764b0(param_1);
          if (lVar14 != 0) goto LAB_00676d9c;
LAB_00676db0:
          if (cVar13 == 'S') goto LAB_00676dec;
        }
        else {
          if (cVar13 == 'S') {
            lVar10 = FUN_006721b0(param_1,1);
            if (lVar14 != 0) {
LAB_00676d9c:
                    /* try { // try from 00676d9c to 00776de7 has its CatchHandler @ 00676d9c
                       catch() { ... } // from try @ 00676d9c with catch @ 00676d9c
                       catch() { ... } // from try @ 00676e10 with catch @ 00676d9c */
              uVar8 = 1;
LAB_00676da0:
              lVar10 = FUN_00671f00(param_1,uVar8,lVar14,lVar10);
              goto LAB_00676db0;
            }
            pcVar4 = *(char **)(param_1 + 0x18);
            cVar13 = *pcVar4;
            lVar14 = lVar10;
            goto LAB_00676bb0;
          }
          if (cVar13 == 'I') {
            if (lVar14 != 0) {
              lVar10 = FUN_00672ec4(param_1);
              uVar8 = 4;
              goto LAB_00676da0;
            }
            goto LAB_00676e38;
          }
          if (cVar13 != 'T') {
            if (cVar13 == 'E') {
              *plVar5 = lVar14;
              if (lVar14 == 0) {
                return 0;
              }
              if (lVar3 != 0) {
                *(long *)(lVar3 + 8) = local_8;
                local_8 = lVar3;
              }
              if (**(char **)(param_1 + 0x18) == 'E') {
                *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                return local_8;
              }
              return 0;
            }
            if ((cVar13 != 'M') || (lVar14 == 0)) goto LAB_00676e38;
            pcVar4 = pcVar9 + 1;
            *(char **)(param_1 + 0x18) = pcVar4;
            cVar13 = pcVar9[1];
            goto LAB_00676bb0;
          }
          lVar10 = FUN_00672cec(param_1);
LAB_00676e20:
          if (lVar14 != 0) goto LAB_00676d9c;
        }
        pcVar9 = *(char **)(param_1 + 0x18);
        cVar13 = *pcVar9;
        lVar14 = lVar10;
      } while (cVar13 == 'E');
      if ((lVar10 == 0) || (iVar1 = *(int *)(param_1 + 0x38), *(int *)(param_1 + 0x3c) <= iVar1))
      goto LAB_00676e38;
      *(long *)(*(long *)(param_1 + 0x30) + (long)iVar1 * 8) = lVar10;
                    /* try { // try from 00676de8 to 00776e0f has its CatchHandler @ 00676e94 */
      *(int *)(param_1 + 0x38) = iVar1 + 1;
LAB_00676dec:
      pcVar4 = *(char **)(param_1 + 0x18);
      cVar13 = *pcVar4;
      lVar14 = lVar10;
    } while( true );
  default:
    lVar3 = FUN_006764b0(param_1);
    if (**(char **)(param_1 + 0x18) == 'I') {
      if (lVar3 == 0) {
        return 0;
      }
      iVar1 = *(int *)(param_1 + 0x38);
      if (*(int *)(param_1 + 0x3c) <= iVar1) {
        return 0;
      }
      *(long *)(*(long *)(param_1 + 0x30) + (long)iVar1 * 8) = lVar3;
      *(int *)(param_1 + 0x38) = iVar1 + 1;
      uVar8 = FUN_00672ec4(param_1);
      lVar3 = FUN_00671f00(param_1,4,lVar3,uVar8);
    }
    break;
  case 0x53:
    if (puVar12[1] == 't') {
      *(undefined1 **)(param_1 + 0x18) = puVar12 + 2;
      uVar8 = FUN_00671fa0(param_1,&DAT_006a06c0,3);
      uVar7 = FUN_006764b0(param_1);
      lVar3 = FUN_00671f00(param_1,1,uVar8,uVar7);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 3;
      if (**(char **)(param_1 + 0x18) != 'I') {
        return lVar3;
      }
      if (lVar3 == 0) {
        return 0;
      }
      iVar1 = *(int *)(param_1 + 0x38);
      if (*(int *)(param_1 + 0x3c) <= iVar1) {
        return 0;
      }
      *(long *)(*(long *)(param_1 + 0x30) + (long)iVar1 * 8) = lVar3;
      *(int *)(param_1 + 0x38) = iVar1 + 1;
    }
    else {
      lVar3 = FUN_006721b0(param_1,0);
                    /* catch() { ... } // from try @ 00676a14 with catch @ 00676b34 */
      if (**(char **)(param_1 + 0x18) != 'I') {
        return lVar3;
      }
    }
    uVar8 = FUN_00672ec4(param_1);
    lVar3 = FUN_00671f00(param_1,4,lVar3,uVar8);
    break;
  case 0x55:
    lVar3 = FUN_006764b0(param_1);
    return lVar3;
  case 0x5a:
    *(undefined1 **)(param_1 + 0x18) = puVar12 + 1;
    uVar8 = FUN_00676fe0(param_1,0);
                    /* catch() { ... } // from try @ 00676a28 with catch @ 00676ac4 */
    pcVar4 = *(char **)(param_1 + 0x18);
    if (*pcVar4 != 'E') {
      return 0;
    }
    *(char **)(param_1 + 0x18) = pcVar4 + 1;
    if (pcVar4[1] == 's') {
      *(char **)(param_1 + 0x18) = pcVar4 + 2;
      iVar1 = FUN_00672c48(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      piVar6 = (int *)FUN_00671fa0(param_1,"string literal",0xe);
    }
    else if (pcVar4[1] == 'd') {
      *(char **)(param_1 + 0x18) = pcVar4 + 2;
      iVar1 = FUN_00672bbc(param_1);
      if (iVar1 < 0) {
        return 0;
      }
      piVar11 = (int *)FUN_00676a34(param_1);
      if ((((piVar11 != (int *)0x0) && (*piVar11 != 0x45)) && (*piVar11 != 0x47)) &&
         (iVar2 = FUN_00672c48(param_1), iVar2 == 0)) {
        return 0;
      }
      iVar2 = *(int *)(param_1 + 0x28);
      piVar6 = (int *)0x0;
      if (iVar2 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar2 + 1;
        piVar6 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0x18);
        if (piVar6 != (int *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 0x18) = 0x46;
          piVar6[4] = iVar1;
          *(int **)(piVar6 + 2) = piVar11;
        }
      }
    }
    else {
      piVar6 = (int *)FUN_00676a34(param_1);
      if (((piVar6 != (int *)0x0) && (*piVar6 != 0x45)) &&
         ((*piVar6 != 0x47 && (iVar1 = FUN_00672c48(param_1), iVar1 == 0)))) {
        return 0;
      }
    }
    lVar3 = FUN_00671f00(param_1,2,uVar8,piVar6);
    return lVar3;
  }
  return lVar3;
}


