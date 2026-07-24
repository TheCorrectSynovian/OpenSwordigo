/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006828c8
 * Function: FUN_006828c8
 * Signature: undefined FUN_006828c8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006828c8(long param_1,long *param_2,uint *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong local_8;
  
  uVar3 = (ulong)(*(ushort *)(param_1 + 0x20) >> 3);
  uVar7 = uVar3 & 0xff;
  uVar1 = FUN_00681e04(uVar3 & 0xff,param_1);
                    /* catch() { ... } // from try @ 006827e0 with catch @ 00682908 */
                    /* try { // try from 0068290c to 007829a7 has its CatchHandler @ 0068290c
                       catch() { ... } // from try @ 0068290c with catch @ 0068290c
                       catch() { ... } // from try @ 006829d4 with catch @ 0068290c
                       catch() { ... } // from try @ 00682abc with catch @ 0068290c
                       catch() { ... } // from try @ 00682cb0 with catch @ 0068290c */
  lVar2 = 0;
  for (; *param_3 != 0; param_3 = (uint *)((long)param_3 + (ulong)*param_3 + 4)) {
    if (param_3[1] != 0) {
      lVar6 = lVar2;
      if (((*(byte *)(param_1 + 0x20) >> 2 & 1) != 0) &&
         (lVar6 = (long)param_3 + (4 - (long)(int)param_3[1]), lVar6 != lVar2)) {
        uVar3 = FUN_00682044(lVar6);
        uVar7 = uVar3 & 0xffffffff;
        uVar1 = FUN_00681e04(uVar3,param_1);
      }
      if ((int)uVar7 == 0) {
        uVar3 = *(ulong *)(param_3 + 2);
      }
      else {
        FUN_00681ec4(uVar7 & 0xff,uVar1,param_3 + 2,&local_8);
        uVar4 = FUN_00681da4(uVar7 & 0xff);
        uVar3 = 0xffffffffffffffff;
        if ((uVar4 & 0xffffffff) < 8) {
          uVar3 = (1L << ((uVar4 & 7) << 3)) - 1;
        }
                    /* try { // try from 006829a8 to 007829af has its CatchHandler @ 00682cb8 */
        uVar3 = uVar3 & local_8;
      }
      lVar2 = lVar6;
      if ((uVar3 != 0) && (lVar6 = *param_2, lVar6 != 0)) {
        lVar5 = *(long *)(lVar6 + 8);
        *(long *)(lVar6 + 8) = lVar5 + 1;
                    /* try { // try from 006829c8 to 007829d3 has its CatchHandler @ 00682ba8 */
        *(uint **)(lVar6 + (lVar5 + 2) * 8) = param_3;
      }
    }
                    /* try { // try from 006829d4 to 00782a7b has its CatchHandler @ 0068290c */
  }
  return;
}


