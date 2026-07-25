/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202800
 * Mangled: ._ZN5Caver17SoundEffectSource4StopEv
 * Demangled: Caver::SoundEffectSource::Stop(void)
 *
 * Callers: 1
 *   0x000000000023A86C  Caver::SoundEffectComponent::Stop(void)
 *
 * Callees: 1
 *   0x00000000004845E0  Caver::SoundEffectSource::isActive(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202808 string=0x000000000020280C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SoundEffectSource::Stop(Caver::SoundEffectSource *this)
{
  JUMPOUT(0x48498C);
}

