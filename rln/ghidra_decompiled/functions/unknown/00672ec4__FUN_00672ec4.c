/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00672ec4
 * Function: FUN_00672ec4
 * Signature: undefined FUN_00672ec4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_00672ec4(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 uVar10;
  int *piVar11;
  char *pcVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  char *pcVar16;
  undefined8 *puVar17;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
                    /* catch() { ... } // from try @ 00672a74 with catch @ 00672ec4 */
                    /* catch() { ... } // from try @ 006729fc with catch @ 00672ecc */
  pcVar12 = *(char **)(param_1 + 0x18);
  uVar14 = *(undefined8 *)(param_1 + 0x48);
  if (1 < (byte)(*pcVar12 + 0xb7U)) {
    return 0;
  }
  pcVar16 = pcVar12 + 1;
  *(char **)(param_1 + 0x18) = pcVar16;
  cVar3 = pcVar12[1];
  if (cVar3 == 'E') {
    *(char **)(param_1 + 0x18) = pcVar12 + 2;
    uVar14 = FUN_00671f00(param_1,0x2f,0,0);
    return uVar14;
  }
  plVar13 = &local_8;
  local_8 = 0;
LAB_00672f34:
                    /* catch() { ... } // from try @ 00672a8c with catch @ 00672f34 */
  switch(cVar3) {
  case 'I':
  case 'J':
    lVar5 = FUN_00672ec4(param_1);
                    /* try { // try from 00673094 to 00773187 has its CatchHandler @ 0067301c */
    break;
  default:
                    /* catch() { ... } // from try @ 00672b2c with catch @ 00672f40 */
    lVar5 = FUN_00674b04(param_1);
    break;
  case 'L':
    lVar5 = FUN_006776a4(param_1);
    break;
  case 'X':
    pcVar12 = pcVar16 + 1;
    uVar1 = *(undefined4 *)(param_1 + 0x54);
    *(char **)(param_1 + 0x18) = pcVar12;
    *(undefined4 *)(param_1 + 0x54) = 1;
    cVar3 = pcVar16[1];
    if (cVar3 == 'L') {
      lVar5 = FUN_006776a4(param_1);
      pcVar12 = *(char **)(param_1 + 0x18);
    }
    else if (cVar3 == 'T') {
      lVar5 = FUN_00672cec(param_1);
      pcVar12 = *(char **)(param_1 + 0x18);
    }
    else if (cVar3 == 's') {
      if (pcVar16[2] == 'r') {
        *(char **)(param_1 + 0x18) = pcVar16 + 3;
        uVar7 = FUN_00674b04(param_1);
        uVar8 = FUN_006764b0(param_1);
                    /* try { // try from 0067343c to 0077343f has its CatchHandler @ 00673544 */
                    /* try { // try from 00673440 to 00773557 has its CatchHandler @ 00673374 */
        if (**(char **)(param_1 + 0x18) == 'I') {
          uVar10 = FUN_00672ec4(param_1);
          uVar8 = FUN_00671f00(param_1,4,uVar8,uVar10);
        }
        lVar5 = FUN_00671f00(param_1,1,uVar7,uVar8);
        pcVar12 = *(char **)(param_1 + 0x18);
      }
      else {
        if (pcVar16[2] != 'p') goto LAB_00673020;
        *(char **)(param_1 + 0x18) = pcVar16 + 3;
        uVar7 = FUN_0067781c(param_1);
        lVar5 = FUN_00671f00(param_1,0x4a,uVar7,0);
        pcVar12 = *(char **)(param_1 + 0x18);
      }
    }
    else {
      if (cVar3 == 'f') {
        if (pcVar16[2] != 'p') goto LAB_00673020;
        *(char **)(param_1 + 0x18) = pcVar16 + 3;
        if (pcVar16[3] == 'T') {
          lVar15 = 0;
          *(char **)(param_1 + 0x18) = pcVar16 + 4;
        }
        else {
          iVar4 = FUN_00672bbc(param_1);
          lVar15 = (long)(iVar4 + 1);
          if (iVar4 + 1 == 0) {
            pcVar12 = *(char **)(param_1 + 0x18);
            goto LAB_0067312c;
          }
        }
        iVar4 = *(int *)(param_1 + 0x28);
        if (iVar4 < *(int *)(param_1 + 0x2c)) {
          *(int *)(param_1 + 0x28) = iVar4 + 1;
          lVar5 = *(long *)(param_1 + 0x20) + (long)iVar4 * 0x18;
          if (lVar5 != 0) {
            *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 0x18) = 6;
            *(long *)(lVar5 + 8) = lVar15;
            pcVar12 = *(char **)(param_1 + 0x18);
            goto LAB_006730cc;
          }
        }
        goto switchD_00673388_default;
      }
      if ((byte)(cVar3 - 0x30U) < 10) {
LAB_006730ac:
        lVar5 = FUN_006764b0(param_1);
        pcVar12 = *(char **)(param_1 + 0x18);
        if (lVar5 != 0) {
          if (*pcVar12 == 'I') {
            uVar7 = FUN_00672ec4(param_1);
            lVar5 = FUN_00671f00(param_1,4,lVar5,uVar7);
            pcVar12 = *(char **)(param_1 + 0x18);
          }
          goto LAB_006730cc;
        }
      }
      else {
        if (cVar3 == 'o') {
          if (pcVar16[2] == 'n') {
            *(char **)(param_1 + 0x18) = pcVar16 + 3;
            goto LAB_006730ac;
          }
        }
        else {
                    /* catch() { ... } // from try @ 006728ec with catch @ 00673008 */
                    /* try { // try from 0067301c to 00773073 has its CatchHandler @ 0067301c
                       catch() { ... } // from try @ 0067301c with catch @ 0067301c
                       catch() { ... } // from try @ 00673094 with catch @ 0067301c */
          if (((cVar3 == 't') || (cVar3 == 'i')) && (pcVar16[2] == 'l')) {
            uVar7 = 0;
            if (cVar3 == 't') {
              uVar7 = FUN_00674b04(param_1);
              pcVar12 = *(char **)(param_1 + 0x18);
            }
            *(char **)(param_1 + 0x18) = pcVar12 + 2;
            uVar8 = FUN_006743b0(param_1,0x45);
            lVar5 = FUN_00671f00(param_1,0x30,uVar7,uVar8);
            pcVar12 = *(char **)(param_1 + 0x18);
            goto LAB_006730cc;
          }
        }
LAB_00673020:
        piVar6 = (int *)FUN_006762bc(param_1);
        if (piVar6 != (int *)0x0) {
          iVar4 = *piVar6;
          if (iVar4 == 0x31) {
            puVar17 = *(undefined8 **)(piVar6 + 2);
            pcVar12 = (char *)*puVar17;
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(puVar17 + 2) + -2;
            iVar4 = strcmp(pcVar12,"st");
            if (iVar4 == 0) {
              uVar7 = FUN_00674b04(param_1);
LAB_006733fc:
              lVar5 = FUN_00671f00(param_1,0x36,piVar6,uVar7);
              pcVar12 = *(char **)(param_1 + 0x18);
              goto LAB_006730cc;
            }
            switch(*(undefined4 *)((long)puVar17 + 0x14)) {
            case 0:
              goto switchD_00673388_caseD_0;
            case 1:
              cVar3 = *pcVar12;
              if (((cVar3 == 'm') || (cVar3 == 'p')) && (pcVar12[1] == cVar3)) {
                if (**(char **)(param_1 + 0x18) != '_') {
                  uVar7 = FUN_0067781c(param_1);
                  uVar7 = FUN_00671f00(param_1,0x38,uVar7,uVar7);
                  goto LAB_006733fc;
                }
                *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
              }
              goto switchD_00673388_caseD_1;
            case 2:
              goto switchD_00673260_caseD_2;
            case 3:
              goto switchD_00673260_caseD_3;
            }
          }
          else if (iVar4 == 0x32) {
                    /* try { // try from 00673374 to 0077343b has its CatchHandler @ 00673374
                       catch() { ... } // from try @ 00673374 with catch @ 00673374
                       catch() { ... } // from try @ 00673440 with catch @ 00673374 */
            switch(piVar6[2]) {
            case 0:
switchD_00673388_caseD_0:
              lVar5 = FUN_00671f00(param_1,0x35,piVar6,0);
              pcVar12 = *(char **)(param_1 + 0x18);
              goto LAB_006730cc;
            case 1:
              goto switchD_00673388_caseD_1;
            case 2:
              pcVar12 = (char *)0x0;
switchD_00673260_caseD_2:
              if ((((char *)**(undefined8 **)(piVar6 + 2))[1] == 'c') &&
                 ((cVar3 = *(char *)**(undefined8 **)(piVar6 + 2), (byte)(cVar3 + 0x8eU) < 2 ||
                  ((byte)(cVar3 + 0x9dU) < 2)))) {
                uVar7 = FUN_00674b04(param_1);
              }
              else {
                uVar7 = FUN_0067781c(param_1);
              }
              iVar4 = strcmp(pcVar12,"cl");
              if (iVar4 == 0) {
                uVar8 = FUN_006743b0(param_1,0x45);
              }
              else {
                iVar4 = strcmp(pcVar12,"dt");
                if ((iVar4 == 0) || (iVar4 = strcmp(pcVar12,"pt"), iVar4 == 0)) {
                  uVar8 = FUN_006764b0(param_1);
                  if (**(char **)(param_1 + 0x18) == 'I') {
                    uVar10 = FUN_00672ec4(param_1);
                    uVar8 = FUN_00671f00(param_1,4,uVar8,uVar10);
                  }
                }
                else {
                  uVar8 = FUN_0067781c(param_1);
                }
              }
              uVar7 = FUN_00671f00(param_1,0x38,uVar7,uVar8);
              lVar5 = FUN_00671f00(param_1,0x37,piVar6,uVar7);
              pcVar12 = *(char **)(param_1 + 0x18);
              goto LAB_006730cc;
            case 3:
              pcVar12 = (char *)0x0;
switchD_00673260_caseD_3:
              iVar4 = strcmp(pcVar12,"qu");
                    /* catch() { ... } // from try @ 00673074 with catch @ 00673118 */
              if (iVar4 == 0) {
                local_18 = FUN_0067781c(param_1);
                pcVar12 = *(char **)(param_1 + 0x18);
                cVar3 = *pcVar12;
                if (cVar3 == 'L') {
                  piVar9 = (int *)FUN_006776a4(param_1);
                  pcVar12 = *(char **)(param_1 + 0x18);
                  cVar3 = *pcVar12;
LAB_006736bc:
                  if (cVar3 == 'L') {
                    /* catch() { ... } // from try @ 00673b40 with catch @ 00673b90 */
                    lVar5 = FUN_006776a4(param_1);
                  }
                  else if (cVar3 == 'T') {
                    lVar5 = FUN_00672cec(param_1);
                  }
                  else if (cVar3 == 's') {
                    /* catch() { ... } // from try @ 00673a04 with catch @ 00673948
                       catch() { ... } // from try @ 00673a80 with catch @ 00673948 */
                    if (pcVar12[1] == 'r') {
                      *(char **)(param_1 + 0x18) = pcVar12 + 2;
                      uVar7 = FUN_00674b04(param_1);
                      uVar8 = FUN_006764b0(param_1);
                      if (**(char **)(param_1 + 0x18) == 'I') {
                        uVar10 = FUN_00672ec4(param_1);
                        uVar8 = FUN_00671f00(param_1,4,uVar8,uVar10);
                      }
                      lVar5 = FUN_00671f00(param_1,1,uVar7,uVar8);
                    }
                    else {
                      if (pcVar12[1] != 'p') goto LAB_00673714;
                      *(char **)(param_1 + 0x18) = pcVar12 + 2;
                      uVar7 = FUN_0067781c(param_1);
                      lVar5 = FUN_00671f00(param_1,0x4a,uVar7,0);
                    }
                  }
                  else if (cVar3 == 'f') {
                    if (pcVar12[1] == 'p') {
                      *(char **)(param_1 + 0x18) = pcVar12 + 2;
                      if (pcVar12[2] == 'T') {
                        lVar15 = 0;
                        *(char **)(param_1 + 0x18) = pcVar12 + 3;
                      }
                      else {
                        iVar4 = FUN_00672bbc(param_1);
                        if (iVar4 + 1 == 0) goto LAB_00673b74;
                        lVar15 = (long)(iVar4 + 1);
                      }
                      iVar4 = *(int *)(param_1 + 0x28);
                      lVar5 = 0;
                      if (iVar4 < *(int *)(param_1 + 0x2c)) {
                        *(int *)(param_1 + 0x28) = iVar4 + 1;
                        lVar5 = *(long *)(param_1 + 0x20) + (long)iVar4 * 0x18;
                        if (lVar5 != 0) {
                          *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 0x18) = 6;
                          *(long *)(lVar5 + 8) = lVar15;
                        }
                      }
                    }
                    else {
LAB_00673714:
                      piVar11 = (int *)FUN_006762bc(param_1);
                      if (piVar11 == (int *)0x0) {
LAB_00673b74:
                        lVar5 = 0;
                      }
                      else {
                        iVar4 = *piVar11;
                        if (iVar4 == 0x31) {
                          puVar17 = *(undefined8 **)(piVar11 + 2);
                          pcVar12 = (char *)*puVar17;
                          *(int *)(param_1 + 0x50) =
                               *(int *)(param_1 + 0x50) + *(int *)(puVar17 + 2) + -2;
                          iVar4 = strcmp(pcVar12,"st");
                    /* try { // try from 00673b40 to 00773b47 has its CatchHandler @ 00673b90 */
                    /* try { // try from 00673b48 to 00773bb3 has its CatchHandler @ 00673b08 */
                          if (iVar4 != 0) {
                            lVar5 = 0;
                            switch(*(undefined4 *)((long)puVar17 + 0x14)) {
                            case 0:
                              goto switchD_00673b08_caseD_0;
                            case 1:
                              goto switchD_00673b70_caseD_1;
                            case 2:
                              goto switchD_00673b70_caseD_2;
                            case 3:
                              goto switchD_00673b70_caseD_3;
                            default:
                              goto switchD_00673b08_default;
                            }
                          }
                          uVar7 = FUN_00674b04(param_1);
                        }
                        else {
                          if (iVar4 == 0x32) {
                            lVar5 = 0;
                    /* catch() { ... } // from try @ 00673b48 with catch @ 00673b08
                       catch() { ... } // from try @ 00673bbc with catch @ 00673b08 */
                            switch(piVar11[2]) {
                            case 0:
switchD_00673b08_caseD_0:
                              lVar5 = FUN_00671f00(param_1,0x35,piVar11,0);
                              break;
                            case 1:
                              goto switchD_00673b08_caseD_1;
                            case 2:
                              pcVar12 = (char *)0x0;
switchD_00673b70_caseD_2:
                              if (((char *)**(undefined8 **)(piVar11 + 2))[1] == 'c') {
                                cVar3 = *(char *)**(undefined8 **)(piVar11 + 2);
                                bVar2 = cVar3 + 0x8e;
                                if ((1 < bVar2) && (1 < (byte)(cVar3 + 0x9dU))) goto LAB_00673e2c;
                    /* try { // try from 0067417c to 00774203 has its CatchHandler @ 0067417c
                       catch() { ... } // from try @ 0067417c with catch @ 0067417c
                       catch() { ... } // from try @ 00674374 with catch @ 0067417c
                       catch() { ... } // from try @ 006743f8 with catch @ 0067417c */
                                local_20 = FUN_00674b04(param_1,bVar2,pcVar12,0);
                              }
                              else {
LAB_00673e2c:
                                local_20 = FUN_0067781c(param_1);
                              }
                              iVar4 = strcmp(pcVar12,"cl");
                              if (iVar4 == 0) {
                                uVar7 = FUN_006743b0(param_1,0x45);
                              }
                              else {
                                iVar4 = strcmp(pcVar12,"dt");
                                if ((iVar4 == 0) || (iVar4 = strcmp(pcVar12,"pt"), iVar4 == 0)) {
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
                              uVar7 = FUN_00671f00(param_1,0x38,local_20,uVar7);
                              lVar5 = FUN_00671f00(param_1,0x37,piVar11,uVar7);
                              break;
                            case 3:
                              pcVar12 = (char *)0x0;
switchD_00673b70_caseD_3:
                              iVar4 = strcmp(pcVar12,"qu");
                              if (iVar4 == 0) {
                                local_20 = FUN_0067781c(param_1);
                                local_28 = FUN_0067781c(param_1);
                                uVar7 = FUN_0067781c(param_1);
                              }
                              else {
                                if ((*pcVar12 != 'n') ||
                                   ((pcVar12[1] != 'a' && (pcVar12[1] != 'w')))) goto LAB_00673b74;
                                local_20 = FUN_006743b0(param_1,0x5f);
                                local_28 = FUN_00674b04(param_1);
                                pcVar12 = *(char **)(param_1 + 0x18);
                                cVar3 = *pcVar12;
                                if (cVar3 != 'E') {
                                  if (cVar3 == 'p') {
                    /* try { // try from 00674204 to 0077420b has its CatchHandler @ 006743c4 */
                                    lVar5 = 0;
                                    if (pcVar12[1] == 'i') {
                                      *(char **)(param_1 + 0x18) = pcVar12 + 2;
                                      uVar7 = FUN_006743b0(param_1,0x45);
                                      goto LAB_00673f64;
                                    }
                                  }
                                  else {
                                    if (cVar3 != 'i') goto LAB_00673b74;
                                    lVar5 = 0;
                                    if (pcVar12[1] == 'l') {
                                      uVar7 = FUN_0067781c(param_1);
                                      goto LAB_00673f64;
                                    }
                                  }
                                  break;
                                }
                                uVar7 = 0;
                                *(char **)(param_1 + 0x18) = pcVar12 + 1;
                              }
LAB_00673f64:
                              uVar7 = FUN_00671f00(param_1,0x3b,local_28,uVar7);
                              uVar7 = FUN_00671f00(param_1,0x3a,local_20,uVar7);
                              lVar5 = FUN_00671f00(param_1,0x39,piVar11,uVar7);
                            }
                            goto switchD_00673b08_default;
                          }
                          if (iVar4 != 0x33) goto LAB_00673b74;
                          if (**(char **)(param_1 + 0x18) == '_') {
                            *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                            uVar7 = FUN_006743b0(param_1,0x45);
                            goto LAB_0067375c;
                          }
switchD_00673b08_caseD_1:
                          uVar7 = FUN_0067781c(param_1);
                        }
LAB_0067375c:
                        lVar5 = FUN_00671f00(param_1,0x36,piVar11,uVar7);
                      }
                    }
                  }
                  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00673674 with catch @ 006736dc
                        */
                    if (9 < (byte)(cVar3 - 0x30U)) {
                      if (cVar3 != 'o') goto LAB_006736f4;
                      if (pcVar12[1] != 'n') goto LAB_00673714;
                      *(char **)(param_1 + 0x18) = pcVar12 + 2;
                    }
                    lVar5 = FUN_006764b0(param_1);
                    if ((lVar5 != 0) && (**(char **)(param_1 + 0x18) == 'I')) {
                      uVar7 = FUN_00672ec4(param_1);
                      lVar5 = FUN_00671f00(param_1,4,lVar5,uVar7);
                    }
                  }
                }
                else {
                  if (cVar3 == 'T') {
                    piVar9 = (int *)FUN_00672cec(param_1);
                    pcVar12 = *(char **)(param_1 + 0x18);
                    cVar3 = *pcVar12;
                    goto LAB_006736bc;
                  }
                  if (cVar3 == 's') {
                    if (pcVar12[1] == 'r') {
                      *(char **)(param_1 + 0x18) = pcVar12 + 2;
                      piVar9 = (int *)FUN_00674b04(param_1);
                      uVar7 = FUN_006764b0(param_1);
                      if (**(char **)(param_1 + 0x18) != 'I') {
                        piVar9 = (int *)FUN_00671f00(param_1,1,piVar9,uVar7);
                        pcVar12 = *(char **)(param_1 + 0x18);
                        cVar3 = *pcVar12;
                        goto LAB_006736bc;
                      }
                      uVar8 = FUN_00672ec4(param_1);
                      uVar7 = FUN_00671f00(param_1,4,uVar7,uVar8);
                      uVar8 = 1;
                      goto LAB_006736a8;
                    }
                    if (pcVar12[1] != 'p') goto LAB_00673658;
                    *(char **)(param_1 + 0x18) = pcVar12 + 2;
                    piVar9 = (int *)FUN_0067781c(param_1);
                    uVar7 = 0x4a;
LAB_006739fc:
                    /* try { // try from 006739fc to 00773a03 has its CatchHandler @ 00673a54 */
                    piVar11 = (int *)FUN_00671f00(param_1,uVar7,piVar9,0);
                    /* try { // try from 00673a04 to 00773a77 has its CatchHandler @ 00673948 */
LAB_00673a08:
                    piVar9 = piVar11;
                    pcVar12 = *(char **)(param_1 + 0x18);
LAB_00673a0c:
                    cVar3 = *pcVar12;
                    goto LAB_006736bc;
                  }
                  if (cVar3 == 'f') {
                    if (pcVar12[1] != 'p') goto LAB_00673658;
                    *(char **)(param_1 + 0x18) = pcVar12 + 2;
                    if (pcVar12[2] == 'T') {
                      pcVar12 = pcVar12 + 3;
                      lVar5 = 0;
                      *(char **)(param_1 + 0x18) = pcVar12;
                    }
                    else {
                      iVar4 = FUN_00672bbc(param_1);
                      pcVar12 = *(char **)(param_1 + 0x18);
                      if (iVar4 + 1 == 0) {
LAB_00673a18:
                        piVar9 = (int *)0x0;
                        cVar3 = *pcVar12;
                        goto LAB_006736bc;
                      }
                      lVar5 = (long)(iVar4 + 1);
                    }
                    iVar4 = *(int *)(param_1 + 0x28);
                    if (iVar4 < *(int *)(param_1 + 0x2c)) {
                      *(int *)(param_1 + 0x28) = iVar4 + 1;
                      piVar9 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 0x18);
                      if (piVar9 == (int *)0x0) goto LAB_00673a0c;
                      *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 0x18) = 6;
                      *(long *)(piVar9 + 2) = lVar5;
                      cVar3 = *pcVar12;
                    }
                    else {
                      cVar3 = *pcVar12;
                      piVar9 = (int *)0x0;
                    }
                    goto LAB_006736bc;
                  }
                  if ((byte)(cVar3 - 0x30U) < 10) {
LAB_00673870:
                    piVar9 = (int *)FUN_006764b0(param_1);
                    pcVar12 = *(char **)(param_1 + 0x18);
                    cVar3 = *pcVar12;
                    if ((piVar9 != (int *)0x0) && (cVar3 == 'I')) {
                      uVar7 = FUN_00672ec4(param_1);
                      uVar8 = 4;
                      goto LAB_006736a8;
                    }
                    goto LAB_006736bc;
                  }
                  if (cVar3 == 'o') {
                    if (pcVar12[1] == 'n') {
                      *(char **)(param_1 + 0x18) = pcVar12 + 2;
                      goto LAB_00673870;
                    }
                  }
                  else if (((cVar3 == 't') || (cVar3 == 'i')) && (pcVar12[1] == 'l')) {
                    uVar7 = 0;
                    if (cVar3 == 't') {
                      uVar7 = FUN_00674b04(param_1);
                    /* try { // try from 00674374 to 007743ef has its CatchHandler @ 0067417c */
                      pcVar12 = *(char **)(param_1 + 0x18);
                    }
                    *(char **)(param_1 + 0x18) = pcVar12 + 2;
                    uVar8 = FUN_006743b0(param_1,0x45);
                    /* catch() { ... } // from try @ 006739fc with catch @ 00673a54 */
                    piVar9 = (int *)FUN_00671f00(param_1,0x30,uVar7,uVar8);
                    pcVar12 = *(char **)(param_1 + 0x18);
                    cVar3 = *pcVar12;
                    goto LAB_006736bc;
                  }
LAB_00673658:
                  piVar9 = (int *)FUN_006762bc(param_1);
                  piVar11 = (int *)0x0;
                  if (piVar9 == (int *)0x0) goto LAB_00673a08;
                  iVar4 = *piVar9;
                  if (iVar4 == 0x31) {
                    puVar17 = *(undefined8 **)(piVar9 + 2);
                    /* try { // try from 00673bb4 to 00773bbb has its CatchHandler @ 00673bc4 */
                    pcVar12 = (char *)*puVar17;
                    /* try { // try from 00673bbc to 00773bc7 has its CatchHandler @ 00673b08 */
                    /* catch() { ... } // from try @ 00673bb4 with catch @ 00673bc4 */
                    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(puVar17 + 2) + -2
                    ;
                    iVar4 = strcmp(pcVar12,"st");
                    if (iVar4 != 0) {
                      switch(*(undefined4 *)((long)puVar17 + 0x14)) {
                      case 0:
                        goto switchD_00673a88_caseD_0;
                      case 1:
                        goto switchD_00673bf4_caseD_1;
                      case 2:
                        goto switchD_00673bf4_caseD_2;
                      case 3:
                        goto switchD_00673bf4_caseD_3;
                      default:
                        goto switchD_00673a88_default;
                      }
                    }
                    uVar7 = FUN_00674b04(param_1);
                    uVar8 = 0x36;
                    goto LAB_006736a8;
                  }
                    /* try { // try from 00673674 to 0077367b has its CatchHandler @ 006736dc */
                  if (iVar4 != 0x32) {
                    /* try { // try from 0067367c to 007736ff has its CatchHandler @ 00673558 */
                    if (iVar4 == 0x33) {
                      if (**(char **)(param_1 + 0x18) != '_') goto switchD_00673a88_caseD_1;
                      *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
                      uVar7 = FUN_006743b0(param_1,0x45);
                    /* try { // try from 00674288 to 0077428f has its CatchHandler @ 006743b8 */
                      goto LAB_006736a0;
                    }
switchD_00673a88_default:
                    pcVar12 = *(char **)(param_1 + 0x18);
                    goto LAB_00673a18;
                  }
                    /* try { // try from 00673a78 to 00773a7f has its CatchHandler @ 00673a88 */
                    /* try { // try from 00673a80 to 00773a8b has its CatchHandler @ 00673948 */
                    /* catch() { ... } // from try @ 00673a78 with catch @ 00673a88 */
                  switch(piVar9[2]) {
                  case 0:
switchD_00673a88_caseD_0:
                    uVar7 = 0x35;
                    goto LAB_006739fc;
                  case 1:
                    goto switchD_00673a88_caseD_1;
                  case 2:
                    pcVar12 = (char *)0x0;
switchD_00673bf4_caseD_2:
                    /* try { // try from 0067430c to 0077430f has its CatchHandler @ 006743d0 */
                    if ((((char *)**(undefined8 **)(piVar9 + 2))[1] == 'c') &&
                       ((cVar3 = *(char *)**(undefined8 **)(piVar9 + 2), (byte)(cVar3 + 0x8eU) < 2
                        || ((byte)(cVar3 + 0x9dU) < 2)))) {
                      local_20 = FUN_00674b04(param_1);
                    }
                    else {
                      local_20 = FUN_0067781c(param_1);
                    }
                    iVar4 = strcmp(pcVar12,"cl");
                    if (iVar4 == 0) {
                      uVar7 = FUN_006743b0(param_1,0x45);
                    }
                    else {
                      iVar4 = strcmp(pcVar12,"dt");
                      if ((iVar4 == 0) || (iVar4 = strcmp(pcVar12,"pt"), iVar4 == 0)) {
                        uVar7 = FUN_006764b0(param_1);
                        if (**(char **)(param_1 + 0x18) == 'I') {
                          uVar8 = FUN_00672ec4(param_1);
                    /* try { // try from 00674354 to 00774373 has its CatchHandler @ 006743c4 */
                          uVar7 = FUN_00671f00(param_1,4,uVar7,uVar8);
                        }
                      }
                      else {
                        uVar7 = FUN_0067781c(param_1);
                      }
                    }
                    uVar7 = FUN_00671f00(param_1,0x38,local_20,uVar7);
                    uVar8 = 0x37;
                    goto LAB_006736a8;
                  case 3:
                    pcVar12 = (char *)0x0;
switchD_00673bf4_caseD_3:
                    iVar4 = strcmp(pcVar12,"qu");
                    if (iVar4 == 0) {
                      local_20 = FUN_0067781c(param_1);
                      uVar7 = FUN_0067781c(param_1);
                      uVar8 = FUN_0067781c(param_1);
LAB_00673ddc:
                      uVar7 = FUN_00671f00(param_1,0x3b,uVar7,uVar8);
                      uVar7 = FUN_00671f00(param_1,0x3a,local_20,uVar7);
                      uVar8 = 0x39;
                      goto LAB_006736a8;
                    }
                    if ((*pcVar12 != 'n') || ((pcVar12[1] != 'a' && (pcVar12[1] != 'w'))))
                    goto switchD_00673a88_default;
                    local_20 = FUN_006743b0(param_1,0x5f);
                    uVar7 = FUN_00674b04(param_1);
                    pcVar12 = *(char **)(param_1 + 0x18);
                    cVar3 = *pcVar12;
                    if (cVar3 == 'E') {
                      uVar8 = 0;
                      *(char **)(param_1 + 0x18) = pcVar12 + 1;
                      goto LAB_00673ddc;
                    }
                    if (cVar3 == 'p') {
                      if (pcVar12[1] == 'i') {
                        *(char **)(param_1 + 0x18) = pcVar12 + 2;
                        uVar8 = FUN_006743b0(param_1,0x45);
                        goto LAB_00673ddc;
                      }
                    }
                    else {
                      if (cVar3 != 'i') {
                        piVar9 = (int *)0x0;
                        goto LAB_006736bc;
                      }
                      if (pcVar12[1] == 'l') {
                        uVar8 = FUN_0067781c(param_1);
                        goto LAB_00673ddc;
                      }
                    }
                    piVar9 = (int *)0x0;
LAB_006736f4:
                    /* try { // try from 00673700 to 00773707 has its CatchHandler @ 00673710 */
                    /* try { // try from 00673708 to 00773713 has its CatchHandler @ 00673558 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00673700 with catch @ 00673710
                        */
                    if (((cVar3 != 't') && (cVar3 != 'i')) || (pcVar12[1] != 'l'))
                    goto LAB_00673714;
                    uVar7 = 0;
                    if (cVar3 == 't') {
                      uVar7 = FUN_00674b04(param_1);
                    }
                    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 2;
                    uVar8 = FUN_006743b0(param_1,0x45);
                    lVar5 = FUN_00671f00(param_1,0x30,uVar7,uVar8);
                    break;
                  default:
                    goto switchD_00673a88_default;
                  }
                }
              }
              else {
                if ((*pcVar12 != 'n') || ((pcVar12[1] != 'a' && (pcVar12[1] != 'w')))) break;
                local_18 = FUN_006743b0(param_1,0x5f);
                piVar9 = (int *)FUN_00674b04(param_1);
                pcVar12 = *(char **)(param_1 + 0x18);
                cVar3 = *pcVar12;
                if (cVar3 != 'E') {
                  if (cVar3 == 'p') {
                    lVar5 = 0;
                    if (pcVar12[1] == 'i') {
                      *(char **)(param_1 + 0x18) = pcVar12 + 2;
                      lVar5 = FUN_006743b0(param_1,0x45);
                      goto switchD_00673b08_default;
                    }
                  }
                  else {
                    lVar5 = 0;
                    if ((cVar3 == 'i') && (pcVar12[1] == 'l')) {
                      lVar5 = FUN_0067781c(param_1);
                      goto switchD_00673b08_default;
                    }
                  }
                  goto LAB_006730cc;
                }
                lVar5 = 0;
                *(char **)(param_1 + 0x18) = pcVar12 + 1;
              }
switchD_00673b08_default:
                    /* catch() { ... } // from try @ 0067343c with catch @ 00673544 */
              uVar7 = FUN_00671f00(param_1,0x3b,piVar9,lVar5);
                    /* try { // try from 00673558 to 00773673 has its CatchHandler @ 00673558
                       catch(type#1 @ 00000000) { ... } // from try @ 00673558 with catch @ 00673558
                       catch(type#1 @ 00000000) { ... } // from try @ 0067367c with catch @ 00673558
                       catch(type#1 @ 00000000) { ... } // from try @ 00673708 with catch @ 00673558
                        */
              uVar7 = FUN_00671f00(param_1,0x3a,local_18,uVar7);
              lVar5 = FUN_00671f00(param_1,0x39,piVar6,uVar7);
              pcVar12 = *(char **)(param_1 + 0x18);
              goto LAB_006730cc;
            }
          }
          else if (iVar4 == 0x33) {
            if (**(char **)(param_1 + 0x18) == '_') {
              *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
              uVar7 = FUN_006743b0(param_1,0x45);
                    /* try { // try from 00673074 to 00773093 has its CatchHandler @ 00673118 */
              goto LAB_006733fc;
            }
switchD_00673388_caseD_1:
            uVar7 = FUN_0067781c(param_1);
            goto LAB_006733fc;
          }
        }
switchD_00673388_default:
        pcVar12 = *(char **)(param_1 + 0x18);
      }
