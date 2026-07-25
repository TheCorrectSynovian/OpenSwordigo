/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055FB8C
 * Mangled: sub_55FB8C
 * Demangled: sub_55FB8C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000055F010  sub_55F010
 *   0x000000000055F194  sub_55F194
 *   0x000000000055FA7C  sub_55FA7C
 *
 * Referenced strings: 74
 *   insn=0x000000000055FBA0 string=0x000000000055FBA4 " "
 *   insn=0x000000000055FBA4 string=0x000000000055FBA8 "?"
 *   insn=0x000000000055FBAC string=0x000000000055FBB0 "`"
 *   insn=0x000000000055FBB4 string=0x000000000055FBB8 "`"
 *   insn=0x000000000055FBB4 string=0x000000000055FBE8 "a"
 *   insn=0x000000000055FBB8 string=0x000000000055FBBC " \t"
 *   insn=0x000000000055FBBC string=0x000000000055FBC0 "a2"
 *   insn=0x000000000055FBBC string=0x000000000055FCE0 "b\n@"
 *   insn=0x000000000055FBC4 string=0x000000000055FBC8 "s"
 *   insn=0x000000000055FBCC string=0x000000000055FBD0 "c"
 *   insn=0x000000000055FBD4 string=0x000000000055FBD8 """
 *   insn=0x000000000055FBE0 string=0x000000000055FBE4 "@"
 *   insn=0x000000000055FBEC string=0x000000000055FBF0 "b"
 *   insn=0x000000000055FBF4 string=0x000000000055FBF8 "?"
 *   insn=0x000000000055FBF8 string=0x000000000055FBFC """
 *   insn=0x000000000055FBFC string=0x000000000055FC40 "aR@"
 *   insn=0x000000000055FC00 string=0x000000000055FC04 "T"
 *   insn=0x000000000055FC04 string=0x000000000055FC08 "b"
 *   insn=0x000000000055FC08 string=0x000000000055FC0C "a"
 *   insn=0x000000000055FC0C string=0x000000000055FC10 "B"
 *   insn=0x000000000055FC10 string=0x000000000055FC14 "b"
 *   insn=0x000000000055FC18 string=0x000000000055FC1C "B"
 *   insn=0x000000000055FC24 string=0x000000000055FC28 "`"
 *   insn=0x000000000055FC28 string=0x000000000055FD14 "az@"
 *   insn=0x000000000055FC40 string=0x000000000055FC44 "?"
 *   insn=0x000000000055FC48 string=0x000000000055FC4C "cz@"
 *   insn=0x000000000055FC4C string=0x000000000055FC50 """
 *   insn=0x000000000055FC58 string=0x000000000055FC5C "bN@"
 *   insn=0x000000000055FC58 string=0x000000000055FD78 "aN@"
 *   insn=0x000000000055FC5C string=0x000000000055FC60 "!"
 *   insn=0x000000000055FC60 string=0x000000000055FC64 "b"
 *   insn=0x000000000055FC64 string=0x000000000055FC68 "A"
 *   insn=0x000000000055FC68 string=0x000000000055FC6C "b\n"
 *   insn=0x000000000055FC6C string=0x000000000055FC70 "b"
 *   insn=0x000000000055FC70 string=0x000000000055FC74 "b"
 *   insn=0x000000000055FC74 string=0x000000000055FC78 "b"
 *   insn=0x000000000055FC78 string=0x000000000055FC7C "a"
 *   insn=0x000000000055FC7C string=0x000000000055FC80 "!"
 *   insn=0x000000000055FC80 string=0x000000000055FC84 "a"
 *   insn=0x000000000055FC88 string=0x000000000055FC8C "`"
 *   insn=0x000000000055FC90 string=0x000000000055FC94 "`"
 *   insn=0x000000000055FC98 string=0x000000000055FC9C "`"
 *   insn=0x000000000055FCC0 string=0x000000000055FCC4 " "
 *   insn=0x000000000055FCC4 string=0x000000000055FCC8 "`"
 *   insn=0x000000000055FCE0 string=0x000000000055FCE4 "a"
 *   insn=0x000000000055FCE4 string=0x000000000055FCE8 "`Z@"
 *   insn=0x000000000055FCE8 string=0x000000000055FCEC "_"
 *   insn=0x000000000055FCEC string=0x000000000055FCF0 "a^@"
 *   insn=0x000000000055FCF0 string=0x000000000055FCF4 "bN@"
 *   insn=0x000000000055FCF8 string=0x000000000055FCFC "b"
 *   insn=0x000000000055FCFC string=0x000000000055FD00 "`Z"
 *   insn=0x000000000055FD00 string=0x000000000055FD04 "`\n"
 *   insn=0x000000000055FD04 string=0x000000000055FD08 "a"
 *   insn=0x000000000055FD14 string=0x000000000055FD18 " "
 *   insn=0x000000000055FD18 string=0x000000000055FD1C "?"
 *   insn=0x000000000055FD1C string=0x000000000055FD20 "!"
 *   insn=0x000000000055FD20 string=0x000000000055FD24 "`N@"
 *   insn=0x000000000055FD20 string=0x000000000055FD44 "aR@"
 *   insn=0x000000000055FD24 string=0x000000000055FD28 "`"
 *   insn=0x000000000055FD28 string=0x000000000055FD2C "`\n"
 *   insn=0x000000000055FD2C string=0x000000000055FD30 "`"
 *   insn=0x000000000055FD44 string=0x000000000055FD48 "`N@"
 *   insn=0x000000000055FD48 string=0x000000000055FD4C "`"
 *   insn=0x000000000055FD4C string=0x000000000055FD50 "?"
 *   insn=0x000000000055FD50 string=0x000000000055FD54 "`\n"
 *   insn=0x000000000055FD54 string=0x000000000055FD58 "`"
 *   insn=0x000000000055FD5C string=0x000000000055FD60 "!"
 *   insn=0x000000000055FD60 string=0x000000000055FD64 "`"
 *   insn=0x000000000055FD68 string=0x000000000055FD6C "`"
 *   insn=0x000000000055FD6C string=0x000000000055FD70 "a"
 *   insn=0x000000000055FD78 string=0x000000000055FD7C "a"
 *   insn=0x000000000055FD7C string=0x000000000055FD80 "a\n"
 *   insn=0x000000000055FD80 string=0x000000000055FD84 "a"
 *   insn=0x000000000055FD9C string=0x000000000055FDA0 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_55FB8C(__int64 a1, unsigned int a2)
{
  int v4; // w0
  __int64 v5; // x4
  __int64 v6; // x5
  __int64 v7; // x6
  __int64 v8; // x7
  char *v9; // x1
  char *v10; // x2
  unsigned __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x0
  unsigned __int64 v17; // x1
  __int64 v18; // x0
  __int64 v19; // x1
  char v20; // [xsp+2Fh] [xbp+2Fh] BYREF

  if ( (*(_DWORD *)(a1 + 120) & 0x11) == 0 )
    return 0xFFFFFFFFLL;
  if ( *(_BYTE *)(a1 + 169) )
  {
    if ( *(_BYTE *)(a1 + 192) )
    {
      v14 = *(_QWORD *)(a1 + 176);
      v15 = *(_QWORD *)(a1 + 184);
      if ( *(_QWORD *)(a1 + 16) != *(_QWORD *)(a1 + 8) )
        ++v14;
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 176) = v14;
      *(_QWORD *)(a1 + 16) = v14;
      *(_QWORD *)(a1 + 24) = v15;
      *(_BYTE *)(a1 + 192) = 0;
    }
    v4 = sub_55F194(a1, a1 + 140);
    if ( sub_55FA7C(a1, v4, 1, *(_QWORD *)(a1 + 140), v5, v6, v7, v8) == -1 )
      return 0xFFFFFFFFLL;
  }
  v9 = *(char **)(a1 + 32);
  v10 = *(char **)(a1 + 40);
  if ( v9 < v10 )
  {
    if ( a2 != -1 )
    {
      *v10 = a2;
      v9 = *(char **)(a1 + 32);
      v10 = (char *)(*(_QWORD *)(a1 + 40) + 1LL);
      *(_QWORD *)(a1 + 40) = v10;
    }
    if ( !sub_55F010(a1, v9, v10 - v9) )
      return 0xFFFFFFFFLL;
    if ( (*(_DWORD *)(a1 + 120) & 0x11) != 0 )
    {
      v17 = *(_QWORD *)(a1 + 160);
      v18 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 8) = v18;
      *(_QWORD *)(a1 + 16) = v18;
      *(_QWORD *)(a1 + 24) = v18;
      if ( v17 > 1 )
      {
        *(_QWORD *)(a1 + 40) = v18;
        *(_QWORD *)(a1 + 32) = v18;
        *(_QWORD *)(a1 + 48) = v18 + v17 - 1;
        goto LABEL_15;
      }
    }
    else
    {
      v16 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 8) = v16;
      *(_QWORD *)(a1 + 16) = v16;
      *(_QWORD *)(a1 + 24) = v16;
    }
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
LABEL_15:
    if ( a2 == -1 )
      return 0;
    return a2;
  }
  v12 = *(_QWORD *)(a1 + 160);
  if ( v12 > 1 )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x11) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 8) = v13;
      *(_QWORD *)(a1 + 16) = v13;
      *(_QWORD *)(a1 + 24) = v13;
      *(_QWORD *)(a1 + 40) = v13;
      *(_QWORD *)(a1 + 32) = v13;
      *(_QWORD *)(a1 + 48) = v13 + v12 - 1;
    }
    else
    {
      v19 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 8) = v19;
      *(_QWORD *)(a1 + 16) = v19;
      *(_QWORD *)(a1 + 24) = v19;
      *(_QWORD *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 48) = 0;
    }
    *(_BYTE *)(a1 + 170) = 1;
    if ( a2 != -1 )
      *(_BYTE *)(*(_QWORD *)(a1 + 40))++ = a2;
    goto LABEL_15;
  }
  v20 = a2;
  if ( a2 != -1 && !sub_55F010(a1, &v20, 1u) )
    return 0xFFFFFFFFLL;
  *(_BYTE *)(a1 + 170) = 1;
  if ( a2 == -1 )
    return 0;
  return a2;
}

