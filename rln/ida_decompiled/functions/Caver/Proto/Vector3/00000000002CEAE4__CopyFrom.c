/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CEAE4
 * Mangled: _ZN5Caver5Proto7Vector38CopyFromERKS1_
 * Demangled: Caver::Proto::Vector3::CopyFrom(Caver::Proto::Vector3 const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3800  Caver::Proto::Vector3::MergeFrom(Caver::Proto::Vector3 const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000002CEAF8 string=0x00000000002CEAFC "@"
 *   insn=0x00000000002CEB04 string=0x00000000002CEB08 ""
 *   insn=0x00000000002CEB1C string=0x00000000002CEB20 "8"
 *   insn=0x00000000002CEB20 string=0x00000000001F3800 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Vector3::CopyFrom(Caver::Proto::Vector3 *this, const Caver::Proto::Vector3 *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::Vector3 *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::Vector3::MergeFrom();
  }
}

