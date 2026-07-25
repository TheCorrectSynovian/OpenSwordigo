/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056BC8C
 * Mangled: sub_56BC8C
 * Demangled: sub_56BC8C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000200670  .wmemchr
 *   0x0000000000202DD0  .wcslen
 *
 * Referenced strings: 9
 *   insn=0x000000000056BCAC string=0x000000000056BCB0 "H\"
 *   insn=0x000000000056BCBC string=0x000000000056BCC0 "u"
 *   insn=0x000000000056BCC8 string=0x000000000056BCE4 "s"
 *   insn=0x000000000056BCE4 string=0x000000000056BCE8 "_"
 *   insn=0x000000000056BCE8 string=0x000000000056BCEC "S"
 *   insn=0x000000000056BCEC string=0x000000000056BCF0 "t"
 *   insn=0x000000000056BCFC string=0x000000000056BD00 "`"
 *   insn=0x000000000056BD14 string=0x000000000056BD18 "VR"
 *   insn=0x000000000056BD1C string=0x000000000056BCF8 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_56BC8C(__int64 *a1, wchar_t *s, unsigned __int64 a3)
{
  size_t v5; // x21
  __int64 v6; // x0
  __int64 v7; // x19
  unsigned __int64 v9; // x19
  __int64 v10; // x20
  wchar_t v11; // w1

  v5 = wcslen(s);
  v6 = *a1;
  v7 = *(_QWORD *)(*a1 - 24);
  if ( !v5 || !v7 )
    return -1;
  v9 = v7 - 1;
  if ( a3 <= v9 )
    v9 = a3;
  v10 = 4 * v9;
  while ( 1 )
  {
    v11 = *(_DWORD *)(v6 + v10);
    v10 -= 4;
    if ( wmemchr(s, v11, v5) )
      break;
    if ( --v9 == -1 )
      return -1;
    v6 = *a1;
  }
  return v9;
}

