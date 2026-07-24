/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00677fb4
 * Function: FUN_00677fb4
 * Signature: undefined FUN_00677fb4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_00677fb4(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  char *pcVar11;
  int *piVar12;
  long lVar13;
  char *pcVar14;
  int *piVar15;
  undefined8 uVar16;
  char cVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulong uVar20;
  undefined8 *puVar21;
  
  pbVar19 = *(byte **)(param_1 + 0x18);
  if (*pbVar19 != 0x5f) {
    iVar5 = *(int *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x2c) <= iVar5) {
      return 0;
    }
    *(int *)(param_1 + 0x28) = iVar5 + 1;
    lVar9 = *(long *)(param_1 + 0x20) + (long)iVar5 * 0x18;
                    /* catch() { ... } // from try @ 00677f0c with catch @ 00678010 */
    if (lVar9 == 0) {
      return 0;
    }
                    /* try { // try from 00678014 to 00778063 has its CatchHandler @ 00678014
                       catch() { ... } // from try @ 00678014 with catch @ 00678014
                       catch() { ... } // from try @ 00678080 with catch @ 00678014 */
    *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar5 * 0x18) = 0x41;
    bVar2 = *pbVar19;
    bVar3 = bVar2 == 0x6e;
    if (bVar3) {
      pbVar18 = pbVar19 + 1;
      *(byte **)(param_1 + 0x18) = pbVar18;
      uVar20 = 0xffffffffffffffff;
      bVar2 = pbVar19[1];
    }
    else {
      uVar20 = 0;
      pbVar18 = pbVar19;
    }
    uVar6 = 0;
    while ((byte)(bVar2 - 0x30) < 10) {
      pbVar18 = pbVar18 + 1;
      *(byte **)(param_1 + 0x18) = pbVar18;
      uVar6 = (uVar6 * 10 + (ulong)bVar2) - 0x30;
      bVar2 = *pbVar18;
                    /* try { // try from 00678064 to 00778077 has its CatchHandler @ 00678174 */
    }
                    /* try { // try from 00678078 to 0077807f has its CatchHandler @ 00678104 */
    *(ulong *)(lVar9 + 8) = (ulong)bVar3 + (uVar6 ^ uVar20);
    goto LAB_00678080;
  }
  pbVar18 = pbVar19 + 1;
  uVar1 = *(undefined4 *)(param_1 + 0x54);
  *(byte **)(param_1 + 0x18) = pbVar18;
  *(undefined4 *)(param_1 + 0x54) = 1;
  bVar2 = pbVar19[1];
                    /* catch() { ... } // from try @ 00678078 with catch @ 00678104 */
  if (bVar2 == 0x4c) {
    lVar9 = FUN_006776a4();
  }
  else if (bVar2 == 0x54) {
    lVar9 = FUN_00672cec();
  }
  else if (bVar2 == 0x73) {
    if (pbVar19[2] == 0x72) {
      *(byte **)(param_1 + 0x18) = pbVar19 + 3;
      uVar7 = FUN_00674b04();
      uVar8 = FUN_006764b0(param_1);
      if (**(char **)(param_1 + 0x18) == 'I') {
        uVar16 = FUN_00672ec4(param_1);
        uVar8 = FUN_00671f00(param_1,4,uVar8,uVar16);
        lVar9 = FUN_00671f00(param_1,1,uVar7,uVar8);
      }
      else {
        lVar9 = FUN_00671f00(param_1,1,uVar7,uVar8);
      }
    }
    else {
      if (pbVar19[2] != 0x70) goto LAB_006781cc;
      *(byte **)(param_1 + 0x18) = pbVar19 + 3;
      uVar7 = FUN_0067781c();
                    /* catch() { ... } // from try @ 00678594 with catch @ 0067876c */
                    /* catch() { ... } // from try @ 006784dc with catch @ 00678770 */
      lVar9 = FUN_00671f00(param_1,0x4a,uVar7,0);
    }
  }
  else {
    if (bVar2 == 0x66) {
      if (pbVar19[2] == 0x70) {
        *(byte **)(param_1 + 0x18) = pbVar19 + 3;
        if (pbVar19[3] == 0x54) {
          lVar13 = 0;
          *(byte **)(param_1 + 0x18) = pbVar19 + 4;
        }
        else {
          iVar5 = FUN_00672bbc();
          if (iVar5 + 1 == 0) goto switchD_006783cc_default;
          lVar13 = (long)(iVar5 + 1);
        }
        iVar5 = *(int *)(param_1 + 0x28);
        if (iVar5 < *(int *)(param_1 + 0x2c)) {
          *(int *)(param_1 + 0x28) = iVar5 + 1;
          lVar9 = *(long *)(param_1 + 0x20) + (long)iVar5 * 0x18;
          if (lVar9 != 0) {
                    /* try { // try from 00678398 to 0077839f has its CatchHandler @ 006787d4 */
            *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar5 * 0x18) = 6;
            *(long *)(lVar9 + 8) = lVar13;
                    /* try { // try from 006783a0 to 007783f3 has its CatchHandler @ 00678178 */
            *(undefined4 *)(param_1 + 0x54) = uVar1;
            pbVar18 = *(byte **)(param_1 + 0x18);
            goto LAB_00678080;
          }
        }
        goto switchD_006783cc_default;
      }
    }
    else {
      if ((byte)(bVar2 - 0x30) < 10) {
LAB_00678310:
        lVar9 = FUN_006764b0(param_1);
        if (lVar9 == 0) goto switchD_006783cc_default;
        pbVar18 = *(byte **)(param_1 + 0x18);
        if (*pbVar18 != 0x49) {
          *(undefined4 *)(param_1 + 0x54) = uVar1;
          goto LAB_00678080;
        }
        uVar7 = FUN_00672ec4(param_1);
        lVar9 = FUN_00671f00(param_1,4,lVar9,uVar7);
                    /* try { // try from 006783f4 to 007783f7 has its CatchHandler @ 006787d0 */
        goto LAB_0067818c;
      }
      if (bVar2 == 0x6f) {
        if (pbVar19[2] == 0x6e) {
          *(byte **)(param_1 + 0x18) = pbVar19 + 3;
          goto LAB_00678310;
        }
      }
      else if (((bVar2 == 0x74) || (bVar2 == 0x69)) && (pbVar19[2] == 0x6c)) {
        uVar7 = 0;
        if (bVar2 == 0x74) {
          uVar7 = FUN_00674b04(param_1);
                    /* catch() { ... } // from try @ 006782f4 with catch @ 00678824 */
          pbVar18 = *(byte **)(param_1 + 0x18);
                    /* catch() { ... } // from try @ 00678298 with catch @ 00678828 */
        }
        *(byte **)(param_1 + 0x18) = pbVar18 + 2;
        uVar8 = FUN_006743b0(param_1,0x45);
                    /* catch() { ... } // from try @ 00678064 with catch @ 00678174 */
                    /* try { // try from 00678178 to 0077820b has its CatchHandler @ 00678178
                       catch() { ... } // from try @ 00678178 with catch @ 00678178
                       catch() { ... } // from try @ 00678210 with catch @ 00678178
                       catch() { ... } // from try @ 006782a0 with catch @ 00678178
                       catch() { ... } // from try @ 006782f8 with catch @ 00678178
                       catch() { ... } // from try @ 006783a0 with catch @ 00678178
                       catch() { ... } // from try @ 006783f8 with catch @ 00678178
                       catch() { ... } // from try @ 00678488 with catch @ 00678178
                       catch() { ... } // from try @ 006784e0 with catch @ 00678178
                       catch() { ... } // from try @ 006785b4 with catch @ 00678178
                       catch() { ... } // from try @ 006785d8 with catch @ 00678178
                       catch() { ... } // from try @ 00678874 with catch @ 00678178 */
        lVar9 = FUN_00671f00(param_1,0x30,uVar7,uVar8);
        goto LAB_0067818c;
      }
    }
