/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E7560
 * Mangled: _Z9lua_equalP9lua_Stateii
 * Demangled: lua_equal(lua_State *,int,int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000004F6604  sub_4F6604
 *
 * Referenced strings: 79
 *   insn=0x00000000004E7560 string=0x00000000004E7564 "K"
 *   insn=0x00000000004E7564 string=0x00000000004E7568 "\t A"
 *   insn=0x00000000004E756C string=0x00000000004E7574 ""
 *   insn=0x00000000004E7574 string=0x00000000004E7578 "A"
 *   insn=0x00000000004E7580 string=0x00000000004E7584 "_"
 *   insn=0x00000000004E7584 string=0x00000000004E7588 ""
 *   insn=0x00000000004E7588 string=0x00000000004E758C "\t A"
 *   insn=0x00000000004E7590 string=0x00000000004E7598 ""
 *   insn=0x00000000004E7598 string=0x00000000004E759C "A"
 *   insn=0x00000000004E75A4 string=0x00000000004E75A8 "]"
 *   insn=0x00000000004E75AC string=0x00000000004E75B0 "?"
 *   insn=0x00000000004E75B0 string=0x00000000004E75B4 "k"
 *   insn=0x00000000004E75B4 string=0x00000000004E75B8 "@"
 *   insn=0x00000000004E75B4 string=0x00000000004E75E0 "("
 *   insn=0x00000000004E75BC string=0x00000000004E75C0 "_"
 *   insn=0x00000000004E75C0 string=0x00000000004E75C4 "J"
 *   insn=0x00000000004E75C8 string=0x00000000004E75CC "_"
 *   insn=0x00000000004E75CC string=0x00000000004E75D0 "K"
 *   insn=0x00000000004E75D0 string=0x00000000004E75D4 "@"
 *   insn=0x00000000004E75D0 string=0x00000000004E7618 "("
 *   insn=0x00000000004E75D8 string=0x00000000004E75DC "P"
 *   insn=0x00000000004E75E0 string=0x00000000004E75E4 "?"
 *   insn=0x00000000004E75E8 string=0x00000000004E75EC ""
 *   insn=0x00000000004E75EC string=0x00000000004E75F0 "?"
 *   insn=0x00000000004E75F0 string=0x00000000004E75F4 " "
 *   insn=0x00000000004E75F4 string=0x00000000004E7658 ""
 *   insn=0x00000000004E75F8 string=0x00000000004E75FC "?"
 *   insn=0x00000000004E75FC string=0x00000000004E7600 "!"
 *   insn=0x00000000004E7600 string=0x00000000004E7604 ""
 *   insn=0x00000000004E7600 string=0x00000000004E7684 ""
 *   insn=0x00000000004E7608 string=0x00000000004E760C "_"
 *   insn=0x00000000004E7618 string=0x00000000004E761C "_"
 *   insn=0x00000000004E7620 string=0x00000000004E7624 ""
 *   insn=0x00000000004E7624 string=0x00000000004E7628 "_"
 *   insn=0x00000000004E762C string=0x00000000004E76C8 ""
 *   insn=0x00000000004E7630 string=0x00000000004E7634 "_"
 *   insn=0x00000000004E7638 string=0x00000000004E763C ""
 *   insn=0x00000000004E7638 string=0x00000000004E76EC ""
 *   insn=0x00000000004E7640 string=0x00000000004E7644 "6"
 *   insn=0x00000000004E7648 string=0x00000000004E764C "_"
 *   insn=0x00000000004E7660 string=0x00000000004E7664 ""
 *   insn=0x00000000004E7664 string=0x00000000004E7668 ""
 *   insn=0x00000000004E7668 string=0x00000000004E766C "@"
 *   insn=0x00000000004E766C string=0x00000000004E7670 "\t"
 *   insn=0x00000000004E7670 string=0x00000000004E7674 "D"
 *   insn=0x00000000004E7674 string=0x00000000004E7678 "_"
 *   insn=0x00000000004E7684 string=0x00000000004E7688 ")"
 *   insn=0x00000000004E7688 string=0x00000000004E768C ")"
 *   insn=0x00000000004E7690 string=0x00000000004E7694 ""
 *   insn=0x00000000004E7694 string=0x00000000004E7698 "k!/"
 *   insn=0x00000000004E7698 string=0x00000000004E769C ""
 *   insn=0x00000000004E769C string=0x00000000004E76A0 "\n-@9"
 *   insn=0x00000000004E76A0 string=0x00000000004E76A4 ""
 *   insn=0x00000000004E76A4 string=0x00000000004E76A8 "a"
 *   insn=0x00000000004E76A8 string=0x00000000004E76AC "?"
 *   insn=0x00000000004E76AC string=0x00000000004E76B0 "a"
 *   insn=0x00000000004E76B0 string=0x00000000004E76B4 "_"
 *   insn=0x00000000004E76D0 string=0x00000000004E76D4 ""
 *   insn=0x00000000004E76D4 string=0x00000000004E76D8 ""
 *   insn=0x00000000004E76D8 string=0x00000000004E76DC "@"
 *   insn=0x00000000004E76DC string=0x00000000004E76E0 "\t"
 *   insn=0x00000000004E76E0 string=0x00000000004E76E4 "D"
 *   insn=0x00000000004E76E4 string=0x00000000004E76E8 ""
 *   insn=0x00000000004E76EC string=0x00000000004E76F0 ")"
 *   insn=0x00000000004E76F0 string=0x00000000004E76F4 ")"
 *   insn=0x00000000004E76F8 string=0x00000000004E76FC ""
 *   insn=0x00000000004E76FC string=0x00000000004E7700 "k!/"
 *   insn=0x00000000004E7700 string=0x00000000004E7704 ""
 *   insn=0x00000000004E7704 string=0x00000000004E7708 "\n-@9"
 *   insn=0x00000000004E7708 string=0x00000000004E770C ""
 *   insn=0x00000000004E770C string=0x00000000004E7710 "a"
 *   insn=0x00000000004E7710 string=0x00000000004E7714 "?"
 *   insn=0x00000000004E7714 string=0x00000000004E7718 "b"
 *   insn=0x00000000004E771C string=0x00000000004E7724 "?"
 *   insn=0x00000000004E772C string=0x00000000004E7730 "_"
 *   insn=0x00000000004E7730 string=0x00000000004E7734 "`"
 *   insn=0x00000000004E7734 string=0x00000000004E7738 "(@"
 *   insn=0x00000000004E7738 string=0x00000000004E773C "I@"
 *   insn=0x00000000004E7740 string=0x00000000004E7744 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_equal(__int64 a1, int a2, int a3)
{
  __int64 *v3; // x1
  __int64 *v4; // x2
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x8
  int v8; // w10
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x8
  int v13; // w10
  __int64 v14; // x8
  unsigned int v15; // w8

  if ( a2 < 1 )
  {
    if ( a2 < -9999 )
    {
      switch ( a2 )
      {
        case -10002:
          v3 = (__int64 *)(a1 + 120);
          if ( a3 < 1 )
            goto LABEL_11;
          break;
        case -10001:
          v3 = (__int64 *)(a1 + 136);
          v5 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
          *(_DWORD *)(a1 + 144) = 5;
          *(_QWORD *)(a1 + 136) = v5;
          if ( a3 < 1 )
            goto LABEL_11;
          break;
        case -10000:
          v3 = (__int64 *)(*(_QWORD *)(a1 + 32) + 160LL);
          if ( a3 < 1 )
            goto LABEL_11;
          break;
        default:
          v6 = -10002LL - a2;
          v7 = **(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL);
          v8 = *(unsigned __int8 *)(v7 + 11);
          v9 = v7 + 16 * v6 + 24;
          if ( (int)v6 <= v8 )
            v3 = (__int64 *)v9;
          else
            v3 = &qword_599BC8;
          if ( a3 >= 1 )
            break;
          goto LABEL_11;
      }
    }
    else
    {
      v3 = (__int64 *)(*(_QWORD *)(a1 + 16) + 16LL * a2);
      if ( a3 < 1 )
        goto LABEL_11;
    }
LABEL_6:
    if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) + 16LL * a3 - 16) >= *(_QWORD *)(a1 + 16) )
      v4 = &qword_599BC8;
    else
      v4 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * a3 - 16);
    goto LABEL_36;
  }
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16) >= *(_QWORD *)(a1 + 16) )
    v3 = &qword_599BC8;
  else
    v3 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16);
  if ( a3 >= 1 )
    goto LABEL_6;
