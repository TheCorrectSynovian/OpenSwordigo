/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064ba94
 * Function: FUN_0064ba94
 * Signature: undefined FUN_0064ba94(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0064ba94(long *param_1,long *param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  undefined1 uVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  
                    /* try { // try from 0064ba94 to 0074baaf has its CatchHandler @ 0064b5c4 */
                    /* catch() { ... } // from try @ 0064b948 with catch @ 0064ba98 */
                    /* catch() { ... } // from try @ 0064b634 with catch @ 0064ba9c */
                    /* catch() { ... } // from try @ 0064bc94 with catch @ 0064bab0
                       catch() { ... } // from try @ 0064be18 with catch @ 0064bab0 */
  pbVar6 = (byte *)param_1[3];
  pbVar4 = (byte *)param_1[2];
  *param_3 = 1;
  if (pbVar4 < pbVar6) {
    uVar1 = (uint)*pbVar4;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x48))();
    if (uVar1 == 0xffffffff) {
      return 0;
    }
    pbVar4 = (byte *)param_1[2];
    pbVar6 = (byte *)param_1[3];
  }
  uVar5 = (undefined1)uVar1;
  lVar7 = (long)pbVar6 - (long)pbVar4;
  lVar8 = 0;
  if (lVar7 < 2) goto LAB_0064bb3c;
LAB_0064bae0:
  lVar3 = (**(code **)(*param_2 + 0x60))(param_2,pbVar4,lVar7);
  lVar8 = lVar8 + lVar3;
  param_1[2] = param_1[2] + lVar3;
  if (lVar3 < lVar7) {
LAB_0064bbc8:
    *param_3 = 0;
    return lVar8;
  }
  do {
    uVar1 = (**(code **)(*param_1 + 0x48))(param_1);
    if (uVar1 == 0xffffffff) {
                    /* try { // try from 0064bba0 to 0074bbab has its CatchHandler @ 0064bdc0 */
      return lVar8;
    }
    pbVar6 = (byte *)param_1[3];
    pbVar4 = (byte *)param_1[2];
    while( true ) {
      uVar5 = (undefined1)uVar1;
      lVar7 = (long)pbVar6 - (long)pbVar4;
      if (1 < lVar7) goto LAB_0064bae0;
LAB_0064bb3c:
      if ((undefined1 *)param_2[5] < (undefined1 *)param_2[6]) {
        *(undefined1 *)param_2[5] = uVar5;
        param_2[5] = param_2[5] + 1;
      }
      else {
                    /* try { // try from 0064bbb0 to 0074bc2b has its CatchHandler @ 0064bdcc */
        iVar2 = (**(code **)(*param_2 + 0x68))(param_2,uVar5);
        if (iVar2 == -1) goto LAB_0064bbc8;
      }
      lVar8 = lVar8 + 1;
      pbVar6 = (byte *)param_1[3];
      if ((byte *)param_1[2] < pbVar6) {
        pbVar4 = (byte *)param_1[2] + 1;
        param_1[2] = (long)pbVar4;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x50))(param_1);
        if (iVar2 == -1) {
          return lVar8;
        }
        pbVar4 = (byte *)param_1[2];
        pbVar6 = (byte *)param_1[3];
      }
      if (pbVar6 <= pbVar4) break;
      uVar1 = (uint)*pbVar4;
      pbVar4 = (byte *)param_1[2];
    }
  } while( true );
}


