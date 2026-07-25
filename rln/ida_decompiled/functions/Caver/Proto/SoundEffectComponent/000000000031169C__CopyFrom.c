/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031169C
 * Mangled: _ZN5Caver5Proto20SoundEffectComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::SoundEffectComponent::CopyFrom(Caver::Proto::SoundEffectComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE400  Caver::Proto::SoundEffectComponent::MergeFrom(Caver::Proto::SoundEffectComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000003116B0 string=0x00000000003116B4 "@"
 *   insn=0x00000000003116BC string=0x00000000003116C0 ""
 *   insn=0x00000000003116D4 string=0x00000000003116D8 "J"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SoundEffectComponent::CopyFrom(
        Caver::Proto::SoundEffectComponent *this,
        const Caver::Proto::SoundEffectComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::SoundEffectComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::SoundEffectComponent::MergeFrom();
  }
}

