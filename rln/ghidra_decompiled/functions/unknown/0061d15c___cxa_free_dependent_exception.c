/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061d15c
 * Function: __cxa_free_dependent_exception
 * Signature: undefined __cxa_free_dependent_exception(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void __cxa_free_dependent_exception(undefined *param_1)

{
  int iVar1;
  long extraout_x1;
  long lVar2;
  long extraout_x1_00;
  ulong uVar3;
  
  if ((param_1 < &DAT_007ea0d0) || ((undefined *)0x7ebccf < param_1)) {
    free(param_1);
    return;
  }
                    /* try { // try from 0061d190 to 0071d19b has its CatchHandler @ 0061d9e0 */
  uVar3 = (ulong)((int)param_1 - 0x7ea0d0U >> 4) / 7;
  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* try { // try from 0061d210 to 0071d217 has its CatchHandler @ 0061d990 */
    DAT_007ea0c8 = DAT_007ea0c8 & (1L << (uVar3 & 0x3f) ^ 0xffffffffffffffffU);
    return;
  }
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_007ebcd0);
                    /* try { // try from 0061d1bc to 0071d1e3 has its CatchHandler @ 0061d7c0 */
  if (iVar1 == 0) {
    DAT_007ea0c8 = DAT_007ea0c8 & (1L << (uVar3 & 0x3f) ^ 0xffffffffffffffffU);
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_007ebcd0);
    if (iVar1 == 0) {
      return;
    }
    FUN_0061ce80();
    lVar2 = extraout_x1;
  }
  else {
    FUN_0061ce50();
    lVar2 = extraout_x1_00;
  }
  if (lVar2 != -1) {
                    /* WARNING: Subroutine does not return */
    FUN_006818c4();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0061d238 to 0071d25f has its CatchHandler @ 0061d7bc */
  __cxa_call_unexpected();
}


