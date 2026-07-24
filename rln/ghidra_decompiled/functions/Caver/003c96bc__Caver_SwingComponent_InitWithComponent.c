/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c96bc
 * Function: Caver::SwingComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(SwingComponent * this, SwingComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingComponent::InitWithComponent(Caver::SwingComponent const*) */

void __thiscall
Caver::SwingComponent::InitWithComponent(SwingComponent *this,SwingComponent *param_1)

{
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  this[0x90] = param_1[0x90];
  this[0x91] = param_1[0x91];
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_1 + 0x88);
  return;
}


