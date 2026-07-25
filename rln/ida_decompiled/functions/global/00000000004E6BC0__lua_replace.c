/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E6BC0
 * Mangled: _Z11lua_replaceP9lua_Statei
 * Demangled: lua_replace(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000001FD3A0  lua_replace(lua_State *,int)
 *
 * Callees: 2
 *   0x00000000004EB320  sub_4EB320
 *   0x00000000004EE334  sub_4EE334
 *
 * Referenced strings: 66
 *   insn=0x00000000004E6BC8 string=0x00000000004E6BCC ""
 *   insn=0x00000000004E6BCC string=0x00000000004E6BD0 "?"
 *   insn=0x00000000004E6BD4 string=0x00000000004E6BD8 "!"
 *   insn=0x00000000004E6BD8 string=0x00000000004E6BDC "h"
 *   insn=0x00000000004E6BD8 string=0x00000000004E6C5C "?"
 *   insn=0x00000000004E6BDC string=0x00000000004E6BE0 "i*@"
 *   insn=0x00000000004E6BEC string=0x00000000005997BC "no calling environment"
 *   insn=0x00000000004E6C08 string=0x00000000004E6C0C "*"
 *   insn=0x00000000004E6C0C string=0x00000000004E6C10 "J"
 *   insn=0x00000000004E6C10 string=0x00000000004E6C14 "J@"
 *   insn=0x00000000004E6C1C string=0x00000000004E6C20 ")"
 *   insn=0x00000000004E6C20 string=0x00000000004E6C24 ""
 *   insn=0x00000000004E6C24 string=0x00000000004E6C28 "!"
 *   insn=0x00000000004E6C28 string=0x00000000004E6C2C "("
 *   insn=0x00000000004E6C30 string=0x00000000004E6C34 "\t"
 *   insn=0x00000000004E6C34 string=0x00000000004E6C38 "?"
 *   insn=0x00000000004E6C38 string=0x00000000004E6C3C "K\t"
 *   insn=0x00000000004E6C40 string=0x00000000004E6C44 "H$@9"
 *   insn=0x00000000004E6C4C string=0x00000000004E6C50 "($@9H"
 *   insn=0x00000000004E6C50 string=0x00000000004E6C54 "H"
 *   insn=0x00000000004E6C54 string=0x00000000004E6C58 "C"
 *   insn=0x00000000004E6C5C string=0x00000000004E6C60 "+"
 *   insn=0x00000000004E6C60 string=0x00000000004E6C64 "i"A"
 *   insn=0x00000000004E6C68 string=0x00000000004E6C70 ""
 *   insn=0x00000000004E6C70 string=0x00000000004E6C74 "A"
 *   insn=0x00000000004E6C78 string=0x00000000004E6C7C "1"
 *   insn=0x00000000004E6C7C string=0x00000000004E6C80 "!"
 *   insn=0x00000000004E6C84 string=0x00000000004E6C88 "?"
 *   insn=0x00000000004E6C8C string=0x00000000004E6C90 "h\n@"
 *   insn=0x00000000004E6C8C string=0x00000000004E6C9C "("
 *   insn=0x00000000004E6C90 string=0x00000000004E6C94 ""
 *   insn=0x00000000004E6C94 string=0x00000000004E6C98 ""
 *   insn=0x00000000004E6C9C string=0x00000000004E6CA0 "?"
 *   insn=0x00000000004E6CA4 string=0x00000000004E6CF4 "h"
 *   insn=0x00000000004E6CA8 string=0x00000000004E6CAC "?"
 *   insn=0x00000000004E6CAC string=0x00000000004E6CB0 "`"
 *   insn=0x00000000004E6CB0 string=0x00000000004E6CB4 ""
 *   insn=0x00000000004E6CB0 string=0x00000000004E6CFC "h"
 *   insn=0x00000000004E6CB4 string=0x00000000004E6CB8 "?"
 *   insn=0x00000000004E6CBC string=0x00000000004E6CC0 "h"
 *   insn=0x00000000004E6CC0 string=0x00000000004E6CC4 ")"
 *   insn=0x00000000004E6CC4 string=0x00000000004E6CC8 ")"
 *   insn=0x00000000004E6CCC string=0x00000000004E6CD0 ""
 *   insn=0x00000000004E6CD0 string=0x00000000004E6CD4 "k!/"
 *   insn=0x00000000004E6CD4 string=0x00000000004E6CD8 ""
 *   insn=0x00000000004E6CD8 string=0x00000000004E6CDC "\n-@9"
 *   insn=0x00000000004E6CDC string=0x00000000004E6CE0 ""
 *   insn=0x00000000004E6CE0 string=0x00000000004E6CE4 "a"
 *   insn=0x00000000004E6CE4 string=0x00000000004E6CE8 "?"
 *   insn=0x00000000004E6CE8 string=0x00000000004E6CEC "h"
 *   insn=0x00000000004E6CFC string=0x00000000004E6D00 ""
 *   insn=0x00000000004E6D08 string=0x00000000004E6D0C "*"
 *   insn=0x00000000004E6D0C string=0x00000000004E6D10 "\n"
 *   insn=0x00000000004E6D10 string=0x00000000004E6D14 ")"
 *   insn=0x00000000004E6D14 string=0x00000000004E6D18 "J"
 *   insn=0x00000000004E6D18 string=0x00000000004E6D1C "?"
 *   insn=0x00000000004E6D1C string=0x00000000004E6D20 "\t\t"
 *   insn=0x00000000004E6D28 string=0x00000000004E6D2C "\t"
 *   insn=0x00000000004E6D2C string=0x00000000004E6D30 "?"
 *   insn=0x00000000004E6D38 string=0x00000000004E6D3C "H$@9"
 *   insn=0x00000000004E6D44 string=0x00000000004E6D48 "h"
 *   insn=0x00000000004E6D48 string=0x00000000004E6D4C ""
 *   insn=0x00000000004E6D50 string=0x00000000004E6D54 "($@9h"
 *   insn=0x00000000004E6D54 string=0x00000000004E6D58 "h"
 *   insn=0x00000000004E6D5C string=0x00000000004E6D60 "u"
 *   insn=0x00000000004E6D64 string=0x00000000004E6D68 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_replace(__int64 result, int a2)
{
  __int64 v2; // x8
  _QWORD *v3; // x20
  __int64 v4; // x9
  __int64 v5; // x10
  __int64 v6; // x1
  __int64 v7; // x8
  __int64 *v8; // x8
  __int64 v9; // x9
  __int64 v10; // x8
  int v11; // w10
  __int64 v12; // x9

  if ( a2 == -10001 )
  {
    if ( *(_QWORD *)(result + 40) == *(_QWORD *)(result + 80) )
      sub_4EB320(result, "no calling environment");
    v3 = (_QWORD *)(result + 16);
    v2 = *(_QWORD *)(result + 16);
    v4 = *(_QWORD *)(result + 40);
    v5 = *(_QWORD *)(**(_QWORD **)(v4 + 8) + 24LL);
    *(_DWORD *)(result + 144) = 5;
    *(_QWORD *)(result + 136) = v5;
    v6 = **(_QWORD **)(v4 + 8);
    *(_QWORD *)(v6 + 24) = *(_QWORD *)(v2 - 16);
    v7 = *(_QWORD *)(result + 16);
    if ( *(int *)(v7 - 8) < 4 || (*(_BYTE *)(*(_QWORD *)(v7 - 16) + 9LL) & 3) == 0 || (*(_BYTE *)(v6 + 9) & 4) == 0 )
      goto LABEL_26;
LABEL_25:
    result = sub_4EE334(result);
    goto LABEL_26;
  }
  if ( a2 < 1 )
  {
    if ( a2 < -9999 )
    {
      if ( a2 == -10002 )
      {
        v8 = (__int64 *)(result + 120);
      }
      else if ( a2 == -10000 )
      {
        v8 = (__int64 *)(*(_QWORD *)(result + 32) + 160LL);
      }
      else
      {
        v9 = -10002LL - a2;
        v10 = **(_QWORD **)(*(_QWORD *)(result + 40) + 8LL);
        v11 = *(unsigned __int8 *)(v10 + 11);
        v8 = (__int64 *)(v10 + 16 * v9 + 24);
        if ( (int)v9 > v11 )
          v8 = &qword_599BC8;
      }
    }
    else
    {
      v8 = (__int64 *)(*(_QWORD *)(result + 16) + 16LL * a2);
    }
  }
  else
  {
    v8 = (__int64 *)(*(_QWORD *)(result + 24) + 16LL * a2 - 16);
    if ( (unsigned __int64)v8 >= *(_QWORD *)(result + 16) )
      v8 = &qword_599BC8;
  }
  v3 = (_QWORD *)(result + 16);
  v12 = *(_QWORD *)(result + 16);
  *v8 = *(_QWORD *)(v12 - 16);
  *((_DWORD *)v8 + 2) = *(_DWORD *)(v12 - 8);
  if ( a2 <= -10003
    && *(int *)(*v3 - 8LL) >= 4
    && (*(_BYTE *)(*(_QWORD *)(*v3 - 16LL) + 9LL) & 3) != 0
    && (*(_BYTE *)(**(_QWORD **)(*(_QWORD *)(result + 40) + 8LL) + 9LL) & 4) != 0 )
  {
    goto LABEL_25;
  }
LABEL_26:
  *v3 -= 16LL;
  return result;
}

