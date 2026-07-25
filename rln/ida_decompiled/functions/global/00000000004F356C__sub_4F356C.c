/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F356C
 * Mangled: sub_4F356C
 * Demangled: sub_4F356C
 *
 * Callers: 22
 *   0x00000000004E85A0  lua_pushlstring(lua_State *,char const*,ulong)
 *   0x00000000004E8610  lua_pushstring(lua_State *,char const*)
 *   0x00000000004E8A34  lua_getfield(lua_State *,int,char const*)
 *   0x00000000004E9194  lua_setfield(lua_State *,int,char const*)
 *   0x00000000004E9E70  lua_concat(lua_State *,int)
 *   0x00000000004EB78C  sub_4EB78C
 *   0x00000000004EB814  sub_4EB814
 *   0x00000000004EBCF4  sub_4EBCF4
 *   0x00000000004EC700  lua_resume(lua_State *,int)
 *   0x00000000004EC9BC  sub_4EC9BC
 *   0x00000000004EEFD8  sub_4EEFD8
 *   0x00000000004EF598  sub_4EF598
 *   0x00000000004F3230  sub_4F3230
 *   0x00000000004F4E10  sub_4F4E10
 *   0x00000000004F4F30  sub_4F4F30
 *   0x00000000004F5064  sub_4F5064
 *   0x00000000004F5F80  sub_4F5F80
 *   0x00000000004F67EC  sub_4F67EC
 *   0x00000000005006C4  sub_5006C4
 *   0x0000000000500970  sub_500970
 *   0x0000000000500AC8  sub_500AC8
 *   0x0000000000501F70  sub_501F70
 *
 * Callees: 5
 *   0x00000000001F5190  .memcmp
 *   0x0000000000201760  .memcpy
 *   0x00000000004EED74  sub_4EED74
 *   0x00000000004EEDE0  sub_4EEDE0
 *   0x00000000004F3464  sub_4F3464
 *
 * Referenced strings: 36
 *   insn=0x00000000004F35A4 string=0x00000000004F35A8 "k"
 *   insn=0x00000000004F35B0 string=0x00000000004F35B4 "J"
 *   insn=0x00000000004F35B8 string=0x00000000004F35BC "_"
 *   insn=0x00000000004F35BC string=0x00000000004F35C0 "x"
 *   insn=0x00000000004F35C0 string=0x00000000004F35C4 ""
 *   insn=0x00000000004F35C8 string=0x00000000004F35D0 "w"
 *   insn=0x00000000004F35D8 string=0x00000000004F35DC ""
 *   insn=0x00000000004F35DC string=0x00000000004F35E0 ""
 *   insn=0x00000000004F35E0 string=0x00000000004F35E4 "5"
 *   insn=0x00000000004F35E4 string=0x00000000004F35E8 "u"
 *   insn=0x00000000004F3604 string=0x00000000004F3608 "`"
 *   insn=0x00000000004F3604 string=0x00000000001F5190 "P'"
 *   insn=0x00000000004F3618 string=0x00000000004F361C "c"
 *   insn=0x00000000004F3644 string=0x00000000004F3648 "h"
 *   insn=0x00000000004F3654 string=0x00000000004F3658 ""
 *   insn=0x00000000004F3664 string=0x00000000004F3668 ""
 *   insn=0x00000000004F3670 string=0x00000000004F3674 ";8"
 *   insn=0x00000000004F3678 string=0x00000000004F367C "i"
 *   insn=0x00000000004F367C string=0x00000000004F3680 "(@"
 *   insn=0x00000000004F3680 string=0x00000000004F3684 "*"
 *   insn=0x00000000004F3684 string=0x00000000004F3688 ""
 *   insn=0x00000000004F3688 string=0x00000000004F368C ""
 *   insn=0x00000000004F368C string=0x00000000004F3690 ""
 *   insn=0x00000000004F3690 string=0x00000000004F3694 "Jih"
 *   insn=0x00000000004F3698 string=0x00000000004F369C "*"
 *   insn=0x00000000004F369C string=0x00000000004F36A0 "Ui("
 *   insn=0x00000000004F36A0 string=0x00000000004F36A4 "*!A)J"
 *   insn=0x00000000004F36A4 string=0x00000000004F36A8 "J"
 *   insn=0x00000000004F36A8 string=0x00000000004F36AC "_"
 *   insn=0x00000000004F36AC string=0x00000000004F36B0 "*\t"
 *   insn=0x00000000004F36C8 string=0x00000000004F36CC "f"
 *   insn=0x00000000004F36CC string=0x00000000004F36D0 ""
 *   insn=0x00000000004F36D8 string=0x00000000004F36DC "\t"
 *   insn=0x00000000004F36DC string=0x00000000004F36E0 "?"
 *   insn=0x00000000004F36E0 string=0x00000000004F36E4 "`"
 *   insn=0x00000000004F36E4 string=0x00000000004F36E8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F356C(__int64 a1, char *a2, size_t a3)
{
  size_t v4; // x8
  size_t v7; // x10
  unsigned int v8; // w24
  int v9; // w11
  __int64 v10; // x23
  __int64 v11; // x21
  char v12; // w8
  __int64 v13; // x9
  __int64 v14; // x8
  int v15; // w8
  unsigned int v16; // w10
  unsigned __int8 v17; // w8

  v4 = a3 >> 5;
  if ( a3 >> 5 >= a3 )
  {
    v8 = a3;
  }
  else
  {
    v7 = a3;
    v8 = a3;
    do
    {
      v9 = (unsigned __int8)a2[v7 - 1];
      v7 += ~v4;
      v8 ^= 32 * v8 + (v8 >> 2) + v9;
    }
    while ( v7 > v4 );
  }
  v10 = *(_QWORD *)(a1 + 32);
  v11 = *(_QWORD *)(*(_QWORD *)v10 + 8LL * (int)((*(_DWORD *)(v10 + 12) - 1) & v8));
  if ( v11 )
  {
    while ( *(_QWORD *)(v11 + 16) != a3 || memcmp(a2, (const void *)(v11 + 24), a3) )
    {
      v11 = *(_QWORD *)v11;
      if ( !v11 )
        goto LABEL_10;
    }
    v17 = *(_BYTE *)(v11 + 9);
    if ( (v17 & (unsigned __int8)~*(_BYTE *)(v10 + 32) & 3) != 0 )
      *(_BYTE *)(v11 + 9) = v17 ^ 3;
  }
  else
  {
LABEL_10:
    if ( a3 + 1 >= 0xFFFFFFFFFFFFFFE6LL )
      sub_4EEDE0(a1);
    v11 = sub_4EED74(a1, 0, 0, a3 + 25);
    *(_QWORD *)(v11 + 16) = a3;
    *(_DWORD *)(v11 + 12) = v8;
    v12 = *(_BYTE *)(*(_QWORD *)(a1 + 32) + 32LL);
    *(_BYTE *)(v11 + 8) = 4;
    *(_WORD *)(v11 + 9) = v12 & 3;
    memcpy((void *)(v11 + 24), a2, a3);
    *(_BYTE *)(v11 + 24 + a3) = 0;
    v13 = *(_QWORD *)(a1 + 32);
    v14 = 8LL * ((*(_DWORD *)(v13 + 12) - 1) & v8);
    *(_QWORD *)v11 = *(_QWORD *)(*(_QWORD *)v13 + v14);
    *(_QWORD *)(*(_QWORD *)v13 + v14) = v11;
    v15 = *(_DWORD *)(v13 + 12);
    v16 = *(_DWORD *)(v13 + 8) + 1;
    *(_DWORD *)(v13 + 8) = v16;
    if ( v16 > v15 && v15 <= 1073741822 )
      sub_4F3464(a1, 2 * v15);
  }
  return v11;
}

