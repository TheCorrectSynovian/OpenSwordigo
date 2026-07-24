/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ff5e0
 * Function: Caver::CharacterView::AttributePointsViewValueChanged
 * Signature: undefined __thiscall AttributePointsViewValueChanged(CharacterView * this, AttributePointsView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   Caver::CharacterView::AttributePointsViewValueChanged(Caver::AttributePointsView*) */

void __thiscall
Caver::CharacterView::AttributePointsViewValueChanged
          (CharacterView *this,AttributePointsView *param_1)

{
  UpdateAvailablePoints(this + -0xf8);
  return;
}


