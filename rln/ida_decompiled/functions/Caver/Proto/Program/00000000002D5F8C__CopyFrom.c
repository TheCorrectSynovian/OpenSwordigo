/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D5F8C
 * Mangled: _ZN5Caver5Proto7Program8CopyFromERKS1_
 * Demangled: Caver::Proto::Program::CopyFrom(Caver::Proto::Program const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F37A0  Caver::Proto::Program::MergeFrom(Caver::Proto::Program const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000002D5FA0 string=0x00000000002D5FA4 "@"
 *   insn=0x00000000002D5FAC string=0x00000000002D5FB0 ""
 *   insn=0x00000000002D5FC8 string=0x00000000001F37A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Program::CopyFrom(Caver::Proto::Program *this, const Caver::Proto::Program *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::Program *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::Program::MergeFrom();
  }
}

