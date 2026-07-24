/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003934cc
 * Function: Caver::BatMonsterControllerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(BatMonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::BatMonsterControllerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::BatMonsterControllerComponent::ValueForBindedProperty
          (BatMonsterControllerComponent *this,int param_1)

{
  MonsterControllerComponent::ValueForBindedProperty
            ((MonsterControllerComponent *)(this + -0x10),param_1);
  return;
}


