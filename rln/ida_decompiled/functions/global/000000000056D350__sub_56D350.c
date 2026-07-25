/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056D350
 * Mangled: sub_56D350
 * Demangled: sub_56D350
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 4
 *   insn=0x000000000056D350 string=0x000000000056D354 "#"
 *   insn=0x000000000056D368 string=0x000000000056D36C "B"
 *   insn=0x000000000056D374 string=0x000000000056D378 "a"
 *   insn=0x000000000056D37C string=0x000000000056D380 "4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56D350(const wchar_t **a1, wchar_t a2)
{
  const wchar_t **result; // x0

  sub_56C650(a1, 0, *((_QWORD *)*a1 - 3), 1);
  result = a1;
  **a1 = a2;
  return result;
}

