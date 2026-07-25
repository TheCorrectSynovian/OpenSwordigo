/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000567D9C
 * Mangled: sub_567D9C
 * Demangled: sub_567D9C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F5190  .memcmp
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 12
 *   insn=0x0000000000567DC0 string=0x0000000000567DC4 "m"
 *   insn=0x0000000000567DC4 string=0x0000000000567DC8 "u"
 *   insn=0x0000000000567DD4 string=0x0000000000567DD8 "@"
 *   insn=0x0000000000567DD8 string=0x0000000000567DDC "_"
 *   insn=0x0000000000567DDC string=0x0000000000567DE0 "S"
 *   insn=0x0000000000567E0C string=0x0000000000567E10 "_"
 *   insn=0x0000000000567E18 string=0x0000000000567E1C "T"
 *   insn=0x0000000000567E34 string=0x0000000000567E38 "s"
 *   insn=0x0000000000567E48 string=0x0000000000567E4C "!"
 *   insn=0x0000000000567E4C string=0x0000000000567E30 "_"
 *   insn=0x0000000000567E5C string=0x00000000001F5190 "P'"
 *   insn=0x0000000000567E60 string=0x0000000000567E64 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_567D9C(__int64 *a1, char *a2, unsigned __int64 a3)
{
  size_t v4; // x0
  __int64 v5; // x21
  size_t v6; // x20
  __int64 v7; // x19
  size_t v9; // x22
  unsigned __int64 v10; // x20
  size_t v11; // x23
  int v12; // w25
  size_t v13; // x2
  int v14; // w0

  v4 = strlen(a2);
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 - 24);
  if ( v4 )
  {
    v7 = -1;
    if ( v4 <= v6 )
    {
      v9 = v6 - v4;
      if ( a3 <= v6 - v4 )
      {
        v10 = a3 + 1;
        v7 = a3;
        v11 = v4 - 1;
        v12 = (unsigned __int8)*a2;
        while ( 1 )
        {
          v13 = v10;
          if ( *(unsigned __int8 *)(v5 + v7) == v12 )
          {
            v14 = memcmp((const void *)(v5 + v10), a2 + 1, v11);
            v13 = v10;
            if ( !v14 )
              break;
          }
          ++v10;
          ++v7;
          if ( v13 > v9 )
            return -1;
        }
      }
    }
  }
  else if ( a3 > v6 )
  {
    return -1;
  }
  else
  {
    return a3;
  }
  return v7;
}

