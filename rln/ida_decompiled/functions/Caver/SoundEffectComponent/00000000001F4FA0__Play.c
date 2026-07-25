/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4FA0
 * Mangled: ._ZN5Caver20SoundEffectComponent4PlayEv
 * Demangled: Caver::SoundEffectComponent::Play(void)
 *
 * Callers: 18
 *   0x00000000002556FC  Caver::BreakableObjectComponent::Break(void)
 *   0x000000000025B5D8  Caver::CharControllerComponent::RegisterLibrary(void)
 *   0x000000000025DC80  Caver::CharControllerComponent::HandleMessage(int,void *)
 *   0x0000000000282B80  Caver::FireBreathComponent::Update(float)
 *   0x00000000002847C0  Caver::MagicBoltComponent::Explode(bool)
 *   0x0000000000287E74  Caver::MagicExplosionComponent::Update(float)
 *   0x0000000000289C5C  Caver::MagicHookshotComponent::FindGrabbableObject(void)
 *   0x000000000028A9FC  Caver::MagicHookshotComponent::HandleMessage(int,void *)
 *   0x000000000028BA40  Caver::MagicSpellCastComponent::Update(float)
 *   0x0000000000292454  Caver::AttackComponent::StartAttack(boost::intrusive_ptr<Caver::AnimNode> const&,Caver::SceneObject *)
 *   0x0000000000292794  Caver::AttackComponent::Update(float)
 *   0x0000000000293550  Caver::BatMonsterControllerComponent::Update(float)
 *   0x00000000002A0968  Caver::StaticMonsterControllerComponent::Prepare(void)
 *   0x00000000002B1A84  Caver::BushControllerComponent::HandleMessage(int,void *)
 *   0x00000000002B2E18  Caver::DoorControllerComponent::Prepare(void)
 *   0x00000000002B3264  Caver::DoorControllerComponent::Close(void)
 *   0x00000000002C5F98  Caver::SwingableWeaponComponent::Update(float)
 *   0x00000000002C6690  Caver::SwingableWeaponComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x000000000023A73C  Caver::SoundEffectComponent::Play(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4FA8 string=0x00000000001F4FAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SoundEffectComponent::Play(Caver::SoundEffectComponent *this)
{
  return _ZN5Caver20SoundEffectComponent4PlayEv(this);
}

