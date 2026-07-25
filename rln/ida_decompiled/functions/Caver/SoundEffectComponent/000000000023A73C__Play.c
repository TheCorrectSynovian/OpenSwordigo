/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023A73C
 * Mangled: _ZN5Caver20SoundEffectComponent4PlayEv
 * Demangled: Caver::SoundEffectComponent::Play(void)
 *
 * Callers: 1
 *   0x00000000001F4FA0  Caver::SoundEffectComponent::Play(void)
 *
 * Callees: 1
 *   0x00000000001FBC90  Caver::SoundEffectComponent::PlayWithDelay(float)
 *
 * Referenced strings: 2
 *   insn=0x000000000023A73C string=0x000000000023A740 "T"
 *   insn=0x000000000023A740 string=0x00000000001FBC90 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SoundEffectComponent::Play(Caver::SoundEffectComponent *this)
{
  return Caver::SoundEffectComponent::PlayWithDelay(this, *((float *)this + 33));
}

