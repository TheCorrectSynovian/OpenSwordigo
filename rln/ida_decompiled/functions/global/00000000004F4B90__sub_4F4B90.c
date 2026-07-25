/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F4B90
 * Mangled: sub_4F4B90
 * Demangled: sub_4F4B90
 *
 * Callers: 2
 *   0x00000000004E7F18  lua_objlen(lua_State *,int)
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Callees: 0
 *
 * Referenced strings: 59
 *   insn=0x00000000004F4B94 string=0x00000000004F4B98 "\n"
 *   insn=0x00000000004F4B94 string=0x00000000004F4BAC "\n"
 *   insn=0x00000000004F4B98 string=0x00000000004F4B9C "("
 *   insn=0x00000000004F4B9C string=0x00000000004F4BA0 "HQ("
 *   insn=0x00000000004F4BA0 string=0x00000000004F4BA4 "\t@"
 *   insn=0x00000000004F4BA4 string=0x00000000004F4BA8 "H"
 *   insn=0x00000000004F4BA8 string=0x00000000004F4D10 "?\t"
 *   insn=0x00000000004F4BAC string=0x00000000004F4BB0 "("
 *   insn=0x00000000004F4BB0 string=0x00000000004F4BB8 "_"
 *   insn=0x00000000004F4BB8 string=0x00000000004F4BBC "@\n"
 *   insn=0x00000000004F4BBC string=0x00000000004F4BC0 "-"
 *   insn=0x00000000004F4BC0 string=0x00000000004F4BC4 "0"
 *   insn=0x00000000004F4BDC string=0x00000000004F4BE0 "p"
 *   insn=0x00000000004F4BE8 string=0x00000000004F4C00 "`"
 *   insn=0x00000000004F4BEC string=0x00000000004F4BF0 "0"
 *   insn=0x00000000004F4BF4 string=0x00000000004F4BF8 "P"
 *   insn=0x00000000004F4BF8 string=0x00000000004F4BFC "T"
 *   insn=0x00000000004F4BF8 string=0x00000000004F4C60 "py"
 *   insn=0x00000000004F4BFC string=0x00000000004F4D4C "l"
 *   insn=0x00000000004F4C04 string=0x00000000004F4C08 "k"
 *   insn=0x00000000004F4C10 string=0x00000000004F4C14 "2"
 *   insn=0x00000000004F4C14 string=0x00000000004F4C18 "Q"
 *   insn=0x00000000004F4C24 string=0x00000000004F4C28 "2\n"
 *   insn=0x00000000004F4C28 string=0x00000000004F4C2C "P"
 *   insn=0x00000000004F4C34 string=0x00000000004F4C38 "?"
 *   insn=0x00000000004F4C40 string=0x00000000004F4C44 "  `"
 *   insn=0x00000000004F4C4C string=0x00000000004F4C50 "0"
 *   insn=0x00000000004F4C6C string=0x00000000004F4C70 ","
 *   insn=0x00000000004F4C78 string=0x00000000004F4C7C ""
 *   insn=0x00000000004F4CA0 string=0x00000000004F4CA4 "n"
 *   insn=0x00000000004F4CB0 string=0x00000000004F4CB4 "0"
 *   insn=0x00000000004F4CB4 string=0x00000000004F4CB8 "o!"
 *   insn=0x00000000004F4CC4 string=0x00000000004F4CC8 "/"
 *   insn=0x00000000004F4CDC string=0x00000000004F4CE0 "  `"
 *   insn=0x00000000004F4CE8 string=0x00000000004F4CEC "/"
 *   insn=0x00000000004F4CF8 string=0x00000000004F4CFC "O"
 *   insn=0x00000000004F4CFC string=0x00000000004F4D00 "?"
 *   insn=0x00000000004F4D18 string=0x00000000004F4D1C ""
 *   insn=0x00000000004F4D1C string=0x00000000004F4D20 "k}"
 *   insn=0x00000000004F4D20 string=0x00000000004F4D24 "l"
 *   insn=0x00000000004F4D24 string=0x00000000004F4D28 "LQ,"
 *   insn=0x00000000004F4D30 string=0x00000000004F4D34 "i"
 *   insn=0x00000000004F4D34 string=0x00000000004F4D38 ""
 *   insn=0x00000000004F4D38 string=0x00000000004F4D3C "+"
 *   insn=0x00000000004F4D44 string=0x00000000004F4D48 "-"
 *   insn=0x00000000004F4D50 string=0x00000000004F4D54 "C"
 *   insn=0x00000000004F4D54 string=0x00000000004F4D58 ","
 *   insn=0x00000000004F4D64 string=0x00000000004F4D68 "o"
 *   insn=0x00000000004F4D7C string=0x00000000004F4D80 "0"
 *   insn=0x00000000004F4D8C string=0x00000000004F4D90 "o"
 *   insn=0x00000000004F4D98 string=0x00000000004F4D9C "2"
 *   insn=0x00000000004F4D9C string=0x00000000004F4DA0 "Q"
 *   insn=0x00000000004F4DAC string=0x00000000004F4DB0 "2\n"
 *   insn=0x00000000004F4DB0 string=0x00000000004F4DB4 "P"
 *   insn=0x00000000004F4DBC string=0x00000000004F4DC0 "?"
 *   insn=0x00000000004F4DC8 string=0x00000000004F4DCC "  `"
 *   insn=0x00000000004F4DD4 string=0x00000000004F4DD8 "0"
 *   insn=0x00000000004F4DE8 string=0x00000000004F4DEC ""
 *   insn=0x00000000004F4DEC string=0x00000000004F4DF0 "o"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F4B90(__int64 a1)
{
  unsigned int v1; // w9
  __int64 v2; // x10
  char *v3; // x10
  int v4; // w16
  unsigned int v5; // w8
  signed int v6; // w11
  unsigned int v7; // w16
  double v8; // d0
  __int64 *v9; // x16
  int v10; // w14
  __int64 *v11; // x15
  double v12; // d0
  signed int v14; // w15
  __int64 *v15; // x16
  double v16; // d0

  v1 = *(_DWORD *)(a1 + 56);
  if ( !v1 || (v2 = *(_QWORD *)(a1 + 24), *(_DWORD *)(v2 + 16LL * (v1 - 1) + 8)) )
  {
    v3 = *(char **)(a1 + 32);
    if ( v3 == (char *)&unk_59A2A0 )
      return v1;
    v4 = v1 + 1;
    v5 = *(_DWORD *)(a1 + 56);
    do
    {
      v6 = v4;
      v7 = v4 - 1;
      if ( v7 >= v1 )
      {
        v8 = (double)v6;
        v9 = *(__int64 **)(a1 + 32);
        if ( v6 )
          v9 = (__int64 *)&v3[40 * ((HIDWORD(v8) + LODWORD(v8)) % (((1 << *(_BYTE *)(a1 + 11)) - 1) | 1u))];
        while ( *((_DWORD *)v9 + 6) != 3 || *((double *)v9 + 2) != v8 )
        {
          v9 = (__int64 *)v9[4];
          if ( !v9 )
          {
            v9 = &qword_599BC8;
            break;
          }
        }
        if ( !*((_DWORD *)v9 + 2) )
        {
LABEL_35:
          if ( v6 - v5 >= 2 )
          {
            do
            {
              v14 = (v6 + v5) >> 1;
              if ( v14 - 1 >= v1 )
              {
                v16 = (double)v14;
                v15 = *(__int64 **)(a1 + 32);
                if ( v14 )
                  v15 = (__int64 *)&v3[40 * ((HIDWORD(v16) + LODWORD(v16)) % (((1 << *(_BYTE *)(a1 + 11)) - 1) | 1u))];
                while ( *((_DWORD *)v15 + 6) != 3 || *((double *)v15 + 2) != v16 )
                {
                  v15 = (__int64 *)v15[4];
                  if ( !v15 )
                  {
                    v15 = &qword_599BC8;
                    break;
                  }
                }
              }
              else
              {
                v15 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * (v14 - 1));
              }
              if ( *((_DWORD *)v15 + 2) )
                v5 = (v6 + v5) >> 1;
              else
                v6 = (v6 + v5) >> 1;
            }
            while ( v6 - v5 > 1 );
          }
          return v5;
        }
      }
      else if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL * (int)v7 + 8) )
      {
        goto LABEL_35;
      }
      v4 = 2 * v6;
      v5 = v6;
    }
    while ( (unsigned int)(2 * v6) < 0x7FFFFFFE );
    v10 = 1;
    do
    {
      v5 = v10 - 1;
      if ( v10 - 1 >= v1 )
      {
        v12 = (double)v10;
        v11 = *(__int64 **)(a1 + 32);
        if ( v10 )
          v11 = (__int64 *)&v3[40 * ((HIDWORD(v12) + LODWORD(v12)) % (((1 << *(_BYTE *)(a1 + 11)) - 1) | 1u))];
        while ( *((_DWORD *)v11 + 6) != 3 || *((double *)v11 + 2) != v12 )
        {
          v11 = (__int64 *)v11[4];
          if ( !v11 )
          {
            v11 = &qword_599BC8;
            break;
          }
        }
      }
      else
      {
        v11 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * (int)v5);
      }
      ++v10;
    }
    while ( *((_DWORD *)v11 + 2) );
    return v5;
  }
  if ( v1 >= 2 )
  {
    v5 = 0;
    do
    {
      if ( *(_DWORD *)(v2 + 16LL * (((v5 + v1) >> 1) - 1) + 8) )
        v5 = (v5 + v1) >> 1;
      else
        v1 = (v5 + v1) >> 1;
    }
    while ( v1 - v5 > 1 );
    return v5;
  }
  return 0;
}

