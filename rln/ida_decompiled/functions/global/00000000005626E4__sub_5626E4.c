/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005626E4
 * Mangled: sub_5626E4
 * Demangled: sub_5626E4
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000056224C  sub_56224C
 *   0x00000000005623D0  sub_5623D0
 *   0x00000000005625D4  sub_5625D4
 *
 * Referenced strings: 74
 *   insn=0x00000000005626F8 string=0x00000000005626FC " "
 *   insn=0x0000000000562700 string=0x0000000000562704 "?"
 *   insn=0x0000000000562704 string=0x0000000000562708 "@"
 *   insn=0x0000000000562708 string=0x000000000056270C "`"
 *   insn=0x0000000000562710 string=0x0000000000562714 "`"
 *   insn=0x0000000000562710 string=0x0000000000562744 "a"
 *   insn=0x0000000000562718 string=0x000000000056271C "a2"
 *   insn=0x0000000000562718 string=0x0000000000562858 "a\n@"
 *   insn=0x0000000000562720 string=0x0000000000562724 "+"
 *   insn=0x0000000000562728 string=0x000000000056272C "c"
 *   insn=0x0000000000562730 string=0x0000000000562734 """
 *   insn=0x0000000000562748 string=0x000000000056274C "b"
 *   insn=0x0000000000562750 string=0x0000000000562754 "?"
 *   insn=0x0000000000562758 string=0x000000000056275C "`R@"
 *   insn=0x0000000000562758 string=0x00000000005627E8 "u"
 *   insn=0x0000000000562760 string=0x0000000000562764 "i\t"
 *   insn=0x0000000000562764 string=0x0000000000562768 "bz@"
 *   insn=0x0000000000562768 string=0x000000000056276C "!"
 *   insn=0x000000000056276C string=0x0000000000562770 "_"
 *   insn=0x0000000000562774 string=0x0000000000562778 "aN@"
 *   insn=0x0000000000562774 string=0x00000000005628A8 "`N@"
 *   insn=0x0000000000562778 string=0x000000000056277C "a"
 *   insn=0x000000000056277C string=0x0000000000562780 " "
 *   insn=0x0000000000562780 string=0x0000000000562784 "a\n"
 *   insn=0x0000000000562788 string=0x000000000056278C "a"
 *   insn=0x000000000056278C string=0x0000000000562790 "a"
 *   insn=0x0000000000562790 string=0x0000000000562794 "a"
 *   insn=0x0000000000562794 string=0x0000000000562798 "`"
 *   insn=0x0000000000562798 string=0x000000000056279C " "
 *   insn=0x000000000056279C string=0x00000000005627A0 "`"
 *   insn=0x00000000005627A0 string=0x00000000005627A4 "5\t"
 *   insn=0x00000000005627A4 string=0x00000000005627A8 "`"
 *   insn=0x00000000005627AC string=0x00000000005627B0 "`"
 *   insn=0x00000000005627B0 string=0x00000000005627B4 ""
 *   insn=0x00000000005627BC string=0x00000000005627C0 """
 *   insn=0x00000000005627CC string=0x000000000056289C " "
 *   insn=0x00000000005627E8 string=0x00000000005627EC "TD"
 *   insn=0x00000000005627E8 string=0x00000000005627F4 "B"
 *   insn=0x00000000005627EC string=0x00000000005627F0 "b"
 *   insn=0x00000000005627F8 string=0x00000000005627FC "B"
 *   insn=0x0000000000562804 string=0x0000000000562808 "@"
 *   insn=0x0000000000562808 string=0x000000000056280C "az@"
 *   insn=0x000000000056280C string=0x0000000000562810 " "
 *   insn=0x0000000000562810 string=0x0000000000562814 "?"
 *   insn=0x0000000000562818 string=0x000000000056281C "aR@"
 *   insn=0x0000000000562818 string=0x00000000005628D0 "`N@"
 *   insn=0x000000000056281C string=0x0000000000562820 "`N@"
 *   insn=0x0000000000562820 string=0x0000000000562824 "`"
 *   insn=0x0000000000562824 string=0x0000000000562828 "?"
 *   insn=0x0000000000562828 string=0x000000000056282C "`\n"
 *   insn=0x000000000056282C string=0x0000000000562830 "`"
 *   insn=0x0000000000562830 string=0x0000000000562834 "i"
 *   insn=0x0000000000562838 string=0x000000000056283C "`"
 *   insn=0x000000000056283C string=0x0000000000562840 "!"
 *   insn=0x0000000000562840 string=0x0000000000562844 "`"
 *   insn=0x0000000000562844 string=0x0000000000562848 "a"
 *   insn=0x0000000000562858 string=0x000000000056285C "`"
 *   insn=0x000000000056285C string=0x0000000000562860 "bZ@"
 *   insn=0x0000000000562860 string=0x0000000000562864 "?"
 *   insn=0x0000000000562864 string=0x0000000000562868 "cN@"
 *   insn=0x000000000056286C string=0x0000000000562870 "a^@"
 *   insn=0x0000000000562870 string=0x0000000000562874 "c"
 *   insn=0x0000000000562874 string=0x0000000000562878 "@"
 *   insn=0x0000000000562878 string=0x000000000056287C "a"
 *   insn=0x000000000056287C string=0x0000000000562880 "`Z"
 *   insn=0x0000000000562880 string=0x0000000000562884 "`\n"
 *   insn=0x0000000000562890 string=0x0000000000562894 "5"
 *   insn=0x000000000056289C string=0x00000000005628A0 "`"
 *   insn=0x00000000005628A8 string=0x00000000005628AC "`"
 *   insn=0x00000000005628AC string=0x00000000005628B0 "`\n"
 *   insn=0x00000000005628B0 string=0x00000000005628B4 "`"
 *   insn=0x00000000005628D0 string=0x00000000005628D4 "`"
 *   insn=0x00000000005628D4 string=0x00000000005628D8 "`\n"
 *   insn=0x00000000005628D8 string=0x00000000005628DC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5626E4(__int64 a1, unsigned int a2)
{
  int v4; // w0
  __int64 v5; // x4
  __int64 v6; // x5
  __int64 v7; // x6
  __int64 v8; // x7
  char *v9; // x1
  char *v10; // x2
  unsigned __int64 v11; // x0
  __int64 v12; // x1
  unsigned int *v13; // x0
  unsigned __int64 v15; // x1
  __int64 v16; // x0
  __int64 v17; // x2
  _BOOL8 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x0
  unsigned int v23; // [xsp+3Ch] [xbp+3Ch] BYREF

  if ( (*(_DWORD *)(a1 + 120) & 0x11) == 0 )
    return (unsigned int)-1;
  if ( *(_BYTE *)(a1 + 169) )
  {
    if ( *(_BYTE *)(a1 + 192) )
    {
      v17 = *(_QWORD *)(a1 + 176);
      v18 = *(_QWORD *)(a1 + 16) != *(_QWORD *)(a1 + 8);
      v19 = *(_QWORD *)(a1 + 184);
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(a1 + 152);
      v20 = v17 + 4 * v18;
      *(_QWORD *)(a1 + 24) = v19;
      *(_QWORD *)(a1 + 176) = v20;
      *(_QWORD *)(a1 + 16) = v20;
      *(_BYTE *)(a1 + 192) = 0;
    }
    v4 = sub_5623D0(a1, a1 + 140);
    if ( sub_5625D4(a1, v4, 1, *(_QWORD *)(a1 + 140), v5, v6, v7, v8) == -1 )
      return (unsigned int)-1;
  }
  v9 = *(char **)(a1 + 32);
  v10 = *(char **)(a1 + 40);
  if ( v9 >= v10 )
  {
    v11 = *(_QWORD *)(a1 + 160);
    if ( v11 > 1 )
    {
      if ( (*(_DWORD *)(a1 + 120) & 0x11) != 0 )
      {
        v12 = *(_QWORD *)(a1 + 152);
        *(_QWORD *)(a1 + 8) = v12;
        *(_QWORD *)(a1 + 16) = v12;
        *(_QWORD *)(a1 + 24) = v12;
        *(_QWORD *)(a1 + 40) = v12;
        *(_QWORD *)(a1 + 32) = v12;
        *(_QWORD *)(a1 + 48) = v12 + 4 * v11 - 4;
      }
      else
      {
        v21 = *(_QWORD *)(a1 + 152);
        *(_QWORD *)(a1 + 8) = v21;
        *(_QWORD *)(a1 + 16) = v21;
        *(_QWORD *)(a1 + 24) = v21;
        *(_QWORD *)(a1 + 40) = 0;
        *(_QWORD *)(a1 + 32) = 0;
        *(_QWORD *)(a1 + 48) = 0;
      }
      *(_BYTE *)(a1 + 170) = 1;
      if ( a2 == -1 )
      {
        return 0;
      }
      else
      {
        v13 = *(unsigned int **)(a1 + 40);
        *v13 = a2;
        *(_QWORD *)(a1 + 40) = v13 + 1;
      }
      return a2;
    }
    v23 = a2;
    if ( a2 == -1 )
    {
      a2 = 0;
      goto LABEL_25;
    }
    if ( sub_56224C(a1, (char *)&v23, 1u) )
    {
LABEL_25:
      *(_BYTE *)(a1 + 170) = 1;
      return a2;
    }
    return (unsigned int)-1;
  }
  if ( a2 != -1 )
  {
    *(_DWORD *)v10 = a2;
    v10 += 4;
    *(_QWORD *)(a1 + 40) = v10;
  }
  if ( !sub_56224C(a1, v9, (v10 - v9) >> 2) )
    return (unsigned int)-1;
  if ( (*(_DWORD *)(a1 + 120) & 0x11) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 160);
    v16 = *(_QWORD *)(a1 + 152);
    *(_QWORD *)(a1 + 8) = v16;
    *(_QWORD *)(a1 + 16) = v16;
    *(_QWORD *)(a1 + 24) = v16;
    if ( v15 > 1 )
    {
      *(_QWORD *)(a1 + 40) = v16;
      *(_QWORD *)(a1 + 32) = v16;
      *(_QWORD *)(a1 + 48) = v16 + 4 * v15 - 4;
      goto LABEL_21;
    }
  }
  else
  {
    v22 = *(_QWORD *)(a1 + 152);
    *(_QWORD *)(a1 + 8) = v22;
    *(_QWORD *)(a1 + 16) = v22;
    *(_QWORD *)(a1 + 24) = v22;
  }
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = 0;
LABEL_21:
  if ( a2 == -1 )
    return 0;
  return a2;
}

