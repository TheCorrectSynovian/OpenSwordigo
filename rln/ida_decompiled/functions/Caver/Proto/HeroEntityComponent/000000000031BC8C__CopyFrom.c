/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031BC8C
 * Mangled: _ZN5Caver5Proto19HeroEntityComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::HeroEntityComponent::CopyFrom(Caver::Proto::HeroEntityComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F54E0  Caver::Proto::HeroEntityComponent::MergeFrom(Caver::Proto::HeroEntityComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x000000000031BCA0 string=0x000000000031BCA4 "@"
 *   insn=0x000000000031BCAC string=0x000000000031BCB0 ""
 *   insn=0x000000000031BCC8 string=0x00000000001F54E0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::HeroEntityComponent::CopyFrom(
        Caver::Proto::HeroEntityComponent *this,
        const Caver::Proto::HeroEntityComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::HeroEntityComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::HeroEntityComponent::MergeFrom();
  }
}

