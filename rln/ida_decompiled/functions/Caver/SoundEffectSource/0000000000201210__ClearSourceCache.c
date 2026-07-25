/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201210
 * Mangled: ._ZN5Caver17SoundEffectSource16ClearSourceCacheEv
 * Demangled: Caver::SoundEffectSource::ClearSourceCache(void)
 *
 * Callers: 1
 *   0x000000000047E774  Caver::AudioSystem::Shutdown(void)
 *
 * Callees: 1
 *   0x0000000000483D48  Caver::SoundEffectSource::EnqueueSource(boost::intrusive_ptr<Caver::SoundEffectSource> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201218 string=0x000000000020121C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SoundEffectSource::ClearSourceCache(Caver::SoundEffectSource *this)
{
  JUMPOUT(0x483DCC);
}

