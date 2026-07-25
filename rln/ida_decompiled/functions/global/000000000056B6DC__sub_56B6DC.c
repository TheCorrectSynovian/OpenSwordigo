/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B6DC
 * Mangled: sub_56B6DC
 * Demangled: sub_56B6DC
 *
 * Callers: 2
 *   0x000000000056B7B0  sub_56B7B0
 *   0x000000000056B7BC  sub_56B7BC
 *
 * Callees: 1
 *   0x00000000001F45F0  .wmemcmp
 *
 * Referenced strings: 16
 *   insn=0x000000000056B6F4 string=0x000000000056B6F8 "u"
 *   insn=0x000000000056B6F8 string=0x000000000056B6FC "#"
 *   insn=0x000000000056B6FC string=0x000000000056B700 "_"
 *   insn=0x000000000056B700 string=0x000000000056B704 "@"
 *   insn=0x000000000056B720 string=0x000000000056B724 "\t"
 *   insn=0x000000000056B744 string=0x000000000056B748 "_"
 *   insn=0x000000000056B74C string=0x000000000056B750 "T"
 *   insn=0x000000000056B754 string=0x000000000056B758 "8"
 *   insn=0x000000000056B758 string=0x000000000056B75C "w"
 *   insn=0x000000000056B75C string=0x000000000056B760 "s\n"
 *   insn=0x000000000056B764 string=0x000000000056B778 "d"
 *   insn=0x000000000056B76C string=0x000000000056B770 "s"
 *   insn=0x000000000056B77C string=0x000000000056B780 " "
 *   insn=0x000000000056B78C string=0x000000000056B768 "_"
 *   insn=0x000000000056B79C string=0x00000000001F45F0 "P'"
 *   insn=0x000000000056B7A0 string=0x000000000056B7A4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56B6DC(_QWORD *a1, _DWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // x21
  unsigned __int64 v6; // x22
  unsigned __int64 v7; // x20
  const wchar_t *v9; // x24
  size_t v10; // x23
  const wchar_t *i; // x19
  unsigned __int64 v12; // x2
  int v13; // w0

  v4 = *(_QWORD *)(*a1 - 24LL);
  if ( a4 )
  {
    if ( a4 > v4 )
      return -1;
    v6 = v4 - a4;
    if ( a3 > v4 - a4 )
    {
      return -1;
    }
    else
    {
      v7 = a3 + 1;
      v9 = a2 + 1;
      v10 = a4 - 1;
      for ( i = (const wchar_t *)(*a1 + 4 * (a3 + 1)); ; ++i )
      {
        v12 = v7;
        if ( *(i - 1) == *a2 )
        {
          v13 = wmemcmp(i, v9, v10);
          v12 = v7;
          if ( !v13 )
            break;
        }
        ++v7;
        if ( v12 > v6 )
          return -1;
      }
      return v7 - 1;
    }
  }
  else if ( a3 > v4 )
  {
    return -1;
  }
  else
  {
    return a3;
  }
}

