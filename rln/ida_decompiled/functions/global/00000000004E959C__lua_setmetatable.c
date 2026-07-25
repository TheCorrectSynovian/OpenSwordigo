/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E959C
 * Mangled: _Z16lua_setmetatableP9lua_Statei
 * Demangled: lua_setmetatable(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000001FD620  lua_setmetatable(lua_State *,int)
 *
 * Callees: 2
 *   0x00000000004EE334  sub_4EE334
 *   0x00000000004EE46C  sub_4EE46C
 *
 * Referenced strings: 69
 *   insn=0x00000000004E95A4 string=0x00000000004E95A8 "?"
 *   insn=0x00000000004E95AC string=0x00000000004E95B0 "+"
 *   insn=0x00000000004E95B0 string=0x00000000004E95B4 "i"A"
 *   insn=0x00000000004E95B8 string=0x00000000004E95C0 ""
 *   insn=0x00000000004E95C0 string=0x00000000004E95C4 "A"
 *   insn=0x00000000004E95C8 string=0x00000000004E95CC "1"
 *   insn=0x00000000004E95CC string=0x00000000004E95D0 "*"
 *   insn=0x00000000004E95D0 string=0x00000000004E9678 "i\n@"
 *   insn=0x00000000004E95D4 string=0x00000000004E95D8 "?"
 *   insn=0x00000000004E95DC string=0x00000000004E95E0 "h\n@"
 *   insn=0x00000000004E95DC string=0x00000000004E95EC "("
 *   insn=0x00000000004E95E0 string=0x00000000004E95E4 ""
 *   insn=0x00000000004E95E4 string=0x00000000004E95E8 "$"
 *   insn=0x00000000004E95EC string=0x00000000004E95F0 "?"
 *   insn=0x00000000004E95F0 string=0x00000000004E95F4 "@"
 *   insn=0x00000000004E95F4 string=0x00000000004E95F8 ""
 *   insn=0x00000000004E95F4 string=0x00000000004E961C "h"
 *   insn=0x00000000004E95F8 string=0x00000000004E95FC "?"
 *   insn=0x00000000004E95FC string=0x00000000004E9600 " "
 *   insn=0x00000000004E9600 string=0x00000000004E9624 "h"
 *   insn=0x00000000004E9604 string=0x00000000004E9608 "?"
 *   insn=0x00000000004E960C string=0x00000000004E9610 "h"
 *   insn=0x00000000004E960C string=0x00000000004E9648 "h"
 *   insn=0x00000000004E9610 string=0x00000000004E9614 ""
 *   insn=0x00000000004E9628 string=0x00000000004E962C ""
 *   insn=0x00000000004E962C string=0x00000000004E9630 ""
 *   insn=0x00000000004E9630 string=0x00000000004E9634 "\t@"
 *   insn=0x00000000004E9634 string=0x00000000004E9638 "h""
 *   insn=0x00000000004E9638 string=0x00000000004E963C "j"
 *   insn=0x00000000004E963C string=0x00000000004E9640 "iF"
 *   insn=0x00000000004E9640 string=0x00000000004E9644 ""
 *   insn=0x00000000004E9648 string=0x00000000004E964C ")"
 *   insn=0x00000000004E964C string=0x00000000004E9650 ")"
 *   insn=0x00000000004E9654 string=0x00000000004E9658 ""
 *   insn=0x00000000004E9658 string=0x00000000004E965C "k!/"
 *   insn=0x00000000004E965C string=0x00000000004E9660 ""
 *   insn=0x00000000004E9660 string=0x00000000004E9664 "\n-@9"
 *   insn=0x00000000004E9664 string=0x00000000004E9668 ""
 *   insn=0x00000000004E9668 string=0x00000000004E966C "a"
 *   insn=0x00000000004E966C string=0x00000000004E9670 "?"
 *   insn=0x00000000004E9670 string=0x00000000004E9674 "h"
 *   insn=0x00000000004E9678 string=0x00000000004E967C "*"
 *   insn=0x00000000004E967C string=0x00000000004E9680 "j"
 *   insn=0x00000000004E9680 string=0x00000000004E9684 """
 *   insn=0x00000000004E9688 string=0x00000000004E9690 "\t\t@"
 *   insn=0x00000000004E9690 string=0x00000000004E9694 "?"
 *   insn=0x00000000004E9698 string=0x00000000004E969C "?"
 *   insn=0x00000000004E9698 string=0x00000000004E96D4 "\t"
 *   insn=0x00000000004E969C string=0x00000000004E96A0 "!"
 *   insn=0x00000000004E96A0 string=0x00000000004E96A4 "\t"
 *   insn=0x00000000004E96A0 string=0x00000000004E9704 "h"
 *   insn=0x00000000004E96A4 string=0x00000000004E96A8 ""\t"
 *   insn=0x00000000004E96A8 string=0x00000000004E96AC "B"
 *   insn=0x00000000004E96AC string=0x00000000004E96B0 "I$@9?"
 *   insn=0x00000000004E96AC string=0x00000000004E9714 "h\n@"
 *   insn=0x00000000004E96B0 string=0x00000000004E96B4 "?"
 *   insn=0x00000000004E96BC string=0x00000000004E96C0 "($@9"
 *   insn=0x00000000004E96C8 string=0x00000000004E96CC "h"
 *   insn=0x00000000004E96CC string=0x00000000004EE46C "($@9\t"
 *   insn=0x00000000004E96D4 string=0x00000000004E96D8 ""\t"
 *   insn=0x00000000004E96DC string=0x00000000004E96E0 "I$@9?"
 *   insn=0x00000000004E96E0 string=0x00000000004E96E4 "?"
 *   insn=0x00000000004E96E4 string=0x00000000004E96E8 "`"
 *   insn=0x00000000004E96EC string=0x00000000004E96F0 "($@9"
 *   insn=0x00000000004E96F0 string=0x00000000004E96F4 ""
 *   insn=0x00000000004E9704 string=0x00000000004E9708 ")}@"
 *   insn=0x00000000004E9708 string=0x00000000004E970C "\t"
 *   insn=0x00000000004E9718 string=0x00000000004E971C "A"
 *   insn=0x00000000004E971C string=0x00000000004E9720 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_setmetatable(__int64 a1, int a2)
{
  __int64 *v3; // x8
  __int64 v4; // x9
  __int64 v5; // x9
  __int64 v6; // x8
  int v7; // w10
  __int64 v8; // x9
  __int64 v9; // x2
  int v10; // w9
  __int64 result; // x0

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
  v8 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v8 - 8) )
    v9 = *(_QWORD *)(v8 - 16);
  else
    v9 = 0;
  v10 = *((_DWORD *)v3 + 2);
  if ( v10 == 7 )
  {
    *(_QWORD *)(*v3 + 16) = v9;
    if ( v9 && (*(_BYTE *)(v9 + 9) & 3) != 0 && (*(_BYTE *)(*v3 + 9) & 4) != 0 )
      sub_4EE334(a1);
  }
  else if ( v10 == 5 )
  {
    *(_QWORD *)(*v3 + 16) = v9;
    if ( v9 && (*(_BYTE *)(v9 + 9) & 3) != 0 && (*(_BYTE *)(*v3 + 9) & 4) != 0 )
      sub_4EE46C(a1);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v10 + 224) = v9;
  }
  result = 1;
  *(_QWORD *)(a1 + 16) -= 16LL;
  return result;
}

