/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9D40
 * Mangled: ._ZN5Caver17SoundEffectSource13EnqueueSourceERKN5boost13intrusive_ptrIS0_EE
 * Demangled: Caver::SoundEffectSource::EnqueueSource(boost::intrusive_ptr<Caver::SoundEffectSource> const&)
 *
 * Callers: 1
 *   0x000000000047FB9C  Caver::AudioSystem::Update(float)
 *
 * Callees: 1
 *   0x0000000000483D48  Caver::SoundEffectSource::EnqueueSource(boost::intrusive_ptr<Caver::SoundEffectSource> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9D48 string=0x00000000001F9D4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SoundEffectSource::EnqueueSource()
{
  return _ZN5Caver17SoundEffectSource13EnqueueSourceERKN5boost13intrusive_ptrIS0_EE();
}

