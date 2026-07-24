/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039bef8
 * Function: Caver::ProjectileMonsterControllerComponent::GetEnumValuesForBindedProperty
 * Signature: undefined __thiscall GetEnumValuesForBindedProperty(ProjectileMonsterControllerComponent * this, int param_1, vector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   Caver::ProjectileMonsterControllerComponent::GetEnumValuesForBindedProperty(int,
   std::vector<Caver::BindingValue, std::allocator<Caver::BindingValue> >*) */

void __thiscall
Caver::ProjectileMonsterControllerComponent::GetEnumValuesForBindedProperty
          (ProjectileMonsterControllerComponent *this,int param_1,vector *param_2)

{
  MonsterControllerComponent::GetEnumValuesForBindedProperty
            ((int)this + -0x10,(vector *)(ulong)(uint)param_1);
  return;
}


