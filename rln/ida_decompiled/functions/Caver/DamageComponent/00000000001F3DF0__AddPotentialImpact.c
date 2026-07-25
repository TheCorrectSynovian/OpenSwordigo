/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3DF0
 * Mangled: ._ZN5Caver15DamageComponent18AddPotentialImpactERKN5boost13intrusive_ptrINS_11SceneObjectEEERKNS_7Vector2ES9_bRKNS_7Vector4E
 * Demangled: Caver::DamageComponent::AddPotentialImpact(boost::intrusive_ptr<Caver::SceneObject> const&,Caver::Vector2 const&,Caver::Vector2 const&,bool,Caver::Vector4 const&)
 *
 * Callers: 6
 *   0x0000000000266470  Caver::DamageComponent::HandleMessage(int,void *)
 *   0x00000000002709F0  Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *   0x0000000000288320  Caver::MagicExplosionComponent::HandleMessage(int,void *)
 *   0x000000000028A9FC  Caver::MagicHookshotComponent::HandleMessage(int,void *)
 *   0x000000000028CD94  Caver::ProjectileControllerComponent::CreateBlast(void)
 *   0x00000000002C6690  Caver::SwingableWeaponComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x0000000000265D68  Caver::DamageComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3DF8 string=0x00000000001F3DFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::DamageComponent::AddPotentialImpact()
{
  JUMPOUT(0x265EA8);
}

