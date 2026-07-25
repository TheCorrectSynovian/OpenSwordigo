/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBC90
 * Mangled: ._ZN5Caver20SoundEffectComponent13PlayWithDelayEf
 * Demangled: Caver::SoundEffectComponent::PlayWithDelay(float)
 *
 * Callers: 2
 *   0x000000000023A73C  Caver::SoundEffectComponent::Play(void)
 *   0x000000000029F524  Caver::SnappingMonsterControllerComponent::RegisterLibrary(void)
 *
 * Callees: 1
 *   0x000000000023A744  Caver::SoundEffectComponent::PlayWithDelay(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBC98 string=0x00000000001FBC9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SoundEffectComponent::PlayWithDelay(Caver::SoundEffectComponent *this, float a2)
{
  return _ZN5Caver20SoundEffectComponent13PlayWithDelayEf(this, a2);
}

