/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032e084
 * Function: Caver::OverlayTextComponent::SetTextOffset
 * Signature: undefined __thiscall SetTextOffset(OverlayTextComponent * this, Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayTextComponent::SetTextOffset(Caver::Vector2 const&) */

void __thiscall
Caver::OverlayTextComponent::SetTextOffset(OverlayTextComponent *this,Vector2 *param_1)

{
  *(undefined8 *)(this + 0x78) = *(undefined8 *)param_1;
  return;
}


