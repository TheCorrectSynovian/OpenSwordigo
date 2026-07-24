/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061ceb0
 * Function: __cxa_allocate_exception
 * Signature: undefined __cxa_allocate_exception(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * __cxa_allocate_exception(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long extraout_x1;
  ulong uVar5;
  
  puVar3 = malloc(param_1 + 0x80U);
  if (puVar3 != (undefined8 *)0x0) {
LAB_0061ced4:
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    return puVar3 + 0x10;
  }
  if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_007ebcd0);
    if (iVar2 != 0) {
      FUN_0061ce50();
LAB_0061cfa0:
                    /* WARNING: Subroutine does not return */
      __cxa_call_unexpected();
    }
  }
  if (param_1 + 0x80U < 0x401) {
    uVar5 = 0;
    uVar4 = DAT_007fbd00;
    do {
      if ((uVar4 & 1) == 0) {
        DAT_007fbd00 = 1L << (uVar5 & 0x3f) | DAT_007fbd00;
        puVar3 = (undefined8 *)(&DAT_007ebd00 + uVar5 * 0x400);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_0061ced4;
        iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_007ebcd0);
        if (iVar2 == 0) goto LAB_0061ced4;
        FUN_0061ce80();
        if (extraout_x1 != -1) {
                    /* WARNING: Subroutine does not return */
          FUN_006818c4();
        }
        goto LAB_0061cfa0;
      }
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar1;
                    /* try { // try from 0061cf44 to 0071cfa7 has its CatchHandler @ 0061cf44
                       catch() { ... } // from try @ 0061cf44 with catch @ 0061cf44
                       catch() { ... } // from try @ 0061cfb0 with catch @ 0061cf44
                       catch() { ... } // from try @ 0061d674 with catch @ 0061cf44
                       catch() { ... } // from try @ 0061ddf4 with catch @ 0061cf44 */
      uVar4 = uVar4 >> 1;
    } while (uVar1 != 0x40);
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


