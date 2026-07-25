/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E737C
 * Mangled: _Z12lua_rawequalP9lua_Stateii
 * Demangled: lua_rawequal(lua_State *,int,int)
 *
 * Callers: 1
 *   0x00000000001F8410  lua_rawequal(lua_State *,int,int)
 *
 * Callees: 1
 *   0x00000000004EEE84  sub_4EEE84
 *
 * Referenced strings: 84
 *   insn=0x00000000004E737C string=0x00000000004E7380 "K"
 *   insn=0x00000000004E7380 string=0x00000000004E7384 "\t A"
 *   insn=0x00000000004E7388 string=0x00000000004E7390 ""
 *   insn=0x00000000004E7390 string=0x00000000004E7394 "A"
 *   insn=0x00000000004E7398 string=0x00000000004E739C "1"
 *   insn=0x00000000004E739C string=0x00000000004E73A0 "_"
 *   insn=0x00000000004E73A0 string=0x00000000004E73A4 ""
 *   insn=0x00000000004E73A4 string=0x00000000004E73A8 "\n$A"
 *   insn=0x00000000004E73AC string=0x00000000004E73B4 ")"
 *   insn=0x00000000004E73B4 string=0x00000000004E73B8 ")A"
 *   insn=0x00000000004E73B8 string=0x00000000004E73BC "?"
 *   insn=0x00000000004E73BC string=0x00000000004E73C0 "!1"
 *   insn=0x00000000004E73C0 string=0x00000000004E73C4 "]"
 *   insn=0x00000000004E73C8 string=0x00000000004E73CC "?"
 *   insn=0x00000000004E73CC string=0x00000000004E73D0 "k"
 *   insn=0x00000000004E73D0 string=0x00000000004E73D4 "@"
 *   insn=0x00000000004E73D0 string=0x00000000004E73FC "("
 *   insn=0x00000000004E73D4 string=0x00000000004E73D8 ""
 *   insn=0x00000000004E73D8 string=0x00000000004E73DC "_"
 *   insn=0x00000000004E73DC string=0x00000000004E73E0 "J"
 *   insn=0x00000000004E73E4 string=0x00000000004E73E8 "_"
 *   insn=0x00000000004E73E8 string=0x00000000004E73EC "K"
 *   insn=0x00000000004E73EC string=0x00000000004E73F0 "\t@"
 *   insn=0x00000000004E73EC string=0x00000000004E7434 ")"
 *   insn=0x00000000004E73F0 string=0x00000000004E73F4 "!"
 *   insn=0x00000000004E73F4 string=0x00000000004E73F8 "P"
 *   insn=0x00000000004E73FC string=0x00000000004E7400 "?"
 *   insn=0x00000000004E7404 string=0x00000000004E7408 ""
 *   insn=0x00000000004E7404 string=0x00000000004E7464 ""
 *   insn=0x00000000004E7408 string=0x00000000004E740C "?"
 *   insn=0x00000000004E740C string=0x00000000004E7410 " "
 *   insn=0x00000000004E7410 string=0x00000000004E7474 ""
 *   insn=0x00000000004E7414 string=0x00000000004E7418 "?"
 *   insn=0x00000000004E7418 string=0x00000000004E741C "!"
 *   insn=0x00000000004E741C string=0x00000000004E7420 ""
 *   insn=0x00000000004E741C string=0x00000000004E74A0 ""
 *   insn=0x00000000004E7420 string=0x00000000004E7424 ""
 *   insn=0x00000000004E7424 string=0x00000000004E7428 "_"
 *   insn=0x00000000004E7434 string=0x00000000004E7438 "_"
 *   insn=0x00000000004E743C string=0x00000000004E7440 "\t"
 *   insn=0x00000000004E7440 string=0x00000000004E7444 "_"
 *   insn=0x00000000004E7448 string=0x00000000004E74E4 "\t"
 *   insn=0x00000000004E744C string=0x00000000004E7450 "_"
 *   insn=0x00000000004E7454 string=0x00000000004E7458 "\t"
 *   insn=0x00000000004E7454 string=0x00000000004E7508 "\t"
 *   insn=0x00000000004E7458 string=0x00000000004E745C "!"
 *   insn=0x00000000004E745C string=0x00000000004E7460 "6"
 *   insn=0x00000000004E7464 string=0x00000000004E7468 "_"
 *   insn=0x00000000004E7478 string=0x00000000004E747C ""
 *   insn=0x00000000004E747C string=0x00000000004E7480 ""
 *   insn=0x00000000004E7480 string=0x00000000004E7484 "\t@"
 *   insn=0x00000000004E7484 string=0x00000000004E7488 " "
 *   insn=0x00000000004E7488 string=0x00000000004E748C "\n"
 *   insn=0x00000000004E748C string=0x00000000004E7490 "\tD"
 *   insn=0x00000000004E7490 string=0x00000000004E7494 "_"
 *   insn=0x00000000004E74A0 string=0x00000000004E74A4 ")"
 *   insn=0x00000000004E74A4 string=0x00000000004E74A8 ")"
 *   insn=0x00000000004E74AC string=0x00000000004E74B0 ""
 *   insn=0x00000000004E74B0 string=0x00000000004E74B4 "k!/"
 *   insn=0x00000000004E74B4 string=0x00000000004E74B8 ""
 *   insn=0x00000000004E74B8 string=0x00000000004E74BC "\n-@9"
 *   insn=0x00000000004E74BC string=0x00000000004E74C0 ""
 *   insn=0x00000000004E74C0 string=0x00000000004E74C4 "a"
 *   insn=0x00000000004E74C4 string=0x00000000004E74C8 "?"
 *   insn=0x00000000004E74C8 string=0x00000000004E74CC "h"
 *   insn=0x00000000004E74CC string=0x00000000004E74D0 "_"
 *   insn=0x00000000004E74EC string=0x00000000004E74F0 ")"
 *   insn=0x00000000004E74F0 string=0x00000000004E74F4 ")"
 *   insn=0x00000000004E74F4 string=0x00000000004E74F8 ")@"
 *   insn=0x00000000004E74F8 string=0x00000000004E74FC "\n"
 *   insn=0x00000000004E74FC string=0x00000000004E7500 "\tD"
 *   insn=0x00000000004E7500 string=0x00000000004E7504 ""
 *   insn=0x00000000004E7508 string=0x00000000004E750C "*"
 *   insn=0x00000000004E750C string=0x00000000004E7510 "J"
 *   insn=0x00000000004E7514 string=0x00000000004E7518 ")"
 *   insn=0x00000000004E751C string=0x00000000004E7520 ")"
 *   insn=0x00000000004E7520 string=0x00000000004E7524 "+-@9)"
 *   insn=0x00000000004E7524 string=0x00000000004E7528 ")"
 *   insn=0x00000000004E7528 string=0x00000000004E752C ")a"
 *   insn=0x00000000004E752C string=0x00000000004E7530 "_"
 *   insn=0x00000000004E7544 string=0x00000000004E7548 "?"
 *   insn=0x00000000004E7548 string=0x00000000004E754C "`"
 *   insn=0x00000000004E7550 string=0x00000000004E7554 "L"
 *   insn=0x00000000004E7554 string=0x00000000004EEE84 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_rawequal(__int64 a1, int a2, int a3)
{
  __int64 *v3; // x8
  __int64 *v4; // x1
  __int64 v5; // x9
  __int64 v6; // x9
  __int64 v7; // x8
  int v8; // w10
  __int64 v9; // x9
  __int64 v10; // x10
  __int64 v11; // x9
  int v12; // w11
  __int64 v13; // x9

  if ( a2 < 1 )
  {
    if ( a2 < -9999 )
    {
      switch ( a2 )
      {
        case -10002:
          v3 = (__int64 *)(a1 + 120);
          if ( a3 < 1 )
            goto LABEL_10;
          break;
        case -10001:
          v5 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
          v3 = (__int64 *)(a1 + 136);
          *(_DWORD *)(a1 + 144) = 5;
          *(_QWORD *)(a1 + 136) = v5;
          if ( a3 < 1 )
            goto LABEL_10;
          break;
        case -10000:
          v3 = (__int64 *)(*(_QWORD *)(a1 + 32) + 160LL);
          if ( a3 < 1 )
            goto LABEL_10;
          break;
        default:
          v6 = -10002LL - a2;
          v7 = **(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL);
          v8 = *(unsigned __int8 *)(v7 + 11);
          v3 = (__int64 *)(v7 + 16 * v6 + 24);
          if ( (int)v6 > v8 )
            v3 = &qword_599BC8;
          if ( a3 >= 1 )
            break;
          goto LABEL_10;
      }
    }
    else
    {
      v3 = (__int64 *)(*(_QWORD *)(a1 + 16) + 16LL * a2);
      if ( a3 < 1 )
        goto LABEL_10;
    }
LABEL_5:
    if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) + 16LL * a3 - 16) >= *(_QWORD *)(a1 + 16) )
      v4 = &qword_599BC8;
    else
      v4 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * a3 - 16);
    goto LABEL_34;
  }
  v3 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16);
  if ( (unsigned __int64)v3 >= *(_QWORD *)(a1 + 16) )
    v3 = &qword_599BC8;
  if ( a3 >= 1 )
    goto LABEL_5;
LABEL_10:
  if ( a3 < -9999 )
  {
    switch ( a3 )
    {
      case -10002:
        v4 = (__int64 *)(a1 + 120);
        break;
      case -10001:
        v4 = (__int64 *)(a1 + 136);
        v9 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
        *(_DWORD *)(a1 + 144) = 5;
        *(_QWORD *)(a1 + 136) = v9;
        break;
      case -10000:
        v4 = (__int64 *)(*(_QWORD *)(a1 + 32) + 160LL);
        break;
      default:
        v10 = -10002LL - a3;
        v11 = **(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL);
        v12 = *(unsigned __int8 *)(v11 + 11);
        v13 = v11 + 16 * v10 + 24;
        if ( (int)v10 <= v12 )
          v4 = (__int64 *)v13;
        else
          v4 = &qword_599BC8;
        break;
    }
  }
  else
  {
    v4 = (__int64 *)(*(_QWORD *)(a1 + 16) + 16LL * a3);
  }
LABEL_34:
  if ( v3 == &qword_599BC8 || v4 == &qword_599BC8 )
    return 0;
  else
    return sub_4EEE84(v3);
}

