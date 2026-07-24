/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032cfd4
 * Function: Caver::OverlayTextComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(OverlayTextComponent * this, OverlayTextComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayTextComponent::InitWithComponent(Caver::OverlayTextComponent const*) */

void __thiscall
Caver::OverlayTextComponent::InitWithComponent
          (OverlayTextComponent *this,OverlayTextComponent *param_1)

{
  OverlayComponent::InitWithComponent((OverlayComponent *)this,(OverlayComponent *)param_1);
  FUN_0066a6a8(this + 0x70,param_1 + 0x70);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x78);
  FUN_0066a6a8(this + 0x90,param_1 + 0x90);
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(param_1 + 0x98);
  return;
}


