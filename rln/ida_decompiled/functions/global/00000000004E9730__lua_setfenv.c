/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E9730
 * Mangled: _Z11lua_setfenvP9lua_Statei
 * Demangled: lua_setfenv(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000001F8A50  lua_setfenv(lua_State *,int)
 *
 * Callees: 1
 *   0x00000000004EE334  sub_4EE334
 *
 * Referenced strings: 63
 *   insn=0x00000000004E9730 string=0x00000000004E9734 "+"
 *   insn=0x00000000004E9734 string=0x00000000004E9738 "\t A"
 *   insn=0x00000000004E973C string=0x00000000004E9744 ""
 *   insn=0x00000000004E9744 string=0x00000000004E9748 "A"
 *   insn=0x00000000004E974C string=0x00000000004E9750 "1"
 *   insn=0x00000000004E9750 string=0x00000000004E9754 "*"
 *   insn=0x00000000004E9758 string=0x00000000004E975C "?"
 *   insn=0x00000000004E9760 string=0x00000000004E9764 "@"
 *   insn=0x00000000004E9760 string=0x00000000004E9770 "("
 *   insn=0x00000000004E9764 string=0x00000000004E9768 ""
 *   insn=0x00000000004E9768 string=0x00000000004E976C "$"
 *   insn=0x00000000004E9770 string=0x00000000004E9774 "?"
 *   insn=0x00000000004E9774 string=0x00000000004E9778 "@"
 *   insn=0x00000000004E9778 string=0x00000000004E977C ""
 *   insn=0x00000000004E9778 string=0x00000000004E97A0 ""
 *   insn=0x00000000004E977C string=0x00000000004E9780 "?"
 *   insn=0x00000000004E9780 string=0x00000000004E9784 " "
 *   insn=0x00000000004E9784 string=0x00000000004E97A8 ""
 *   insn=0x00000000004E9788 string=0x00000000004E978C "?"
 *   insn=0x00000000004E9790 string=0x00000000004E9794 ""
 *   insn=0x00000000004E9790 string=0x00000000004E97CC ""
 *   insn=0x00000000004E9794 string=0x00000000004E9798 ""
 *   insn=0x00000000004E97AC string=0x00000000004E97B0 ""
 *   insn=0x00000000004E97B0 string=0x00000000004E97B4 ""
 *   insn=0x00000000004E97B4 string=0x00000000004E97B8 "\t@"
 *   insn=0x00000000004E97B8 string=0x00000000004E97BC " "
 *   insn=0x00000000004E97BC string=0x00000000004E97C0 "\n"
 *   insn=0x00000000004E97C0 string=0x00000000004E97C4 "\tD"
 *   insn=0x00000000004E97C4 string=0x00000000004E97C8 ""
 *   insn=0x00000000004E97CC string=0x00000000004E97D0 ")"
 *   insn=0x00000000004E97D0 string=0x00000000004E97D4 ")"
 *   insn=0x00000000004E97D8 string=0x00000000004E97DC ""
 *   insn=0x00000000004E97DC string=0x00000000004E97E0 "k!/"
 *   insn=0x00000000004E97E0 string=0x00000000004E97E4 ""
 *   insn=0x00000000004E97E4 string=0x00000000004E97E8 "\n-@9"
 *   insn=0x00000000004E97E8 string=0x00000000004E97EC ""
 *   insn=0x00000000004E97EC string=0x00000000004E97F0 "a"
 *   insn=0x00000000004E97F0 string=0x00000000004E97F4 "?"
 *   insn=0x00000000004E97F4 string=0x00000000004E97F8 "h"
 *   insn=0x00000000004E9804 string=0x00000000004E9808 "\t\t@"
 *   insn=0x00000000004E9808 string=0x00000000004E980C "?"
 *   insn=0x00000000004E9810 string=0x00000000004E9814 "?"
 *   insn=0x00000000004E9814 string=0x00000000004E9818 "`"
 *   insn=0x00000000004E9818 string=0x00000000004E981C "?!"
 *   insn=0x00000000004E981C string=0x00000000004E9820 "!"
 *   insn=0x00000000004E9824 string=0x00000000004E9828 "\t"
 *   insn=0x00000000004E9828 string=0x00000000004E982C "j"
 *   insn=0x00000000004E9830 string=0x00000000004E9834 "J"
 *   insn=0x00000000004E9834 string=0x00000000004E9838 "+"
 *   insn=0x00000000004E9838 string=0x00000000004E983C "*="
 *   insn=0x00000000004E9840 string=0x00000000004E9858 "i"
 *   insn=0x00000000004E9844 string=0x00000000004E9848 "i"
 *   insn=0x00000000004E9848 string=0x00000000004E984C "\n"
 *   insn=0x00000000004E984C string=0x00000000004E9850 ")"
 *   insn=0x00000000004E9850 string=0x00000000004E9854 "I"
 *   insn=0x00000000004E9858 string=0x00000000004E985C """
 *   insn=0x00000000004E985C string=0x00000000004E9860 "I$@9?"
 *   insn=0x00000000004E9860 string=0x00000000004E9864 "?"
 *   insn=0x00000000004E986C string=0x00000000004E9870 "($@9H"
 *   insn=0x00000000004E9870 string=0x00000000004E9874 "H"
 *   insn=0x00000000004E9880 string=0x00000000004E988C "i"
 *   insn=0x00000000004E9890 string=0x00000000004E9894 ")A"
 *   insn=0x00000000004E9894 string=0x00000000004E9898 "i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_setfenv(__int64 a1, int a2)
{
  __int64 *v2; // x8
  __int64 v3; // x9
  __int64 v4; // x9
  __int64 v5; // x8
  int v6; // w10
  int v7; // w9
  __int64 v8; // x9
  _QWORD *v9; // x19
  __int64 v10; // x10
  unsigned int v11; // w8
  __int64 result; // x0

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
  v7 = *((_DWORD *)v2 + 2);
  if ( v7 == 6 || v7 == 7 )
  {
    v9 = (_QWORD *)(a1 + 16);
    *(_QWORD *)(*v2 + 24) = *(_QWORD *)(*(_QWORD *)(a1 + 16) - 16LL);
  }
  else
  {
    if ( v7 != 8 )
    {
      v11 = 0;
      v9 = (_QWORD *)(a1 + 16);
      goto LABEL_25;
    }
    v8 = *v2;
    v9 = (_QWORD *)(a1 + 16);
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) - 16LL);
    *(_DWORD *)(v8 + 128) = 5;
    *(_QWORD *)(v8 + 120) = v10;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*v9 - 16LL) + 9LL) & 3) != 0 && (*(_BYTE *)(*v2 + 9) & 4) != 0 )
    sub_4EE334(a1);
  v11 = 1;
LABEL_25:
  result = v11;
  *v9 -= 16LL;
  return result;
}

