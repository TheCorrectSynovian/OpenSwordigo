/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00662468
 * Function: FUN_00662468
 * Signature: undefined FUN_00662468(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_00662468(long *param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long local_88;
  undefined1 auStack_80 [128];
  
                    /* catch() { ... } // from try @ 0066242c with catch @ 00662468 */
                    /* catch() { ... } // from try @ 006623a4 with catch @ 0066246c */
  bVar1 = true;
  if ((ulong)param_1[4] < (ulong)param_1[5]) {
    iVar4 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff);
    bVar1 = iVar4 != -1;
  }
                    /* try { // try from 0066249c to 007624c3 has its CatchHandler @ 006624e0 */
  if (*(char *)((long)param_1 + 0xaa) != '\0') {
    if ((long *)param_1[0x19] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_006652c8();
    }
    bVar2 = (**(code **)(*(long *)param_1[0x19] + 0x30))();
    if (bVar2 < bVar1) {
                    /* try { // try from 006624c4 to 007624e3 has its CatchHandler @ 006621c4 */
      lVar5 = 0;
      while( true ) {
                    /* try { // try from 006624fc to 00762503 has its CatchHandler @ 00662534 */
                    /* try { // try from 00662504 to 0076254f has its CatchHandler @ 006624e4 */
        uVar3 = (**(code **)(*(long *)param_1[0x19] + 0x18))
                          ((long *)param_1[0x19],(long)param_1 + 0x84,auStack_80,&stack0x00000000,
                           &local_88);
        if (uVar3 == 2) {
          return false;
        }
        if (uVar3 < 2) {
          lVar6 = local_88 - (long)auStack_80;
          if (lVar6 < 1) break;
          lVar5 = FUN_0061f798(param_1 + 0xd,auStack_80,lVar6);
          if (lVar6 != lVar5) {
            return false;
          }
        }
                    /* catch() { ... } // from try @ 0066249c with catch @ 006624e0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00662504 with catch @ 006624e4
                       catch(type#1 @ 00000000) { ... } // from try @ 0066255c with catch @ 006624e4
                        */
        if ((lVar5 < 1) || (uVar3 != 1)) break;
        if (bVar1 == false) {
                    /* catch() { ... } // from try @ 006626ac with catch @ 006625b0
                       catch() { ... } // from try @ 00662700 with catch @ 006625b0
                       catch() { ... } // from try @ 006629b0 with catch @ 006625b0
                       catch() { ... } // from try @ 00662a54 with catch @ 006625b0 */
          return false;
        }
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 006624fc with catch @ 00662534
                        */
      if (bVar1 == false) {
        return false;
      }
      iVar4 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff);
      return iVar4 != -1;
                    /* try { // try from 00662550 to 00762553 has its CatchHandler @ 00662554 */
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00662550 with catch @ 00662554
                        */
                    /* try { // try from 00662558 to 0076255b has its CatchHandler @ 00662564 */
                    /* try { // try from 0066255c to 00762567 has its CatchHandler @ 006624e4 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00662558 with catch @ 00662564
                        */
  return bVar1;
}


