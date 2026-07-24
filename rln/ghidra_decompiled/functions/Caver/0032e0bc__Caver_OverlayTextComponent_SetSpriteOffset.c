/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032e0bc
 * Function: Caver::OverlayTextComponent::SetSpriteOffset
 * Signature: undefined __thiscall SetSpriteOffset(OverlayTextComponent * this, Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayTextComponent::SetSpriteOffset(Caver::Vector2 const&) */

void __thiscall
Caver::OverlayTextComponent::SetSpriteOffset(OverlayTextComponent *this,Vector2 *param_1)

{
  *(undefined8 *)(this + 0x98) = *(undefined8 *)param_1;
  return;
}


