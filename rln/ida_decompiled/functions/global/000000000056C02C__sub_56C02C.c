/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056C02C
 * Mangled: sub_56C02C
 * Demangled: sub_56C02C
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200670  .wmemchr
 *
 * Referenced strings: 6
 *   insn=0x000000000056C06C string=0x000000000056C070 "_"
 *   insn=0x000000000056C074 string=0x000000000056C078 "S"
 *   insn=0x000000000056C07C string=0x000000000056C080 "t"
 *   insn=0x000000000056C088 string=0x000000000056C08C "s"
 *   insn=0x000000000056C09C string=0x000000000056C0A0 "tQ"
 *   insn=0x000000000056C0A0 string=0x000000000056C0A4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_56C02C(__int64 *a1, wchar_t *s, unsigned __int64 a3, size_t n)
{
  __int64 v4; // x4
  __int64 v5; // x20
  unsigned __int64 v6; // x19
  unsigned __int64 v8; // x20
  __int64 v12; // x20
  wchar_t v13; // w1

  v4 = *a1;
  v5 = *(_QWORD *)(*a1 - 24);
  if ( !v5 )
    return -1;
  v8 = v5 - 1;
  if ( a3 > v8 )
    v6 = v8;
  else
    v6 = a3;
  v12 = 4 * v6;
  while ( 1 )
  {
    v13 = *(_DWORD *)(v4 + v12);
    v12 -= 4;
    if ( !wmemchr(s, v13, n) )
      break;
    if ( !v6 )
      return -1;
    v4 = *a1;
    --v6;
  }
  return v6;
}

