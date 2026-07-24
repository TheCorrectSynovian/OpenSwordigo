/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00682768
 * Function: FUN_00682768
 * Signature: undefined FUN_00682768(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_00682768(ulong *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong local_8;
  
  uVar8 = 0;
  uVar2 = 0;
  lVar7 = 0;
  lVar3 = 0;
  do {
    if (*param_2 == 0) {
      return lVar7;
    }
    if (param_2[1] != 0) {
                    /* catch() { ... } // from try @ 00682658 with catch @ 006827b8 */
      lVar6 = (long)param_2 + (4 - (long)(int)param_2[1]);
                    /* try { // try from 006827bc to 007827df has its CatchHandler @ 006827bc
                       catch() { ... } // from try @ 006827bc with catch @ 006827bc
                       catch() { ... } // from try @ 00682804 with catch @ 006827bc */
      if (lVar6 != lVar3) {
        uVar2 = FUN_00682044(lVar6);
        if (uVar2 == 0xff) {
          return -1;
        }
                    /* try { // try from 006827e0 to 007827f3 has its CatchHandler @ 00682908 */
        uVar8 = FUN_00681e04((char)uVar2,param_1);
        uVar1 = (ushort)param_1[4];
                    /* try { // try from 006827f8 to 00782803 has its CatchHandler @ 00682898 */
        lVar3 = lVar6;
        if ((uVar1 & 0x7f8) == 0x7f8) {
                    /* try { // try from 00682804 to 0078290b has its CatchHandler @ 006827bc */
          *(ushort *)(param_1 + 4) = uVar1 & 0xf800 | uVar1 & 7 | (ushort)((uVar2 & 0xff) << 3);
        }
        else if ((uVar1 >> 3 & 0xff) != uVar2) {
          *(byte *)(param_1 + 4) = (byte)param_1[4] | 4;
        }
      }
      FUN_00681ec4(uVar2 & 0xff,uVar8,param_2 + 2,&local_8);
      uVar4 = FUN_00681da4(uVar2 & 0xff);
      uVar5 = 0xffffffffffffffff;
      if ((uVar4 & 0xffffffff) < 8) {
        uVar5 = (1L << ((uVar4 & 7) << 3)) - 1;
      }
      if (((uVar5 & local_8) != 0) && (lVar7 = lVar7 + 1, local_8 < *param_1)) {
        *param_1 = local_8;
      }
    }
                    /* catch() { ... } // from try @ 006827f8 with catch @ 00682898 */
    param_2 = (uint *)((long)param_2 + (ulong)*param_2 + 4);
  } while( true );
}