LAB_006781cc:
    piVar10 = (int *)FUN_006762bc(param_1);
    if (piVar10 == (int *)0x0) goto switchD_006783cc_default;
    iVar5 = *piVar10;
    if (iVar5 == 0x31) {
      puVar21 = *(undefined8 **)(piVar10 + 2);
      pcVar11 = (char *)*puVar21;
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(puVar21 + 2) + -2;
      iVar4 = strcmp(pcVar11,"st");
      if (iVar4 != 0) {
        switch(*(undefined4 *)((long)puVar21 + 0x14)) {
        case 0:
switchD_006783cc_caseD_0:
                    /* try { // try from 006783f8 to 0077847f has its CatchHandler @ 00678178 */
          lVar9 = FUN_00671f00(param_1,0x35,piVar10,0);
          goto LAB_0067818c;
        case 1:
          cVar17 = *pcVar11;
          if (((cVar17 != 'm') && (cVar17 != 'p')) || (pcVar11[1] != cVar17))
          goto switchD_006783cc_caseD_1;
          pcVar11 = *(char **)(param_1 + 0x18);
          bVar3 = true;
          cVar17 = *pcVar11;
          if (cVar17 != '_') goto LAB_00678214;
          pcVar11 = pcVar11 + 1;
                    /* catch() { ... } // from try @ 006785d0 with catch @ 00678700 */
          *(char **)(param_1 + 0x18) = pcVar11;
          goto LAB_00678704;
        case 2:
switchD_006786a8_caseD_2:
          if ((((char *)**(undefined8 **)(piVar10 + 2))[1] == 'c') &&
             ((cVar17 = *(char *)**(undefined8 **)(piVar10 + 2), (byte)(cVar17 + 0x8eU) < 2 ||
              ((byte)(cVar17 + 0x9dU) < 2)))) {
            lVar9 = FUN_00674b04(param_1);
                    /* try { // try from 00678874 to 0077888f has its CatchHandler @ 00678178 */
          }
          else {
            pcVar14 = *(char **)(param_1 + 0x18);
            cVar17 = *pcVar14;
            if (cVar17 == 'L') {
              lVar9 = FUN_006776a4(param_1);
            }
            else if (cVar17 == 'T') {
              lVar9 = FUN_00672cec(param_1);
            }
            else if (cVar17 == 's') {
              if (pcVar14[1] == 'r') {
                *(char **)(param_1 + 0x18) = pcVar14 + 2;
                uVar7 = FUN_00674b04(param_1);
                    /* catch() { ... } // from try @ 00679ffc with catch @ 0067a1f0 */
                uVar8 = FUN_006764b0(param_1);
                if (**(char **)(param_1 + 0x18) == 'I') {
                  uVar16 = FUN_00672ec4(param_1);
                  uVar8 = FUN_00671f00(param_1,4,uVar8,uVar16);
                  lVar9 = FUN_00671f00(param_1,1,uVar7,uVar8);
                    /* try { // try from 0067a2a0 to 0077a2ab has its CatchHandler @ 0067a2d4 */
                }
                else {
                    /* try { // try from 0067a21c to 0077a29f has its CatchHandler @ 0067a21c
                       catch() { ... } // from try @ 0067a21c with catch @ 0067a21c
                       catch() { ... } // from try @ 0067a2ac with catch @ 0067a21c */
                  lVar9 = FUN_00671f00(param_1,1,uVar7,uVar8);
                }
              }
              else {
                if (pcVar14[1] != 'p') goto LAB_0067855c;
                *(char **)(param_1 + 0x18) = pcVar14 + 2;
                uVar7 = FUN_0067781c(param_1);
                lVar9 = FUN_00671f00(param_1,0x4a,uVar7,0);
              }
            }
            else {
              if (cVar17 == 'f') {
                if (pcVar14[1] != 'p') goto LAB_0067855c;
                *(char **)(param_1 + 0x18) = pcVar14 + 2;
                if (pcVar14[2] == 'T') {
                  iVar5 = 0;
                  *(char **)(param_1 + 0x18) = pcVar14 + 3;
                }
                else {
                  iVar5 = FUN_00672bbc(param_1);
                  iVar5 = iVar5 + 1;
                  if (iVar5 == 0) goto switchD_0067a2e0_default;
                }
                iVar4 = *(int *)(param_1 + 0x28);
                if (iVar4 < *(int *)(param_1 + 0x2c)) {
                  *(int *)(param_1 + 0x28) = iVar4 + 1;
                  lVar9 = *(long *)(param_1 + 0x20) + (long)iVar4 * 0x18;
                  if (lVar9 != 0) {
                    *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 0x18) = 6;
                    *(long *)(lVar9 + 8) = (long)iVar5;
                  }
                  goto LAB_006785bc;
                }
              }
              else if ((byte)(cVar17 - 0x30U) < 10) {
LAB_00678ba8:
                lVar9 = FUN_006764b0(param_1);
                if (lVar9 != 0) {
                  if (**(char **)(param_1 + 0x18) == 'I') {
                    uVar7 = FUN_00672ec4(param_1);
                    lVar9 = FUN_00671f00(param_1,4,lVar9,uVar7);
                  }
                  goto LAB_006785bc;
                }
              }
              else {
                if (cVar17 == 'o') {
                  if (pcVar14[1] == 'n') {
                    *(char **)(param_1 + 0x18) = pcVar14 + 2;
                    goto LAB_00678ba8;
                  }
                }
                else if (((cVar17 == 't') || (cVar17 == 'i')) && (pcVar14[1] == 'l')) {
                  uVar7 = 0;
                  if (cVar17 == 't') {
                    uVar7 = FUN_00674b04(param_1);
                    pcVar14 = *(char **)(param_1 + 0x18);
                  }
                  *(char **)(param_1 + 0x18) = pcVar14 + 2;
                  uVar8 = FUN_006743b0(param_1,0x45);
                  lVar9 = FUN_00671f00(param_1,0x30,uVar7,uVar8);
                  goto LAB_006785bc;
                }
LAB_0067855c:
                piVar12 = (int *)FUN_006762bc(param_1);
                if (piVar12 != (int *)0x0) {
                  iVar5 = *piVar12;
                  if (iVar5 == 0x31) {
                    puVar21 = *(undefined8 **)(piVar12 + 2);
                    pcVar14 = (char *)*puVar21;
                    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(puVar21 + 2) + -2
                    ;
                    iVar5 = strcmp(pcVar14,"st");
                    if (iVar5 == 0) {
                      uVar7 = FUN_00674b04(param_1);
LAB_0067a250:
                      lVar9 = FUN_00671f00(param_1,0x36,piVar12,uVar7);
                      goto LAB_006785bc;
                    }
                    switch(*(undefined4 *)((long)puVar21 + 0x14)) {
                    case 0:
                      goto switchD_0067a2e0_caseD_0;
                    case 1:
                      cVar17 = *pcVar14;
                      if (((cVar17 == 'm') || (cVar17 == 'p')) && (pcVar14[1] == cVar17)) {
                        if (**(char **)(param_1 + 0x18) != '_') {
                          uVar7 = FUN_0067781c(param_1);
                          uVar7 = FUN_00671f00(param_1,0x38,uVar7,uVar7);
                          goto LAB_0067a250;
                        }
                        *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                      }
                      goto switchD_0067a2e0_caseD_1;
                    case 2:
                      goto switchD_00679384_caseD_2;
                    case 3:
                      goto switchD_00679384_caseD_3;
                    }
                  }
                  else if (iVar5 == 0x32) {
                    /* catch() { ... } // from try @ 0067a2a0 with catch @ 0067a2d4 */
                    switch(piVar12[2]) {
                    case 0:
switchD_0067a2e0_caseD_0:
                      lVar9 = FUN_00671f00(param_1,0x35,piVar12,0);
                      goto LAB_006785bc;
                    case 1:
switchD_0067a2e0_caseD_1:
                      uVar7 = FUN_0067781c(param_1);
                      goto LAB_006785a4;
                    case 2:
                      pcVar14 = (char *)0x0;
switchD_00679384_caseD_2:
                      if ((((char *)**(undefined8 **)(piVar12 + 2))[1] == 'c') &&
                         ((cVar17 = *(char *)**(undefined8 **)(piVar12 + 2),
                          (byte)(cVar17 + 0x8eU) < 2 || ((byte)(cVar17 + 0x9dU) < 2)))) {
                        uVar7 = FUN_00674b04(param_1);
                      }
                      else {
                        uVar7 = FUN_0067781c(param_1);
                      }
                      iVar5 = strcmp(pcVar14,"cl");
                      if (iVar5 == 0) {
                        uVar8 = FUN_006743b0(param_1,0x45);
                      }
                      else {
                        iVar5 = strcmp(pcVar14,"dt");
                        if ((iVar5 == 0) || (iVar5 = strcmp(pcVar14,"pt"), iVar5 == 0)) {
                          uVar8 = FUN_006764b0(param_1);
                          if (**(char **)(param_1 + 0x18) == 'I') {
                            uVar16 = FUN_00672ec4(param_1);
                            uVar8 = FUN_00671f00(param_1,4,uVar8,uVar16);
                          }
                        }
                        else {
                          uVar8 = FUN_0067781c(param_1);
                        }
                      }
                      uVar7 = FUN_00671f00(param_1,0x38,uVar7,uVar8);
                      lVar9 = FUN_00671f00(param_1,0x37,piVar12,uVar7);
                      goto LAB_006785bc;
                    case 3:
                      pcVar14 = (char *)0x0;
switchD_00679384_caseD_3:
                      iVar5 = strcmp(pcVar14,"qu");
                      if (iVar5 == 0) {
                        uVar7 = FUN_0067781c(param_1);
                        uVar8 = FUN_0067781c(param_1);
                        uVar16 = FUN_0067781c(param_1);
LAB_0067a4c8:
                        uVar8 = FUN_00671f00(param_1,0x3b,uVar8,uVar16);
                        uVar7 = FUN_00671f00(param_1,0x3a,uVar7,uVar8);
                        lVar9 = FUN_00671f00(param_1,0x39,piVar12,uVar7);
                        goto LAB_006785bc;
                      }
                      if ((*pcVar14 == 'n') && ((pcVar14[1] == 'a' || (pcVar14[1] == 'w')))) {
                        uVar7 = FUN_006743b0(param_1,0x5f);
                        uVar8 = FUN_00674b04(param_1);
                        pcVar14 = *(char **)(param_1 + 0x18);
                        cVar17 = *pcVar14;
                        if (cVar17 == 'E') {
                          uVar16 = 0;
                          *(char **)(param_1 + 0x18) = pcVar14 + 1;
                          goto LAB_0067a4c8;
                        }
                        if (cVar17 == 'p') {
                          if (pcVar14[1] == 'i') {
                            *(char **)(param_1 + 0x18) = pcVar14 + 2;
                            uVar16 = FUN_006743b0(param_1,0x45);
                            goto LAB_0067a4c8;
                          }
                        }
                        else if ((cVar17 == 'i') && (pcVar14[1] == 'l')) {
                          uVar16 = FUN_0067781c(param_1);
                          goto LAB_0067a4c8;
                        }
                      }
                    }
                  }
                  else if (iVar5 == 0x33) {
                    /* try { // try from 00678594 to 007785a7 has its CatchHandler @ 0067876c */
                    if (**(char **)(param_1 + 0x18) != '_') goto switchD_0067a2e0_caseD_1;
                    /* try { // try from 0067a2ac to 0077a2d7 has its CatchHandler @ 0067a21c */
                    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                    uVar7 = FUN_006743b0(param_1,0x45);
LAB_006785a4:
                    /* try { // try from 006785ac to 007785b3 has its CatchHandler @ 00678704 */
                    /* try { // try from 006785b4 to 007785cf has its CatchHandler @ 00678178 */
                    lVar9 = FUN_00671f00(param_1,0x36,piVar12,uVar7);
                    goto LAB_006785bc;
                  }
                }
              }
switchD_0067a2e0_default:
              lVar9 = 0;
            }
          }
LAB_006785bc:
          iVar5 = strcmp(pcVar11,"cl");
          if (iVar5 == 0) {
            uVar7 = FUN_006743b0(param_1,0x45);
          }
          else {
                    /* try { // try from 006785d0 to 007785d7 has its CatchHandler @ 00678700 */
                    /* try { // try from 006785d8 to 007787a3 has its CatchHandler @ 00678178 */
            iVar5 = strcmp(pcVar11,"dt");
            if ((iVar5 == 0) || (iVar5 = strcmp(pcVar11,"pt"), iVar5 == 0)) {
              uVar7 = FUN_006764b0(param_1);
              if (**(char **)(param_1 + 0x18) == 'I') {
                uVar8 = FUN_00672ec4(param_1);
                uVar7 = FUN_00671f00(param_1,4,uVar7,uVar8);
              }
            }
            else {
              uVar7 = FUN_0067781c(param_1);
            }
          }
          uVar7 = FUN_00671f00(param_1,0x38,lVar9,uVar7);
          lVar9 = FUN_00671f00(param_1,0x37,piVar10,uVar7);
          goto LAB_0067818c;
        case 3:
          goto switchD_006786a8_caseD_3;
        default:
          goto switchD_006783cc_default;
        }
      }
      uVar7 = FUN_00674b04(param_1);
