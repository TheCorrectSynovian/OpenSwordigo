/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006813b4
 * Function: FUN_006813b4
 * Signature: undefined FUN_006813b4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_006813b4(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_680 [1616];
  code *local_30;
  
  do {
    iVar1 = FUN_006806a8(param_2,auStack_680);
    lVar2 = FUN_0068006c(param_2);
    uVar4 = 4;
    if (lVar2 + (*(long *)(param_2 + 0x340) >> 0x3f) != param_1[3]) {
      uVar4 = 0;
    }
    if (iVar1 != 0) {
      return 2;
    }
    if (local_30 != (code *)0x0) {
      uVar3 = (*local_30)(1,uVar4 | 2,*param_1,param_1,param_2);
      if ((int)uVar3 == 7) {
        return uVar3;
      }
      if ((int)uVar3 != 8) {
        return 2;
      }
    }
    if (uVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
                    /* catch() { ... } // from try @ 006812e8 with catch @ 00681448 */
    FUN_00681368(param_2,auStack_680);
                    /* catch() { ... } // from try @ 00681234 with catch @ 00681454 */
  } while( true );
}


