/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059d664
 * Function: Caver::GUISlider::TouchEnded
 * Signature: undefined __cdecl TouchEnded(FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUISlider::TouchEnded(Caver::FWTouch const&) */

void Caver::GUISlider::TouchEnded(FWTouch *param_1)

{
  if (param_1[0x161] != (FWTouch)0x0) {
    GUIControl::SendActionsForControlEvent((GUIControl *)param_1,0x40,0);
  }
  param_1[0x161] = (FWTouch)0x0;
  return;
}