LAB_006782e0:
      lVar9 = FUN_00671f00(param_1,0x36,piVar10,uVar7);
                    /* try { // try from 006782f4 to 007782f7 has its CatchHandler @ 00678824 */
                    /* try { // try from 006782f8 to 00778397 has its CatchHandler @ 00678178 */
    }
    else {
      if (iVar5 == 0x32) {
        switch(piVar10[2]) {
        case 0:
          goto switchD_006783cc_caseD_0;
        case 1:
          goto switchD_006783cc_caseD_1;
        case 2:
          pcVar11 = (char *)0x0;
          goto switchD_006786a8_caseD_2;
        case 3:
          pcVar11 = (char *)0x0;
          goto switchD_006786a8_caseD_3;
        default:
          goto switchD_006783cc_default;
        }
      }
      if (iVar5 != 0x33) goto switchD_006783cc_default;
switchD_006783cc_caseD_1:
      pcVar11 = *(char **)(param_1 + 0x18);
      if (iVar5 == 0x33) {
        cVar17 = *pcVar11;
        bVar3 = false;
                    /* try { // try from 0067820c to 0077820f has its CatchHandler @ 0067887c */
                    /* try { // try from 00678210 to 00778297 has its CatchHandler @ 00678178 */
        if (cVar17 != '_') goto LAB_00678214;
                    /* catch() { ... } // from try @ 00678480 with catch @ 00678780 */
        *(char **)(param_1 + 0x18) = pcVar11 + 1;
        lVar9 = FUN_006743b0(param_1,0x45);
      }
      else {
LAB_00678704:
                    /* catch() { ... } // from try @ 006785ac with catch @ 00678704 */
        cVar17 = *pcVar11;
        bVar3 = false;
LAB_00678214:
        if (cVar17 == 'L') {
          lVar9 = FUN_006776a4(param_1);
        }
        else if (cVar17 == 'T') {
          lVar9 = FUN_00672cec(param_1);
        }
        else if (cVar17 == 's') {
          if (pcVar11[1] == 'r') {
            *(char **)(param_1 + 0x18) = pcVar11 + 2;
            uVar7 = FUN_00674b04(param_1);
            uVar8 = FUN_006764b0(param_1);
            if (**(char **)(param_1 + 0x18) == 'I') {
              uVar16 = FUN_00672ec4(param_1);
              uVar8 = FUN_00671f00(param_1,4,uVar8,uVar16);
              lVar9 = FUN_00671f00(param_1,1,uVar7,uVar8);
            }
            else {
              lVar9 = FUN_00671f00(param_1,1,uVar7,uVar8);
            }
          }
          else {
            if (pcVar11[1] != 'p') goto LAB_0067826c;
            *(char **)(param_1 + 0x18) = pcVar11 + 2;
            uVar7 = FUN_0067781c(param_1);
            lVar9 = FUN_00671f00(param_1,0x4a,uVar7,0);
          }
        }
        else if (cVar17 == 'f') {
          if (pcVar11[1] != 'p') goto LAB_0067826c;
          *(char **)(param_1 + 0x18) = pcVar11 + 2;
          if (pcVar11[2] == 'T') {
            iVar5 = 0;
            *(char **)(param_1 + 0x18) = pcVar11 + 3;
          }
          else {
            iVar5 = FUN_00672bbc(param_1);
            iVar5 = iVar5 + 1;
            if (iVar5 == 0) goto LAB_00679168;
          }
          iVar4 = *(int *)(param_1 + 0x28);
          lVar9 = 0;
          if (iVar4 < *(int *)(param_1 + 0x2c)) {
            *(int *)(param_1 + 0x28) = iVar4 + 1;
            lVar9 = *(long *)(param_1 + 0x20) + (long)iVar4 * 0x18;
            if (lVar9 != 0) {
              *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 0x18) = 6;
              *(long *)(lVar9 + 8) = (long)iVar5;
            }
          }
        }
        else if ((byte)(cVar17 - 0x30U) < 10) {
LAB_006787d4:
                    /* catch() { ... } // from try @ 00678398 with catch @ 006787d4 */
          lVar9 = FUN_006764b0(param_1);
          if ((lVar9 != 0) && (**(char **)(param_1 + 0x18) == 'I')) {
            uVar7 = FUN_00672ec4(param_1);
            lVar9 = FUN_00671f00(param_1,4,lVar9,uVar7);
          }
        }
        else {
          if (cVar17 == 'o') {
            if (pcVar11[1] == 'n') {
                    /* catch() { ... } // from try @ 006783f4 with catch @ 006787d0 */
              *(char **)(param_1 + 0x18) = pcVar11 + 2;
              goto LAB_006787d4;
            }
          }
          else if (((cVar17 == 't') || (cVar17 == 'i')) && (pcVar11[1] == 'l')) {
            uVar7 = 0;
            if (cVar17 == 't') {
              uVar7 = FUN_00674b04(param_1);
              pcVar11 = *(char **)(param_1 + 0x18);
            }
            *(char **)(param_1 + 0x18) = pcVar11 + 2;
            uVar8 = FUN_006743b0(param_1,0x45);
            lVar9 = FUN_00671f00(param_1,0x30,uVar7,uVar8);
            goto switchD_006790fc_default;
          }
LAB_0067826c:
          piVar12 = (int *)FUN_006762bc(param_1);
          if (piVar12 == (int *)0x0) {
LAB_00679168:
            lVar9 = 0;
          }
          else {
            iVar5 = *piVar12;
            if (iVar5 == 0x31) {
              puVar21 = *(undefined8 **)(piVar12 + 2);
              pcVar11 = (char *)*puVar21;
                    /* try { // try from 0067911c to 00779127 has its CatchHandler @ 0067928c */
              *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(puVar21 + 2) + -2;
              iVar5 = strcmp(pcVar11,"st");
              if (iVar5 != 0) {
                    /* try { // try from 00679134 to 0077913f has its CatchHandler @ 0067921c */
                lVar9 = 0;
                    /* try { // try from 00679140 to 0077928f has its CatchHandler @ 006790dc */
                switch(*(undefined4 *)((long)puVar21 + 0x14)) {
                case 0:
                  goto switchD_006790fc_caseD_0;
                case 1:
                  goto switchD_00679154_caseD_1;
                case 2:
                  goto switchD_00679154_caseD_2;
                case 3:
                  goto switchD_00679154_caseD_3;
                default:
                  goto switchD_006790fc_default;
                }
              }
              uVar7 = FUN_00674b04(param_1);
            }
            else {
              if (iVar5 == 0x32) {
                    /* try { // try from 006790dc to 0077911b has its CatchHandler @ 006790dc
                       catch() { ... } // from try @ 006790dc with catch @ 006790dc
                       catch() { ... } // from try @ 00679140 with catch @ 006790dc */
                lVar9 = 0;
                switch(piVar12[2]) {
                case 0:
switchD_006790fc_caseD_0:
                  lVar9 = FUN_00671f00(param_1,0x35,piVar12,0);
                  break;
                case 1:
                  goto switchD_006790fc_caseD_1;
                case 2:
                  pcVar11 = (char *)0x0;
switchD_00679154_caseD_2:
                  if ((((char *)**(undefined8 **)(piVar12 + 2))[1] == 'c') &&
                     ((cVar17 = *(char *)**(undefined8 **)(piVar12 + 2), (byte)(cVar17 + 0x8eU) < 2
                      || ((byte)(cVar17 + 0x9dU) < 2)))) {
                    uVar7 = FUN_00674b04(param_1);
                  }
                  else {
                    uVar7 = FUN_0067781c(param_1);
                  }
                  iVar5 = strcmp(pcVar11,"cl");
                  if (iVar5 == 0) {
                    uVar8 = FUN_006743b0(param_1,0x45);
                  }
                  else {
                    iVar5 = strcmp(pcVar11,"dt");
                    if ((iVar5 == 0) || (iVar5 = strcmp(pcVar11,"pt"), iVar5 == 0)) {
                      uVar8 = FUN_006764b0(param_1);
                      if (**(char **)(param_1 + 0x18) == 'I') {
                        uVar16 = FUN_00672ec4(param_1);
                    /* catch() { ... } // from try @ 00679134 with catch @ 0067921c */
                        uVar8 = FUN_00671f00(param_1,4,uVar8,uVar16);
                      }
                    }
                    else {
                      uVar8 = FUN_0067781c(param_1);
                    }
                  }
                  uVar7 = FUN_00671f00(param_1,0x38,uVar7,uVar8);
                  lVar9 = FUN_00671f00(param_1,0x37,piVar12,uVar7);
                  break;
                case 3:
                  pcVar11 = (char *)0x0;
switchD_00679154_caseD_3:
                  iVar5 = strcmp(pcVar11,"qu");
                  if (iVar5 == 0) {
                    uVar7 = FUN_0067781c(param_1);
                    uVar8 = FUN_0067781c(param_1);
                    uVar16 = FUN_0067781c(param_1);
                  }
                  else {
                    /* catch() { ... } // from try @ 0067911c with catch @ 0067928c */
                    if ((*pcVar11 != 'n') || ((pcVar11[1] != 'a' && (pcVar11[1] != 'w'))))
                    goto LAB_00679168;
                    uVar7 = FUN_006743b0(param_1,0x5f);
                    uVar8 = FUN_00674b04(param_1);
                    pcVar11 = *(char **)(param_1 + 0x18);
                    cVar17 = *pcVar11;
                    if (cVar17 != 'E') {
                      if (cVar17 == 'p') {
                        lVar9 = 0;
                        if (pcVar11[1] == 'i') {
                          *(char **)(param_1 + 0x18) = pcVar11 + 2;
                          uVar16 = FUN_006743b0(param_1,0x45);
                          goto LAB_006792e4;
                        }
                      }
                      else {
                        if (cVar17 != 'i') goto LAB_00679168;
                        lVar9 = 0;
                        if (pcVar11[1] == 'l') {
                          uVar16 = FUN_0067781c(param_1);
                          goto LAB_006792e4;
                        }
                      }
                      break;
                    }
                    uVar16 = 0;
                    *(char **)(param_1 + 0x18) = pcVar11 + 1;
                  }
LAB_006792e4:
                  uVar8 = FUN_00671f00(param_1,0x3b,uVar8,uVar16);
                  uVar7 = FUN_00671f00(param_1,0x3a,uVar7,uVar8);
                  lVar9 = FUN_00671f00(param_1,0x39,piVar12,uVar7);
                }
                goto switchD_006790fc_default;
              }
              if (iVar5 != 0x33) goto LAB_00679168;
                    /* try { // try from 00678298 to 0077829f has its CatchHandler @ 00678828 */
                    /* try { // try from 006782a0 to 007782f3 has its CatchHandler @ 00678178 */
              if (**(char **)(param_1 + 0x18) == '_') {
                *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                uVar7 = FUN_006743b0(param_1,0x45);
                goto LAB_006782b4;
              }
switchD_006790fc_caseD_1:
              uVar7 = FUN_0067781c(param_1);
            }
LAB_006782b4:
            lVar9 = FUN_00671f00(param_1,0x36,piVar12,uVar7);
          }
        }
switchD_006790fc_default:
        if (bVar3) {
          uVar7 = FUN_00671f00(param_1,0x38,lVar9,lVar9);
          goto LAB_006782e0;
        }
      }
                    /* try { // try from 006787a4 to 00778873 has its CatchHandler @ 00678878 */
      lVar9 = FUN_00671f00(param_1,0x36,piVar10,lVar9);
    }
  }
