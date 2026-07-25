/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D543C
 * Mangled: _ZN5Caver5Proto4Font8CopyFromERKS1_
 * Demangled: Caver::Proto::Font::CopyFrom(Caver::Proto::Font const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6110  Caver::Proto::Font::MergeFrom(Caver::Proto::Font const&)
 *
 * Referenced strings: 4
 *   insn=0x00000000002D5450 string=0x00000000002D5454 "@"
 *   insn=0x00000000002D545C string=0x00000000002D5460 ""
 *   insn=0x00000000002D5474 string=0x00000000002D5478 "&"
 *   insn=0x00000000002D5478 string=0x00000000001F6110 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Font::CopyFrom(Caver::Proto::Font *this, const Font *a2)
{
  if ( a2 != (const Font *)this )
  {
    (*(void (__fastcall **)(Caver::Proto::Font *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::Font::MergeFrom(this, a2);
  }
}

