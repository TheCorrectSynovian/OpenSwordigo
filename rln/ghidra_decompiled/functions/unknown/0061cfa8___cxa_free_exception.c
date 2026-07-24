/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061cfa8
 * Function: __cxa_free_exception
 * Signature: undefined __cxa_free_exception(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void __cxa_free_exception(undefined *param_1)

{
  int iVar1;
  long extraout_x1;
  long lVar2;
  long extraout_x1_00;
  
                    /* try { // try from 0061cfa8 to 0071cfaf has its CatchHandler @ 0061dae0 */
                    /* try { // try from 0061cfb0 to 0071cfbf has its CatchHandler @ 0061cf44 */
                    /* try { // try from 0061cfc0 to 0071cfd3 has its CatchHandler @ 0061dadc */
  if ((param_1 < &DAT_007ebd00) || ((undefined *)0x7fbcff < param_1)) {
    free(param_1 + -0x80);
    return;
  }
                    /* try { // try from 0061cfd8 to 0071cfdf has its CatchHandler @ 0061da84 */
  if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
    DAT_007fbd00 = DAT_007fbd00 &
                   (1L << ((ulong)(param_1 + -0x7ebd00) >> 10 & 0x3f) ^ 0xffffffffffffffffU);
                    /* try { // try from 0061d04c to 0071d04f has its CatchHandler @ 0061db10 */
    return;
  }
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_007ebcd0);
                    /* try { // try from 0061cff0 to 0071cff7 has its CatchHandler @ 0061da80 */
  if (iVar1 == 0) {
                    /* try { // try from 0061cff8 to 0071d00b has its CatchHandler @ 0061da7c */
    DAT_007fbd00 = DAT_007fbd00 &
                   (1L << ((ulong)(param_1 + -0x7ebd00) >> 10 & 0x3f) ^ 0xffffffffffffffffU);
                    /* try { // try from 0061d00c to 0071d01f has its CatchHandler @ 0061db10 */
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_007ebcd0);
    if (iVar1 == 0) {
                    /* try { // try from 0061d020 to 0071d02b has its CatchHandler @ 0061da4c */
      return;
    }
    FUN_0061ce80();
    lVar2 = extraout_x1;
  }
  else {
    FUN_0061ce50();
    lVar2 = extraout_x1_00;
                    /* try { // try from 0061d06c to 0071d073 has its CatchHandler @ 0061da34 */
  }
                    /* try { // try from 0061d060 to 0071d06b has its CatchHandler @ 0061dbd0 */
  if (lVar2 != -1) {
                    /* WARNING: Subroutine does not return */
    FUN_006818c4();
  }
                    /* WARNING: Subroutine does not return */
  __cxa_call_unexpected();
}


