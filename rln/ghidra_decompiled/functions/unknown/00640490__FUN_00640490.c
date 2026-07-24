/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00640490
 * Function: FUN_00640490
 * Signature: undefined FUN_00640490(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00640490(long *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  char local_10 [8];
  long *local_8;
  
                    /* catch() { ... } // from try @ 0063fe08 with catch @ 00640494 */
                    /* catch() { ... } // from try @ 0063fe00 with catch @ 00640498 */
                    /* catch() { ... } // from try @ 0063fd8c with catch @ 0064049c */
                    /* catch() { ... } // from try @ 0063fd30 with catch @ 006404a0 */
  FUN_0063fc7c(local_10,param_1);
  if (local_10[0] == '\0') goto LAB_00640510;
  lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
  lVar8 = *(long *)(lVar5 + 0x10);
  if (param_3 < lVar8) {
                    /* catch() { ... } // from try @ 0063fcd0 with catch @ 006404f0 */
                    /* catch() { ... } // from try @ 0063faa0 with catch @ 006404f4 */
                    /* catch() { ... } // from try @ 0063fa44 with catch @ 006404f8 */
    bVar1 = (*(uint *)(lVar5 + 0x18) & 0xb0) != 0x20;
    if (bVar1) {
      lVar7 = lVar8 - param_3;
      if (*(char *)(lVar5 + 0xe1) == '\0') {
        plVar6 = *(long **)(lVar5 + 0xf0);
                    /* catch() { ... } // from try @ 0063f9bc with catch @ 00640784
                       catch() { ... } // from try @ 0063fa94 with catch @ 00640784
                       catch() { ... } // from try @ 0063faa8 with catch @ 00640784
                       catch() { ... } // from try @ 0063fc7c with catch @ 00640784
                       catch() { ... } // from try @ 0063fce4 with catch @ 00640784
                       catch() { ... } // from try @ 0063fd80 with catch @ 00640784
                       catch() { ... } // from try @ 0063fd94 with catch @ 00640784
                       catch() { ... } // from try @ 0063ff04 with catch @ 00640784
                       catch() { ... } // from try @ 0063ff18 with catch @ 00640784
                       catch() { ... } // from try @ 00640088 with catch @ 00640784
                       catch() { ... } // from try @ 0064009c with catch @ 00640784 */
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_006652c8();
        }
        if ((char)plVar6[7] == '\0') {
          FUN_0061fea0(plVar6);
          uVar3 = (**(code **)(*plVar6 + 0x30))(plVar6,0x20);
        }
        else {
          uVar3 = *(undefined1 *)((long)plVar6 + 0x59);
        }
        *(undefined1 *)(lVar5 + 0xe0) = uVar3;
        *(undefined1 *)(lVar5 + 0xe1) = 1;
        lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
      }
      else {
        uVar3 = *(undefined1 *)(lVar5 + 0xe0);
      }
      if (0 < lVar7) {
        while( true ) {
          plVar6 = *(long **)(lVar5 + 0xe8);
          if ((undefined1 *)plVar6[5] < (undefined1 *)plVar6[6]) {
            *(undefined1 *)plVar6[5] = uVar3;
            plVar6[5] = plVar6[5] + 1;
          }
          else {
            iVar4 = (**(code **)(*plVar6 + 0x68))(plVar6,uVar3);
                    /* catch() { ... } // from try @ 0063f944 with catch @ 006406c8
                       catch() { ... } // from try @ 0063f988 with catch @ 006406c8 */
            if (iVar4 == -1) {
              lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
              FUN_00620c14(lVar5,*(uint *)(lVar5 + 0x20) | 1);
              lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
              goto LAB_00640504;
            }
          }
                    /* catch() { ... } // from try @ 0063fe1c with catch @ 00640690
                       catch() { ... } // from try @ 0063fe60 with catch @ 00640690 */
          lVar7 = lVar7 + -1;
          if (lVar7 == 0) break;
          lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
        }
                    /* catch() { ... } // from try @ 0063f6e4 with catch @ 00640774
                       catch() { ... } // from try @ 0063f6f8 with catch @ 00640774
                       catch() { ... } // from try @ 0063f8a8 with catch @ 00640774
                       catch() { ... } // from try @ 0063f8bc with catch @ 00640774 */
        lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
      }
    }
LAB_00640504:
    if (*(int *)(lVar5 + 0x20) == 0) {
                    /* catch() { ... } // from try @ 0063f794 with catch @ 00640608 */
      lVar5 = (**(code **)(**(long **)(lVar5 + 0xe8) + 0x60))
                        (*(long **)(lVar5 + 0xe8),param_2,param_3);
      if (param_3 != lVar5) {
        lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* catch() { ... } // from try @ 0063f76c with catch @ 00640638 */
                    /* catch() { ... } // from try @ 0063f764 with catch @ 0064063c */
        FUN_00620c14(lVar5,*(uint *)(lVar5 + 0x20) | 1);
      }
                    /* catch() { ... } // from try @ 0063f6f0 with catch @ 00640640 */
      if (bVar1) goto LAB_006405f0;
      lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
      if (*(int *)(lVar5 + 0x20) == 0) {
                    /* catch() { ... } // from try @ 0063f780 with catch @ 00640700
                       catch() { ... } // from try @ 0063f7c4 with catch @ 00640700 */
        lVar8 = lVar8 - param_3;
        if (*(char *)(lVar5 + 0xe1) == '\0') {
          plVar6 = *(long **)(lVar5 + 0xf0);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_006652c8();
          }
          if ((char)plVar6[7] == '\0') {
            FUN_0061fea0(plVar6);
            uVar3 = (**(code **)(*plVar6 + 0x30))(plVar6,0x20);
          }
          else {
            uVar3 = *(undefined1 *)((long)plVar6 + 0x59);
          }
          *(undefined1 *)(lVar5 + 0xe0) = uVar3;
          *(undefined1 *)(lVar5 + 0xe1) = 1;
          lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
        }
        else {
          uVar3 = *(undefined1 *)(lVar5 + 0xe0);
        }
        if (0 < lVar8) {
          while( true ) {
            plVar6 = *(long **)(lVar5 + 0xe8);
            if ((undefined1 *)plVar6[5] < (undefined1 *)plVar6[6]) {
              *(undefined1 *)plVar6[5] = uVar3;
              plVar6[5] = plVar6[5] + 1;
            }
            else {
              iVar4 = (**(code **)(*plVar6 + 0x68))(plVar6,uVar3);
              if (iVar4 == -1) {
                lVar7 = *param_1;
                    /* catch() { ... } // from try @ 0063fb54 with catch @ 00640770
                       catch() { ... } // from try @ 0063fbf4 with catch @ 00640770 */
                goto LAB_006405d8;
              }
            }
            lVar8 = lVar8 + -1;
            lVar7 = *param_1;
            if (lVar8 == 0) break;
            lVar5 = (long)param_1 + *(long *)(lVar7 + -0x18);
          }
          goto LAB_006405f4;
        }
      }
    }
  }
  else {
    lVar5 = (**(code **)(**(long **)(lVar5 + 0xe8) + 0x60))
                      (*(long **)(lVar5 + 0xe8),param_2,param_3);
    lVar7 = *param_1;
    if (param_3 != lVar5) {
LAB_006405d8:
                    /* catch() { ... } // from try @ 0063f804 with catch @ 006405d8 */
      lVar5 = (long)param_1 + *(long *)(lVar7 + -0x18);
      FUN_00620c14(lVar5,*(uint *)(lVar5 + 0x20) | 1);
LAB_006405f0:
      lVar7 = *param_1;
    }
LAB_006405f4:
    lVar5 = (long)param_1 + *(long *)(lVar7 + -0x18);
  }
  *(undefined8 *)(lVar5 + 0x10) = 0;
