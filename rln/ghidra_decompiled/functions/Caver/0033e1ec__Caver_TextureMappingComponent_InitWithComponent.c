/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033e1ec
 * Function: Caver::TextureMappingComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(TextureMappingComponent * this, TextureMappingComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureMappingComponent::InitWithComponent(Caver::TextureMappingComponent const*) */

void __thiscall
Caver::TextureMappingComponent::InitWithComponent
          (TextureMappingComponent *this,TextureMappingComponent *param_1)

{
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  FUN_0066a6a8(this + 0x70,param_1 + 0x70);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  return;
}


