/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D00B8
 * Mangled: _ZN5Caver5Proto6Circle8CopyFromERKS1_
 * Demangled: Caver::Proto::Circle::CopyFrom(Caver::Proto::Circle const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA380  Caver::Proto::Circle::MergeFrom(Caver::Proto::Circle const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000002D00CC string=0x00000000002D00D0 "@"
 *   insn=0x00000000002D00D8 string=0x00000000002D00DC ""
 *   insn=0x00000000002D00F4 string=0x00000000001FA380 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Circle::CopyFrom(Caver::Proto::Circle *this, const Caver::Proto::Circle *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::Circle *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::Circle::MergeFrom(this, a2);
  }
}

