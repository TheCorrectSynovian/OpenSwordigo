/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4460
 * Mangled: ._ZN5Caver11AudioSystem25PlaySoundEffectAfterDelayERKN5boost13intrusive_ptrINS_11SoundEffectEEEff
 * Demangled: Caver::AudioSystem::PlaySoundEffectAfterDelay(boost::intrusive_ptr<Caver::SoundEffect> const&,float,float)
 *
 * Callers: 3
 *   0x000000000023A744  Caver::SoundEffectComponent::PlayWithDelay(float)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x000000000047F608  Caver::AudioSystem::PlaySoundEffectWithName(std::string const&,float)
 *
 * Callees: 1
 *   0x000000000047F6F8  Caver::AudioSystem::PlaySoundEffectAfterDelay(boost::intrusive_ptr<Caver::SoundEffect> const&,float,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4468 string=0x00000000001F446C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::AudioSystem::PlaySoundEffectAfterDelay()
{
  return _ZN5Caver11AudioSystem25PlaySoundEffectAfterDelayERKN5boost13intrusive_ptrINS_11SoundEffectEEEff();
}

