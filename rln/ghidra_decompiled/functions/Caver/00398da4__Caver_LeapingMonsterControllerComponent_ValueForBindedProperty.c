/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00398da4
 * Function: Caver::LeapingMonsterControllerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(LeapingMonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::LeapingMonsterControllerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::LeapingMonsterControllerComponent::ValueForBindedProperty
          (LeapingMonsterControllerComponent *this,int param_1)

{
  MonsterControllerComponent::ValueForBindedProperty
            ((MonsterControllerComponent *)(this + -0x10),param_1);
  return;
}


