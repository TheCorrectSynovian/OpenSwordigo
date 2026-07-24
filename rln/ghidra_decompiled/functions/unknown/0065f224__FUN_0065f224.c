/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065f224
 * Function: FUN_0065f224
 * Signature: undefined FUN_0065f224(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_0065f224(long *param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long local_88;
  undefined1 auStack_80 [128];
  
                    /* try { // try from 0065f22c to 0075f233 has its CatchHandler @ 0065f270 */
                    /* try { // try from 0065f234 to 0075f27f has its CatchHandler @ 0065f214 */
  bVar1 = true;
  if ((ulong)param_1[4] < (ulong)param_1[5]) {
    iVar4 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff);
    bVar1 = iVar4 != -1;
  }
  if (*(char *)((long)param_1 + 0xaa) != '\0') {
    if ((long *)param_1[0x19] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_006652c8();
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065f22c with catch @ 0065f270
                        */
    bVar2 = (**(code **)(*(long *)param_1[0x19] + 0x30))();
    if (bVar2 < bVar1) {
                    /* try { // try from 0065f280 to 0075f28b has its CatchHandler @ 0065f28c */
      lVar5 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065f280 with catch @ 0065f28c
                        */
                    /* try { // try from 0065f290 to 0075f293 has its CatchHandler @ 0065f29c */
      while( true ) {
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
                    /* try { // try from 0065f294 to 0075f29f has its CatchHandler @ 0065f214 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065f290 with catch @ 0065f29c
                        */
        if ((lVar5 < 1) || (uVar3 != 1)) break;
        if (bVar1 == false) {
          return false;
        }
      }
      if (bVar1 == false) {
        return false;
      }
      iVar4 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff);
      return iVar4 != -1;
    }
  }
  return bVar1;
}


