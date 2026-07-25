/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056CAB8
 * Mangled: sub_56CAB8
 * Demangled: sub_56CAB8
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000203AC0  .wmemcpy
 *   0x000000000056C650  sub_56C650
 *
 * Referenced strings: 4
 *   insn=0x000000000056CAE4 string=0x000000000056CAE8 "a"
 *   insn=0x000000000056CAEC string=0x000000000056CAF0 " "
 *   insn=0x000000000056CAF0 string=0x000000000056CAF4 " "
 *   insn=0x000000000056CB18 string=0x000000000056CB1C " x4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const wchar_t **__fastcall sub_56CAB8(const wchar_t **a1, size_t a2, __int64 a3, const wchar_t *a4, size_t a5)
{
  sub_56C650(a1, a2, a3, a5);
  if ( !a5 )
    return a1;
  if ( a5 != 1 )
  {
    wmemcpy((wchar_t *)&(*a1)[a2], a4, a5);
    return a1;
  }
  (*a1)[a2] = *a4;
  return a1;
}

