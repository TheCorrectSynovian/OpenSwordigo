/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032BA28
 * Mangled: _ZN5Caver5Proto14SwingComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::SwingComponent::CopyFrom(Caver::Proto::SwingComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4D10  Caver::Proto::SwingComponent::MergeFrom(Caver::Proto::SwingComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x000000000032BA3C string=0x000000000032BA40 "@"
 *   insn=0x000000000032BA48 string=0x000000000032BA4C ""
 *   insn=0x000000000032BA64 string=0x00000000001F4D10 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::SwingComponent::CopyFrom(
        Caver::Proto::SwingComponent *this,
        const Caver::Proto::SwingComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::SwingComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::SwingComponent::MergeFrom();
  }
}

