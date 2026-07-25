/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E8060
 * Mangled: _Z15lua_tocfunctionP9lua_Statei
 * Demangled: lua_tocfunction(lua_State *,int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 43
 *   insn=0x00000000004E8060 string=0x00000000004E8064 "+"
 *   insn=0x00000000004E8064 string=0x00000000004E8068 "\t A"
 *   insn=0x00000000004E806C string=0x00000000004E8074 ""
 *   insn=0x00000000004E8074 string=0x00000000004E8078 "A"
 *   insn=0x00000000004E807C string=0x00000000004E8080 "1"
 *   insn=0x00000000004E8080 string=0x00000000004E8084 "*"
 *   insn=0x00000000004E8084 string=0x00000000004E812C "\t\t@"
 *   insn=0x00000000004E8088 string=0x00000000004E808C "?"
 *   insn=0x00000000004E8090 string=0x00000000004E8094 "@"
 *   insn=0x00000000004E8090 string=0x00000000004E80A0 "("
 *   insn=0x00000000004E8094 string=0x00000000004E8098 ""
 *   insn=0x00000000004E8098 string=0x00000000004E809C "$"
 *   insn=0x00000000004E80A0 string=0x00000000004E80A4 "?"
 *   insn=0x00000000004E80A4 string=0x00000000004E80A8 "@"
 *   insn=0x00000000004E80A8 string=0x00000000004E80AC ""
 *   insn=0x00000000004E80A8 string=0x00000000004E80D0 ""
 *   insn=0x00000000004E80AC string=0x00000000004E80B0 "?"
 *   insn=0x00000000004E80B0 string=0x00000000004E80B4 " "
 *   insn=0x00000000004E80B4 string=0x00000000004E80D8 ""
 *   insn=0x00000000004E80B8 string=0x00000000004E80BC "?"
 *   insn=0x00000000004E80C0 string=0x00000000004E80C4 ""
 *   insn=0x00000000004E80C0 string=0x00000000004E80FC ""
 *   insn=0x00000000004E80C4 string=0x00000000004E80C8 ""
 *   insn=0x00000000004E80DC string=0x00000000004E80E0 ""
 *   insn=0x00000000004E80E0 string=0x00000000004E80E4 ""
 *   insn=0x00000000004E80E4 string=0x00000000004E80E8 "\t@"
 *   insn=0x00000000004E80E8 string=0x00000000004E80EC " "
 *   insn=0x00000000004E80EC string=0x00000000004E80F0 "\n"
 *   insn=0x00000000004E80F0 string=0x00000000004E80F4 "\tD"
 *   insn=0x00000000004E80F4 string=0x00000000004E80F8 ""
 *   insn=0x00000000004E80FC string=0x00000000004E8100 ")"
 *   insn=0x00000000004E8100 string=0x00000000004E8104 ")"
 *   insn=0x00000000004E8108 string=0x00000000004E810C ""
 *   insn=0x00000000004E810C string=0x00000000004E8110 "k!/"
 *   insn=0x00000000004E8110 string=0x00000000004E8114 ""
 *   insn=0x00000000004E8114 string=0x00000000004E8118 "\n-@9"
 *   insn=0x00000000004E8118 string=0x00000000004E811C ""
 *   insn=0x00000000004E811C string=0x00000000004E8120 "a"
 *   insn=0x00000000004E8120 string=0x00000000004E8124 "?"
 *   insn=0x00000000004E8124 string=0x00000000004E8128 "h"
 *   insn=0x00000000004E812C string=0x00000000004E8130 "?"
 *   insn=0x00000000004E8134 string=0x00000000004E8138 ""
 *   insn=0x00000000004E8138 string=0x00000000004E813C "\t)@9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_tocfunction(__int64 a1, int a2)
{
  __int64 *v2; // x8
  __int64 v3; // x9
  __int64 v4; // x9
  __int64 v5; // x8
  int v6; // w10
  __int64 v7; // x8

  if ( a2 < 1 )
  {
    if ( a2 < -9999 )
    {
      switch ( a2 )
      {
        case -10002:
          v2 = (__int64 *)(a1 + 120);
          break;
        case -10001:
          v3 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
          v2 = (__int64 *)(a1 + 136);
          *(_DWORD *)(a1 + 144) = 5;
          *(_QWORD *)(a1 + 136) = v3;
          break;
        case -10000:
          v2 = (__int64 *)(*(_QWORD *)(a1 + 32) + 160LL);
          break;
        default:
          v4 = -10002LL - a2;
          v5 = **(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL);
          v6 = *(unsigned __int8 *)(v5 + 11);
          v2 = (__int64 *)(v5 + 16 * v4 + 24);
          if ( (int)v4 > v6 )
            v2 = &qword_599BC8;
          break;
      }
    }
    else
    {
      v2 = (__int64 *)(*(_QWORD *)(a1 + 16) + 16LL * a2);
    }
  }
  else
  {
    v2 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16);
    if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 16) )
      v2 = &qword_599BC8;
  }
  if ( *((_DWORD *)v2 + 2) != 6 )
    return 0;
  v7 = *v2;
  if ( *(_BYTE *)(v7 + 10) )
    return *(_QWORD *)(v7 + 32);
  else
    return 0;
}