LAB_00640510:
  plVar6 = local_8;
  lVar5 = *(long *)(*local_8 + -0x18);
                    /* catch() { ... } // from try @ 0063fa10 with catch @ 00640548 */
                    /* catch() { ... } // from try @ 0063f958 with catch @ 0064054c */
  if (((((*(uint *)((long)local_8 + lVar5 + 0x18) >> 0xd & 1) != 0) &&
       (cVar2 = std::uncaught_exception(), cVar2 == '\0')) &&
      (plVar6 = *(long **)((long)plVar6 + lVar5 + 0xe8), plVar6 != (long *)0x0)) &&
     (iVar4 = (**(code **)(*plVar6 + 0x30))(), iVar4 == -1)) {
                    /* catch() { ... } // from try @ 0063f930 with catch @ 0064057c */
    lVar5 = (long)local_8 + *(long *)(*local_8 + -0x18);
                    /* catch() { ... } // from try @ 0063f928 with catch @ 00640580 */
                    /* catch() { ... } // from try @ 0063f8b4 with catch @ 00640584 */
                    /* catch() { ... } // from try @ 0063f854 with catch @ 00640588 */
    FUN_00620c14(lVar5,*(uint *)(lVar5 + 0x20) | 1);
    return param_1;
  }
  return param_1;
}


