/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054BA94
 * Mangled: sub_54BA94
 * Demangled: sub_54BA94
 *
 * Callers: 3
 *   0x0000000000523408  sub_523408
 *   0x000000000053FD7C  sub_53FD7C
 *   0x000000000054B5C0  sub_54B5C0
 *
 * Callees: 0
 *
 * Referenced strings: 21
 *   insn=0x000000000054BAB4 string=0x000000000054BAB8 """
 *   insn=0x000000000054BAC0 string=0x000000000054BAC4 "?"
 *   insn=0x000000000054BAC8 string=0x000000000054BACC """
 *   insn=0x000000000054BACC string=0x000000000054BAD0 "s"
 *   insn=0x000000000054BAD8 string=0x000000000054BADC ""
 *   insn=0x000000000054BAE8 string=0x000000000054BAEC "c0@"
 *   insn=0x000000000054BAEC string=0x000000000054BAF0 "`"
 *   insn=0x000000000054BAFC string=0x000000000054BB00 " "
 *   insn=0x000000000054BB10 string=0x000000000054BB14 "!$@"
 *   insn=0x000000000054BB14 string=0x000000000054BB18 " "
 *   insn=0x000000000054BB2C string=0x000000000054BB30 "s"
 *   insn=0x000000000054BB34 string=0x000000000054BB38 "L"
 *   insn=0x000000000054BB3C string=0x000000000054BB40 "C"
 *   insn=0x000000000054BB7C string=0x000000000054BB80 "b"
 *   insn=0x000000000054BBAC string=0x000000000054BBB0 "A"
 *   insn=0x000000000054BBB4 string=0x000000000054BBB8 "b4@"
 *   insn=0x000000000054BBB8 string=0x000000000054BBBC "@"
 *   insn=0x000000000054BBE8 string=0x000000000054BBEC "!(@"
 *   insn=0x000000000054BBEC string=0x000000000054BBF0 " "
 *   insn=0x000000000054BC08 string=0x000000000054BC0C "!$@"
 *   insn=0x000000000054BC0C string=0x000000000054BC10 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54BA94(_QWORD *a1, _QWORD *a2, _BYTE *a3)
{
  unsigned __int64 v5; // x19
  unsigned __int8 *v6; // x1
  unsigned __int8 v8; // w2
  __int64 v9; // x19
  __int64 v10; // x21
  __int64 v11; // x0
  int v12; // w0
  unsigned __int64 v13; // x19
  __int64 i; // x1
  unsigned __int8 *v15; // x0
  unsigned __int64 v16; // x0
  unsigned __int8 *v17; // x0
  int v19; // w0

  v5 = a1[3];
  v6 = (unsigned __int8 *)a1[2];
  *a3 = 1;
  if ( (unsigned __int64)v6 < v5 )
  {
    v8 = *v6;
LABEL_3:
    v9 = v5 - (_QWORD)v6;
    v10 = 0;
    if ( v9 <= 1 )
      goto LABEL_8;
    while ( 1 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 96LL))(a2);
      v10 += v11;
      a1[2] += v11;
      if ( v9 > v11 )
        break;
LABEL_5:
      v12 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1);
      v8 = v12;
      if ( v12 == -1 )
        return v10;
      v13 = a1[3];
      for ( i = a1[2]; ; i = a1[2] )
      {
        v9 = v13 - i;
        if ( v9 > 1 )
          break;
LABEL_8:
        v15 = (unsigned __int8 *)a2[5];
        if ( (unsigned __int64)v15 >= a2[6] )
        {
          if ( (*(unsigned int (__fastcall **)(_QWORD *, _QWORD))(*a2 + 104LL))(a2, v8) == -1 )
            goto LABEL_17;
        }
        else
        {
          *v15 = v8;
          ++a2[5];
        }
        v16 = a1[2];
        ++v10;
        v13 = a1[3];
        if ( v16 >= v13 )
        {
          if ( (*(unsigned int (__fastcall **)(_QWORD *))(*a1 + 80LL))(a1) == -1 )
            return v10;
          v17 = (unsigned __int8 *)a1[2];
          v13 = a1[3];
        }
        else
        {
          v17 = (unsigned __int8 *)(v16 + 1);
          a1[2] = v17;
        }
        if ( (unsigned __int64)v17 >= v13 )
          goto LABEL_5;
        v8 = *v17;
      }
    }
LABEL_17:
    *a3 = 0;
    return v10;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1);
  v8 = v19;
  if ( v19 != -1 )
  {
    v6 = (unsigned __int8 *)a1[2];
    v5 = a1[3];
    goto LABEL_3;
  }
  return 0;
}