LABEL_11:
  if ( a3 < -9999 )
  {
    switch ( a3 )
    {
      case -10002:
        v4 = (__int64 *)(a1 + 120);
        break;
      case -10001:
        v4 = (__int64 *)(a1 + 136);
        v10 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
        *(_DWORD *)(a1 + 144) = 5;
        *(_QWORD *)(a1 + 136) = v10;
        break;
      case -10000:
        v4 = (__int64 *)(*(_QWORD *)(a1 + 32) + 160LL);
        break;
      default:
        v11 = -10002LL - a3;
        v12 = **(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL);
        v13 = *(unsigned __int8 *)(v12 + 11);
        v14 = v12 + 16 * v11 + 24;
        if ( (int)v11 <= v13 )
          v4 = (__int64 *)v14;
        else
          v4 = &qword_599BC8;
        break;
    }
  }
  else
  {
    v4 = (__int64 *)(*(_QWORD *)(a1 + 16) + 16LL * a3);
  }
LABEL_36:
  v15 = 0;
  if ( v3 == &qword_599BC8 || v4 == &qword_599BC8 )
    return v15;
  if ( *((_DWORD *)v3 + 2) == *((_DWORD *)v4 + 2) )
    return (unsigned int)sub_4F6604(a1, v3) != 0;
  return 0;
}

