/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E9FD8
 * Mangled: _Z14lua_getupvalueP9lua_Stateii
 * Demangled: lua_getupvalue(lua_State *,int,int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 73
 *   insn=0x00000000004E9FD8 string=0x00000000004E9FDC "+"
 *   insn=0x00000000004E9FDC string=0x00000000004E9FE0 "\t A"
 *   insn=0x00000000004E9FE4 string=0x00000000004E9FEC ""
 *   insn=0x00000000004E9FEC string=0x00000000004E9FF0 "A"
 *   insn=0x00000000004E9FF4 string=0x00000000004E9FF8 "1"
 *   insn=0x00000000004E9FF8 string=0x00000000004E9FFC "*"
 *   insn=0x00000000004E9FFC string=0x00000000004EA0A4 "\t\t@"
 *   insn=0x00000000004EA000 string=0x00000000004EA004 "?"
 *   insn=0x00000000004EA008 string=0x00000000004EA00C "@"
 *   insn=0x00000000004EA008 string=0x00000000004EA018 "("
 *   insn=0x00000000004EA00C string=0x00000000004EA010 ""
 *   insn=0x00000000004EA010 string=0x00000000004EA014 "$"
 *   insn=0x00000000004EA018 string=0x00000000004EA01C "?"
 *   insn=0x00000000004EA01C string=0x00000000004EA020 "@"
 *   insn=0x00000000004EA020 string=0x00000000004EA024 ""
 *   insn=0x00000000004EA020 string=0x00000000004EA048 ""
 *   insn=0x00000000004EA024 string=0x00000000004EA028 "?"
 *   insn=0x00000000004EA028 string=0x00000000004EA02C " "
 *   insn=0x00000000004EA02C string=0x00000000004EA050 ""
 *   insn=0x00000000004EA030 string=0x00000000004EA034 "?"
 *   insn=0x00000000004EA038 string=0x00000000004EA03C ""
 *   insn=0x00000000004EA038 string=0x00000000004EA074 ""
 *   insn=0x00000000004EA03C string=0x00000000004EA040 ""
 *   insn=0x00000000004EA054 string=0x00000000004EA058 ""
 *   insn=0x00000000004EA058 string=0x00000000004EA05C ""
 *   insn=0x00000000004EA05C string=0x00000000004EA060 "\t@"
 *   insn=0x00000000004EA060 string=0x00000000004EA064 " "
 *   insn=0x00000000004EA064 string=0x00000000004EA068 "\n"
 *   insn=0x00000000004EA068 string=0x00000000004EA06C "\tD"
 *   insn=0x00000000004EA06C string=0x00000000004EA070 ""
 *   insn=0x00000000004EA074 string=0x00000000004EA078 ")"
 *   insn=0x00000000004EA078 string=0x00000000004EA07C ")"
 *   insn=0x00000000004EA07C string=0x00000000004EA080 "k"
 *   insn=0x00000000004EA080 string=0x00000000004EA084 ""
 *   insn=0x00000000004EA084 string=0x00000000004EA088 "k!/"
 *   insn=0x00000000004EA088 string=0x00000000004EA08C ""
 *   insn=0x00000000004EA08C string=0x00000000004EA090 "\n-@9"
 *   insn=0x00000000004EA090 string=0x00000000004EA094 ""
 *   insn=0x00000000004EA094 string=0x00000000004EA098 "a"
 *   insn=0x00000000004EA098 string=0x00000000004EA09C "?"
 *   insn=0x00000000004EA09C string=0x00000000004EA0A0 "h"
 *   insn=0x00000000004EA0A4 string=0x00000000004EA0A8 "?"
 *   insn=0x00000000004EA0AC string=0x00000000004EA0B0 ""
 *   insn=0x00000000004EA0B0 string=0x00000000004EA0B4 "\t)@9"
 *   insn=0x00000000004EA0B8 string=0x00000000004EA0BC "_"
 *   insn=0x00000000004EA0B8 string=0x00000000004EA0E8 "_"
 *   insn=0x00000000004EA0BC string=0x00000000004EA0C0 "k"
 *   insn=0x00000000004EA0C0 string=0x00000000004EA0C4 "\t-@9?"
 *   insn=0x00000000004EA0C4 string=0x00000000004EA0C8 "?"
 *   insn=0x00000000004EA0C8 string=0x00000000004EA0CC "j"
 *   insn=0x00000000004EA0CC string=0x00000000004EA118 ""
 *   insn=0x00000000004EA0E8 string=0x00000000004EA0EC ""
 *   insn=0x00000000004EA0EC string=0x00000000004EA0F0 "\t"
 *   insn=0x00000000004EA0F0 string=0x00000000004EA0F4 "*I@"
 *   insn=0x00000000004EA0F4 string=0x00000000004EA0F8 "_"
 *   insn=0x00000000004EA0FC string=0x00000000004EA138 "J|}"
 *   insn=0x00000000004EA118 string=0x00000000004EA11C "\ta"
 *   insn=0x00000000004EA11C string=0x00000000004EA120 "("
 *   insn=0x00000000004EA128 string=0x00000000004EA158 "\n@"
 *   insn=0x00000000004EA138 string=0x00000000004EA13C "J!"
 *   insn=0x00000000004EA13C string=0x00000000004EA140 ""
 *   insn=0x00000000004EA140 string=0x00000000004EA144 ")"
 *   insn=0x00000000004EA144 string=0x00000000004EA148 ""
 *   insn=0x00000000004EA148 string=0x00000000004EA14C "*ij"
 *   insn=0x00000000004EA14C string=0x00000000004EA150 "\t\t@"
 *   insn=0x00000000004EA150 string=0x00000000004EA154 "Ha"
 *   insn=0x00000000004EA158 string=0x00000000004EA15C "+"
 *   insn=0x00000000004EA15C string=0x00000000004EA160 "K"
 *   insn=0x00000000004EA160 string=0x00000000004EA164 ")\t@"
 *   insn=0x00000000004EA164 string=0x00000000004EA168 "I\t"
 *   insn=0x00000000004EA168 string=0x00000000004EA16C "\t@"
 *   insn=0x00000000004EA16C string=0x00000000004EA170 ")A"
 *   insn=0x00000000004EA170 string=0x00000000004EA174 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall lua_getupvalue(__int64 a1, int a2, int a3)
{
  __int64 *v3; // x8
  __int64 v4; // x9
  __int64 v5; // x9
  __int64 v6; // x8
  int v7; // w10
  __int64 v8; // x8
  __int64 v10; // x9
  __int64 v11; // x9
  char *v12; // x8
  __int64 v13; // x10
  __int64 v14; // x8
  __int64 v15; // x10
  __int64 v16; // x10

  if ( a2 < 1 )
  {
    if ( a2 < -9999 )
    {
      switch ( a2 )
      {
        case -10002:
          v3 = (__int64 *)(a1 + 120);
          break;
        case -10001:
          v4 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
          v3 = (__int64 *)(a1 + 136);
          *(_DWORD *)(a1 + 144) = 5;
          *(_QWORD *)(a1 + 136) = v4;
          break;
        case -10000:
          v3 = (__int64 *)(*(_QWORD *)(a1 + 32) + 160LL);
          break;
        default:
          v5 = -10002LL - a2;
          v6 = **(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL);
          v7 = *(unsigned __int8 *)(v6 + 11);
          v3 = (__int64 *)(v6 + 16 * v5 + 24);
          if ( (int)v5 > v7 )
            v3 = &qword_599BC8;
          break;
      }
    }
    else
    {
      v3 = (__int64 *)(*(_QWORD *)(a1 + 16) + 16LL * a2);
    }
  }
  else
  {
    v3 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16);
    if ( (unsigned __int64)v3 >= *(_QWORD *)(a1 + 16) )
      v3 = &qword_599BC8;
  }
  if ( *((_DWORD *)v3 + 2) != 6 )
    return 0;
  v8 = *v3;
  if ( *(_BYTE *)(v8 + 10) )
  {
    if ( a3 < 1 )
      return 0;
    if ( *(unsigned __int8 *)(v8 + 11) < a3 )
      return 0;
    v11 = v8 + 16LL * a3 + 24;
    v12 = "";
  }
  else
  {
    if ( a3 < 1 )
      return 0;
    v10 = *(_QWORD *)(v8 + 32);
    if ( *(_DWORD *)(v10 + 72) < a3 )
      return 0;
    v13 = 8LL * a3 - 8;
    v14 = *(_QWORD *)(v8 + v13 + 40);
    v15 = *(_QWORD *)(*(_QWORD *)(v10 + 56) + v13);
    v11 = *(_QWORD *)(v14 + 16);
    v12 = (char *)(v15 + 24);
  }
  v16 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)v16 = *(_QWORD *)v11;
  *(_DWORD *)(v16 + 8) = *(_DWORD *)(v11 + 8);
  *(_QWORD *)(a1 + 16) += 16LL;
  return v12;
}

