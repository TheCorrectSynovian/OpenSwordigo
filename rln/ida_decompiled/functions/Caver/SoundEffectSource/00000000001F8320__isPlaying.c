/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8320
 * Mangled: ._ZNK5Caver17SoundEffectSource9isPlayingEv
 * Demangled: Caver::SoundEffectSource::isPlaying(void)
 *
 * Callers: 1
 *   0x000000000023A744  Caver::SoundEffectComponent::PlayWithDelay(float)
 *
 * Callees: 1
 *   0x00000000004845E0  Caver::SoundEffectSource::isActive(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8328 string=0x00000000001F832C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SoundEffectSource::isPlaying(Caver::SoundEffectSource *this)
{
  JUMPOUT(0x484BFC);
}

