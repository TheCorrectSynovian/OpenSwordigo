/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CE008
 * Mangled: _ZN5Caver5Proto8DateTime8CopyFromERKS1_
 * Demangled: Caver::Proto::DateTime::CopyFrom(Caver::Proto::DateTime const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5480  Caver::Proto::DateTime::MergeFrom(Caver::Proto::DateTime const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000002CE01C string=0x00000000002CE020 "@"
 *   insn=0x00000000002CE028 string=0x00000000002CE02C ""
 *   insn=0x00000000002CE044 string=0x00000000001F5480 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::DateTime::CopyFrom(Caver::Proto::DateTime *this, const Caver::Proto::DateTime *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::DateTime *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::DateTime::MergeFrom();
  }
}

