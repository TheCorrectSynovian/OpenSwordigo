/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a91bc
 * Function: Caver::ProfileManagerLoadingViewController::DismissAfterMinimumDelay
 * Signature: undefined __thiscall DismissAfterMinimumDelay(ProfileManagerLoadingViewController * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManagerLoadingViewController::DismissAfterMinimumDelay(float) */

void __thiscall
Caver::ProfileManagerLoadingViewController::DismissAfterMinimumDelay
          (ProfileManagerLoadingViewController *this,float param_1)

{
  this[0x48] = (ProfileManagerLoadingViewController)0x1;
  *(float *)(this + 0x4c) = param_1;
                    /* try { // try from 004a91c8 to 005a91ef has its CatchHandler @ 004a9280 */
  return;
}


