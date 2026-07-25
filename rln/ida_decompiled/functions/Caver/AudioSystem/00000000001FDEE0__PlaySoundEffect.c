/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDEE0
 * Mangled: ._ZN5Caver11AudioSystem15PlaySoundEffectERKN5boost13intrusive_ptrINS_11SoundEffectEEEf
 * Demangled: Caver::AudioSystem::PlaySoundEffect(boost::intrusive_ptr<Caver::SoundEffect> const&,float)
 *
 * Callers: 6
 *   0x000000000025D078  Caver::CharControllerComponent::Swing(void)
 *   0x000000000028A9FC  Caver::MagicHookshotComponent::HandleMessage(int,void *)
 *   0x000000000028CD94  Caver::ProjectileControllerComponent::CreateBlast(void)
 *   0x00000000002C6690  Caver::SwingableWeaponComponent::HandleMessage(int,void *)
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *   0x00000000004866A8  Caver::SoundLibrary::RegisterProgramLibrary(Caver::ProgramState *)
 *
 * Callees: 1
 *   0x000000000047F608  Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDEE8 string=0x00000000001FDEEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::AudioSystem::PlaySoundEffect()
{
  JUMPOUT(0x47F6EC);
}

