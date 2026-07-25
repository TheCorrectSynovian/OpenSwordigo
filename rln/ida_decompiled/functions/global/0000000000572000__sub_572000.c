/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000572000
 * Mangled: sub_572000
 * Demangled: sub_572000
 *
 * Callers: 2
 *   0x0000000000574B04  sub_574B04
 *   0x0000000000576A34  sub_576A34
 *
 * Callees: 1
 *   0x0000000000571F00  sub_571F00
 *
 * Referenced strings: 31
 *   insn=0x0000000000572018 string=0x000000000057201C "v"
 *   insn=0x0000000000572038 string=0x000000000057203C "Z"
 *   insn=0x0000000000572040 string=0x0000000000572044 "8"
 *   insn=0x0000000000572044 string=0x0000000000572048 """
 *   insn=0x000000000057204C string=0x000000000057209C "_"
 *   insn=0x0000000000572050 string=0x0000000000572054 "_,"
 *   insn=0x0000000000572050 string=0x00000000005720B0 "!"
 *   insn=0x0000000000572054 string=0x0000000000572058 "a"
 *   insn=0x0000000000572058 string=0x000000000057205C "!"
 *   insn=0x0000000000572058 string=0x0000000000572124 "4"
 *   insn=0x000000000057205C string=0x0000000000572060 "a"
 *   insn=0x0000000000572060 string=0x0000000000572064 "`R@"
 *   insn=0x0000000000572070 string=0x0000000000572074 "`R"
 *   insn=0x0000000000572084 string=0x0000000000571F00 "$"
 *   insn=0x000000000057208C string=0x0000000000572090 "a"
 *   insn=0x0000000000572094 string=0x0000000000572098 """
 *   insn=0x00000000005720A0 string=0x00000000005720A4 "_X"
 *   insn=0x00000000005720A8 string=0x00000000005720AC "#"
 *   insn=0x00000000005720B0 string=0x00000000005720B4 "a"
 *   insn=0x00000000005720B8 string=0x00000000005720BC "`R@"
 *   insn=0x00000000005720C0 string=0x00000000005720C4 "!"
 *   insn=0x00000000005720D0 string=0x00000000005720D4 "`R"
 *   insn=0x00000000005720E0 string=0x00000000005720E4 "`"
 *   insn=0x0000000000572108 string=0x000000000057210C "`R@"
 *   insn=0x0000000000572110 string=0x0000000000572114 "a"
 *   insn=0x0000000000572118 string=0x000000000057211C "`R"
 *   insn=0x0000000000572124 string=0x0000000000572128 "_"
 *   insn=0x0000000000572140 string=0x0000000000572144 "\t"
 *   insn=0x0000000000572150 string=0x0000000000572154 "A"
 *   insn=0x0000000000572160 string=0x0000000000572164 " "
 *   insn=0x0000000000572180 string=0x0000000000572184 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_572000(__int64 a1, __int64 *a2, int a3)
{
  __int64 *v3; // x21
  __int64 *v4; // x28
  unsigned __int8 *v5; // x1
  int i; // w2
  int v9; // w1
  __int64 v10; // x0
  int v11; // w1
  _DWORD *v13; // x21
  int v14; // w0

  v3 = a2;
  v4 = a2;
  v5 = *(unsigned __int8 **)(a1 + 24);
  for ( i = *v5; i == 86 || i == 114; i = *v5 )
  {
    *(_QWORD *)(a1 + 24) = v5 + 1;
    if ( i != 114 )
    {
      if ( a3 )
        v9 = 29;
      else
        v9 = 26;
      *(_DWORD *)(a1 + 80) += 9;
LABEL_8:
      v10 = sub_571F00(a1, v9, 0, 0);
      *v4 = v10;
      if ( !v10 )
        return 0;
      goto LABEL_9;
    }
    if ( a3 )
      v11 = 28;
    else
      v11 = 25;
    *(_DWORD *)(a1 + 80) += 9;
    v10 = sub_571F00(a1, v11, 0, 0);
    *v4 = v10;
    if ( !v10 )
      return 0;
LABEL_9:
    v5 = *(unsigned __int8 **)(a1 + 24);
    v4 = (__int64 *)(v10 + 8);
  }
  if ( i == 75 )
  {
    *(_QWORD *)(a1 + 24) = v5 + 1;
    if ( a3 )
      v9 = 30;
    else
      v9 = 27;
    *(_DWORD *)(a1 + 80) += 6;
    goto LABEL_8;
  }
  if ( !a3 && i == 70 && v3 != v4 )
  {
    do
    {
      while ( 1 )
      {
        v13 = (_DWORD *)*v3;
        v14 = *v13;
        if ( *v13 != 26 )
          break;
        *v13 = 29;
        v3 = (__int64 *)(v13 + 2);
        if ( v3 == v4 )
          return v4;
      }
      if ( v14 == 27 )
      {
        *v13 = 30;
      }
      else if ( v14 == 25 )
      {
        *v13 = 28;
      }
      v3 = (__int64 *)(v13 + 2);
    }
    while ( v3 != v4 );
  }
  return v4;
}

