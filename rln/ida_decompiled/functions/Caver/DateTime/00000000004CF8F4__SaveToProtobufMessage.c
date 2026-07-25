/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CF8F4
 * Mangled: _ZN5Caver8DateTime21SaveToProtobufMessageEPNS_5Proto8DateTimeE
 * Demangled: Caver::DateTime::SaveToProtobufMessage(Caver::Proto::DateTime *)
 *
 * Callers: 1
 *   0x00000000001FDD70  Caver::DateTime::SaveToProtobufMessage(Caver::Proto::DateTime *)
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000004CF8F4 string=0x00000000004CF8F8 "\t"
 *   insn=0x00000000004CF8F8 string=0x00000000004CF8FC ""
 *   insn=0x00000000004CF8FC string=0x00000000004CF900 "("
 *   insn=0x00000000004CF900 string=0x00000000004CF904 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall Caver::DateTime::SaveToProtobufMessage(__int64 *this, Caver::Proto::DateTime *a2)
{
  __int64 v2; // x9

  v2 = *this;
  *((_DWORD *)a2 + 6) |= 1u;
  *((_QWORD *)a2 + 2) = v2;
  return this;
}

