/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032baf4
 * Function: Caver::OverlayTargetArrowComponent::PerformBindedAction
 * Signature: undefined __thiscall PerformBindedAction(OverlayTargetArrowComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::OverlayTargetArrowComponent::PerformBindedAction(int) */

void __thiscall
Caver::OverlayTargetArrowComponent::PerformBindedAction
          (OverlayTargetArrowComponent *this,int param_1)

{
  OverlayComponent::PerformBindedAction((int)this + -0x10);
  return;
}


