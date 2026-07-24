/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ccf30
 * Function: Caver::WeaponTrailComponent::Draw
 * Signature: undefined __thiscall Draw(WeaponTrailComponent * this, RenderingContext * param_1, Matrix4 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WeaponTrailComponent::Draw(Caver::RenderingContext*, Caver::Matrix4 const&) const */

void __thiscall
Caver::WeaponTrailComponent::Draw
          (WeaponTrailComponent *this,RenderingContext *param_1,Matrix4 *param_2)

{
  WeaponTrail::Draw((WeaponTrail *)(this + 0x70),param_1,param_2);
  return;
}


