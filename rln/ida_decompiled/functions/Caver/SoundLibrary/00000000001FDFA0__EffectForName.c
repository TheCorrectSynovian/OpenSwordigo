/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDFA0
 * Mangled: ._ZN5Caver12SoundLibrary13EffectForNameERKSs
 * Demangled: Caver::SoundLibrary::EffectForName(std::string const&)
 *
 * Callers: 10
 *   0x0000000000239C98  Caver::SoundEffectComponent::Prepare(void)
 *   0x000000000023A41C  Caver::SoundEffectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000025D078  Caver::CharControllerComponent::Swing(void)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x000000000028A9FC  Caver::MagicHookshotComponent::HandleMessage(int,void *)
 *   0x000000000028CD94  Caver::ProjectileControllerComponent::CreateBlast(void)
 *   0x00000000002C6690  Caver::SwingableWeaponComponent::HandleMessage(int,void *)
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *   0x000000000047F608  Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *   0x00000000004866A8  Caver::SoundLibrary::RegisterProgramLibrary(Caver::ProgramState *)
 *
 * Callees: 1
 *   0x0000000000485AF4  Caver::SoundLibrary::EffectForName(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDFA8 string=0x00000000001FDFAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SoundLibrary::EffectForName()
{
  return _ZN5Caver12SoundLibrary13EffectForNameERKSs();
}

