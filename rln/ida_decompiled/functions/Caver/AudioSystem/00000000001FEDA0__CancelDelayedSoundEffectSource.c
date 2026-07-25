/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEDA0
 * Mangled: ._ZN5Caver11AudioSystem30CancelDelayedSoundEffectSourceERKN5boost13intrusive_ptrINS_17SoundEffectSourceEEE
 * Demangled: Caver::AudioSystem::CancelDelayedSoundEffectSource(boost::intrusive_ptr<Caver::SoundEffectSource> const&)
 *
 * Callers: 1
 *   0x0000000000239868  Caver::SoundEffectComponent::~SoundEffectComponent()
 *
 * Callees: 1
 *   0x000000000047FA9C  Caver::AudioSystem::CancelDelayedSoundEffectSource(boost::intrusive_ptr<Caver::SoundEffectSource> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEDA8 string=0x00000000001FEDAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::AudioSystem::CancelDelayedSoundEffectSource()
{
  return _ZN5Caver11AudioSystem30CancelDelayedSoundEffectSourceERKN5boost13intrusive_ptrINS_17SoundEffectSourceEEE();
}

