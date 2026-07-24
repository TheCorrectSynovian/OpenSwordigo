/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00397344
 * Function: Caver::GenericMonsterControllerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(GenericMonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::GenericMonsterControllerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::GenericMonsterControllerComponent::ValueForBindedProperty
          (GenericMonsterControllerComponent *this,int param_1)

{
  MonsterControllerComponent::ValueForBindedProperty
            ((MonsterControllerComponent *)(this + -0x10),param_1);
  return;
}


