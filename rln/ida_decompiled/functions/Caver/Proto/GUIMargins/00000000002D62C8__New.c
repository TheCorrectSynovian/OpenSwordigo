/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D62C8
 * Mangled: _ZNK5Caver5Proto10GUIMargins3NewEv
 * Demangled: Caver::Proto::GUIMargins::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x00000000002D62D4 string=0x00000000002D62D8 "h "
 *   insn=0x00000000002D62D4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D62D8 string=0x00000000002D62DC ""
 *   insn=0x00000000002D62E0 string=0x00000000002D62E4 "A"
 *   insn=0x00000000002D62E4 string=0x00000000002D62E8 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Proto::GUIMargins::New(Caver::Proto::GUIMargins *this)
{
  _QWORD *result; // x0

  result = (_QWORD *)operator new(0x20u);
  result[2] = 0;
  result[3] = 0;
  *result = off_6C6020;
  result[1] = 0;
  return result;
}

