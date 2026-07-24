/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039dba4
 * Function: Caver::SkellyMonsterControllerComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(SkellyMonsterControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::SkellyMonsterControllerComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::SkellyMonsterControllerComponent::ValueForBindedProperty
          (SkellyMonsterControllerComponent *this,int param_1)

{
  MonsterControllerComponent::ValueForBindedProperty
            ((MonsterControllerComponent *)(this + -0x10),param_1);
  return;
}


