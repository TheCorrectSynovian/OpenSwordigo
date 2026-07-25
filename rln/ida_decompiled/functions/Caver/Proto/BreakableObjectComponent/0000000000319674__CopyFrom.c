/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000319674
 * Mangled: _ZN5Caver5Proto24BreakableObjectComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::BreakableObjectComponent::CopyFrom(Caver::Proto::BreakableObjectComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD0B0  Caver::Proto::BreakableObjectComponent::MergeFrom(Caver::Proto::BreakableObjectComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000319688 string=0x000000000031968C "@"
 *   insn=0x0000000000319694 string=0x0000000000319698 ""
 *   insn=0x00000000003196B0 string=0x00000000001FD0B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::BreakableObjectComponent::CopyFrom(
        Caver::Proto::BreakableObjectComponent *this,
        const Caver::Proto::BreakableObjectComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::BreakableObjectComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::BreakableObjectComponent::MergeFrom();
  }
}

