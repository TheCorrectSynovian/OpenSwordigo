/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000521F04
 * Mangled: sub_521F04
 * Demangled: sub_521F04
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 3
 *   insn=0x0000000000521F20 string=0x0000000000521F24 "c"
 *   insn=0x0000000000521F20 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000521F3C string=0x0000000000521F40 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_521F04(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *result; // x0

  result = (_QWORD *)operator new(0x18u);
  *result = *(_QWORD *)(a1 + 40);
  result[1] = a2;
  result[2] = a3;
  *(_QWORD *)(a1 + 40) = result;
  return result;
}

