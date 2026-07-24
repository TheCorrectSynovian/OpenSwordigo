/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039b650
 * Function: Caver::MonsterDeathControllerComponent::Clone
 * Signature: undefined __thiscall Clone(MonsterDeathControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterDeathControllerComponent::Clone() const */

MonsterDeathControllerComponent * __thiscall
Caver::MonsterDeathControllerComponent::Clone(MonsterDeathControllerComponent *this)

{
  MonsterDeathControllerComponent *this_00;
  
  this_00 = operator_new(200);
  MonsterDeathControllerComponent(this_00);
  *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(this_00 + 0x38,this + 0x38);
  *(undefined4 *)(this_00 + 0x78) = *(undefined4 *)(this + 0x78);
  return this_00;
}