LAB_0067818c:
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  if (lVar9 == 0) {
    return 0;
  }
  pbVar18 = *(byte **)(param_1 + 0x18);
LAB_00678080:
                    /* try { // try from 00678080 to 00778177 has its CatchHandler @ 00678014 */
  if (*pbVar18 != 0x5f) {
    return 0;
  }
  *(byte **)(param_1 + 0x18) = pbVar18 + 1;
  uVar7 = FUN_00674b04(param_1);
  uVar7 = FUN_00671f00(param_1,0x2d,lVar9,uVar7);
  return uVar7;
switchD_006786a8_caseD_3:
  iVar5 = strcmp(pcVar11,"qu");
  if (iVar5 == 0) {
                    /* catch() { ... } // from try @ 006787a4 with catch @ 00678878 */
    pcVar11 = *(char **)(param_1 + 0x18);
                    /* catch() { ... } // from try @ 0067820c with catch @ 0067887c */
    cVar17 = *pcVar11;
    if (cVar17 == 'L') {
      piVar12 = (int *)FUN_006776a4(param_1);
      pcVar11 = *(char **)(param_1 + 0x18);
                    /* try { // try from 00679aa8 to 00779af7 has its CatchHandler @ 00679aa8
                       catch() { ... } // from try @ 00679aa8 with catch @ 00679aa8
                       catch() { ... } // from try @ 00679b8c with catch @ 00679aa8
                       catch() { ... } // from try @ 00679cb8 with catch @ 00679aa8 */
      cVar17 = *pcVar11;
LAB_0067893c:
      if (cVar17 == 'L') {
        lVar9 = FUN_006776a4(param_1);
        pcVar11 = *(char **)(param_1 + 0x18);
        cVar17 = *pcVar11;
                    /* try { // try from 00679af8 to 00779b03 has its CatchHandler @ 00679d88 */
        goto LAB_006789f8;
      }
      if (cVar17 == 'T') {
        lVar9 = FUN_00672cec(param_1);
        pcVar11 = *(char **)(param_1 + 0x18);
        cVar17 = *pcVar11;
        goto LAB_006789f8;
      }
      if (cVar17 == 's') {
        if (pcVar11[1] == 'r') {
          *(char **)(param_1 + 0x18) = pcVar11 + 2;
          piVar15 = (int *)FUN_00674b04(param_1);
                    /* catch() { ... } // from try @ 00679628 with catch @ 00679890 */
          uVar7 = FUN_006764b0(param_1);
          if (**(char **)(param_1 + 0x18) == 'I') {
            uVar8 = FUN_00672ec4(param_1);
                    /* try { // try from 006798dc to 00779aa7 has its CatchHandler @ 00679528 */
                    /* catch() { ... } // from try @ 006798b4 with catch @ 006798e0 */
            uVar7 = FUN_00671f00(param_1,4,uVar7,uVar8);
                    /* catch() { ... } // from try @ 006795f8 with catch @ 006798e4 */
            uVar8 = 1;
            goto LAB_006789e4;
          }
                    /* try { // try from 006798b4 to 007798db has its CatchHandler @ 006798e0 */
          lVar9 = FUN_00671f00(param_1,1,piVar15,uVar7);
          pcVar11 = *(char **)(param_1 + 0x18);
          cVar17 = *pcVar11;
        }
        else {
          if (pcVar11[1] != 'p') goto LAB_00678994;
          *(char **)(param_1 + 0x18) = pcVar11 + 2;
          piVar15 = (int *)FUN_0067781c(param_1);
          uVar7 = 0x4a;
LAB_00678fdc:
          lVar9 = FUN_00671f00(param_1,uVar7,piVar15,0);
LAB_00678fe8:
          pcVar11 = *(char **)(param_1 + 0x18);
          cVar17 = *pcVar11;
        }
        goto LAB_006789f8;
      }
      if (cVar17 != 'f') {
        if (9 < (byte)(cVar17 - 0x30U)) {
          if (cVar17 != 'o') goto LAB_00678974;
          if (pcVar11[1] != 'n') goto LAB_00678994;
          *(char **)(param_1 + 0x18) = pcVar11 + 2;
        }
        lVar9 = FUN_006764b0(param_1);
        pcVar11 = *(char **)(param_1 + 0x18);
        cVar17 = *pcVar11;
        if ((lVar9 != 0) && (cVar17 == 'I')) {
          uVar7 = FUN_00672ec4(param_1);
          lVar9 = FUN_00671f00(param_1,4,lVar9,uVar7);
          pcVar11 = *(char **)(param_1 + 0x18);
          cVar17 = *pcVar11;
        }
        goto LAB_006789f8;
      }
      if (pcVar11[1] == 'p') {
        *(char **)(param_1 + 0x18) = pcVar11 + 2;
        if (pcVar11[2] == 'T') {
          iVar5 = 0;
          *(char **)(param_1 + 0x18) = pcVar11 + 3;
        }
        else {
          iVar5 = FUN_00672bbc(param_1);
          iVar5 = iVar5 + 1;
          if (iVar5 == 0) goto switchD_00679e64_default;
        }
        iVar4 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar4) goto switchD_00679e64_default;
        *(int *)(param_1 + 0x28) = iVar4 + 1;
        lVar9 = *(long *)(param_1 + 0x20) + (long)iVar4 * 0x18;
        if (lVar9 == 0) goto LAB_00678fe8;
        *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 0x18) = 6;
        *(long *)(lVar9 + 8) = (long)iVar5;
        pcVar11 = *(char **)(param_1 + 0x18);
        cVar17 = *pcVar11;
        goto LAB_006789f8;
      }
