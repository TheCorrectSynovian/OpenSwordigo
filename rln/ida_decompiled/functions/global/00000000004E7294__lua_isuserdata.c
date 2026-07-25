/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E7294
 * Mangled: _Z14lua_isuserdataP9lua_Statei
 * Demangled: lua_isuserdata(lua_State *,int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 41
 *   insn=0x00000000004E7294 string=0x00000000004E7298 "+"
 *   insn=0x00000000004E7298 string=0x00000000004E729C "\t A"
 *   insn=0x00000000004E72A0 string=0x00000000004E72A8 ""
 *   insn=0x00000000004E72A8 string=0x00000000004E72AC "A"
 *   insn=0x00000000004E72B0 string=0x00000000004E72B4 "1"
 *   insn=0x00000000004E72B4 string=0x00000000004E72B8 "*"
 *   insn=0x00000000004E72B8 string=0x00000000004E7360 "\t@"
 *   insn=0x00000000004E72BC string=0x00000000004E72C0 "?"
 *   insn=0x00000000004E72C4 string=0x00000000004E72C8 "@"
 *   insn=0x00000000004E72C4 string=0x00000000004E72D4 "("
 *   insn=0x00000000004E72C8 string=0x00000000004E72CC ""
 *   insn=0x00000000004E72CC string=0x00000000004E72D0 "$"
 *   insn=0x00000000004E72D4 string=0x00000000004E72D8 "?"
 *   insn=0x00000000004E72D8 string=0x00000000004E72DC "@"
 *   insn=0x00000000004E72DC string=0x00000000004E72E0 ""
 *   insn=0x00000000004E72DC string=0x00000000004E7304 ""
 *   insn=0x00000000004E72E0 string=0x00000000004E72E4 "?"
 *   insn=0x00000000004E72E4 string=0x00000000004E72E8 " "
 *   insn=0x00000000004E72E8 string=0x00000000004E730C ""
 *   insn=0x00000000004E72EC string=0x00000000004E72F0 "?"
 *   insn=0x00000000004E72F4 string=0x00000000004E72F8 ""
 *   insn=0x00000000004E72F4 string=0x00000000004E7330 ""
 *   insn=0x00000000004E72F8 string=0x00000000004E72FC ""
 *   insn=0x00000000004E7310 string=0x00000000004E7314 ""
 *   insn=0x00000000004E7314 string=0x00000000004E7318 ""
 *   insn=0x00000000004E7318 string=0x00000000004E731C "\t@"
 *   insn=0x00000000004E731C string=0x00000000004E7320 " "
 *   insn=0x00000000004E7320 string=0x00000000004E7324 "\n"
 *   insn=0x00000000004E7324 string=0x00000000004E7328 "\tD"
 *   insn=0x00000000004E7328 string=0x00000000004E732C ""
 *   insn=0x00000000004E7330 string=0x00000000004E7334 ")"
 *   insn=0x00000000004E7334 string=0x00000000004E7338 ")"
 *   insn=0x00000000004E733C string=0x00000000004E7340 ""
 *   insn=0x00000000004E7340 string=0x00000000004E7344 "k!/"
 *   insn=0x00000000004E7344 string=0x00000000004E7348 ""
 *   insn=0x00000000004E7348 string=0x00000000004E734C "\n-@9"
 *   insn=0x00000000004E734C string=0x00000000004E7350 ""
 *   insn=0x00000000004E7350 string=0x00000000004E7354 "a"
 *   insn=0x00000000004E7354 string=0x00000000004E7358 "?"
 *   insn=0x00000000004E7358 string=0x00000000004E735C "h"
 *   insn=0x00000000004E7370 string=0x00000000004E7374 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_isuserdata(__int64 a1, int a2)
{
  __int64 *v2; // x8
  __int64 v3; // x9
  __int64 v4; // x9
  __int64 v5; // x8
  int v6; // w10

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
  return (*((_DWORD *)v2 + 2) == 7) | (unsigned int)(*((_DWORD *)v2 + 2) == 2);
}

