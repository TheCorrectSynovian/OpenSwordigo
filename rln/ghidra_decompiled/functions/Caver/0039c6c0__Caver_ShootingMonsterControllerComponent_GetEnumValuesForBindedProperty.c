/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039c6c0
 * Function: Caver::ShootingMonsterControllerComponent::GetEnumValuesForBindedProperty
 * Signature: undefined __thiscall GetEnumValuesForBindedProperty(ShootingMonsterControllerComponent * this, int param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   Caver::ShootingMonsterControllerComponent::GetEnumValuesForBindedProperty(int,
   std::vector<Caver::BindingValue, std::allocator<Caver::BindingValue> >*) */

void __thiscall
Caver::ShootingMonsterControllerComponent::GetEnumValuesForBindedProperty
          (ShootingMonsterControllerComponent *this,int param_1,vector *param_2)

{
  MonsterControllerComponent::GetEnumValuesForBindedProperty
            ((int)this + -0x10,(vector *)(ulong)(uint)param_1);
  return;
}


