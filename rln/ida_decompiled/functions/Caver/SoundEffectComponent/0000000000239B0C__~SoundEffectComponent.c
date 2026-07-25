/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000239B0C
 * Mangled: _ZN5Caver20SoundEffectComponentD0Ev
 * Demangled: Caver::SoundEffectComponent::~SoundEffectComponent()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5AD0  Caver::SoundEffectComponent::~SoundEffectComponent()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000239B44  Caver::SoundEffectComponent::InitWithComponent(Caver::SoundEffectComponent const*)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x0000000000239B1C string=0x00000000001F5AD0 "P'"
 *   insn=0x0000000000239B2C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000239B3C string=0x0000000000239B40 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SoundEffectComponent::~SoundEffectComponent(Caver::SoundEffectComponent *this)
{
  Caver::SoundEffectComponent::~SoundEffectComponent(this);
  operator delete(this);
}

