/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a0948
 * Function: Caver::StaticMonsterControllerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(StaticMonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::StaticMonsterControllerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::StaticMonsterControllerComponent::ValueForBindedProperty
          (StaticMonsterControllerComponent *this,int param_1)

{
  MonsterControllerComponent::ValueForBindedProperty
            ((MonsterControllerComponent *)(this + -0x10),param_1);
  return;
}


