/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00682140
 * Function: FUN_00682140
 * Signature: undefined FUN_00682140(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


uint * FUN_00682140(long param_1,uint *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_10;
  ulong local_8;
  
  uVar3 = (ulong)(*(ushort *)(param_1 + 0x20) >> 3);
  uVar7 = uVar3 & 0xff;
  uVar1 = FUN_00681e04(uVar3 & 0xff,param_1);
  lVar2 = 0;
  do {
    if (*param_2 == 0) {
      return (uint *)0x0;
    }
    if (param_2[1] != 0) {
      lVar6 = lVar2;
      if (((*(byte *)(param_1 + 0x20) >> 2 & 1) != 0) &&
         (lVar6 = (long)param_2 + (4 - (long)(int)param_2[1]), lVar6 != lVar2)) {
        uVar3 = FUN_00682044(lVar6);
        uVar7 = uVar3 & 0xffffffff;
                    /* catch() { ... } // from try @ 00682254 with catch @ 006821c8 */
        uVar1 = FUN_00681e04(uVar3,param_1);
      }
      if ((uint)uVar7 == 0) {
        local_10 = *(ulong *)(param_2 + 2);
        local_8 = *(ulong *)(param_2 + 4);
        uVar3 = local_10;
      }
      else {
                    /* try { // try from 00682208 to 00782213 has its CatchHandler @ 00682350 */
        uVar4 = FUN_00681ec4(uVar7 & 0xff,uVar1,param_2 + 2,&local_10);
                    /* try { // try from 0068222c to 0078223f has its CatchHandler @ 0068234c */
        FUN_00681ec4((uint)uVar7 & 0xf,0,uVar4,&local_8);
        uVar3 = FUN_00681da4(uVar7 & 0xff);
                    /* try { // try from 00682240 to 00782253 has its CatchHandler @ 00682314 */
        uVar5 = 0xffffffffffffffff;
        if ((uVar3 & 0xffffffff) < 8) {
                    /* try { // try from 00682254 to 007823c3 has its CatchHandler @ 006821c8 */
          uVar5 = (1L << ((uVar3 & 7) << 3)) - 1;
        }
        uVar3 = uVar5 & local_10;
      }
      lVar2 = lVar6;
                    /* try { // try from 006821f0 to 00782203 has its CatchHandler @ 006823c0 */
      if ((uVar3 != 0) && (param_3 - local_10 < local_8)) {
        return param_2;
      }
    }
    param_2 = (uint *)((long)param_2 + (ulong)*param_2 + 4);
  } while( true );
}


