/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E944C
 * Mangled: _Z11lua_rawsetiP9lua_Stateii
 * Demangled: lua_rawseti(lua_State *,int,int)
 *
 * Callers: 1
 *   0x0000000000202730  lua_rawseti(lua_State *,int,int)
 *
 * Callees: 2
 *   0x00000000004EE46C  sub_4EE46C
 *   0x00000000004F49E8  sub_4F49E8
 *
 * Referenced strings: 53
 *   insn=0x00000000004E9458 string=0x00000000004E945C "?"
 *   insn=0x00000000004E9460 string=0x00000000004E9464 "+"
 *   insn=0x00000000004E9464 string=0x00000000004E9468 "i"A"
 *   insn=0x00000000004E946C string=0x00000000004E9474 ""
 *   insn=0x00000000004E9474 string=0x00000000004E9478 "A"
 *   insn=0x00000000004E9480 string=0x00000000004E9484 "*"
 *   insn=0x00000000004E9488 string=0x00000000004E948C "?"
 *   insn=0x00000000004E9490 string=0x00000000004E9494 "h\n@"
 *   insn=0x00000000004E9490 string=0x00000000004E94A0 "("
 *   insn=0x00000000004E9498 string=0x00000000004E949C "$"
 *   insn=0x00000000004E94A0 string=0x00000000004E94A4 "?"
 *   insn=0x00000000004E94A4 string=0x00000000004E94A8 "@"
 *   insn=0x00000000004E94A8 string=0x00000000004E94AC ""
 *   insn=0x00000000004E94A8 string=0x00000000004E94D0 "t"
 *   insn=0x00000000004E94AC string=0x00000000004E94B0 "?"
 *   insn=0x00000000004E94B0 string=0x00000000004E94B4 " "
 *   insn=0x00000000004E94B4 string=0x00000000004E94D8 "h"
 *   insn=0x00000000004E94B8 string=0x00000000004E94BC "?"
 *   insn=0x00000000004E94C0 string=0x00000000004E94C4 "h"
 *   insn=0x00000000004E94C0 string=0x00000000004E94FC "h"
 *   insn=0x00000000004E94DC string=0x00000000004E94E0 "t""
 *   insn=0x00000000004E94E0 string=0x00000000004E94E4 ""
 *   insn=0x00000000004E94E4 string=0x00000000004E94E8 ""
 *   insn=0x00000000004E94E8 string=0x00000000004E94EC "@"
 *   insn=0x00000000004E94EC string=0x00000000004E94F0 "i"
 *   insn=0x00000000004E94F0 string=0x00000000004E94F4 "hF"
 *   insn=0x00000000004E94F4 string=0x00000000004E94F8 ""
 *   insn=0x00000000004E94FC string=0x00000000004E9500 ")"
 *   insn=0x00000000004E9500 string=0x00000000004E9504 ")"
 *   insn=0x00000000004E9508 string=0x00000000004E950C ""
 *   insn=0x00000000004E950C string=0x00000000004E9510 "k!/"
 *   insn=0x00000000004E9510 string=0x00000000004E9514 ""
 *   insn=0x00000000004E9514 string=0x00000000004E9518 "\n-@9"
 *   insn=0x00000000004E9518 string=0x00000000004E951C ""
 *   insn=0x00000000004E951C string=0x00000000004E9520 "a"
 *   insn=0x00000000004E9520 string=0x00000000004E9524 "?"
 *   insn=0x00000000004E9524 string=0x00000000004E9528 "t"
 *   insn=0x00000000004E952C string=0x00000000004E9530 "u\n@"
 *   insn=0x00000000004E9534 string=0x00000000004E9538 ",-"
 *   insn=0x00000000004E953C string=0x00000000004E9540 ""
 *   insn=0x00000000004E9544 string=0x00000000004E9548 ""
 *   insn=0x00000000004E9548 string=0x00000000004E954C "h\n@"
 *   insn=0x00000000004E954C string=0x00000000004E9550 "\t"
 *   insn=0x00000000004E9550 string=0x00000000004E9554 "?"
 *   insn=0x00000000004E9554 string=0x00000000004E9558 "k"
 *   insn=0x00000000004E9558 string=0x00000000004E955C "\t"
 *   insn=0x00000000004E9558 string=0x00000000004E9584 "A"
 *   insn=0x00000000004E955C string=0x00000000004E9560 ")%@9?"
 *   insn=0x00000000004E9560 string=0x00000000004E9564 "?"
 *   insn=0x00000000004E956C string=0x00000000004E9570 ")$@9"
 *   insn=0x00000000004E957C string=0x00000000004E9580 "h\n@"
 *   insn=0x00000000004E957C string=0x00000000004EE46C "($@9\t"
 *   insn=0x00000000004E9584 string=0x00000000004E9588 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_rawseti(__int64 a1, int a2)
{
  __int64 *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x9
  __int64 v6; // x8
  int v7; // w10
  __int64 v8; // x8
  __int64 v9; // x21
  __int64 result; // x0
  __int64 v11; // x8

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
          v3 = (__int64 *)(a1 + 136);
          v4 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
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
          v8 = v6 + 16 * v5 + 24;
          if ( (int)v5 <= v7 )
            v3 = (__int64 *)v8;
          else
            v3 = &qword_599BC8;
          break;
      }
    }
    else
    {
      v3 = (__int64 *)(*(_QWORD *)(a1 + 16) + 16LL * a2);
    }
  }
  else if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16) >= *(_QWORD *)(a1 + 16) )
  {
    v3 = &qword_599BC8;
  }
  else
  {
    v3 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16);
  }
  v9 = *(_QWORD *)(a1 + 16);
  result = sub_4F49E8(a1, *v3);
  *(_QWORD *)result = *(_QWORD *)(v9 - 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(v9 - 8);
  v11 = *(_QWORD *)(a1 + 16);
  if ( *(int *)(v11 - 8) >= 4 && (*(_BYTE *)(*(_QWORD *)(v11 - 16) + 9LL) & 3) != 0 && (*(_BYTE *)(*v3 + 9) & 4) != 0 )
  {
    result = sub_4EE46C(a1);
    v11 = *(_QWORD *)(a1 + 16);
  }
  *(_QWORD *)(a1 + 16) = v11 - 16;
  return result;
}

