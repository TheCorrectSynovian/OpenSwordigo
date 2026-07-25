/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D0AA8
 * Mangled: _ZN5Caver5Proto7Polygon8CopyFromERKS1_
 * Demangled: Caver::Proto::Polygon::CopyFrom(Caver::Proto::Polygon const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE8B0  Caver::Proto::Polygon::MergeFrom(Caver::Proto::Polygon const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000002D0ABC string=0x00000000002D0AC0 "@"
 *   insn=0x00000000002D0AC8 string=0x00000000002D0ACC ""
 *   insn=0x00000000002D0AE0 string=0x00000000002D0AE4 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Polygon::CopyFrom(Caver::Proto::Polygon *this, const Caver::Proto::Polygon *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::Polygon *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::Polygon::MergeFrom(this, a2);
  }
}

