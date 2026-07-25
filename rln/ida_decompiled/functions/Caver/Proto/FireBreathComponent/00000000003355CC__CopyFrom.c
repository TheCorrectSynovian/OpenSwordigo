/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003355CC
 * Mangled: _ZN5Caver5Proto19FireBreathComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::FireBreathComponent::CopyFrom(Caver::Proto::FireBreathComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FCF10  Caver::Proto::FireBreathComponent::MergeFrom(Caver::Proto::FireBreathComponent const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000003355E0 string=0x00000000003355E4 "@"
 *   insn=0x00000000003355EC string=0x00000000003355F0 ""
 *   insn=0x0000000000335604 string=0x0000000000335608 "B"
 *   insn=0x0000000000335608 string=0x00000000001FCF10 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::FireBreathComponent::CopyFrom(
        Caver::Proto::FireBreathComponent *this,
        const Caver::Proto::FireBreathComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::FireBreathComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::FireBreathComponent::MergeFrom();
  }
}

