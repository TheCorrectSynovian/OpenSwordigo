/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061d074
 * Function: __cxa_allocate_dependent_exception
 * Signature: undefined __cxa_allocate_dependent_exception(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * __cxa_allocate_dependent_exception(void)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long extraout_x1;
  
                    /* try { // try from 0061d074 to 0071d0ef has its CatchHandler @ 0061dbd0 */
  puVar3 = malloc(0x70);
  if (puVar3 == (undefined8 *)0x0) {
    if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
      iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_007ebcd0);
      if (iVar2 != 0) goto LAB_0061d144;
    }
    uVar4 = 0;
    uVar5 = DAT_007ea0c8;
    while ((uVar5 & 1) != 0) {
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar1;
                    /* try { // try from 0061d0f0 to 0071d0f7 has its CatchHandler @ 0061da30 */
      uVar5 = uVar5 >> 1;
                    /* try { // try from 0061d0f8 to 0071d15f has its CatchHandler @ 0061dbd0 */
      if (uVar1 == 0x40) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
    }
    DAT_007ea0c8 = 1L << (uVar4 & 0x3f) | DAT_007ea0c8;
    puVar3 = (undefined8 *)(&DAT_007ea0d0 + uVar4 * 0x70);
    if (PTR_pthread_create_007e4e78 != (undefined *)0x0) {
      iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_007ebcd0);
      if (iVar2 != 0) {
        FUN_0061ce80();
LAB_0061d144:
        FUN_0061ce50();
        if (extraout_x1 != -1) {
                    /* WARNING: Subroutine does not return */
          FUN_006818c4();
        }
                    /* WARNING: Subroutine does not return */
        __cxa_call_unexpected();
      }
    }
  }
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
  return puVar3;
}


