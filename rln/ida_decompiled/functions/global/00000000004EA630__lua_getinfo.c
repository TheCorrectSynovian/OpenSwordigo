/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EA630
 * Mangled: _Z11lua_getinfoP9lua_StatePKcP9lua_Debug
 * Demangled: lua_getinfo(lua_State *,char const*,lua_Debug *)
 *
 * Callers: 1
 *   0x00000000001FEAF0  lua_getinfo(lua_State *,char const*,lua_Debug *)
 *
 * Callees: 6
 *   0x00000000001FA030  .strchr
 *   0x00000000004EB12C  sub_4EB12C
 *   0x00000000004EBBB8  sub_4EBBB8
 *   0x00000000004EF46C  sub_4EF46C
 *   0x00000000004F3DB4  sub_4F3DB4
 *   0x00000000004F49E8  sub_4F49E8
 *
 * Referenced strings: 147
 *   insn=0x00000000004EA660 string=0x00000000004EA664 "A"
 *   insn=0x00000000004EA664 string=0x00000000004EA668 "h\n@"
 *   insn=0x00000000004EA674 string=0x00000000004EA678 "h\n"
 *   insn=0x00000000004EA67C string=0x00000000004EA6CC "j"
 *   insn=0x00000000004EA680 string=0x00000000004EA684 "("
 *   insn=0x00000000004EA684 string=0x00000000004EA688 "|"
 *   insn=0x00000000004EA690 string=0x00000000004EA694 "i"
 *   insn=0x00000000004EA6A4 string=0x00000000004EA6A8 "T"
 *   insn=0x00000000004EA6A8 string=0x00000000004EA7F8 ""
 *   insn=0x00000000004EA6B0 string=0x00000000004EA6B4 "i*@"
 *   insn=0x00000000004EA6B4 string=0x00000000004EA6B8 "\n"
 *   insn=0x00000000004EA6B8 string=0x00000000004EA6BC "%\n"
 *   insn=0x00000000004EA6BC string=0x00000000004EA6C0 "h@"
 *   insn=0x00000000004EA6CC string=0x00000000004EA6D0 "("
 *   insn=0x00000000004EA6CC string=0x00000000005999EE "tail"
 *   insn=0x00000000004EA6D4 string=0x00000000004EA6D8 "J"
 *   insn=0x00000000004EA6D8 string=0x00000000004EA6DC "a"
 *   insn=0x00000000004EA6DC string=0x00000000004EA6E0 ""
 *   insn=0x00000000004EA6DC string=0x00000000005999F3 "=(tail call)"
 *   insn=0x00000000004EA6E0 string=0x00000000004EA6E4 "!"
 *   insn=0x00000000004EA6E8 string=0x00000000004EA6EC "@"
 *   insn=0x00000000004EA6EC string=0x00000000004EA6F0 "\t"
 *   insn=0x00000000004EA6F4 string=0x00000000004EA6F8 " "
 *   insn=0x00000000004EA70C string=0x00000000004EA710 "W"
 *   insn=0x00000000004EA734 string=0x00000000004EA738 "j"
 *   insn=0x00000000004EA738 string=0x00000000004EA73C "("
 *   insn=0x00000000004EA73C string=0x00000000004EA740 "\t"
 *   insn=0x00000000004EA740 string=0x00000000004EA744 "(@"
 *   insn=0x00000000004EA744 string=0x00000000004EA748 "H"
 *   insn=0x00000000004EA748 string=0x00000000004EA74C "\n"
 *   insn=0x00000000004EA74C string=0x00000000004EA750 "_"
 *   insn=0x00000000004EA754 string=0x00000000004EA758 ")"
 *   insn=0x00000000004EA754 string=0x00000000004EA86C ""
 *   insn=0x00000000004EA760 string=0x00000000004EA764 "Hy"
 *   insn=0x00000000004EA764 string=0x00000000004EA768 ""
 *   insn=0x00000000004EA768 string=0x00000000004EA76C "(ih"
 *   insn=0x00000000004EA770 string=0x00000000004EA774 "~"
 *   insn=0x00000000004EA778 string=0x00000000004EA77C "k"
 *   insn=0x00000000004EA77C string=0x00000000004EA780 ")"
 *   insn=0x00000000004EA780 string=0x00000000004EA784 ")"
 *   insn=0x00000000004EA784 string=0x00000000004EA788 "*a"
 *   insn=0x00000000004EA788 string=0x00000000004EA78C "I"
 *   insn=0x00000000004EA790 string=0x00000000004EA794 "i"
 *   insn=0x00000000004EA794 string=0x00000000004EA798 "Iy\t"
 *   insn=0x00000000004EA798 string=0x00000000004EA79C ")"
 *   insn=0x00000000004EA79C string=0x00000000004EA7A0 "ii"
 *   insn=0x00000000004EA7A0 string=0x00000000004EA7A4 "\t"
 *   insn=0x00000000004EA7A4 string=0x00000000004EA7A8 "?"
 *   insn=0x00000000004EA7A8 string=0x00000000004EA7AC "H"
 *   insn=0x00000000004EA7AC string=0x00000000004EA7B0 "\t"
 *   insn=0x00000000004EA7B4 string=0x00000000004EA7B8 "I!"
 *   insn=0x00000000004EA7B8 string=0x00000000004EA7BC "\n"
 *   insn=0x00000000004EA7BC string=0x00000000004EA7C4 "?"
 *   insn=0x00000000004EA7C4 string=0x00000000004EA7C8 "`"
 *   insn=0x00000000004EA7D8 string=0x00000000004EA7DC "T"
 *   insn=0x00000000004EA7E0 string=0x00000000004EA7E4 "@"
 *   insn=0x00000000004EA7E4 string=0x00000000004EA7E8 "\"
 *   insn=0x00000000004EA7E8 string=0x00000000004EA958 "("
 *   insn=0x00000000004EA7F0 string=0x00000000004EA7F4 "^"
 *   insn=0x00000000004EA7F8 string=0x00000000004EA7FC "1"
 *   insn=0x00000000004EA800 string=0x00000000004EA804 ""
 *   insn=0x00000000004EA808 string=0x00000000004EA80C ""
 *   insn=0x00000000004EA810 string=0x00000000004EA814 "H+@9H"
 *   insn=0x00000000004EA810 string=0x00000000004EA84C ""
 *   insn=0x00000000004EA810 string=0x00000000004EA8D4 "H/@9"
 *   insn=0x00000000004EA814 string=0x00000000004EA818 "H"
 *   insn=0x00000000004EA818 string=0x00000000004EA81C "h"
 *   insn=0x00000000004EA818 string=0x00000000004EA8E0 "H"
 *   insn=0x00000000004EA81C string=0x0000000000599A00 "=[C]"
 *   insn=0x00000000004EA828 string=0x00000000004EA82C ""
 *   insn=0x00000000004EA830 string=0x00000000004EA834 "i"
 *   insn=0x00000000004EA834 string=0x0000000000599A05 "C"
 *   insn=0x00000000004EA838 string=0x00000000004EA83C ")"
 *   insn=0x00000000004EA83C string=0x00000000004EA840 "7"
 *   insn=0x00000000004EA844 string=0x00000000004EA848 "I"
 *   insn=0x00000000004EA84C string=0x00000000004EA850 "i@"
 *   insn=0x00000000004EA850 string=0x00000000004EA854 "(\t@"
 *   insn=0x00000000004EA85C string=0x00000000004EA860 "("
 *   insn=0x00000000004EA860 string=0x00000000004EA864 "\n)@9j"
 *   insn=0x00000000004EA864 string=0x00000000004EA868 "j"
 *   insn=0x00000000004EA868 string=0x00000000004EA934 "j"
 *   insn=0x00000000004EA870 string=0x00000000004EA874 ">"
 *   insn=0x00000000004EA878 string=0x00000000004EA87C "h@"
 *   insn=0x00000000004EA87C string=0x00000000004EA880 "\t\t@"
 *   insn=0x00000000004EA880 string=0x00000000004EA884 "?"
 *   insn=0x00000000004EA888 string=0x00000000004EA88C ""
 *   insn=0x00000000004EA888 string=0x00000000004EA898 "i"
 *   insn=0x00000000004EA88C string=0x00000000004EA890 ")@9"
 *   insn=0x00000000004EA894 string=0x00000000004EA948 "h'@"
 *   insn=0x00000000004EA898 string=0x00000000004EA89C "(\t@"
 *   insn=0x00000000004EA8A4 string=0x00000000004EA8A8 "("
 *   insn=0x00000000004EA8A8 string=0x00000000004EA8AC "\n)@9*"
 *   insn=0x00000000004EA8AC string=0x00000000004EA8B0 "*"
 *   insn=0x00000000004EA8B0 string=0x00000000004EA8B4 "\n"
 *   insn=0x00000000004EA8B4 string=0x00000000004EA8B8 "H"
 *   insn=0x00000000004EA8B8 string=0x00000000004EA8BC "k"
 *   insn=0x00000000004EA8C8 string=0x00000000004EA8CC "k"
 *   insn=0x00000000004EA8C8 string=0x00000000004EA778 "k"
 *   insn=0x00000000004EA8D8 string=0x00000000004EA8DC "$"
 *   insn=0x00000000004EA8E0 string=0x00000000004EA8E4 "j"
 *   insn=0x00000000004EA8E4 string=0x00000000004EA8EC "!@"
 *   insn=0x00000000004EA8E4 string=0x0000000000599A07 "main"
 *   insn=0x00000000004EA8F4 string=0x00000000004EA8F8 "H"
 *   insn=0x00000000004EA8F8 string=0x00000000004EA8FC "\ta@"
 *   insn=0x00000000004EA900 string=0x00000000004EA904 "H"
 *   insn=0x00000000004EA904 string=0x00000000004EA908 "?"
 *   insn=0x00000000004EA908 string=0x00000000004EA90C "i"
 *   insn=0x00000000004EA90C string=0x00000000004EA914 "e@"
 *   insn=0x00000000004EA90C string=0x0000000000599A0C "Lua"
 *   insn=0x00000000004EA914 string=0x00000000004EA918 "I"
 *   insn=0x00000000004EA934 string=0x00000000004EA938 "_"
 *   insn=0x00000000004EA93C string=0x00000000004EA940 "j"
 *   insn=0x00000000004EA93C string=0x00000000004EA734 "j"
 *   insn=0x00000000004EA94C string=0x00000000004EA950 "M"
 *   insn=0x00000000004EA95C string=0x00000000004EA960 ""
 *   insn=0x00000000004EA96C string=0x00000000004EA970 "9"
 *   insn=0x00000000004EA970 string=0x00000000004EA974 "("
 *   insn=0x00000000004EA984 string=0x00000000001FA030 "0'"
 *   insn=0x00000000004EA988 string=0x00000000004EA98C "i\n@"
 *   insn=0x00000000004EA990 string=0x00000000004EA9A0 ":"
 *   insn=0x00000000004EA99C string=0x00000000004EA9AC "*\t"
 *   insn=0x00000000004EA9A0 string=0x00000000004EA9A4 "h\n@"
 *   insn=0x00000000004EA9AC string=0x00000000004EA9B0 "i"
 *   insn=0x00000000004EA9B0 string=0x00000000004EA9B4 ")"
 *   insn=0x00000000004EA9B4 string=0x00000000004EA9B8 "?A"
 *   insn=0x00000000004EA9BC string=0x00000000004EA9D0 "A"
 *   insn=0x00000000004EA9C4 string=0x00000000004EA9C8 "|"
 *   insn=0x00000000004EA9C8 string=0x00000000004EA9CC "h\n@"
 *   insn=0x00000000004EA9C8 string=0x00000000004EBBB8 "X@"
 *   insn=0x00000000004EA9D0 string=0x00000000004EA9D4 "h\n"
 *   insn=0x00000000004EA9E0 string=0x00000000004EA9E4 "`"
 *   insn=0x00000000004EA9E4 string=0x00000000004EA9E8 "v"
 *   insn=0x00000000004EA9E8 string=0x00000000004EA9EC "H+@9("
 *   insn=0x00000000004EA9EC string=0x00000000004EA9F0 "("
 *   insn=0x00000000004EAA00 string=0x00000000004EAA04 "I\t"
 *   insn=0x00000000004EAA04 string=0x00000000004EAA08 "i"
 *   insn=0x00000000004EAA08 string=0x00000000004EAA0C ")"
 *   insn=0x00000000004EAA0C string=0x00000000004EAA10 "?A"
 *   insn=0x00000000004EAA14 string=0x00000000004EAA28 "A"
 *   insn=0x00000000004EAA1C string=0x00000000004EAA20 "f"
 *   insn=0x00000000004EAA20 string=0x00000000004EAA24 "h\n@"
 *   insn=0x00000000004EAA60 string=0x00000000004EAA64 "H"
 *   insn=0x00000000004EAA68 string=0x00000000004EAA6C "\tU@"
 *   insn=0x00000000004EAA6C string=0x00000000004EAA70 "?"
 *   insn=0x00000000004EAA98 string=0x00000000004EAA9C "H"
 *   insn=0x00000000004EAAA0 string=0x00000000004EAAA4 "U"
 *   insn=0x00000000004EAAB8 string=0x00000000004EAABC "T"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_getinfo(_QWORD *a1, const char *a2, __int64 a3)
{
  const char *v3; // x20
  __int64 v6; // x8
  __int64 v7; // x27
  __int64 v8; // x26
  int v9; // w8
  __int64 v10; // x25
  unsigned int v11; // w21
  __int64 v12; // x8
  __int128 v13; // q0
  int v14; // w22
  __int64 v15; // x10
  __int64 v16; // x8
  __int64 v17; // x9
  unsigned __int64 v18; // x8
  __int64 v19; // x9
  __int64 v20; // x11
  _QWORD *v21; // x10
  unsigned int v22; // w8
  __int64 v23; // x0
  int v24; // w8
  char *v25; // x1
  const char *v26; // x9
  _DWORD *v27; // x9
  _DWORD *v28; // x8
  _DWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
  __int64 v32; // t1
  int v33; // w9
  bool v34; // zf
  __int128 v35; // q0
  __int64 v36; // x9
  int v37; // w10
  __int64 v38; // x8
  __int64 v39; // x8
  _QWORD *v40; // x22
  int v41; // w9
  __int64 v42; // x10
  __int64 v44; // x20
  __int64 v45; // x22
  _DWORD *v46; // x0
  __int64 v47; // [xsp+8h] [xbp-58h]

  v3 = a2;
  if ( *a2 != 62 )
  {
    v12 = *(int *)(a3 + 116);
    if ( (_DWORD)v12 )
    {
      v7 = a1[10] + 40 * v12;
      v8 = **(_QWORD **)(v7 + 8);
      if ( v8 )
        goto LABEL_3;
    }
LABEL_7:
    *(_QWORD *)(a3 + 48) = -1;
    *(_QWORD *)&v13 = "tail";
    *((_QWORD *)&v13 + 1) = "=(tail call)";
    *(_DWORD *)(a3 + 40) = -1;
    *(int64x2_t *)(a3 + 8) = vdupq_n_s64((unsigned __int64)"");
    *(_OWORD *)(a3 + 24) = v13;
    sub_4EF46C((char *)(a3 + 56), "=(tail call)", 0x3Cu);
    v8 = 0;
    *(_DWORD *)(a3 + 44) = 0;
    v14 = 1;
    v11 = 1;
    goto LABEL_45;
  }
  v6 = a1[2];
  v7 = 0;
  v3 = a2 + 1;
  v8 = *(_QWORD *)(v6 - 16);
  a1[2] = v6 - 16;
  if ( !v8 )
    goto LABEL_7;
LABEL_3:
  LOBYTE(v9) = *v3;
  if ( !*v3 )
  {
    v14 = 0;
    v11 = 1;
    goto LABEL_45;
  }
  v10 = 1;
  v11 = 1;
  v47 = v7 - 40;
  do
  {
    switch ( (char)v9 )
    {
      case 'L':
      case 'f':
        break;
      case 'S':
        if ( *(_BYTE *)(v8 + 10) )
        {
          *(_QWORD *)(a3 + 32) = "=[C]";
          v24 = -1;
          v25 = "=[C]";
          *(_DWORD *)(a3 + 48) = -1;
          v26 = "C";
        }
        else
        {
          v25 = (char *)(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 64LL) + 24LL);
          *(_QWORD *)(a3 + 32) = v25;
          v33 = *(_DWORD *)(*(_QWORD *)(v8 + 32) + 96LL);
          *(_DWORD *)(a3 + 48) = v33;
          v34 = v33 == 0;
          v26 = "Lua";
          v24 = *(_DWORD *)(*(_QWORD *)(v8 + 32) + 100LL);
          if ( v34 )
            v26 = "main";
        }
        *(_DWORD *)(a3 + 52) = v24;
        *(_QWORD *)(a3 + 24) = v26;
        sub_4EF46C((char *)(a3 + 56), v25, 0x3Cu);
        break;
      case 'l':
        if ( v7
          && (v27 = *(_DWORD **)(v7 + 8), v27[2] == 6)
          && (v16 = *(_QWORD *)v27, !*(_BYTE *)(*(_QWORD *)v27 + 10LL))
          && (a1[5] == v7
            ? (v15 = a1[6], *(_QWORD *)(v7 + 24) = v15, v16 = *(_QWORD *)v27)
            : (v15 = *(_QWORD *)(v7 + 24)),
              v17 = *(_QWORD *)(v16 + 32),
              v18 = v15 - *(_QWORD *)(v17 + 24),
              (int)(v18 >> 2) >= 1) )
        {
          v19 = *(_QWORD *)(v17 + 40);
          if ( v19 )
            *(_DWORD *)(a3 + 40) = *(_DWORD *)(v19 + ((__int64)((v18 << 30) - 0x100000000LL) >> 30));
          else
            *(_DWORD *)(a3 + 40) = 0;
        }
        else
        {
          *(_DWORD *)(a3 + 40) = -1;
        }
        break;
      case 'n':
        if ( !v7 )
          goto LABEL_41;
        v28 = *(_DWORD **)(v7 + 8);
        if ( v28[2] == 6 && !*(_BYTE *)(*(_QWORD *)v28 + 10LL) && *(int *)(v7 + 36) > 0 )
          goto LABEL_41;
        v29 = *(_DWORD **)(v7 - 32);
        if ( v29[2] != 6 || *(_BYTE *)(*(_QWORD *)v29 + 10LL) )
          goto LABEL_41;
        v30 = *(_QWORD *)(*(_QWORD *)v29 + 32LL);
        v32 = *(_QWORD *)(v30 + 24);
        v21 = (_QWORD *)(v30 + 24);
        v31 = v32;
        if ( a1[5] == v47 )
        {
          v20 = a1[6];
          *(_QWORD *)(v7 - 16) = v20;
          v21 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v29 + 32LL) + 24LL);
        }
        else
        {
          v20 = *(_QWORD *)(v7 - 16);
        }
        v22 = *(_DWORD *)(v31 + ((((v20 - *v21) << 30) - 0x100000000LL) >> 30));
        if ( (v22 & 0x3F) <= 0x21 && ((1LL << (v22 & 0x3F)) & 0x230000000LL) != 0 )
        {
          v23 = sub_4EB12C(a1, v47, (unsigned __int8)(v22 >> 6), a3 + 8);
          *(_QWORD *)(a3 + 16) = v23;
          if ( v23 )
            break;
        }
        else
        {
LABEL_41:
          *(_QWORD *)(a3 + 16) = 0;
        }
        *(_QWORD *)&v35 = vdupq_n_s64(0).n128_u64[0];
        *((_QWORD *)&v35 + 1) = "";
        *(_OWORD *)(a3 + 8) = v35;
        break;
      case 'u':
        *(_DWORD *)(a3 + 44) = *(unsigned __int8 *)(v8 + 11);
        break;
      default:
        v11 = 0;
        break;
    }
    v9 = (unsigned __int8)v3[v10++];
  }
  while ( v9 );
  v14 = 0;
