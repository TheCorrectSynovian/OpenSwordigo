/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053f4e4
 * Function: Caver::StripeView::SetTitleHorizOffset
 * Signature: undefined __thiscall SetTitleHorizOffset(StripeView * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StripeView::SetTitleHorizOffset(float) */

void __thiscall Caver::StripeView::SetTitleHorizOffset(StripeView *this,float param_1)

{
  *(float *)(this + 0x134) = param_1;
                    /* try { // try from 0053f4ec to 0063f4f3 has its CatchHandler @ 0053f590 */
  if ((*(long *)(this + 0x120) != 0) && (DAT_00683944 < *(float *)(this + 0x8c))) {
                    /* WARNING: Could not recover jumptable at 0x0053f50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x58))();
    return;
  }
  return;
}


