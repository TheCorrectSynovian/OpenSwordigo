/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000567CD8
 * Mangled: sub_567CD8
 * Demangled: sub_567CD8
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5190  .memcmp
 *
 * Referenced strings: 14
 *   insn=0x0000000000567CDC string=0x0000000000567CE0 "#"
 *   insn=0x0000000000567CE8 string=0x0000000000567CEC "a"
 *   insn=0x0000000000567CFC string=0x0000000000567D00 "A"
 *   insn=0x0000000000567D00 string=0x0000000000567D04 "_"
 *   insn=0x0000000000567D00 string=0x0000000000567D28 "?"
 *   insn=0x0000000000567D04 string=0x0000000000567D08 "S"
 *   insn=0x0000000000567D34 string=0x0000000000567D38 "_"
 *   insn=0x0000000000567D40 string=0x0000000000567D44 "T"
 *   insn=0x0000000000567D48 string=0x0000000000567D4C "7"
 *   insn=0x0000000000567D5C string=0x0000000000567D60 "s"
 *   insn=0x0000000000567D70 string=0x0000000000567D74 "!"
 *   insn=0x0000000000567D74 string=0x0000000000567D58 "?"
 *   insn=0x0000000000567D84 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000567D88 string=0x0000000000567D8C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_567CD8(__int64 *a1, unsigned __int8 **a2, unsigned __int64 a3)
{
  unsigned __int8 *v3; // x3
  __int64 v4; // x21
  unsigned __int64 v5; // x1
  unsigned __int64 v6; // x20
  __int64 v7; // x19
  unsigned __int64 v9; // x22
  unsigned __int64 v10; // x20
  size_t v11; // x23
  const void *v12; // x24
  int v13; // w25
  unsigned __int64 v14; // x1
  int v15; // w0

  v3 = *a2;
  v4 = *a1;
  v5 = *((_QWORD *)*a2 - 3);
  v6 = *(_QWORD *)(*a1 - 24);
  if ( v5 )
  {
    v7 = -1;
    if ( v5 <= v6 )
    {
      v9 = v6 - v5;
      if ( a3 <= v6 - v5 )
      {
        v10 = a3 + 1;
        v7 = a3;
        v11 = v5 - 1;
        v12 = v3 + 1;
        v13 = *v3;
        while ( 1 )
        {
          v14 = v10;
          if ( *(unsigned __int8 *)(v4 + v7) == v13 )
          {
            v15 = memcmp((const void *)(v4 + v10), v12, v11);
            v14 = v10;
            if ( !v15 )
              break;
          }
          ++v10;
          ++v7;
          if ( v14 > v9 )
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

