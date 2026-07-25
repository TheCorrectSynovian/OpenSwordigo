/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000322854
 * Mangled: _ZN5Caver5Proto19SimpleGlowComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::SimpleGlowComponent::CopyFrom(Caver::Proto::SimpleGlowComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC6C0  Caver::Proto::SimpleGlowComponent::MergeFrom(Caver::Proto::SimpleGlowComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000322868 string=0x000000000032286C "@"
 *   insn=0x0000000000322874 string=0x0000000000322878 ""
 *   insn=0x0000000000322890 string=0x00000000001FC6C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SimpleGlowComponent::CopyFrom(
        Caver::Proto::SimpleGlowComponent *this,
        const Caver::Proto::SimpleGlowComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::SimpleGlowComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::SimpleGlowComponent::MergeFrom();
  }
}

