/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD0C0
 * Mangled: ._ZN5Caver12SoundLibrary13sharedLibraryEv
 * Demangled: Caver::SoundLibrary::sharedLibrary(void)
 *
 * Callers: 13
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x0000000000239C98  Caver::SoundEffectComponent::Prepare(void)
 *   0x000000000023A41C  Caver::SoundEffectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000025D078  Caver::CharControllerComponent::Swing(void)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x000000000028A9FC  Caver::MagicHookshotComponent::HandleMessage(int,void *)
 *   0x000000000028CD94  Caver::ProjectileControllerComponent::CreateBlast(void)
 *   0x00000000002C6690  Caver::SwingableWeaponComponent::HandleMessage(int,void *)
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *   0x000000000047E774  Caver::AudioSystem::Shutdown(void)
 *   0x000000000047F608  Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *   0x00000000004D1E80  Caver::SoundEffect::LoadBuffer(void)
 *
 * Callees: 1
 *   0x00000000004845E0  Caver::SoundEffectSource::isActive(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD0C8 string=0x00000000001FD0CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SoundLibrary::sharedLibrary(Caver::SoundLibrary *this)
{
  JUMPOUT(0x485380);
}

