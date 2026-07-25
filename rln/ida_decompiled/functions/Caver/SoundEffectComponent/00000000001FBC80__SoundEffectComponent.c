/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBC80
 * Mangled: ._ZN5Caver20SoundEffectComponentC2Ev
 * Demangled: Caver::SoundEffectComponent::SoundEffectComponent(void)
 *
 * Callers: 1
 *   0x00000000002504B8  Caver::SoundEffectComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002397F4  Caver::SoundEffectComponent::SoundEffectComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBC88 string=0x00000000001FBC8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SoundEffectComponent::SoundEffectComponent(Caver::SoundEffectComponent *this)
{
  return _ZN5Caver20SoundEffectComponentC2Ev(this);
}

