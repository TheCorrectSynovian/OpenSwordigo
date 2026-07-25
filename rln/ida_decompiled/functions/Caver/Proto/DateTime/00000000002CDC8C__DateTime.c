/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CDC8C
 * Mangled: _ZN5Caver5Proto8DateTimeC2Ev
 * Demangled: Caver::Proto::DateTime::DateTime(void)
 *
 * Callers: 1
 *   0x0000000000201340  Caver::Proto::DateTime::DateTime(void)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000002CDC8C string=0x00000000002CDC90 "UF"
 *   insn=0x00000000002CDC9C string=0x00000000002CDCA0 "A"
 *   insn=0x00000000002CDCA0 string=0x00000000002CDCA4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DateTime::DateTime(__int64 this)
{
  *(_DWORD *)(this + 8) = 0;
  *(_QWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(_QWORD *)this = off_6C5990;
  return this;
}

