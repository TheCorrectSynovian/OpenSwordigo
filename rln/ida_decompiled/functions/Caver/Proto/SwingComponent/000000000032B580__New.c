/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032B580
 * Mangled: _ZNK5Caver5Proto14SwingComponent3NewEv
 * Demangled: Caver::Proto::SwingComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 4
 *   insn=0x000000000032B58C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032B590 string=0x000000000032B594 "UA"
 *   insn=0x000000000032B5A0 string=0x000000000032B5A4 "A"
 *   insn=0x000000000032B5A4 string=0x000000000032B5A8 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SwingComponent::New(Caver::Proto::SwingComponent *this)
{
  __int64 result; // x0

  result = operator new(0x20u);
  *(_DWORD *)(result + 20) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_WORD *)(result + 16) = 0;
  *(_QWORD *)result = off_6C91F8;
  *(_QWORD *)(result + 8) = 0;
  return result;
}

