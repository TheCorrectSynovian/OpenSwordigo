/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065d88c
 * Function: FUN_0065d88c
 * Signature: undefined FUN_0065d88c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0065d88c(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if ((*(uint *)(param_1 + 0x78) >> 3 & 1) != 0) {
    cVar2 = FUN_0061f654(param_1 + 0x68);
    if (cVar2 != '\0') {
                    /* try { // try from 0065d8bc to 0075d8c7 has its CatchHandler @ 0065d9f4 */
      lVar5 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 2;
      if (*(long **)(param_1 + 200) != (long *)0x0) {
                    /* try { // try from 0065d8d8 to 0075d937 has its CatchHandler @ 0065da10 */
        iVar3 = (**(code **)(**(long **)(param_1 + 200) + 0x28))();
        if (-1 < iVar3) {
          lVar4 = FUN_0061f904(param_1 + 0x68);
          iVar3 = (**(code **)(**(long **)(param_1 + 200) + 0x40))(*(long **)(param_1 + 200));
          lVar1 = 0;
          if ((long)iVar3 != 0) {
            lVar1 = lVar4 / (long)iVar3;
          }
          lVar5 = lVar5 + lVar1;
        }
        return lVar5;
      }
                    /* WARNING: Subroutine does not return */
      FUN_006652c8();
    }
  }
  return -1;
}


