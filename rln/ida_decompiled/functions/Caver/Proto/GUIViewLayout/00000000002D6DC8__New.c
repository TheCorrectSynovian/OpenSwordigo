/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D6DC8
 * Mangled: _ZNK5Caver5Proto13GUIViewLayout3NewEv
 * Demangled: Caver::Proto::GUIViewLayout::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 10
 *   insn=0x00000000002D6DD4 string=0x00000000002D6DD8 "i "
 *   insn=0x00000000002D6DD4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D6DD8 string=0x00000000002D6DDC ")YE"
 *   insn=0x00000000002D6DDC string=0x00000000002D6DE0 ""
 *   insn=0x00000000002D6DE0 string=0x00000000002D6DE4 "\t "
 *   insn=0x00000000002D6DE8 string=0x00000000002D6DEC "("
 *   insn=0x00000000002D6DEC string=0x00000000002D6DF0 "h "
 *   insn=0x00000000002D6DF0 string=0x00000000002D6DF4 ""
 *   insn=0x00000000002D6E00 string=0x00000000002D6E04 "A"
 *   insn=0x00000000002D6E04 string=0x00000000002D6E08 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GUIViewLayout::New(Caver::Proto::GUIViewLayout *this)
{
  __int64 result; // x0

  result = operator new(0x60u);
  *(_QWORD *)(result + 16) = &Caver::Proto::GUIViewLayout::_default_identifier_;
  *(_QWORD *)(result + 24) = result + 48;
  *(_DWORD *)(result + 40) = 4;
  *(_QWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 80) = 0;
  *(_QWORD *)result = off_6C6098;
  *(_DWORD *)(result + 88) = 0;
  return result;
}

