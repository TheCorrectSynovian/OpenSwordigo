/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CF4E4
 * Mangled: _ZNK5Caver5Proto3Box3NewEv
 * Demangled: Caver::Proto::Box::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x00000000002CF4EC string=0x00000000002CF4F0 "<"
 *   insn=0x00000000002CF4F0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002CF4F4 string=0x00000000002CF4F8 ""
 *   insn=0x00000000002CF500 string=0x00000000002CF504 "A"
 *   insn=0x00000000002CF504 string=0x00000000002CF508 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Proto::Box::New(Caver::Proto::Box *this)
{
  _QWORD *result; // x0

  result = (_QWORD *)operator new(0x28u);
  result[3] = 0;
  result[4] = 0;
  result[1] = 0;
  result[2] = 0;
  *result = off_6C5B70;
  return result;
}