LAB_00678994:
      piVar15 = (int *)FUN_006762bc(param_1);
      if (piVar15 == (int *)0x0) {
switchD_00679e64_default:
        pcVar11 = *(char **)(param_1 + 0x18);
        lVar9 = 0;
        cVar17 = *pcVar11;
        goto LAB_006789f8;
      }
      iVar5 = *piVar15;
      if (iVar5 == 0x31) {
        pcVar11 = (char *)**(undefined8 **)(piVar15 + 2);
        *(int *)(param_1 + 0x50) =
             *(int *)(param_1 + 0x50) + *(int *)(*(undefined8 **)(piVar15 + 2) + 2) + -2;
        iVar5 = strcmp(pcVar11,"st");
        if (iVar5 != 0) {
          switch(*(undefined4 *)(*(long *)(piVar15 + 2) + 0x14)) {
          case 0:
            goto switchD_00679e64_caseD_0;
          case 1:
            cVar17 = *pcVar11;
                    /* try { // try from 0067a684 to 0077a6eb has its CatchHandler @ 0067a684
                       catch() { ... } // from try @ 0067a684 with catch @ 0067a684
                       catch() { ... } // from try @ 0067a724 with catch @ 0067a684 */
            if (((cVar17 == 'm') || (cVar17 == 'p')) && (pcVar11[1] == cVar17)) {
              if (**(char **)(param_1 + 0x18) != '_') {
                uVar7 = FUN_0067781c(param_1);
                uVar7 = FUN_00671f00(param_1,0x38,uVar7,uVar7);
                uVar8 = 0x36;
                goto LAB_006789e4;
              }
              *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
            }
            goto switchD_00679e64_caseD_1;
          case 2:
            goto switchD_0067a658_caseD_2;
          case 3:
            goto switchD_0067a658_caseD_3;
          }
          goto switchD_00679e64_default;
        }
        uVar7 = FUN_00674b04(param_1);
        uVar8 = 0x36;
LAB_006789e4:
        lVar9 = FUN_00671f00(param_1,uVar8,piVar15,uVar7);
        pcVar11 = *(char **)(param_1 + 0x18);
        cVar17 = *pcVar11;
        goto LAB_006789f8;
      }
      if (iVar5 != 0x32) {
        if (iVar5 != 0x33) goto switchD_00679e64_default;
        if (**(char **)(param_1 + 0x18) != '_') goto switchD_00679e64_caseD_1;
        *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
        uVar7 = FUN_006743b0(param_1,0x45);
LAB_006789dc:
        uVar8 = 0x36;
        goto LAB_006789e4;
      }
      switch(piVar15[2]) {
      case 0:
switchD_00679e64_caseD_0:
        uVar7 = 0x35;
                    /* try { // try from 0067a034 to 0077a043 has its CatchHandler @ 0067a11c */
        goto LAB_00678fdc;
      case 1:
switchD_00679e64_caseD_1:
        uVar7 = FUN_0067781c(param_1);
        goto LAB_006789dc;
      case 2:
        pcVar11 = (char *)0x0;
switchD_0067a658_caseD_2:
                    /* try { // try from 00679ffc to 0077a007 has its CatchHandler @ 0067a1f0 */
        if ((((char *)**(undefined8 **)(piVar15 + 2))[1] == 'c') &&
           ((cVar17 = *(char *)**(undefined8 **)(piVar15 + 2), (byte)(cVar17 + 0x8eU) < 2 ||
            ((byte)(cVar17 + 0x9dU) < 2)))) {
                    /* try { // try from 0067a010 to 0077a023 has its CatchHandler @ 0067a184 */
          uVar7 = FUN_00674b04(param_1);
        }
        else {
          uVar7 = FUN_0067781c(param_1);
        }
                    /* catch() { ... } // from try @ 00679ddc with catch @ 00679f3c */
        iVar5 = strcmp(pcVar11,"cl");
        if (iVar5 == 0) {
          uVar8 = FUN_006743b0(param_1,0x45);
        }
        else {
          iVar5 = strcmp(pcVar11,"dt");
          if ((iVar5 == 0) || (iVar5 = strcmp(pcVar11,"pt"), iVar5 == 0)) {
            uVar8 = FUN_006764b0(param_1);
            if (**(char **)(param_1 + 0x18) == 'I') {
              uVar16 = FUN_00672ec4(param_1);
                    /* catch() { ... } // from try @ 00679dcc with catch @ 00679fa8 */
              uVar8 = FUN_00671f00(param_1,4,uVar8,uVar16);
                    /* try { // try from 00679fac to 00779ffb has its CatchHandler @ 00679fac
                       catch() { ... } // from try @ 00679fac with catch @ 00679fac
                       catch() { ... } // from try @ 0067a044 with catch @ 00679fac */
            }
          }
          else {
            uVar8 = FUN_0067781c(param_1);
                    /* try { // try from 0067a024 to 0077a02f has its CatchHandler @ 0067a180 */
          }
        }
        uVar7 = FUN_00671f00(param_1,0x38,uVar7,uVar8);
        uVar8 = 0x37;
        goto LAB_006789e4;
      case 3:
        pcVar11 = (char *)0x0;
switchD_0067a658_caseD_3:
                    /* try { // try from 0067a044 to 0077a1f3 has its CatchHandler @ 00679fac */
        iVar5 = strcmp(pcVar11,"qu");
        if (iVar5 == 0) {
          uVar7 = FUN_0067781c(param_1);
          uVar8 = FUN_0067781c(param_1);
          uVar16 = FUN_0067781c(param_1);
LAB_0067a0c0:
          uVar8 = FUN_00671f00(param_1,0x3b,uVar8,uVar16);
          uVar7 = FUN_00671f00(param_1,0x3a,uVar7,uVar8);
          uVar8 = 0x39;
          goto LAB_006789e4;
        }
        if ((*pcVar11 != 'n') || ((pcVar11[1] != 'a' && (pcVar11[1] != 'w'))))
        goto switchD_00679e64_default;
        uVar7 = FUN_006743b0(param_1,0x5f);
        uVar8 = FUN_00674b04(param_1);
        pcVar11 = *(char **)(param_1 + 0x18);
        cVar17 = *pcVar11;
        if (cVar17 == 'E') {
          uVar16 = 0;
          *(char **)(param_1 + 0x18) = pcVar11 + 1;
          goto LAB_0067a0c0;
        }
        if (cVar17 == 'p') {
          if (pcVar11[1] == 'i') {
            *(char **)(param_1 + 0x18) = pcVar11 + 2;
            uVar16 = FUN_006743b0(param_1,0x45);
            goto LAB_0067a0c0;
          }
        }
        else {
          if (cVar17 != 'i') {
            lVar9 = 0;
            goto LAB_006789f8;
          }
          if (pcVar11[1] == 'l') {
            uVar16 = FUN_0067781c(param_1);
            goto LAB_0067a0c0;
          }
        }
                    /* catch() { ... } // from try @ 0067a034 with catch @ 0067a11c */
        lVar9 = 0;
        break;
      default:
        goto switchD_00679e64_default;
      }
