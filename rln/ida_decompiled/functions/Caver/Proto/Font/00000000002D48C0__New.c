/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D48C0
 * Mangled: _ZNK5Caver5Proto4Font3NewEv
 * Demangled: Caver::Proto::Font::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 12
 *   insn=0x00000000002D48C8 string=0x00000000002D48CC "E"
 *   insn=0x00000000002D48CC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D48D0 string=0x00000000002D48D4 "\t"
 *   insn=0x00000000002D48D4 string=0x00000000002D48D8 ""
 *   insn=0x00000000002D48D8 string=0x00000000002D48DC "\t|"
 *   insn=0x00000000002D48E4 string=0x00000000002D48E8 "\t0"
 *   insn=0x00000000002D48EC string=0x00000000002D48F0 ")"
 *   insn=0x00000000002D48F0 string=0x00000000002D48F4 "A"
 *   insn=0x00000000002D48F4 string=0x00000000002D48F8 "\t,"
 *   insn=0x00000000002D48FC string=0x00000000002D4900 ")AA"
 *   insn=0x00000000002D4908 string=0x00000000002D490C ""
 *   insn=0x00000000002D490C string=0x00000000002D4910 "\t|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Font::New(Caver::Proto::Font *this)
{
  __int64 result; // x0

  result = operator new(0x78u);
  *(_QWORD *)(result + 32) = result + 56;
  *(_QWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 48) = 4;
  *(_QWORD *)(result + 88) = &Caver::Proto::Font::_default_kerning_;
  *(_DWORD *)(result + 96) = 0;
  *(_QWORD *)(result + 104) = 0;
  *(_QWORD *)result = off_6C5F30;
  *(_QWORD *)(result + 16) = &Caver::Proto::Font::_default_name_;
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 112) = 0;
  return result;
}

