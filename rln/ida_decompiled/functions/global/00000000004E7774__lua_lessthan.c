/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E7774
 * Mangled: _Z12lua_lessthanP9lua_Stateii
 * Demangled: lua_lessthan(lua_State *,int,int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000004F63FC  sub_4F63FC
 *
 * Referenced strings: 76
 *   insn=0x00000000004E7774 string=0x00000000004E7778 "K"
 *   insn=0x00000000004E7778 string=0x00000000004E777C "\t A"
 *   insn=0x00000000004E7780 string=0x00000000004E7788 ""
 *   insn=0x00000000004E7788 string=0x00000000004E778C "A"
 *   insn=0x00000000004E7794 string=0x00000000004E7798 "_"
 *   insn=0x00000000004E7798 string=0x00000000004E779C ""
 *   insn=0x00000000004E779C string=0x00000000004E77A0 "\t A"
 *   insn=0x00000000004E77A4 string=0x00000000004E77AC ""
 *   insn=0x00000000004E77AC string=0x00000000004E77B0 "A"
 *   insn=0x00000000004E77B8 string=0x00000000004E77BC "]"
 *   insn=0x00000000004E77C0 string=0x00000000004E77C4 "?"
 *   insn=0x00000000004E77C4 string=0x00000000004E77C8 "k"
 *   insn=0x00000000004E77C8 string=0x00000000004E77CC "@"
 *   insn=0x00000000004E77C8 string=0x00000000004E77F4 "("
 *   insn=0x00000000004E77D0 string=0x00000000004E77D4 "_"
 *   insn=0x00000000004E77D4 string=0x00000000004E77D8 "J"
 *   insn=0x00000000004E77DC string=0x00000000004E77E0 "_"
 *   insn=0x00000000004E77E0 string=0x00000000004E77E4 "K"
 *   insn=0x00000000004E77E4 string=0x00000000004E77E8 "@"
 *   insn=0x00000000004E77E4 string=0x00000000004E782C "("
 *   insn=0x00000000004E77EC string=0x00000000004E77F0 "P"
 *   insn=0x00000000004E77F4 string=0x00000000004E77F8 "?"
 *   insn=0x00000000004E77FC string=0x00000000004E7800 ""
 *   insn=0x00000000004E7800 string=0x00000000004E7804 "?"
 *   insn=0x00000000004E7804 string=0x00000000004E7808 " "
 *   insn=0x00000000004E7808 string=0x00000000004E786C ""
 *   insn=0x00000000004E780C string=0x00000000004E7810 "?"
 *   insn=0x00000000004E7810 string=0x00000000004E7814 "!"
 *   insn=0x00000000004E7814 string=0x00000000004E7818 ""
 *   insn=0x00000000004E7814 string=0x00000000004E7898 ""
 *   insn=0x00000000004E781C string=0x00000000004E7820 "_"
 *   insn=0x00000000004E782C string=0x00000000004E7830 "_"
 *   insn=0x00000000004E7834 string=0x00000000004E7838 ""
 *   insn=0x00000000004E7838 string=0x00000000004E783C "_"
 *   insn=0x00000000004E7840 string=0x00000000004E78DC ""
 *   insn=0x00000000004E7844 string=0x00000000004E7848 "_"
 *   insn=0x00000000004E784C string=0x00000000004E7850 ""
 *   insn=0x00000000004E784C string=0x00000000004E7900 ""
 *   insn=0x00000000004E7854 string=0x00000000004E7858 "6"
 *   insn=0x00000000004E785C string=0x00000000004E7860 "_"
 *   insn=0x00000000004E7874 string=0x00000000004E7878 ""
 *   insn=0x00000000004E7878 string=0x00000000004E787C ""
 *   insn=0x00000000004E787C string=0x00000000004E7880 "@"
 *   insn=0x00000000004E7880 string=0x00000000004E7884 "\t"
 *   insn=0x00000000004E7884 string=0x00000000004E7888 "D"
 *   insn=0x00000000004E7888 string=0x00000000004E788C "_"
 *   insn=0x00000000004E7898 string=0x00000000004E789C ")"
 *   insn=0x00000000004E789C string=0x00000000004E78A0 ")"
 *   insn=0x00000000004E78A4 string=0x00000000004E78A8 ""
 *   insn=0x00000000004E78A8 string=0x00000000004E78AC "k!/"
 *   insn=0x00000000004E78AC string=0x00000000004E78B0 ""
 *   insn=0x00000000004E78B0 string=0x00000000004E78B4 "\n-@9"
 *   insn=0x00000000004E78B4 string=0x00000000004E78B8 ""
 *   insn=0x00000000004E78B8 string=0x00000000004E78BC "a"
 *   insn=0x00000000004E78BC string=0x00000000004E78C0 "?"
 *   insn=0x00000000004E78C0 string=0x00000000004E78C4 "a"
 *   insn=0x00000000004E78C4 string=0x00000000004E78C8 "_"
 *   insn=0x00000000004E78E4 string=0x00000000004E78E8 ""
 *   insn=0x00000000004E78E8 string=0x00000000004E78EC ""
 *   insn=0x00000000004E78EC string=0x00000000004E78F0 "@"
 *   insn=0x00000000004E78F0 string=0x00000000004E78F4 "\t"
 *   insn=0x00000000004E78F4 string=0x00000000004E78F8 "D"
 *   insn=0x00000000004E78F8 string=0x00000000004E78FC ""
 *   insn=0x00000000004E7900 string=0x00000000004E7904 ")"
 *   insn=0x00000000004E7904 string=0x00000000004E7908 ")"
 *   insn=0x00000000004E790C string=0x00000000004E7910 ""
 *   insn=0x00000000004E7910 string=0x00000000004E7914 "k!/"
 *   insn=0x00000000004E7914 string=0x00000000004E7918 ""
 *   insn=0x00000000004E7918 string=0x00000000004E791C "\n-@9"
 *   insn=0x00000000004E791C string=0x00000000004E7920 ""
 *   insn=0x00000000004E7920 string=0x00000000004E7924 "a"
 *   insn=0x00000000004E7924 string=0x00000000004E7928 "?"
 *   insn=0x00000000004E7928 string=0x00000000004E792C "b"
 *   insn=0x00000000004E7930 string=0x00000000004E7938 "?"
 *   insn=0x00000000004E793C string=0x00000000004E7940 "_"
 *   insn=0x00000000004E7940 string=0x00000000004E7944 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_lessthan(__int64 a1, int a2, int a3)
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
  if ( v3 == &qword_599BC8 || v4 == &qword_599BC8 )
    return 0;
  else
    return sub_4F63FC();
}