LAB_00678a30:
      if (((cVar17 != 't') && (cVar17 != 'i')) || (pcVar11[1] != 'l')) goto LAB_00678a50;
      uVar7 = 0;
      if (cVar17 == 't') {
        uVar7 = FUN_00674b04(param_1);
        pcVar11 = *(char **)(param_1 + 0x18);
      }
      *(char **)(param_1 + 0x18) = pcVar11 + 2;
      uVar8 = FUN_006743b0(param_1,0x45);
      lVar13 = FUN_00671f00(param_1,0x30,uVar7,uVar8);
    }
    else {
      if (cVar17 == 'T') {
        piVar12 = (int *)FUN_00672cec(param_1);
        pcVar11 = *(char **)(param_1 + 0x18);
        cVar17 = *pcVar11;
        goto LAB_0067893c;
      }
      if (cVar17 == 's') {
        if (pcVar11[1] == 'r') {
          *(char **)(param_1 + 0x18) = pcVar11 + 2;
          piVar15 = (int *)FUN_00674b04(param_1);
          uVar7 = FUN_006764b0(param_1);
          if (**(char **)(param_1 + 0x18) != 'I') {
            piVar12 = (int *)FUN_00671f00(param_1,1,piVar15,uVar7);
            pcVar11 = *(char **)(param_1 + 0x18);
            cVar17 = *pcVar11;
            goto LAB_0067893c;
          }
          uVar8 = FUN_00672ec4(param_1);
          uVar7 = FUN_00671f00(param_1,4,uVar7,uVar8);
          uVar8 = 1;
          goto LAB_00678928;
        }
        if (pcVar11[1] != 'p') goto LAB_006788d8;
        *(char **)(param_1 + 0x18) = pcVar11 + 2;
        piVar15 = (int *)FUN_0067781c(param_1);
        uVar7 = 0x4a;
LAB_006790c0:
        piVar12 = (int *)FUN_00671f00(param_1,uVar7,piVar15,0);
LAB_006790cc:
        pcVar11 = *(char **)(param_1 + 0x18);
        cVar17 = *pcVar11;
        goto LAB_0067893c;
      }
      if (cVar17 == 'f') {
        if (pcVar11[1] != 'p') goto LAB_006788d8;
        *(char **)(param_1 + 0x18) = pcVar11 + 2;
        if (pcVar11[2] == 'T') {
          iVar5 = 0;
          *(char **)(param_1 + 0x18) = pcVar11 + 3;
        }
        else {
          iVar5 = FUN_00672bbc(param_1);
          iVar5 = iVar5 + 1;
          if (iVar5 == 0) goto switchD_00679b38_default;
        }
        iVar4 = *(int *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x2c) <= iVar4) goto switchD_00679b38_default;
        *(int *)(param_1 + 0x28) = iVar4 + 1;
        piVar12 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 0x18);
        if (piVar12 == (int *)0x0) goto LAB_006790cc;
        *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 0x18) = 6;
        *(long *)(piVar12 + 2) = (long)iVar5;
        pcVar11 = *(char **)(param_1 + 0x18);
        cVar17 = *pcVar11;
        goto LAB_0067893c;
      }
      if ((byte)(cVar17 - 0x30U) < 10) {
LAB_00678cbc:
        piVar12 = (int *)FUN_006764b0(param_1);
        pcVar11 = *(char **)(param_1 + 0x18);
        cVar17 = *pcVar11;
        if ((piVar12 != (int *)0x0) && (cVar17 == 'I')) {
          uVar7 = FUN_00672ec4(param_1);
          uVar8 = 4;
          piVar15 = piVar12;
          goto LAB_00678928;
        }
        goto LAB_0067893c;
      }
      if (cVar17 == 'o') {
        if (pcVar11[1] == 'n') {
          *(char **)(param_1 + 0x18) = pcVar11 + 2;
          goto LAB_00678cbc;
        }
      }
      else if (((cVar17 == 't') || (cVar17 == 'i')) && (pcVar11[1] == 'l')) {
        uVar7 = 0;
        if (cVar17 == 't') {
          uVar7 = FUN_00674b04(param_1);
          pcVar11 = *(char **)(param_1 + 0x18);
        }
                    /* catch() { ... } // from try @ 00679df0 with catch @ 00679ed8 */
        *(char **)(param_1 + 0x18) = pcVar11 + 2;
        uVar8 = FUN_006743b0(param_1,0x45);
        piVar12 = (int *)FUN_00671f00(param_1,0x30,uVar7,uVar8);
        pcVar11 = *(char **)(param_1 + 0x18);
        cVar17 = *pcVar11;
        goto LAB_0067893c;
      }
