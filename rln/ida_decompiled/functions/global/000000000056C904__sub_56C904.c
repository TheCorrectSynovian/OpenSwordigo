/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056C904
 * Mangled: sub_56C904
 * Demangled: sub_56C904
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 2
 *   insn=0x000000000056C90C string=0x000000000056C910 "B"
 *   insn=0x000000000056C910 string=0x000000000056C914 "O"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t *__fastcall sub_56C904(const wchar_t **a1)
{
  return sub_56C650(a1, 0, *((_QWORD *)*a1 - 3), 0);
}

