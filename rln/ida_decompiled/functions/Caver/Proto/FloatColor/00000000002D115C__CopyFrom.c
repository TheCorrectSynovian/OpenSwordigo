/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D115C
 * Mangled: _ZN5Caver5Proto10FloatColor8CopyFromERKS1_
 * Demangled: Caver::Proto::FloatColor::CopyFrom(Caver::Proto::FloatColor const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF190  Caver::Proto::FloatColor::MergeFrom(Caver::Proto::FloatColor const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000002D1170 string=0x00000000002D1174 "@"
 *   insn=0x00000000002D117C string=0x00000000002D1180 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::FloatColor::CopyFrom(Caver::Proto::FloatColor *this, const Caver::Proto::FloatColor *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::FloatColor *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::FloatColor::MergeFrom(this, a2);
  }
}

