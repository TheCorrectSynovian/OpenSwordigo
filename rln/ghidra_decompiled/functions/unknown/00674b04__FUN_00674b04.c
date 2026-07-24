/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00674b04
 * Function: FUN_00674b04
 * Signature: undefined FUN_00674b04(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int * FUN_00674b04(long param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  char cVar8;
  code *pcVar9;
  uint uVar10;
  int iVar11;
  long *plVar12;
  int *piVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ushort uVar19;
  long lVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  char *pcVar24;
  int *local_8;
  
  pbVar22 = *(byte **)(param_1 + 0x18);
  bVar7 = *pbVar22;
  if ((bVar7 == 0x56 || bVar7 == 0x72) || (uVar10 = (uint)bVar7, uVar10 == 0x4b)) {
    plVar12 = (long *)FUN_00672000(param_1,&local_8,0);
    if (plVar12 == (long *)0x0) {
      return (int *)0x0;
    }
    if (**(char **)(param_1 + 0x18) == 'F') {
      piVar13 = (int *)FUN_00677e84(param_1);
      *plVar12 = (long)piVar13;
    }
    else {
      piVar13 = (int *)FUN_00674b04();
      *plVar12 = (long)piVar13;
    }
    if (piVar13 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar13 - 0x1fU < 2) {
      lVar20 = *(long *)(piVar13 + 2);
      *(int **)(piVar13 + 2) = local_8;
      local_8 = (int *)*plVar12;
      *plVar12 = lVar20;
    }
    if (local_8 == (int *)0x0) {
      return (int *)0x0;
    }
    iVar11 = *(int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x3c) <= iVar11) {
      return (int *)0x0;
    }
    *(int **)(*(long *)(param_1 + 0x30) + (long)iVar11 * 8) = local_8;
    *(int *)(param_1 + 0x38) = iVar11 + 1;
    return local_8;
  }
  switch(uVar10) {
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x4e:
  case 0x5a:
    local_8 = (int *)FUN_00676a34(param_1);
    break;
  default:
    goto switchD_00674b80_caseD_3a;
  case 0x41:
    pbVar21 = pbVar22 + 1;
    *(byte **)(param_1 + 0x18) = pbVar21;
    if (pbVar22[1] == 0x5f) {
      lVar20 = 0;
    }
    else {
      if ((byte)(pbVar22[1] - 0x30) < 10) {
        pbVar22 = pbVar22 + 2;
        do {
          pbVar23 = pbVar22;
          *(byte **)(param_1 + 0x18) = pbVar23;
          pbVar22 = pbVar23 + 1;
        } while ((byte)(*pbVar23 - 0x30) < 10);
        lVar20 = FUN_00671fa0(param_1,pbVar21,(int)pbVar23 - (int)pbVar21);
joined_r0x006755dc:
        if (lVar20 == 0) goto LAB_00674d28;
        pbVar21 = *(byte **)(param_1 + 0x18);
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(param_1 + 0x54) = 1;
        bVar7 = pbVar22[1];
        if (bVar7 == 0x4c) {
          lVar20 = FUN_006776a4(param_1);
LAB_006755d8:
          *(undefined4 *)(param_1 + 0x54) = uVar2;
          goto joined_r0x006755dc;
        }
        if (bVar7 == 0x54) {
          lVar20 = FUN_00672cec(param_1);
          goto LAB_006755d8;
        }
        if (bVar7 == 0x73) {
          if (pbVar22[2] == 0x72) {
            *(byte **)(param_1 + 0x18) = pbVar22 + 3;
            uVar14 = FUN_00674b04(param_1);
                    /* catch() { ... } // from try @ 006758f8 with catch @ 00675c2c */
            uVar17 = FUN_006764b0(param_1);
            if (**(char **)(param_1 + 0x18) == 'I') {
              uVar18 = FUN_00672ec4(param_1);
              uVar17 = FUN_00671f00(param_1,4,uVar17,uVar18);
              lVar20 = FUN_00671f00(param_1,1,uVar14,uVar17);
            }
            else {
              lVar20 = FUN_00671f00(param_1,1,uVar14,uVar17);
            }
          }
          else {
            if (pbVar22[2] != 0x70) goto LAB_0067557c;
                    /* try { // try from 006756b8 to 007756c3 has its CatchHandler @ 00675e50 */
            *(byte **)(param_1 + 0x18) = pbVar22 + 3;
            uVar14 = FUN_0067781c(param_1);
            lVar20 = FUN_00671f00(param_1,0x4a,uVar14,0);
          }
          goto LAB_006755d8;
        }
        if (bVar7 != 0x66) {
          if ((byte)(bVar7 - 0x30) < 10) {
LAB_00675650:
            lVar20 = FUN_006764b0(param_1);
            if (lVar20 != 0) {
              pbVar21 = *(byte **)(param_1 + 0x18);
              if (*pbVar21 != 0x49) {
                *(undefined4 *)(param_1 + 0x54) = uVar2;
                goto LAB_00674d18;
              }
              uVar14 = FUN_00672ec4(param_1);
                    /* try { // try from 00675694 to 007756a7 has its CatchHandler @ 00675e88 */
              lVar20 = FUN_00671f00(param_1,4,lVar20,uVar14);
              goto LAB_006755d8;
            }
          }
          else {
            if (bVar7 == 0x6f) {
              if (pbVar22[2] == 0x6e) {
                *(byte **)(param_1 + 0x18) = pbVar22 + 3;
                goto LAB_00675650;
              }
            }
            else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 006754e0 with catch @ 0067555c
                        */
              if (((bVar7 == 0x74) || (bVar7 == 0x69)) && (pbVar22[2] == 0x6c)) {
                uVar14 = 0;
                if (bVar7 == 0x74) {
                  uVar14 = FUN_00674b04(param_1);
                }
                *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 2;
                uVar17 = FUN_006743b0(param_1,0x45);
                lVar20 = FUN_00671f00(param_1,0x30,uVar14,uVar17);
                goto LAB_006755d8;
              }
            }
LAB_0067557c:
                    /* try { // try from 00675580 to 007755a7 has its CatchHandler @ 006755b0 */
            piVar13 = (int *)FUN_006762bc(param_1);
            if (piVar13 != (int *)0x0) {
              iVar11 = *piVar13;
              if (iVar11 == 0x31) {
                pcVar24 = (char *)**(undefined8 **)(piVar13 + 2);
                *(int *)(param_1 + 0x50) =
                     *(int *)(param_1 + 0x50) + *(int *)(*(undefined8 **)(piVar13 + 2) + 2) + -2;
                iVar11 = strcmp(pcVar24,"st");
                if (iVar11 == 0) {
                  uVar14 = FUN_00674b04(param_1);
                    /* catch() { ... } // from try @ 006758a0 with catch @ 00675cc0 */
                    /* catch() { ... } // from try @ 00675844 with catch @ 00675cc4 */
LAB_006755c4:
                  lVar20 = FUN_00671f00(param_1,0x36,piVar13,uVar14);
                  goto LAB_006755d8;
                }
                switch(*(undefined4 *)(*(long *)(piVar13 + 2) + 0x14)) {
                case 0:
                  goto switchD_00675914_caseD_0;
                case 1:
                  cVar8 = *pcVar24;
                  if (((cVar8 == 'm') || (cVar8 == 'p')) && (pcVar24[1] == cVar8)) {
                    /* catch() { ... } // from try @ 006758c4 with catch @ 00675c88 */
                    if (**(char **)(param_1 + 0x18) != '_') {
                      uVar14 = FUN_0067781c(param_1);
                      uVar14 = FUN_00671f00(param_1,0x38,uVar14,uVar14);
                      goto LAB_006755c4;
                    }
                    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                    /* try { // try from 0067606c to 0077609f has its CatchHandler @ 00675f6c */
                  }
                  goto switchD_00675914_caseD_1;
                case 2:
                  goto switchD_00675b40_caseD_2;
                case 3:
                  goto switchD_00675b40_caseD_3;
                }
              }
              else if (iVar11 == 0x32) {
                    /* try { // try from 006758f8 to 00775933 has its CatchHandler @ 00675c2c */
                switch(piVar13[2]) {
                case 0:
switchD_00675914_caseD_0:
                  lVar20 = FUN_00671f00(param_1,0x35,piVar13,0);
                  goto LAB_006755d8;
                case 1:
                  goto switchD_00675914_caseD_1;
                case 2:
                  pcVar24 = (char *)0x0;
switchD_00675b40_caseD_2:
                  if ((((char *)**(undefined8 **)(piVar13 + 2))[1] == 'c') &&
                     ((cVar8 = *(char *)**(undefined8 **)(piVar13 + 2), (byte)(cVar8 + 0x8eU) < 2 ||
                      ((byte)(cVar8 + 0x9dU) < 2)))) {
                    /* catch() { ... } // from try @ 00675818 with catch @ 00675d20 */
                    uVar14 = FUN_00674b04(param_1);
                  }
                  else {
                    uVar14 = FUN_0067781c(param_1);
                  }
                  iVar11 = strcmp(pcVar24,"cl");
                  if (iVar11 == 0) {
                    uVar17 = FUN_006743b0(param_1,0x45);
                  }
                  else {
                    iVar11 = strcmp(pcVar24,"dt");
                    if ((iVar11 == 0) || (iVar11 = strcmp(pcVar24,"pt"), iVar11 == 0)) {
                      uVar17 = FUN_006764b0(param_1);
                      if (**(char **)(param_1 + 0x18) == 'I') {
                        uVar18 = FUN_00672ec4(param_1);
                        uVar17 = FUN_00671f00(param_1,4,uVar17,uVar18);
                      }
                    }
                    else {
                    /* try { // try from 006760a8 to 007760b3 has its CatchHandler @ 00675f6c */
                      uVar17 = FUN_0067781c(param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 006760a0 with catch @ 006760b0
                        */
                    }
                  }
                  uVar14 = FUN_00671f00(param_1,0x38,uVar14,uVar17);
                  lVar20 = FUN_00671f00(param_1,0x37,piVar13,uVar14);
                  goto LAB_006755d8;
                case 3:
                    /* try { // try from 00675934 to 00775f5f has its CatchHandler @ 006755b4 */
                  pcVar24 = (char *)0x0;
switchD_00675b40_caseD_3:
                  iVar11 = strcmp(pcVar24,"qu");
                  if (iVar11 == 0) {
                    uVar14 = FUN_0067781c(param_1);
                    uVar17 = FUN_0067781c(param_1);
                    uVar18 = FUN_0067781c(param_1);
LAB_006759bc:
                    uVar17 = FUN_00671f00(param_1,0x3b,uVar17,uVar18);
                    uVar14 = FUN_00671f00(param_1,0x3a,uVar14,uVar17);
                    lVar20 = FUN_00671f00(param_1,0x39,piVar13,uVar14);
                    goto LAB_006755d8;
                  }
                  if ((*pcVar24 == 'n') && ((pcVar24[1] == 'a' || (pcVar24[1] == 'w')))) {
                    uVar14 = FUN_006743b0(param_1,0x5f);
                    uVar17 = FUN_00674b04(param_1);
                    pcVar24 = *(char **)(param_1 + 0x18);
                    cVar8 = *pcVar24;
                    if (cVar8 == 'E') {
                      uVar18 = 0;
                      *(char **)(param_1 + 0x18) = pcVar24 + 1;
                      goto LAB_006759bc;
                    }
                    if (cVar8 == 'p') {
                    /* try { // try from 006760bc to 0077610f has its CatchHandler @ 006760bc
                       catch() { ... } // from try @ 006760bc with catch @ 006760bc
                       catch() { ... } // from try @ 0067611c with catch @ 006760bc
                       catch() { ... } // from try @ 00676170 with catch @ 006760bc
                       catch() { ... } // from try @ 0067624c with catch @ 006760bc */
                      if (pcVar24[1] == 'i') {
                        *(char **)(param_1 + 0x18) = pcVar24 + 2;
                        uVar18 = FUN_006743b0(param_1,0x45);
                        goto LAB_006759bc;
                      }
                    }
                    else if ((cVar8 == 'i') && (pcVar24[1] == 'l')) {
                      uVar18 = FUN_0067781c(param_1);
                      goto LAB_006759bc;
                    }
                  }
                }
              }
              else if (iVar11 == 0x33) {
                    /* try { // try from 006755a8 to 007755b3 has its CatchHandler @ 00675498 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00675580 with catch @ 006755b0
                        */
                    /* catch() { ... } // from try @ 00675934 with catch @ 006755b4 */
                if (**(char **)(param_1 + 0x18) == '_') {
                  *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                  uVar14 = FUN_006743b0(param_1,0x45);
                  goto LAB_006755c4;
                }
switchD_00675914_caseD_1:
                uVar14 = FUN_0067781c(param_1);
                goto LAB_006755c4;
              }
            }
          }
switchD_00675914_default:
          *(undefined4 *)(param_1 + 0x54) = uVar2;
          goto LAB_00674d28;
        }
        if (pbVar22[2] != 0x70) goto LAB_0067557c;
                    /* try { // try from 006756ec to 00775727 has its CatchHandler @ 00675df4 */
        *(byte **)(param_1 + 0x18) = pbVar22 + 3;
        if (pbVar22[3] == 0x54) {
          iVar11 = 0;
          *(byte **)(param_1 + 0x18) = pbVar22 + 4;
        }
        else {
          iVar11 = FUN_00672bbc(param_1);
          iVar11 = iVar11 + 1;
          if (iVar11 == 0) goto switchD_00675914_default;
        }
        iVar6 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar6) goto switchD_00675914_default;
        *(int *)(param_1 + 0x28) = iVar6 + 1;
        lVar20 = *(long *)(param_1 + 0x20) + (long)iVar6 * 0x18;
        if (lVar20 == 0) goto switchD_00675914_default;
        *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar6 * 0x18) = 6;
        *(long *)(lVar20 + 8) = (long)iVar11;
                    /* try { // try from 00675748 to 0077575b has its CatchHandler @ 00675df0 */
        *(undefined4 *)(param_1 + 0x54) = uVar2;
        pbVar21 = *(byte **)(param_1 + 0x18);
      }
LAB_00674d18:
      if (*pbVar21 != 0x5f) goto LAB_00674d28;
    }
    *(byte **)(param_1 + 0x18) = pbVar21 + 1;
    uVar14 = FUN_00674b04(param_1);
                    /* try { // try from 006754e0 to 007754ef has its CatchHandler @ 0067555c */
    local_8 = (int *)FUN_00671f00(param_1,0x2a,lVar20,uVar14);
    break;
  case 0x43:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    uVar14 = FUN_00674b04(param_1);
    local_8 = (int *)FUN_00671f00(param_1,0x25,uVar14,0);
    break;
  case 0x44:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    if (pbVar22[1] == 0) {
      return (int *)0x0;
    }
    *(byte **)(param_1 + 0x18) = pbVar22 + 2;
    switch(pbVar22[1]) {
    case 0x46:
      iVar11 = *(int *)(param_1 + 0x28);
      if (*(int *)(param_1 + 0x2c) <= iVar11) {
                    /* try { // try from 00675630 to 0077566b has its CatchHandler @ 00675e8c */
        uRam0000000000000000 = 0;
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1000,0x67563c);
        (*pcVar9)();
      }
      *(int *)(param_1 + 0x28) = iVar11 + 1;
      local_8 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar11 * 0x18);
      *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar11 * 0x18) = 0x2c;
                    /* try { // try from 0067544c to 0077544f has its CatchHandler @ 00675484 */
      bVar1 = (byte)(pbVar22[2] - 0x30) < 10;
                    /* try { // try from 00675450 to 00775497 has its CatchHandler @ 006752d4 */
      *(ushort *)(local_8 + 4) = (ushort)bVar1;
      if (bVar1) {
        FUN_006725b4(param_1 + 0x18);
      }
      piVar13 = local_8;
      uVar14 = FUN_00674b04(param_1);
      *(undefined8 *)(piVar13 + 2) = uVar14;
      if (*(long *)(local_8 + 2) == 0) {
        return (int *)0x0;
      }
      FUN_006725b4(param_1 + 0x18);
      pcVar24 = *(char **)(param_1 + 0x18);
      uVar19 = 0;
                    /* catch() { ... } // from try @ 0067544c with catch @ 00675484 */
      if (*pcVar24 != '\0') {
        *(char **)(param_1 + 0x18) = pcVar24 + 1;
                    /* try { // try from 00675498 to 007754df has its CatchHandler @ 00675498
                       catch(type#1 @ 00000000) { ... } // from try @ 00675498 with catch @ 00675498
                       catch(type#1 @ 00000000) { ... } // from try @ 006754f0 with catch @ 00675498
                       catch(type#1 @ 00000000) { ... } // from try @ 006755a8 with catch @ 00675498
                        */
        uVar19 = (ushort)(*pcVar24 == 's');
      }
      *(ushort *)((long)local_8 + 0x12) = uVar19;
      return local_8;
    default:
      goto switchD_00674b80_caseD_3a;
    case 0x54:
    case 0x74:
      uVar2 = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x54) = 1;
      bVar7 = pbVar22[2];
      if (bVar7 == 0x4c) {
        lVar20 = FUN_006776a4(param_1);
      }
      else if (bVar7 == 0x54) {
        lVar20 = FUN_00672cec(param_1);
      }
      else if (bVar7 == 0x73) {
                    /* try { // try from 00675818 to 00775823 has its CatchHandler @ 00675d20 */
        if (pbVar22[3] == 0x72) {
                    /* catch() { ... } // from try @ 006757f4 with catch @ 00675d58 */
                    /* catch() { ... } // from try @ 00675798 with catch @ 00675d5c */
          *(byte **)(param_1 + 0x18) = pbVar22 + 4;
          uVar14 = FUN_00674b04(param_1);
          uVar17 = FUN_006764b0(param_1);
          if (**(char **)(param_1 + 0x18) == 'I') {
            uVar18 = FUN_00672ec4(param_1);
                    /* try { // try from 00676110 to 0077611b has its CatchHandler @ 0067634c */
            uVar17 = FUN_00671f00(param_1,4,uVar17,uVar18);
                    /* try { // try from 0067611c to 00776163 has its CatchHandler @ 006760bc */
            lVar20 = FUN_00671f00(param_1,1,uVar14,uVar17);
          }
          else {
            lVar20 = FUN_00671f00(param_1,1,uVar14,uVar17);
          }
        }
        else {
          if (pbVar22[3] != 0x70) goto LAB_00675360;
          *(byte **)(param_1 + 0x18) = pbVar22 + 4;
          uVar14 = FUN_0067781c(param_1);
                    /* try { // try from 00675844 to 0077587f has its CatchHandler @ 00675cc4 */
          lVar20 = FUN_00671f00(param_1,0x4a,uVar14,0);
        }
      }
      else if (bVar7 == 0x66) {
        if (pbVar22[3] != 0x70) goto LAB_00675360;
        *(byte **)(param_1 + 0x18) = pbVar22 + 4;
        if (pbVar22[4] == 0x54) {
          iVar11 = 0;
          *(byte **)(param_1 + 0x18) = pbVar22 + 5;
        }
        else {
          iVar11 = FUN_00672bbc(param_1);
          iVar11 = iVar11 + 1;
          if (iVar11 == 0) goto LAB_00675bd0;
        }
        iVar6 = *(int *)(param_1 + 0x28);
                    /* try { // try from 006758a0 to 007758b3 has its CatchHandler @ 00675cc0 */
        if (*(int *)(param_1 + 0x2c) <= iVar6) goto LAB_00675bd0;
        *(int *)(param_1 + 0x28) = iVar6 + 1;
                    /* try { // try from 006758c4 to 007758cf has its CatchHandler @ 00675c88 */
        lVar15 = *(long *)(param_1 + 0x20) + (long)iVar6 * 0x18;
        lVar20 = 0;
        if (lVar15 != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar6 * 0x18) = 6;
          *(long *)(lVar15 + 8) = (long)iVar11;
          lVar20 = lVar15;
        }
      }
      else {
        if ((byte)(bVar7 - 0x30) < 10) {
LAB_00675768:
                    /* try { // try from 0067576c to 00775777 has its CatchHandler @ 00675db8 */
          lVar20 = FUN_006764b0(param_1);
          if (lVar20 != 0) {
            if (**(char **)(param_1 + 0x18) == 'I') {
              uVar14 = FUN_00672ec4(param_1);
                    /* try { // try from 00675798 to 007757d3 has its CatchHandler @ 00675d5c */
              lVar20 = FUN_00671f00(param_1,4,lVar20,uVar14);
            }
            goto switchD_00675dd4_default;
          }
        }
        else {
          if (bVar7 == 0x6f) {
            if (pbVar22[3] == 0x6e) {
              *(byte **)(param_1 + 0x18) = pbVar22 + 4;
              goto LAB_00675768;
            }
          }
          else if (((bVar7 == 0x74) || (bVar7 == 0x69)) && (pbVar22[3] == 0x6c)) {
            uVar14 = 0;
            if (bVar7 == 0x74) {
              uVar14 = FUN_00674b04(param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00676060 with catch @ 0067609c
                        */
                    /* try { // try from 006760a0 to 007760a7 has its CatchHandler @ 006760b0 */
            }
            *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 2;
            uVar17 = FUN_006743b0(param_1,0x45);
            lVar20 = FUN_00671f00(param_1,0x30,uVar14,uVar17);
            goto switchD_00675dd4_default;
          }
LAB_00675360:
          piVar13 = (int *)FUN_006762bc(param_1);
          if (piVar13 != (int *)0x0) {
            iVar11 = *piVar13;
            if (iVar11 == 0x31) {
              pcVar24 = (char *)**(undefined8 **)(piVar13 + 2);
              *(int *)(param_1 + 0x50) =
                   *(int *)(param_1 + 0x50) + *(int *)(*(undefined8 **)(piVar13 + 2) + 2) + -2;
              iVar11 = strcmp(pcVar24,"st");
              if (iVar11 != 0) {
                lVar20 = 0;
                switch(*(undefined4 *)(*(long *)(piVar13 + 2) + 0x14)) {
                case 0:
                  goto switchD_00675dd4_caseD_0;
                case 1:
                  goto switchD_00675bbc_caseD_1;
                case 2:
                  goto switchD_00675bbc_caseD_2;
                case 3:
                  goto switchD_00675bbc_caseD_3;
                default:
                  goto switchD_00675dd4_default;
                }
              }
                    /* try { // try from 00676164 to 0077616f has its CatchHandler @ 006763bc */
              uVar14 = FUN_00674b04(param_1);
            }
            else {
              if (iVar11 == 0x32) {
                lVar20 = 0;
                    /* catch() { ... } // from try @ 0067576c with catch @ 00675db8 */
                switch(piVar13[2]) {
                case 0:
switchD_00675dd4_caseD_0:
                  lVar20 = FUN_00671f00(param_1,0x35,piVar13,0);
                  break;
                case 1:
                  goto switchD_00675dd4_caseD_1;
                case 2:
                  pcVar24 = (char *)0x0;
switchD_00675bbc_caseD_2:
                    /* catch() { ... } // from try @ 00675748 with catch @ 00675df0 */
                    /* catch() { ... } // from try @ 006756ec with catch @ 00675df4 */
                  if (((char *)**(undefined8 **)(piVar13 + 2))[1] == 'c') {
                    cVar8 = *(char *)**(undefined8 **)(piVar13 + 2);
                    bVar7 = cVar8 + 0x8e;
                    if ((1 < bVar7) && (1 < (byte)(cVar8 + 0x9dU))) goto LAB_00675e04;
                    uVar14 = FUN_00674b04(param_1,bVar7,0);
                  }
                  else {
LAB_00675e04:
                    uVar14 = FUN_0067781c(param_1);
                  }
                  iVar11 = strcmp(pcVar24,"cl");
                  if (iVar11 == 0) {
                    uVar17 = FUN_006743b0(param_1,0x45);
                  }
                  else {
                    iVar11 = strcmp(pcVar24,"dt");
                    if ((iVar11 == 0) || (iVar11 = strcmp(pcVar24,"pt"), iVar11 == 0)) {
                    /* catch() { ... } // from try @ 006756b8 with catch @ 00675e50 */
                      uVar17 = FUN_006764b0(param_1);
                      if (**(char **)(param_1 + 0x18) == 'I') {
                        uVar18 = FUN_00672ec4(param_1);
                        uVar17 = FUN_00671f00(param_1,4,uVar17,uVar18);
                    /* try { // try from 00676060 to 0077606b has its CatchHandler @ 0067609c */
                      }
                    }
                    else {
                      uVar17 = FUN_0067781c(param_1);
                    }
                  }
                  uVar14 = FUN_00671f00(param_1,0x38,uVar14,uVar17);
                    /* catch() { ... } // from try @ 00675694 with catch @ 00675e88 */
                    /* catch() { ... } // from try @ 00675630 with catch @ 00675e8c */
                  lVar20 = FUN_00671f00(param_1,0x37,piVar13,uVar14);
                  break;
                case 3:
                  pcVar24 = (char *)0x0;
switchD_00675bbc_caseD_3:
                    /* catch() { ... } // from try @ 00675600 with catch @ 00675ef0 */
                  iVar11 = strcmp(pcVar24,"qu");
                  if (iVar11 == 0) {
                    uVar14 = FUN_0067781c(param_1);
                    uVar17 = FUN_0067781c(param_1);
                    uVar18 = FUN_0067781c(param_1);
                  }
                  else {
                    if ((*pcVar24 != 'n') || ((pcVar24[1] != 'a' && (pcVar24[1] != 'w'))))
                    goto LAB_00675bd0;
                    uVar14 = FUN_006743b0(param_1,0x5f);
                    uVar17 = FUN_00674b04(param_1);
                    pcVar24 = *(char **)(param_1 + 0x18);
                    cVar8 = *pcVar24;
                    if (cVar8 != 'E') {
                      if (cVar8 == 'p') {
                        if (pcVar24[1] == 'i') {
                          *(char **)(param_1 + 0x18) = pcVar24 + 2;
                          uVar18 = FUN_006743b0(param_1,0x45);
                          goto LAB_00675f74;
                        }
                      }
                      else {
                    /* catch() { ... } // from try @ 006755e0 with catch @ 00675f5c */
                        if ((cVar8 == 'i') && (pcVar24[1] == 'l')) {
                    /* try { // try from 00675f6c to 0077605f has its CatchHandler @ 00675f6c
                       catch(type#1 @ 00000000) { ... } // from try @ 00675f6c with catch @ 00675f6c
                       catch(type#1 @ 00000000) { ... } // from try @ 0067606c with catch @ 00675f6c
                       catch(type#1 @ 00000000) { ... } // from try @ 006760a8 with catch @ 00675f6c
                        */
                          uVar18 = FUN_0067781c(param_1);
                          goto LAB_00675f74;
                        }
                      }
                      goto LAB_00675bd0;
                    }
                    uVar18 = 0;
                    *(char **)(param_1 + 0x18) = pcVar24 + 1;
                  }
LAB_00675f74:
                  uVar17 = FUN_00671f00(param_1,0x3b,uVar17,uVar18);
                  uVar14 = FUN_00671f00(param_1,0x3a,uVar14,uVar17);
                  lVar20 = FUN_00671f00(param_1,0x39,piVar13,uVar14);
                }
                goto switchD_00675dd4_default;
              }
              if (iVar11 != 0x33) goto LAB_00675bd0;
              if (**(char **)(param_1 + 0x18) == '_') {
                *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                uVar14 = FUN_006743b0(param_1,0x45);
                goto LAB_006753a8;
              }
switchD_00675dd4_caseD_1:
              uVar14 = FUN_0067781c(param_1);
            }
LAB_006753a8:
            lVar20 = FUN_00671f00(param_1,0x36,piVar13,uVar14);
            goto switchD_00675dd4_default;
          }
        }
LAB_00675bd0:
        lVar20 = 0;
      }
switchD_00675dd4_default:
      *(undefined4 *)(param_1 + 0x54) = uVar2;
      local_8 = (int *)FUN_00671f00(param_1,0x42,lVar20,0);
      if (local_8 == (int *)0x0) {
        return (int *)0x0;
      }
      pcVar24 = *(char **)(param_1 + 0x18);
      if (*pcVar24 == '\0') {
        return (int *)0x0;
      }
      *(char **)(param_1 + 0x18) = pcVar24 + 1;
      if (*pcVar24 != 'E') {
        return (int *)0x0;
      }
      goto LAB_00674c68;
    case 0x61:
      piVar13 = (int *)FUN_00671fa0(param_1,&DAT_006a06a0,4);
      return piVar13;
    case 100:
      iVar11 = *(int *)(param_1 + 0x28);
      if (iVar11 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar11 + 1;
        piVar13 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar11 * 0x18);
        if (piVar13 != (int *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar11 * 0x18) = 0x27;
          *(undefined ***)(piVar13 + 2) = &PTR_s_decimal64_007b86a0;
                    /* try { // try from 006752d4 to 0077544b has its CatchHandler @ 006752d4
                       catch() { ... } // from try @ 006752d4 with catch @ 006752d4
                       catch() { ... } // from try @ 00675450 with catch @ 006752d4 */
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 9;
          return piVar13;
        }
      }
      break;
    case 0x65:
      iVar11 = *(int *)(param_1 + 0x28);
      if (iVar11 < *(int *)(param_1 + 0x2c)) {
                    /* catch() { ... } // from try @ 0067516c with catch @ 00675158 */
        *(int *)(param_1 + 0x28) = iVar11 + 1;
                    /* try { // try from 00675168 to 0077516b has its CatchHandler @ 0067517c */
        piVar13 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar11 * 0x18);
                    /* try { // try from 0067516c to 0077518f has its CatchHandler @ 00675158 */
        if (piVar13 != (int *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar11 * 0x18) = 0x27;
                    /* catch() { ... } // from try @ 00675168 with catch @ 0067517c */
          *(undefined ***)(piVar13 + 2) = &PTR_s_decimal128_007b86c0;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 10;
          return piVar13;
        }
      }
      break;
    case 0x66:
      iVar11 = *(int *)(param_1 + 0x28);
      if (iVar11 < *(int *)(param_1 + 0x2c)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00675074 with catch @ 00675104
                        */
        *(int *)(param_1 + 0x28) = iVar11 + 1;
        piVar13 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar11 * 0x18);
        if (piVar13 != (int *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar11 * 0x18) = 0x27;
          *(undefined ***)(piVar13 + 2) = &PTR_s_decimal32_007b8680;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 9;
          return piVar13;
        }
      }
      break;
    case 0x68:
      iVar11 = *(int *)(param_1 + 0x28);
                    /* try { // try from 0067509c to 00775107 has its CatchHandler @ 00674ef0 */
      if (iVar11 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar11 + 1;
        piVar13 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar11 * 0x18);
        if (piVar13 != (int *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar11 * 0x18) = 0x27;
          *(undefined ***)(piVar13 + 2) = &PTR_DAT_007b86e0;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 4;
          return piVar13;
        }
      }
      break;
    case 0x69:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00674f8c with catch @ 00675038
                        */
      iVar11 = *(int *)(param_1 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00674f44 with catch @ 00675040
                        */
      if (iVar11 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar11 + 1;
        piVar13 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar11 * 0x18);
        if (piVar13 != (int *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar11 * 0x18) = 0x27;
                    /* try { // try from 00675074 to 0077509b has its CatchHandler @ 00675104 */
          *(undefined ***)(piVar13 + 2) = &PTR_s_char32_t_007b8720;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 8;
          return piVar13;
        }
      }
      break;
    case 0x6e:
      iVar11 = *(int *)(param_1 + 0x28);
      if (iVar11 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar11 + 1;
        piVar13 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar11 * 0x18);
        if (piVar13 != (int *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar11 * 0x18) = 0x27;
          *(undefined ***)(piVar13 + 2) = &PTR_s_decltype_nullptr__007b8740;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x11;
          return piVar13;
        }
      }
      break;
    case 0x70:
      uVar14 = FUN_00674b04(param_1);
      local_8 = (int *)FUN_00671f00(param_1,0x4a,uVar14,0);
      goto LAB_00674c64;
    case 0x73:
      iVar11 = *(int *)(param_1 + 0x28);
      if (iVar11 < *(int *)(param_1 + 0x2c)) {
        *(int *)(param_1 + 0x28) = iVar11 + 1;
        piVar13 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar11 * 0x18);
        if (piVar13 != (int *)0x0) {
          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar11 * 0x18) = 0x27;
          *(undefined ***)(piVar13 + 2) = &PTR_s_char16_t_007b8700;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 8;
          return piVar13;
        }
      }
      break;
    case 0x76:
      local_8 = (int *)FUN_00677fb4(param_1);
      goto LAB_00674c64;
    }
