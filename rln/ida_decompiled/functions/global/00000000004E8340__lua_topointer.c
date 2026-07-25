/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E8340
 * Mangled: _Z13lua_topointerP9lua_Statei
 * Demangled: lua_topointer(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000001FB6A0  lua_topointer(lua_State *,int)
 *
 * Callees: 0
 *
 * Referenced strings: 92
 *   insn=0x00000000004E8340 string=0x00000000004E8344 "+"
 *   insn=0x00000000004E8344 string=0x00000000004E8348 "\t A"
 *   insn=0x00000000004E834C string=0x00000000004E8354 ""
 *   insn=0x00000000004E8354 string=0x00000000004E8358 "A"
 *   insn=0x00000000004E835C string=0x00000000004E8360 "\t1"
 *   insn=0x00000000004E8364 string=0x00000000004E837C "(\t@"
 *   insn=0x00000000004E8368 string=0x00000000004E836C "?"
 *   insn=0x00000000004E836C string=0x00000000004E8370 "K"
 *   insn=0x00000000004E8370 string=0x00000000004E8374 "@"
 *   insn=0x00000000004E8370 string=0x00000000004E83D8 "("
 *   insn=0x00000000004E8374 string=0x00000000004E8378 "\t"
 *   insn=0x00000000004E837C string=0x00000000004E8380 "\n\t"
 *   insn=0x00000000004E8380 string=0x00000000004E8384 "_"
 *   insn=0x00000000004E8388 string=0x00000000004E838C "H"
 *   insn=0x00000000004E8390 string=0x00000000004E8398 "jy"
 *   insn=0x00000000004E8390 string=0x0000000000599780 "0"
 *   insn=0x00000000004E8398 string=0x00000000004E839C "J"
 *   insn=0x00000000004E839C string=0x00000000004E83A0 "@"
 *   insn=0x00000000004E83A0 string=0x00000000004E83A4 "("
 *   insn=0x00000000004E83A0 string=0x00000000004E83B0 "?"
 *   insn=0x00000000004E83B4 string=0x00000000004E83B8 "\t A"
 *   insn=0x00000000004E83BC string=0x00000000004E83C4 ""
 *   insn=0x00000000004E83C4 string=0x00000000004E83C8 "A"
 *   insn=0x00000000004E83CC string=0x00000000004E83D0 "1"
 *   insn=0x00000000004E83D0 string=0x00000000004E83D4 "N"
 *   insn=0x00000000004E83D4 string=0x00000000004E850C "\t\t@"
 *   insn=0x00000000004E83D8 string=0x00000000004E83DC "?"
 *   insn=0x00000000004E83E0 string=0x00000000004E83E4 ""
 *   insn=0x00000000004E83E0 string=0x00000000004E8450 "\t"
 *   insn=0x00000000004E83E4 string=0x00000000004E83E8 "?"
 *   insn=0x00000000004E83E8 string=0x00000000004E83EC "`"
 *   insn=0x00000000004E83EC string=0x00000000004E8458 ""
 *   insn=0x00000000004E83F0 string=0x00000000004E83F4 "?"
 *   insn=0x00000000004E83F4 string=0x00000000004E83F8 "!"
 *   insn=0x00000000004E83F8 string=0x00000000004E83FC ""
 *   insn=0x00000000004E83F8 string=0x00000000004E847C ""
 *   insn=0x00000000004E83FC string=0x00000000004E8400 "\t"
 *   insn=0x00000000004E8408 string=0x00000000004E840C "?"
 *   insn=0x00000000004E8410 string=0x00000000004E8414 "@"
 *   insn=0x00000000004E8410 string=0x00000000004E8420 "("
 *   insn=0x00000000004E8414 string=0x00000000004E8418 ""
 *   insn=0x00000000004E8418 string=0x00000000004E841C "<"
 *   insn=0x00000000004E8420 string=0x00000000004E8424 "?"
 *   insn=0x00000000004E8424 string=0x00000000004E8428 "@"
 *   insn=0x00000000004E8428 string=0x00000000004E842C ""
 *   insn=0x00000000004E8428 string=0x00000000004E84B0 ""
 *   insn=0x00000000004E842C string=0x00000000004E8430 "?"
 *   insn=0x00000000004E8430 string=0x00000000004E8434 " "
 *   insn=0x00000000004E8434 string=0x00000000004E84B8 ""
 *   insn=0x00000000004E8438 string=0x00000000004E843C "?"
 *   insn=0x00000000004E8440 string=0x00000000004E8444 ""
 *   insn=0x00000000004E8440 string=0x00000000004E84DC ""
 *   insn=0x00000000004E8444 string=0x00000000004E8448 ""
 *   insn=0x00000000004E8448 string=0x00000000004E844C "0"
 *   insn=0x00000000004E845C string=0x00000000004E8460 "\t "
 *   insn=0x00000000004E8460 string=0x00000000004E8464 ""
 *   insn=0x00000000004E8464 string=0x00000000004E8468 ""
 *   insn=0x00000000004E8468 string=0x00000000004E846C "@"
 *   insn=0x00000000004E846C string=0x00000000004E8470 "\n"
 *   insn=0x00000000004E8470 string=0x00000000004E8474 "D"
 *   insn=0x00000000004E847C string=0x00000000004E8480 ")"
 *   insn=0x00000000004E8480 string=0x00000000004E8484 ")"
 *   insn=0x00000000004E8488 string=0x00000000004E848C ""
 *   insn=0x00000000004E848C string=0x00000000004E8490 "k!/"
 *   insn=0x00000000004E8490 string=0x00000000004E8494 ""
 *   insn=0x00000000004E8494 string=0x00000000004E8498 "\n-@9"
 *   insn=0x00000000004E8498 string=0x00000000004E849C ""
 *   insn=0x00000000004E849C string=0x00000000004E84A0 "a"
 *   insn=0x00000000004E84A0 string=0x00000000004E84A4 "?"
 *   insn=0x00000000004E84A4 string=0x00000000004E84A8 "i"
 *   insn=0x00000000004E84BC string=0x00000000004E84C0 ""
 *   insn=0x00000000004E84C0 string=0x00000000004E84C4 ""
 *   insn=0x00000000004E84C4 string=0x00000000004E84C8 "\t@"
 *   insn=0x00000000004E84C8 string=0x00000000004E84CC " "
 *   insn=0x00000000004E84CC string=0x00000000004E84D0 "\n"
 *   insn=0x00000000004E84D0 string=0x00000000004E84D4 "\tD"
 *   insn=0x00000000004E84D4 string=0x00000000004E84D8 ""
 *   insn=0x00000000004E84DC string=0x00000000004E84E0 ")"
 *   insn=0x00000000004E84E0 string=0x00000000004E84E4 ")"
 *   insn=0x00000000004E84E8 string=0x00000000004E84EC ""
 *   insn=0x00000000004E84EC string=0x00000000004E84F0 "k!/"
 *   insn=0x00000000004E84F0 string=0x00000000004E84F4 ""
 *   insn=0x00000000004E84F4 string=0x00000000004E84F8 "\n-@9"
 *   insn=0x00000000004E84F8 string=0x00000000004E84FC ""
 *   insn=0x00000000004E84FC string=0x00000000004E8500 "a"
 *   insn=0x00000000004E8500 string=0x00000000004E8504 "?"
 *   insn=0x00000000004E8504 string=0x00000000004E8508 "h"
 *   insn=0x00000000004E850C string=0x00000000004E8510 "?\t"
 *   insn=0x00000000004E8514 string=0x00000000004E8518 "?"
 *   insn=0x00000000004E8514 string=0x00000000004E8530 ""
 *   insn=0x00000000004E851C string=0x00000000004E8520 ""
 *   insn=0x00000000004E8520 string=0x00000000004E8524 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_topointer(__int64 a1, int a2)
{
  __int64 *v2; // x9
  __int64 v3; // x8
  __int64 result; // x0
  __int64 *v5; // x8
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x8
  int v9; // w10
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x9
  __int64 v13; // x8
  int v14; // w10
  int v15; // w9

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
          v2 = (__int64 *)(a1 + 136);
          v6 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
          *(_DWORD *)(a1 + 144) = 5;
          *(_QWORD *)(a1 + 136) = v6;
          break;
        case -10000:
          v2 = (__int64 *)(*(_QWORD *)(a1 + 32) + 160LL);
          break;
        default:
          v7 = -10002LL - a2;
          v8 = **(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL);
          v9 = *(unsigned __int8 *)(v8 + 11);
          v10 = v8 + 16 * v7 + 24;
          if ( (int)v7 <= v9 )
            v2 = (__int64 *)v10;
          else
            v2 = &qword_599BC8;
          break;
      }
    }
    else
    {
      v2 = (__int64 *)(*(_QWORD *)(a1 + 16) + 16LL * a2);
    }
  }
  else if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16) >= *(_QWORD *)(a1 + 16) )
  {
    v2 = &qword_599BC8;
  }
  else
  {
    v2 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16);
  }
  v3 = 0;
  switch ( *((_DWORD *)v2 + 2) )
  {
    case 2:
    case 7:
      if ( a2 < 1 )
      {
        if ( a2 < -9999 )
        {
          switch ( a2 )
          {
            case -10002:
              v5 = (__int64 *)(a1 + 120);
              break;
            case -10001:
              v11 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
              v5 = (__int64 *)(a1 + 136);
              *(_DWORD *)(a1 + 144) = 5;
              *(_QWORD *)(a1 + 136) = v11;
              break;
            case -10000:
              v5 = (__int64 *)(*(_QWORD *)(a1 + 32) + 160LL);
              break;
            default:
              v12 = -10002LL - a2;
              v13 = **(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL);
              v14 = *(unsigned __int8 *)(v13 + 11);
              v5 = (__int64 *)(v13 + 16 * v12 + 24);
              if ( (int)v12 > v14 )
                v5 = &qword_599BC8;
              break;
          }
        }
        else
        {
          v5 = (__int64 *)(*(_QWORD *)(a1 + 16) + 16LL * a2);
        }
      }
      else
      {
        v5 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16);
        if ( (unsigned __int64)v5 >= *(_QWORD *)(a1 + 16) )
          v5 = &qword_599BC8;
      }
      v15 = *((_DWORD *)v5 + 2);
      if ( v15 == 2 )
      {
        v3 = *v5;
        goto LABEL_36;
      }
      if ( v15 == 7 )
        result = *v5 + 40;
      else
        result = 0;
      break;
    case 5:
    case 6:
    case 8:
      result = *v2;
      break;
    default:
LABEL_36:
      result = v3;
      break;
  }
  return result;
}

