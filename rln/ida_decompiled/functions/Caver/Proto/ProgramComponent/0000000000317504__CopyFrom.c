/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000317504
 * Mangled: _ZN5Caver5Proto16ProgramComponent8CopyFromERKS1_
 * Demangled: Caver::Proto::ProgramComponent::CopyFrom(Caver::Proto::ProgramComponent const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F91A0  Caver::Proto::ProgramComponent::MergeFrom(Caver::Proto::ProgramComponent const&)
 *
 * Referenced strings: 3
 *   insn=0x0000000000317518 string=0x000000000031751C "@"
 *   insn=0x0000000000317524 string=0x0000000000317528 ""
 *   insn=0x0000000000317540 string=0x00000000001F91A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ProgramComponent::CopyFrom(
        Caver::Proto::ProgramComponent *this,
        const Caver::Proto::ProgramComponent *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::ProgramComponent *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::ProgramComponent::MergeFrom();
  }
}