LAB_006788d8:
      piVar15 = (int *)FUN_006762bc(param_1);
      piVar12 = (int *)0x0;
      if (piVar15 == (int *)0x0) goto LAB_006790cc;
      iVar5 = *piVar15;
      if (iVar5 == 0x31) {
        pcVar11 = (char *)**(undefined8 **)(piVar15 + 2);
        *(int *)(param_1 + 0x50) =
             *(int *)(param_1 + 0x50) + *(int *)(*(undefined8 **)(piVar15 + 2) + 2) + -2;
        iVar5 = strcmp(pcVar11,"st");
        if (iVar5 != 0) {
          switch(*(undefined4 *)(*(long *)(piVar15 + 2) + 0x14)) {
          case 0:
            goto switchD_00679b38_caseD_0;
          case 1:
            goto switchD_00679ebc_caseD_1;
          case 2:
            goto switchD_00679ebc_caseD_2;
          case 3:
            goto switchD_00679ebc_caseD_3;
          default:
            goto switchD_00679b38_default;
          }
        }
        uVar7 = FUN_00674b04(param_1);
        uVar8 = 0x36;
        goto LAB_00678928;
      }
      if (iVar5 != 0x32) {
        if (iVar5 == 0x33) {
          if (**(char **)(param_1 + 0x18) != '_') goto switchD_00679b38_caseD_1;
          *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                    /* try { // try from 00679b0c to 00779b1f has its CatchHandler @ 00679d1c */
          uVar7 = FUN_006743b0(param_1,0x45);
          goto LAB_00678920;
        }
switchD_00679b38_default:
        pcVar11 = *(char **)(param_1 + 0x18);
        piVar12 = (int *)0x0;
        cVar17 = *pcVar11;
        goto LAB_0067893c;
      }
                    /* try { // try from 00679b20 to 00779b2b has its CatchHandler @ 00679d18 */
                    /* try { // try from 00679b34 to 00779b43 has its CatchHandler @ 00679c6c */
      switch(piVar15[2]) {
      case 0:
switchD_00679b38_caseD_0:
                    /* try { // try from 00679c90 to 00779cb7 has its CatchHandler @ 00679d14 */
        uVar7 = 0x35;
        goto LAB_006790c0;
      case 1:
        goto switchD_00679b38_caseD_1;
      case 2:
        pcVar11 = (char *)0x0;
switchD_00679ebc_caseD_2:
                    /* try { // try from 00679b8c to 00779c8f has its CatchHandler @ 00679aa8 */
                    /* catch() { ... } // from try @ 00679b64 with catch @ 00679c64 */
                    /* catch() { ... } // from try @ 00679b34 with catch @ 00679c6c */
        if ((((char *)**(undefined8 **)(piVar15 + 2))[1] == 'c') &&
           ((cVar17 = *(char *)**(undefined8 **)(piVar15 + 2), (byte)(cVar17 + 0x8eU) < 2 ||
            ((byte)(cVar17 + 0x9dU) < 2)))) {
          uVar7 = FUN_00674b04(param_1);
        }
        else {
          uVar7 = FUN_0067781c(param_1);
        }
        iVar5 = strcmp(pcVar11,"cl");
        if (iVar5 == 0) {
          uVar8 = FUN_006743b0(param_1,0x45);
        }
        else {
          iVar5 = strcmp(pcVar11,"dt");
          if ((iVar5 == 0) || (iVar5 = strcmp(pcVar11,"pt"), iVar5 == 0)) {
            uVar8 = FUN_006764b0(param_1);
            if (**(char **)(param_1 + 0x18) == 'I') {
              uVar16 = FUN_00672ec4(param_1);
              uVar8 = FUN_00671f00(param_1,4,uVar8,uVar16);
            }
          }
          else {
            uVar8 = FUN_0067781c(param_1);
                    /* try { // try from 00679e04 to 00779fab has its CatchHandler @ 00679d8c */
          }
        }
        uVar7 = FUN_00671f00(param_1,0x38,uVar7,uVar8);
        uVar8 = 0x37;
        goto LAB_00678928;
      case 3:
        pcVar11 = (char *)0x0;
switchD_00679ebc_caseD_3:
        iVar5 = strcmp(pcVar11,"qu");
        if (iVar5 == 0) {
          uVar7 = FUN_0067781c(param_1);
          uVar8 = FUN_0067781c(param_1);
          uVar16 = FUN_0067781c(param_1);
LAB_00679d24:
          uVar8 = FUN_00671f00(param_1,0x3b,uVar8,uVar16);
          uVar7 = FUN_00671f00(param_1,0x3a,uVar7,uVar8);
          uVar8 = 0x39;
          goto LAB_00678928;
        }
                    /* try { // try from 00679cb8 to 00779d8b has its CatchHandler @ 00679aa8 */
        if ((*pcVar11 != 'n') || ((pcVar11[1] != 'a' && (pcVar11[1] != 'w'))))
        goto switchD_00679b38_default;
        uVar7 = FUN_006743b0(param_1,0x5f);
        uVar8 = FUN_00674b04(param_1);
        pcVar11 = *(char **)(param_1 + 0x18);
        cVar17 = *pcVar11;
        if (cVar17 == 'E') {
          uVar16 = 0;
          *(char **)(param_1 + 0x18) = pcVar11 + 1;
          goto LAB_00679d24;
        }
        if (cVar17 == 'p') {
          if (pcVar11[1] == 'i') {
            *(char **)(param_1 + 0x18) = pcVar11 + 2;
            uVar16 = FUN_006743b0(param_1,0x45);
            goto LAB_00679d24;
          }
        }
        else {
          if (cVar17 != 'i') {
                    /* catch() { ... } // from try @ 00679af8 with catch @ 00679d88 */
            piVar12 = (int *)0x0;
                    /* try { // try from 00679d8c to 00779dcb has its CatchHandler @ 00679d8c
                       catch() { ... } // from try @ 00679d8c with catch @ 00679d8c
                       catch() { ... } // from try @ 00679e04 with catch @ 00679d8c */
            goto LAB_0067893c;
          }
                    /* catch() { ... } // from try @ 00679c90 with catch @ 00679d14 */
                    /* catch() { ... } // from try @ 00679b20 with catch @ 00679d18 */
          if (pcVar11[1] == 'l') {
                    /* catch() { ... } // from try @ 00679b0c with catch @ 00679d1c */
            uVar16 = FUN_0067781c(param_1);
            goto LAB_00679d24;
          }
        }
        piVar12 = (int *)0x0;
LAB_00678974:
        if (((cVar17 != 't') && (cVar17 != 'i')) || (pcVar11[1] != 'l')) goto LAB_00678994;
        uVar7 = 0;
        if (cVar17 == 't') {
                    /* catch() { ... } // from try @ 006795e8 with catch @ 0067994c */
          uVar7 = FUN_00674b04(param_1);
          pcVar11 = *(char **)(param_1 + 0x18);
        }
                    /* catch() { ... } // from try @ 006795d0 with catch @ 00679960 */
        *(char **)(param_1 + 0x18) = pcVar11 + 2;
                    /* catch() { ... } // from try @ 006795bc with catch @ 00679968 */
        uVar8 = FUN_006743b0(param_1,0x45);
                    /* catch() { ... } // from try @ 006795a8 with catch @ 00679970 */
                    /* catch() { ... } // from try @ 00679594 with catch @ 00679978 */
                    /* catch() { ... } // from try @ 00679580 with catch @ 00679980 */
        lVar9 = FUN_00671f00(param_1,0x30,uVar7,uVar8);
                    /* catch() { ... } // from try @ 006795dc with catch @ 00679984
                       catch() { ... } // from try @ 0067960c with catch @ 00679984
                       catch() { ... } // from try @ 00679688 with catch @ 00679984 */
        pcVar11 = *(char **)(param_1 + 0x18);
        cVar17 = *pcVar11;
LAB_006789f8:
        if (cVar17 == 'L') {
          lVar13 = FUN_006776a4(param_1);
        }
        else if (cVar17 == 'T') {
          lVar13 = FUN_00672cec(param_1);
        }
        else if (cVar17 == 's') {
          if (pcVar11[1] == 'r') {
            *(char **)(param_1 + 0x18) = pcVar11 + 2;
            uVar7 = FUN_00674b04(param_1);
            uVar8 = FUN_006764b0(param_1);
                    /* try { // try from 00679b64 to 00779b8b has its CatchHandler @ 00679c64 */
            if (**(char **)(param_1 + 0x18) == 'I') {
              uVar16 = FUN_00672ec4(param_1);
                    /* try { // try from 00679dcc to 00779dd7 has its CatchHandler @ 00679fa8 */
              uVar8 = FUN_00671f00(param_1,4,uVar8,uVar16);
                    /* try { // try from 00679ddc to 00779def has its CatchHandler @ 00679f3c */
              lVar13 = FUN_00671f00(param_1,1,uVar7,uVar8);
                    /* try { // try from 00679df0 to 00779e03 has its CatchHandler @ 00679ed8 */
            }
            else {
              lVar13 = FUN_00671f00(param_1,1,uVar7,uVar8);
            }
          }
          else {
            if (pcVar11[1] != 'p') goto LAB_00678a50;
            *(char **)(param_1 + 0x18) = pcVar11 + 2;
            uVar7 = FUN_0067781c(param_1);
            lVar13 = FUN_00671f00(param_1,0x4a,uVar7,0);
          }
        }
        else if (cVar17 == 'f') {
          if (pcVar11[1] == 'p') {
            *(char **)(param_1 + 0x18) = pcVar11 + 2;
            if (pcVar11[2] == 'T') {
              iVar5 = 0;
              *(char **)(param_1 + 0x18) = pcVar11 + 3;
            }
            else {
                    /* try { // try from 00679594 to 007795a7 has its CatchHandler @ 00679978 */
              iVar5 = FUN_00672bbc(param_1);
              iVar5 = iVar5 + 1;
              if (iVar5 == 0) goto LAB_006795a0;
            }
            iVar4 = *(int *)(param_1 + 0x28);
            lVar13 = 0;
            if (iVar4 < *(int *)(param_1 + 0x2c)) {
              *(int *)(param_1 + 0x28) = iVar4 + 1;
              lVar13 = *(long *)(param_1 + 0x20) + (long)iVar4 * 0x18;
              if (lVar13 != 0) {
                *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 0x18) = 6;
                *(long *)(lVar13 + 8) = (long)iVar5;
              }
            }
          }
          else {
LAB_00678a50:
            piVar15 = (int *)FUN_006762bc(param_1);
            if (piVar15 == (int *)0x0) {
LAB_006795a0:
              lVar13 = 0;
            }
            else {
              iVar5 = *piVar15;
              if (iVar5 == 0x31) {
                pcVar11 = (char *)**(undefined8 **)(piVar15 + 2);
                *(int *)(param_1 + 0x50) =
                     *(int *)(param_1 + 0x50) + *(int *)(*(undefined8 **)(piVar15 + 2) + 2) + -2;
                iVar5 = strcmp(pcVar11,"st");
                if (iVar5 != 0) {
                  lVar13 = 0;
                    /* try { // try from 00679580 to 0077958b has its CatchHandler @ 00679980 */
                  switch(*(undefined4 *)(*(long *)(piVar15 + 2) + 0x14)) {
                  case 0:
                    goto switchD_00679530_caseD_0;
                  case 1:
                    goto switchD_0067958c_caseD_1;
                  case 2:
                    goto switchD_0067958c_caseD_2;
                  case 3:
                    goto switchD_0067958c_caseD_3;
                  default:
                    goto switchD_00679530_default;
                  }
                }
                uVar7 = FUN_00674b04(param_1);
              }
              else {
                if (iVar5 == 0x32) {
                  lVar13 = 0;
                    /* try { // try from 00679528 to 0077957f has its CatchHandler @ 00679528
                       catch() { ... } // from try @ 00679528 with catch @ 00679528
                       catch() { ... } // from try @ 006796b0 with catch @ 00679528
                       catch() { ... } // from try @ 006798dc with catch @ 00679528 */
                  switch(piVar15[2]) {
                  case 0:
switchD_00679530_caseD_0:
                    lVar13 = FUN_00671f00(param_1,0x35,piVar15,0);
                    break;
                  case 1:
                    goto switchD_00679530_caseD_1;
                  case 2:
                    /* try { // try from 006795a8 to 007795b3 has its CatchHandler @ 00679970 */
                    pcVar11 = (char *)0x0;
switchD_0067958c_caseD_2:
                    /* try { // try from 006795bc to 007795cf has its CatchHandler @ 00679968 */
                    /* try { // try from 00679688 to 007796af has its CatchHandler @ 00679984 */
                    if ((((char *)**(undefined8 **)(piVar15 + 2))[1] == 'c') &&
                       ((cVar17 = *(char *)**(undefined8 **)(piVar15 + 2),
                        (byte)(cVar17 + 0x8eU) < 2 || ((byte)(cVar17 + 0x9dU) < 2)))) {
                    /* try { // try from 006796b0 to 007798b3 has its CatchHandler @ 00679528 */
                      uVar7 = FUN_00674b04(param_1);
                    }
                    else {
                      uVar7 = FUN_0067781c(param_1);
                    }
                    /* try { // try from 006795d0 to 007795db has its CatchHandler @ 00679960 */
                    iVar5 = strcmp(pcVar11,"cl");
                    /* try { // try from 006795dc to 007795e7 has its CatchHandler @ 00679984 */
                    if (iVar5 == 0) {
                      uVar8 = FUN_006743b0(param_1,0x45);
                    }
                    else {
                    /* try { // try from 006795e8 to 007795f3 has its CatchHandler @ 0067994c */
                      iVar5 = strcmp(pcVar11,"dt");
                    /* try { // try from 006795f8 to 007795ff has its CatchHandler @ 006798e4 */
                      if ((iVar5 == 0) || (iVar5 = strcmp(pcVar11,"pt"), iVar5 == 0)) {
                    /* try { // try from 0067960c to 00779613 has its CatchHandler @ 00679984 */
                        uVar8 = FUN_006764b0(param_1);
                        if (**(char **)(param_1 + 0x18) == 'I') {
                    /* try { // try from 00679628 to 0077963b has its CatchHandler @ 00679890 */
                          uVar16 = FUN_00672ec4(param_1);
                    /* try { // try from 0067963c to 0077964f has its CatchHandler @ 00679824 */
                          uVar8 = FUN_00671f00(param_1,4,uVar8,uVar16);
                        }
                      }
                      else {
                        uVar8 = FUN_0067781c(param_1);
                      }
                    }
                    uVar7 = FUN_00671f00(param_1,0x38,uVar7,uVar8);
                    lVar13 = FUN_00671f00(param_1,0x37,piVar15,uVar7);
                    break;
                  case 3:
                    pcVar11 = (char *)0x0;
switchD_0067958c_caseD_3:
                    iVar5 = strcmp(pcVar11,"qu");
                    if (iVar5 == 0) {
                      uVar7 = FUN_0067781c(param_1);
                      uVar8 = FUN_0067781c(param_1);
                    /* catch() { ... } // from try @ 0067963c with catch @ 00679824 */
                      uVar16 = FUN_0067781c(param_1);
                    }
                    else {
                      if ((*pcVar11 != 'n') || ((pcVar11[1] != 'a' && (pcVar11[1] != 'w'))))
                      goto LAB_006795a0;
                      uVar7 = FUN_006743b0(param_1,0x5f);
                      uVar8 = FUN_00674b04(param_1);
                      pcVar11 = *(char **)(param_1 + 0x18);
                      cVar17 = *pcVar11;
                      if (cVar17 != 'E') {
                        if (cVar17 == 'p') {
                          lVar13 = 0;
                          if (pcVar11[1] == 'i') {
                            *(char **)(param_1 + 0x18) = pcVar11 + 2;
                            uVar16 = FUN_006743b0(param_1,0x45);
                            goto LAB_006797cc;
                          }
                        }
                        else {
                          if (cVar17 != 'i') goto LAB_006795a0;
                          lVar13 = 0;
                          if (pcVar11[1] == 'l') {
                            uVar16 = FUN_0067781c(param_1);
                            goto LAB_006797cc;
                          }
                        }
                        break;
                      }
                      uVar16 = 0;
                      *(char **)(param_1 + 0x18) = pcVar11 + 1;
                    }
LAB_006797cc:
                    uVar8 = FUN_00671f00(param_1,0x3b,uVar8,uVar16);
                    uVar7 = FUN_00671f00(param_1,0x3a,uVar7,uVar8);
                    lVar13 = FUN_00671f00(param_1,0x39,piVar15,uVar7);
                  }
                  break;
                }
                if (iVar5 != 0x33) goto LAB_006795a0;
                if (**(char **)(param_1 + 0x18) == '_') {
                  *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                  uVar7 = FUN_006743b0(param_1,0x45);
                  goto LAB_00678a98;
                }
switchD_00679530_caseD_1:
                uVar7 = FUN_0067781c(param_1);
              }
LAB_00678a98:
              lVar13 = FUN_00671f00(param_1,0x36,piVar15,uVar7);
            }
          }
        }
        else {
          if (9 < (byte)(cVar17 - 0x30U)) {
            if (cVar17 != 'o') goto LAB_00678a30;
            if (pcVar11[1] != 'n') goto LAB_00678a50;
            *(char **)(param_1 + 0x18) = pcVar11 + 2;
          }
          lVar13 = FUN_006764b0(param_1);
          if ((lVar13 != 0) && (**(char **)(param_1 + 0x18) == 'I')) {
            uVar7 = FUN_00672ec4(param_1);
            lVar13 = FUN_00671f00(param_1,4,lVar13,uVar7);
          }
        }
        break;
      default:
        goto switchD_00679b38_default;
      }
    }
  }
  else {
    if ((*pcVar11 != 'n') || ((pcVar11[1] != 'a' && (pcVar11[1] != 'w'))))
    goto switchD_006783cc_default;
    piVar12 = (int *)FUN_006743b0(param_1,0x5f);
    lVar9 = FUN_00674b04(param_1);
    pcVar11 = *(char **)(param_1 + 0x18);
    cVar17 = *pcVar11;
    if (cVar17 == 'E') {
      lVar13 = 0;
      *(char **)(param_1 + 0x18) = pcVar11 + 1;
    }
    else if (cVar17 == 'p') {
      if (pcVar11[1] != 'i') goto switchD_006783cc_default;
      *(char **)(param_1 + 0x18) = pcVar11 + 2;
      lVar13 = FUN_006743b0(param_1,0x45);
    }
    else {
                    /* try { // try from 00678480 to 00778487 has its CatchHandler @ 00678780 */
                    /* try { // try from 00678488 to 007784db has its CatchHandler @ 00678178 */
      if ((cVar17 != 'i') || (pcVar11[1] != 'l')) {
switchD_006783cc_default:
        *(undefined4 *)(param_1 + 0x54) = uVar1;
        return 0;
      }
      lVar13 = FUN_0067781c(param_1);
    }
  }
