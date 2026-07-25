/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4F70
 * Mangled: ._ZN5Caver17SoundEffectSource22DequeueSourceForEffectERKN5boost13intrusive_ptrINS_11SoundEffectEEE
 * Demangled: Caver::SoundEffectSource::DequeueSourceForEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *
 * Callers: 1
 *   0x000000000047F6F8  Caver::AudioSystem::PlaySoundEffectAfterDelay(boost::intrusive_ptr<Caver::SoundEffect> const&,float,float)
 *
 * Callees: 1
 *   0x00000000004837BC  Caver::SoundEffectSource::DequeueSourceForEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4F78 string=0x00000000001F4F7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SoundEffectSource::DequeueSourceForEffect()
{
  return _ZN5Caver17SoundEffectSource22DequeueSourceForEffectERKN5boost13intrusive_ptrINS_11SoundEffectEEE();
}