LABEL_45:
  if ( strchr(v3, 102) )
  {
    v36 = a1[2];
    if ( v14 )
    {
      v37 = 0;
      v38 = a1[2];
    }
    else
    {
      *(_QWORD *)v36 = v8;
      v38 = a1[2];
      v37 = 6;
    }
    *(_DWORD *)(v36 + 8) = v37;
    if ( a1[7] - v38 <= 16 )
    {
      sub_4EBBB8(a1);
      v38 = a1[2];
    }
    a1[2] = v38 + 16;
  }
  if ( strchr(v3, 76) )
  {
    if ( (v14 & 1) != 0 || *(_BYTE *)(v8 + 10) )
    {
      v40 = a1 + 2;
      v39 = a1[2];
      v41 = 0;
      v42 = v39;
    }
    else
    {
      v44 = sub_4F3DB4(a1, 0, 0);
      if ( *(int *)(*(_QWORD *)(v8 + 32) + 84LL) >= 1 )
      {
        v45 = 0;
        do
        {
          v46 = (_DWORD *)sub_4F49E8(a1, v44);
          *v46 = 1;
          v46[2] = 1;
          ++v45;
        }
        while ( v45 < *(int *)(*(_QWORD *)(v8 + 32) + 84LL) );
      }
      v40 = a1 + 2;
      v42 = a1[2];
      v41 = 5;
      *(_QWORD *)v42 = v44;
      v39 = a1[2];
    }
    *(_DWORD *)(v42 + 8) = v41;
    if ( a1[7] - v39 <= 16 )
    {
      sub_4EBBB8(a1);
      v39 = a1[2];
    }
    *v40 = v39 + 16;
  }
  return v11;
}

