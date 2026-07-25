/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F3464
 * Mangled: sub_4F3464
 * Demangled: sub_4F3464
 *
 * Callers: 3
 *   0x00000000004EDD78  sub_4EDD78
 *   0x00000000004F3230  sub_4F3230
 *   0x00000000004F356C  sub_4F356C
 *
 * Callees: 3
 *   0x00000000001FBC40  .memset
 *   0x00000000004EED74  sub_4EED74
 *   0x00000000004EEDE0  sub_4EEDE0
 *
 * Referenced strings: 23
 *   insn=0x00000000004F347C string=0x00000000004F3480 ""
 *   insn=0x00000000004F348C string=0x00000000004F3490 ""
 *   insn=0x00000000004F3490 string=0x00000000004F3494 "c~}"
 *   insn=0x00000000004F34A0 string=0x00000000004F34A4 "4"
 *   insn=0x00000000004F34B0 string=0x00000000004F34B4 "k"
 *   insn=0x00000000004F34C8 string=0x00000000001FBC40 "0'"
 *   insn=0x00000000004F34D0 string=0x00000000004F34D4 "C"
 *   insn=0x00000000004F34E0 string=0x00000000004F34E4 "_"
 *   insn=0x00000000004F34E8 string=0x00000000004F353C "K}@"
 *   insn=0x00000000004F34EC string=0x00000000004F34F0 "i"
 *   insn=0x00000000004F34F4 string=0x00000000004F34F8 "kyh"
 *   insn=0x00000000004F34F8 string=0x00000000004F34FC "k"
 *   insn=0x00000000004F34FC string=0x00000000004F3500 "j@"
 *   insn=0x00000000004F34FC string=0x00000000004F3528 ""
 *   insn=0x00000000004F3500 string=0x00000000004F3504 "m"
 *   insn=0x00000000004F3504 string=0x00000000004F3508 "J"
 *   insn=0x00000000004F3508 string=0x00000000004F350C "J}}"
 *   insn=0x00000000004F3510 string=0x00000000004F3514 "l"
 *   insn=0x00000000004F351C string=0x00000000004F3520 ""
 *   insn=0x00000000004F3528 string=0x00000000004F352C "K}@"
 *   insn=0x00000000004F3530 string=0x00000000004F3534 ""
 *   insn=0x00000000004F3540 string=0x00000000004F3544 "b"
 *   insn=0x00000000004F354C string=0x00000000004F3550 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F3464(__int64 result, int a2)
{
  __int64 v2; // x20
  char *v4; // x0
  __int64 v5; // x22
  char *v6; // x21
  int v7; // w10
  __int64 i; // x8
  __int64 *v9; // x11
  __int64 *v10; // x13
  __int64 v11; // x10
  __int64 v12; // x11

  v2 = result;
  if ( *(_BYTE *)(*(_QWORD *)(result + 32) + 33LL) != 2 )
  {
    if ( a2 <= -2 )
      sub_4EEDE0(result);
    v4 = (char *)sub_4EED74(result, 0, 0, 8LL * a2);
    v5 = *(_QWORD *)(v2 + 32);
    v6 = v4;
    if ( a2 >= 1 )
      memset(v4, 0, 8LL * (unsigned int)a2);
    v7 = *(_DWORD *)(v5 + 12);
    if ( v7 <= 0 )
    {
      v12 = v7;
    }
    else
    {
      for ( i = 0; i < v7; ++i )
      {
        v9 = *(__int64 **)(*(_QWORD *)v5 + 8 * i);
        if ( v9 )
        {
          do
          {
            v10 = (__int64 *)*v9;
            v11 = 8LL * (*((_DWORD *)v9 + 3) & (a2 - 1));
            *v9 = *(_QWORD *)&v6[v11];
            *(_QWORD *)&v6[v11] = v9;
            v9 = v10;
          }
          while ( v10 );
          v7 = *(_DWORD *)(v5 + 12);
        }
        v12 = v7;
      }
    }
    result = sub_4EED74(v2, *(_QWORD *)v5, 8 * v12, 0);
    *(_DWORD *)(v5 + 12) = a2;
    *(_QWORD *)v5 = v6;
  }
  return result;
}

