/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ca490
 * Function: Caver::SwingComponent::Clone
 * Signature: undefined __thiscall Clone(SwingComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SwingComponent::Clone() const */

SwingComponent * __thiscall Caver::SwingComponent::Clone(SwingComponent *this)

{
  SwingComponent *this_00;
  
  this_00 = operator_new(0x98);
  SwingComponent(this_00);
  *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(this_00 + 0x38,this + 0x38);
  *(undefined4 *)(this_00 + 0x78) = *(undefined4 *)(this + 0x78);
  this_00[0x90] = this[0x90];
  this_00[0x91] = this[0x91];
  *(undefined8 *)(this_00 + 0x88) = *(undefined8 *)(this + 0x88);
  return this_00;
}


