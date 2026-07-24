/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00624c20
 * Function: FUN_00624c20
 * Signature: undefined FUN_00624c20(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00624c20(long *param_1)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  byte *pbVar5;
  long *plVar6;
  undefined1 auStack_8 [8];
  
  FUN_0063b7dc(auStack_8,(long)param_1 + *(long *)(*param_1 + -0x18) + 0xd0);
  lVar2 = FUN_0062d354(auStack_8);
  FUN_0063c0c8(auStack_8);
  plVar6 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
  pbVar3 = (byte *)plVar6[2];
  if ((byte *)plVar6[3] <= pbVar3) goto LAB_00624ccc;
  do {
    uVar4 = (ulong)*pbVar3;
    while( true ) {
      if ((*(byte *)(*(long *)(lVar2 + 0x30) + (uVar4 & 0xff)) >> 3 & 1) == 0) {
        return param_1;
      }
      pbVar5 = (byte *)plVar6[3];
      if ((byte *)plVar6[2] < pbVar5) {
        pbVar3 = (byte *)plVar6[2] + 1;
        plVar6[2] = (long)pbVar3;
      }
      else {
        iVar1 = (**(code **)(*plVar6 + 0x50))(plVar6);
        if (iVar1 == -1) goto LAB_00624ce4;
        pbVar3 = (byte *)plVar6[2];
        pbVar5 = (byte *)plVar6[3];
      }
      if (pbVar3 < pbVar5) break;
LAB_00624ccc:
      uVar4 = (**(code **)(*plVar6 + 0x48))(plVar6);
      if ((int)uVar4 == -1) {
LAB_00624ce4:
        lVar2 = (long)param_1 + *(long *)(*param_1 + -0x18);
        FUN_00620c14(lVar2,*(uint *)(lVar2 + 0x20) | 2);
                    /* try { // try from 00624d10 to 00724e07 has its CatchHandler @ 00624d10
                       catch() { ... } // from try @ 00624d10 with catch @ 00624d10
                       catch() { ... } // from try @ 00624e30 with catch @ 00624d10
                       catch() { ... } // from try @ 00625070 with catch @ 00624d10
                       catch() { ... } // from try @ 006251c0 with catch @ 00624d10 */
        return param_1;
      }
    }
  } while( true );
}


