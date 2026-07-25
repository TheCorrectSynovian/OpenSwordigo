/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023A86C
 * Mangled: _ZN5Caver20SoundEffectComponent4StopEv
 * Demangled: Caver::SoundEffectComponent::Stop(void)
 *
 * Callers: 1
 *   0x00000000001FCE00  Caver::SoundEffectComponent::Stop(void)
 *
 * Callees: 1
 *   0x0000000000202800  Caver::SoundEffectSource::Stop(void)
 *
 * Referenced strings: 1
 *   insn=0x000000000023A86C string=0x000000000023A870 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SoundEffectComponent::Stop(Caver::SoundEffectComponent *this)
{
  Caver::SoundEffectSource *v1; // x0

  v1 = (Caver::SoundEffectSource *)*((_QWORD *)this + 18);
  if ( v1 )
    Caver::SoundEffectSource::Stop(v1);
}

