/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD5C0
 * Mangled: ._ZN5Caver17SoundEffectSource7setGainEf
 * Demangled: Caver::SoundEffectSource::setGain(float)
 *
 * Callers: 3
 *   0x000000000047F6F8  Caver::AudioSystem::PlaySoundEffectAfterDelay(boost::intrusive_ptr<Caver::SoundEffect> const&,float,float)
 *   0x00000000004837BC  Caver::SoundEffectSource::DequeueSourceForEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *   0x0000000000483B14  Caver::SoundEffectSource::SetEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *
 * Callees: 1
 *   0x0000000000484068  Caver::SoundEffectSource::setReferenceDistance(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD5C8 string=0x00000000001FD5CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SoundEffectSource::setGain(Caver::SoundEffectSource *this, float a2)
{
  JUMPOUT(0x4842D0);
}

