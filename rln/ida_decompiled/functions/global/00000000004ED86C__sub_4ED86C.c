/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ED86C
 * Mangled: sub_4ED86C
 * Demangled: sub_4ED86C
 *
 * Callers: 2
 *   0x00000000004EDD78  sub_4EDD78
 *   0x00000000004F33F0  lua_close(lua_State *)
 *
 * Callees: 1
 *   0x00000000004F4E8C  sub_4F4E8C
 *
 * Referenced strings: 21
 *   insn=0x00000000004ED880 string=0x00000000004ED884 "v"
 *   insn=0x00000000004ED89C string=0x00000000004ED8A0 "\t"
 *   insn=0x00000000004ED8A4 string=0x00000000004ED8A8 "?"
 *   insn=0x00000000004ED8AC string=0x00000000004ED8B0 "("
 *   insn=0x00000000004ED8B0 string=0x00000000004ED8B4 "\t"
 *   insn=0x00000000004ED8B8 string=0x00000000004ED8BC "`"
 *   insn=0x00000000004ED8BC string=0x00000000004ED8C0 "\t(@9)"
 *   insn=0x00000000004ED8BC string=0x00000000004ED928 ""
 *   insn=0x00000000004ED8C0 string=0x00000000004ED8C4 ")"
 *   insn=0x00000000004ED8C4 string=0x00000000004ED8C8 "h"
 *   insn=0x00000000004ED8D0 string=0x00000000004ED8D4 "n"
 *   insn=0x00000000004ED8D4 string=0x00000000004ED8D8 "`"
 *   insn=0x00000000004ED8E4 string=0x00000000004ED8E8 ""
 *   insn=0x00000000004ED8EC string=0x00000000004ED8F0 "\t"
 *   insn=0x00000000004ED8F8 string=0x00000000004ED8FC "5"
 *   insn=0x00000000004ED8FC string=0x00000000004ED900 ""
 *   insn=0x00000000004ED900 string=0x00000000004ED904 ""
 *   insn=0x00000000004ED90C string=0x00000000004ED910 ""
 *   insn=0x00000000004ED91C string=0x00000000004ED920 ""
 *   insn=0x00000000004ED934 string=0x00000000004ED938 "7"
 *   insn=0x00000000004ED94C string=0x00000000004ED950 "w"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4ED86C(__int64 a1, int a2)
{
  __int64 v2; // x22
  __int64 v4; // x21
  __int64 **v5; // x24
  __int64 *v6; // x23
  char v7; // w8
  __int64 v8; // x0
  __int64 *v9; // x9
  __int64 v10; // x10
  __int64 *v11; // x8
  _QWORD *v12; // x8

  v2 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  v5 = *(__int64 ***)(v2 + 176);
  v6 = *v5;
  if ( *v5 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = *((_BYTE *)v6 + 9);
        if ( (v7 & 8) == 0 )
        {
          if ( a2 | v7 & 3 )
            break;
        }
        v5 = (__int64 **)v6;
        v6 = (__int64 *)*v6;
        if ( !v6 )
          return v4;
      }
      v8 = v6[2];
      if ( !v8 || (*(_BYTE *)(v8 + 10) & 4) != 0 )
        goto LABEL_12;
      if ( sub_4F4E8C() )
      {
        v9 = (__int64 *)*v6;
        v10 = v6[4];
        *((_BYTE *)v6 + 9) |= 8u;
        *v5 = v9;
        v11 = *(__int64 **)(v2 + 80);
        v4 += v10 + 40;
        if ( v11 )
        {
          *v6 = *v11;
          v12 = *(_QWORD **)(v2 + 80);
        }
        else
        {
          v12 = v6;
        }
        *v12 = v6;
        *(_QWORD *)(v2 + 80) = v6;
        v6 = *v5;
        if ( !*v5 )
          return v4;
      }
      else
      {
        v7 = *((_BYTE *)v6 + 9);
LABEL_12:
        *((_BYTE *)v6 + 9) = v7 | 8;
        v5 = (__int64 **)v6;
        v6 = (__int64 *)*v6;
        if ( !v6 )
          return v4;
      }
    }
  }
  return v4;
}

