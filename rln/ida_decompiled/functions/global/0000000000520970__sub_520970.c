/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520970
 * Mangled: sub_520970
 * Demangled: sub_520970
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201670  .wctob
 *
 * Referenced strings: 6
 *   insn=0x0000000000520970 string=0x0000000000520974 "?"
 *   insn=0x000000000052097C string=0x0000000000520980 "S"
 *   insn=0x0000000000520980 string=0x0000000000520984 "h"
 *   insn=0x0000000000520988 string=0x000000000052098C """
 *   insn=0x0000000000520990 string=0x0000000000520994 "7"
 *   insn=0x00000000005209B4 string=0x00000000005209B8 " d@9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_520970(__int64 a1, wint_t c, unsigned __int8 a3)
{
  unsigned int v3; // w19
  __int64 result; // x0

  v3 = a3;
  if ( c <= 0x7F && *(_BYTE *)(a1 + 24) )
    return *(unsigned __int8 *)(a1 + c + 25);
  LODWORD(result) = wctob(c);
  if ( (_DWORD)result == -1 )
    return v3;
  else
    return (unsigned __int8)result;
}

