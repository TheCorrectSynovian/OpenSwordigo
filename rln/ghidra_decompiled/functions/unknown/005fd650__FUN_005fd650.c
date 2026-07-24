/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005fd650
 * Function: FUN_005fd650
 * Signature: undefined FUN_005fd650(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_005fd650(long param_1,byte *param_2,byte *param_3,long param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  
  pbVar10 = *(byte **)(param_1 + 8);
  if (param_2 < pbVar10) {
    bVar4 = *param_3;
    lVar9 = 0;
    pbVar8 = param_2;
    do {
      bVar2 = *pbVar8;
      if (bVar4 == 0x5b) {
        bVar5 = param_3[1] != 0x5e;
        pbVar8 = param_3 + 1;
        if (bVar5) {
          pbVar8 = param_3;
        }
        do {
          while( true ) {
            while( true ) {
              pbVar1 = pbVar8 + 1;
              if ((byte *)(param_4 + -1) <= pbVar1) {
                if (!bVar5) goto LAB_005fd778;
                goto LAB_005fd794;
              }
              bVar3 = *pbVar1;
              if (bVar3 != 0x25) break;
              iVar6 = FUN_005fd7f0(bVar2);
              pbVar8 = pbVar8 + 2;
              if (iVar6 != 0) goto LAB_005fd774;
            }
            if ((pbVar8[2] != 0x2d) || (pbVar8 = pbVar8 + 3, (byte *)(param_4 + -1) <= pbVar8))
            break;
            if ((bVar3 <= bVar2) && (bVar2 <= *pbVar8)) goto LAB_005fd774;
          }
                    /* try { // try from 005fd748 to 006fd77b has its CatchHandler @ 005fd948 */
          pbVar8 = pbVar1;
        } while (bVar3 != bVar2);
LAB_005fd774:
        if (!bVar5) break;
      }
      else if (bVar4 != 0x2e) {
                    /* catch() { ... } // from try @ 005fce4c with catch @ 005fd6b4
                       catch() { ... } // from try @ 005fd140 with catch @ 005fd6b4
                       catch() { ... } // from try @ 005fd360 with catch @ 005fd6b4 */
                    /* catch() { ... } // from try @ 005fd7b8 with catch @ 005fd6b8 */
        if (bVar4 != 0x25) {
          bVar5 = bVar4 == bVar2;
          goto LAB_005fd774;
        }
        iVar6 = FUN_005fd7f0(bVar2,param_3[1]);
        if (iVar6 == 0) break;
      }
LAB_005fd778:
      lVar9 = lVar9 + 1;
      pbVar8 = param_2 + lVar9;
    } while (pbVar8 < pbVar10);
LAB_005fd794:
    if (lVar9 < 0) {
      return 0;
    }
  }
  else {
    lVar9 = 0;
  }
  do {
                    /* try { // try from 005fd7a8 to 006fd7b7 has its CatchHandler @ 005fd8ec */
    lVar7 = FUN_005fcdb4(param_1,param_2 + lVar9,param_4 + 1);
                    /* try { // try from 005fd7b8 to 006fd9af has its CatchHandler @ 005fd6b8 */
    if (lVar7 != 0) {
      return lVar7;
    }
    lVar9 = lVar9 + -1;
  } while (-1 < lVar9);
  return 0;
}


