/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056CFB4
 * Mangled: sub_56CFB4
 * Demangled: sub_56CFB4
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000056CD30  sub_56CD30
 *
 * Referenced strings: 2
 *   insn=0x000000000056CFB4 string=0x000000000056CFB8 "C"
 *   insn=0x000000000056CFB8 string=0x000000000056CFBC "]"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56CFB4(const wchar_t **a1, size_t a2, const wchar_t **a3)
{
  return sub_56CD30(a1, a2, *a3, *((_QWORD *)*a3 - 3));
}