LAB_0067312c:
      lVar5 = 0;
    }
LAB_006730cc:
    *(undefined4 *)(param_1 + 0x54) = uVar1;
    if (*pcVar12 != 'E') {
      return 0;
    }
    *(char **)(param_1 + 0x18) = pcVar12 + 1;
  }
  if (lVar5 == 0) {
    return 0;
  }
  lVar5 = FUN_00671f00(param_1,0x2f,lVar5,0);
  *plVar13 = lVar5;
  if (lVar5 == 0) {
    return 0;
  }
  pcVar16 = *(char **)(param_1 + 0x18);
  plVar13 = (long *)(lVar5 + 0x10);
  cVar3 = *pcVar16;
  if (cVar3 == 'E') {
    *(undefined8 *)(param_1 + 0x48) = uVar14;
    *(char **)(param_1 + 0x18) = pcVar16 + 1;
    return local_8;
  }
  goto LAB_00672f34;
switchD_00673bf4_caseD_1:
  cVar3 = *pcVar12;
  if (((cVar3 == 'm') || (cVar3 == 'p')) && (pcVar12[1] == cVar3)) {
    if (**(char **)(param_1 + 0x18) != '_') {
      uVar7 = FUN_0067781c(param_1);
      uVar7 = FUN_00671f00(param_1,0x38,uVar7,uVar7);
      uVar8 = 0x36;
      goto LAB_006736a8;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
switchD_00673a88_caseD_1:
  uVar7 = FUN_0067781c(param_1);
LAB_006736a0:
  uVar8 = 0x36;
LAB_006736a8:
  piVar9 = (int *)FUN_00671f00(param_1,uVar8,piVar9,uVar7);
  pcVar12 = *(char **)(param_1 + 0x18);
  cVar3 = *pcVar12;
  goto LAB_006736bc;
switchD_00673b70_caseD_1:
  cVar3 = *pcVar12;
  if (((cVar3 == 'm') || (cVar3 == 'p')) && (pcVar12[1] == cVar3)) {
    cVar3 = **(char **)(param_1 + 0x18);
    if (cVar3 != '_') {
      uVar7 = FUN_0067781c(param_1,cVar3,pcVar12,0);
      uVar7 = FUN_00671f00(param_1,0x38,uVar7,uVar7);
      goto LAB_0067375c;
    }
    *(char **)(param_1 + 0x18) = *(char **)(param_1 + 0x18) + 1;
  }
  goto switchD_00673b08_caseD_1;
}