switchD_00679530_default:
  uVar7 = FUN_00671f00(param_1,0x3b,lVar9,lVar13);
  uVar7 = FUN_00671f00(param_1,0x3a,piVar12,uVar7);
  lVar9 = FUN_00671f00(param_1,0x39,piVar10,uVar7);
                    /* try { // try from 006784dc to 007784df has its CatchHandler @ 00678770 */
                    /* try { // try from 006784e0 to 00778593 has its CatchHandler @ 00678178 */
  goto LAB_0067818c;
switchD_00679ebc_caseD_1:
  cVar17 = *pcVar11;
  if (((cVar17 == 'm') || (cVar17 == 'p')) && (pcVar11[1] == cVar17)) {
                    /* catch() { ... } // from try @ 0067a024 with catch @ 0067a180 */
                    /* catch() { ... } // from try @ 0067a010 with catch @ 0067a184 */
    if (**(char **)(param_1 + 0x18) != '_') {
      uVar7 = FUN_0067781c(param_1);
      uVar7 = FUN_00671f00(param_1,0x38,uVar7,uVar7);
      uVar8 = 0x36;
      goto LAB_00678928;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
switchD_00679b38_caseD_1:
  uVar7 = FUN_0067781c(param_1);
LAB_00678920:
  uVar8 = 0x36;
LAB_00678928:
  piVar12 = (int *)FUN_00671f00(param_1,uVar8,piVar15,uVar7);
  pcVar11 = *(char **)(param_1 + 0x18);
  cVar17 = *pcVar11;
  goto LAB_0067893c;
switchD_0067958c_caseD_1:
  cVar17 = *pcVar11;
  if (((cVar17 == 'm') || (cVar17 == 'p')) && (pcVar11[1] == cVar17)) {
    if (**(char **)(param_1 + 0x18) != '_') {
      uVar7 = FUN_0067781c(param_1);
      uVar7 = FUN_00671f00(param_1,0x38,uVar7,uVar7);
      goto LAB_00678a98;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  goto switchD_00679530_caseD_1;
switchD_00679154_caseD_1:
  cVar17 = *pcVar11;
  if (((cVar17 == 'm') || (cVar17 == 'p')) && (pcVar11[1] == cVar17)) {
    if (**(char **)(param_1 + 0x18) != '_') {
      uVar7 = FUN_0067781c(param_1);
      uVar7 = FUN_00671f00(param_1,0x38,uVar7,uVar7);
      goto LAB_006782b4;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  goto switchD_006790fc_caseD_1;
}


