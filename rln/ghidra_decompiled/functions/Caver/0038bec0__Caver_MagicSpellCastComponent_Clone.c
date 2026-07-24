/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038bec0
 * Function: Caver::MagicSpellCastComponent::Clone
 * Signature: undefined __thiscall Clone(MagicSpellCastComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicSpellCastComponent::Clone() const */

MagicSpellCastComponent * __thiscall
Caver::MagicSpellCastComponent::Clone(MagicSpellCastComponent *this)

{
  MagicSpellCastComponent *this_00;
  
  this_00 = operator_new(0xa8);
  MagicSpellCastComponent(this_00);
  *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(this_00 + 0x38,this + 0x38);
  *(undefined4 *)(this_00 + 0x78) = *(undefined4 *)(this + 0x78);
  *(undefined4 *)(this_00 + 0x90) = *(undefined4 *)(this + 0x90);
  return this_00;
}


