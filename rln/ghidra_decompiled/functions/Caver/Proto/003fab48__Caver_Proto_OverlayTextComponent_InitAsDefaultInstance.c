/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fab48
 * Function: Caver::Proto::OverlayTextComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(OverlayTextComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::OverlayTextComponent::InitAsDefaultInstance() */

void __thiscall
Caver::Proto::OverlayTextComponent::InitAsDefaultInstance(OverlayTextComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Vector2::default_instance();
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar1 = Vector2::default_instance();
  *(undefined8 *)(this + 0x28) = uVar1;
  return;
}