LAB_006754a8:
    local_8 = (int *)0x0;
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1000,0x6754b8);
    (*pcVar9)();
  case 0x46:
    local_8 = (int *)FUN_00677e84(param_1);
    break;
  case 0x47:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    uVar14 = FUN_00674b04(param_1);
    local_8 = (int *)FUN_00671f00(param_1,0x26,uVar14,0);
    break;
  case 0x4d:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    lVar20 = FUN_00674b04(param_1);
    if ((lVar20 == 0) || (lVar15 = FUN_00674b04(param_1), lVar15 == 0)) {
LAB_00674d28:
      local_8 = (int *)0x0;
    }
    else {
      local_8 = (int *)FUN_00671f00(param_1,0x2b,lVar20,lVar15);
    }
    break;
  case 0x4f:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    uVar14 = FUN_00674b04(param_1);
    local_8 = (int *)FUN_00671f00(param_1,0x24,uVar14,0);
    break;
  case 0x50:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    uVar14 = FUN_00674b04(param_1);
    local_8 = (int *)FUN_00671f00(param_1,0x22,uVar14,0);
    break;
  case 0x52:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    uVar14 = FUN_00674b04(param_1);
    local_8 = (int *)FUN_00671f00(param_1,0x23,uVar14,0);
    break;
  case 0x53:
    bVar7 = pbVar22[1];
    if (((9 < (byte)(bVar7 - 0x30)) && (bVar7 != 0x5f)) && (0x19 < (byte)(bVar7 + 0xbf))) {
                    /* try { // try from 006754f0 to 0077557f has its CatchHandler @ 00675498 */
      local_8 = (int *)FUN_00676a34(param_1);
      if (local_8 == (int *)0x0) {
        return (int *)0x0;
      }
      if (*local_8 == 0x18) {
        return local_8;
      }
      goto LAB_00674c68;
    }
    local_8 = (int *)FUN_006721b0(param_1,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00674fb4 with catch @ 00674ef0
                       catch(type#1 @ 00000000) { ... } // from try @ 0067509c with catch @ 00674ef0
                        */
    if (**(char **)(param_1 + 0x18) != 'I') {
      return local_8;
    }
LAB_00674f10:
    piVar13 = local_8;
    uVar14 = FUN_00672ec4(param_1);
    local_8 = (int *)FUN_00671f00(param_1,4,piVar13,uVar14);
    break;
  case 0x54:
    local_8 = (int *)FUN_00672cec(param_1);
    pcVar24 = *(char **)(param_1 + 0x18);
    if (*pcVar24 == 'I') {
      if (*(int *)(param_1 + 0x58) == 0) {
        if (local_8 == (int *)0x0) {
          return (int *)0x0;
        }
        iVar11 = *(int *)(param_1 + 0x38);
        if (*(int *)(param_1 + 0x3c) <= iVar11) {
          return (int *)0x0;
        }
        *(int **)(*(long *)(param_1 + 0x30) + (long)iVar11 * 8) = local_8;
        *(int *)(param_1 + 0x38) = iVar11 + 1;
        goto LAB_00674f10;
      }
      uVar2 = *(undefined4 *)(param_1 + 0x28);
      uVar3 = *(undefined4 *)(param_1 + 0x38);
      uVar4 = *(undefined4 *)(param_1 + 0x40);
      uVar5 = *(undefined4 *)(param_1 + 0x50);
      uVar14 = FUN_00672ec4(param_1);
                    /* try { // try from 00675600 to 0077560b has its CatchHandler @ 00675ef0 */
      if (**(char **)(param_1 + 0x18) == 'I') {
        if (local_8 == (int *)0x0) {
          return (int *)0x0;
        }
        iVar11 = *(int *)(param_1 + 0x38);
        if (*(int *)(param_1 + 0x3c) <= iVar11) {
          return (int *)0x0;
        }
        *(int **)(*(long *)(param_1 + 0x30) + (long)iVar11 * 8) = local_8;
        *(int *)(param_1 + 0x38) = iVar11 + 1;
                    /* try { // try from 006757f4 to 00775807 has its CatchHandler @ 00675d58 */
        local_8 = (int *)FUN_00671f00(param_1,4,local_8,uVar14);
      }
      else {
        *(char **)(param_1 + 0x18) = pcVar24;
        *(undefined4 *)(param_1 + 0x28) = uVar2;
        *(undefined4 *)(param_1 + 0x38) = uVar3;
        *(undefined4 *)(param_1 + 0x40) = uVar4;
        *(undefined4 *)(param_1 + 0x50) = uVar5;
      }
    }
    break;
  case 0x55:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    local_8 = (int *)FUN_00672b14(param_1);
                    /* try { // try from 00674f44 to 00774f4b has its CatchHandler @ 00675040 */
    uVar14 = FUN_00674b04(param_1);
    local_8 = (int *)FUN_00671f00(param_1,0x21,uVar14,local_8);
    break;
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x73:
  case 0x74:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
    iVar11 = *(int *)(param_1 + 0x28);
    uVar16 = -(ulong)(uVar10 - 0x61 >> 0x1f) & 0xffffffe000000000 | (ulong)(uVar10 - 0x61) << 5;
                    /* try { // try from 00674f8c to 00774fb3 has its CatchHandler @ 00675038 */
    if (iVar11 < *(int *)(param_1 + 0x2c)) {
      *(int *)(param_1 + 0x28) = iVar11 + 1;
      piVar13 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar11 * 0x18);
      if (piVar13 != (int *)0x0) {
                    /* try { // try from 00674fb4 to 00775073 has its CatchHandler @ 00674ef0 */
        *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar11 * 0x18) = 0x27;
        *(undefined **)(piVar13 + 2) = &UNK_007b8340 + uVar16;
        iVar11 = *(int *)(&DAT_007b8348 + uVar16);
        *(byte **)(param_1 + 0x18) = pbVar22 + 1;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar11;
        return piVar13;
      }
    }
    goto LAB_006754a8;
  case 0x75:
    *(byte **)(param_1 + 0x18) = pbVar22 + 1;
    uVar14 = FUN_00672b14(param_1);
    local_8 = (int *)FUN_00671f00(param_1,0x28,uVar14,0);
  }
LAB_00674c64:
  if (local_8 != (int *)0x0) {
LAB_00674c68:
    iVar11 = *(int *)(param_1 + 0x38);
    if (iVar11 < *(int *)(param_1 + 0x3c)) {
      *(int **)(*(long *)(param_1 + 0x30) + (long)iVar11 * 8) = local_8;
      *(int *)(param_1 + 0x38) = iVar11 + 1;
      return local_8;
    }
  }
switchD_00674b80_caseD_3a:
  return (int *)0x0;
switchD_00675bbc_caseD_1:
  cVar8 = *pcVar24;
  if (((cVar8 == 'm') || (cVar8 == 'p')) && (pcVar24[1] == cVar8)) {
    cVar8 = **(char **)(param_1 + 0x18);
    if (cVar8 != '_') {
      uVar14 = FUN_0067781c(param_1,cVar8,0);
      uVar14 = FUN_00671f00(param_1,0x38,uVar14,uVar14);
      goto LAB_006753a8;
    }
                    /* try { // try from 00676170 to 00776237 has its CatchHandler @ 006760bc */
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  goto switchD_00675dd4_caseD_1;
}


