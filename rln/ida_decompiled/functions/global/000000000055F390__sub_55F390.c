/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055F390
 * Mangled: sub_55F390
 * Demangled: sub_55F390
 *
 * Callers: 35
 *   0x000000000055F52C  sub_55F52C
 *   0x000000000055F578  sub_55F578
 *   0x000000000055F5CC  sub_55F5CC
 *   0x000000000055F65C  sub_55F65C
 *   0x000000000055F6F4  sub_55F6F4
 *   0x000000000055F784  sub_55F784
 *   0x000000000055F81C  sub_55F81C
 *   0x000000000055F8C0  sub_55F8C0
 *   0x000000000055F9D0  sub_55F9D0
 *   0x00000000005602E0  sub_5602E0
 *   0x00000000005603BC  sub_5603BC
 *   0x00000000005604C0  sub_5604C0
 *   0x0000000000560604  sub_560604
 *   0x0000000000560770  sub_560770
 *   0x00000000005608B4  sub_5608B4
 *   0x0000000000560A20  sub_560A20
 *   0x0000000000560B7C  sub_560B7C
 *   0x0000000000560BC8  sub_560BC8
 *   0x0000000000560C9C  sub_560C9C
 *   0x0000000000560D9C  sub_560D9C
 *   0x0000000000560ED8  sub_560ED8
 *   0x0000000000561040  sub_561040
 *   0x000000000056117C  sub_56117C
 *   0x00000000005612E4  sub_5612E4
 *   0x0000000000561440  sub_561440
 *   0x000000000056148C  sub_56148C
 *   0x00000000005615C4  sub_5615C4
 *   0x0000000000561714  sub_561714
 *   0x00000000005618B4  sub_5618B4
 *   0x0000000000561A68  sub_561A68
 *   0x0000000000561C08  sub_561C08
 *   0x0000000000561DBC  sub_561DBC
 *   0x0000000000561F4C  sub_561F4C
 *   0x0000000000570E84  sub_570E84
 *   0x0000000000570F84  sub_570F84
 *
 * Callees: 8
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000051F654  sub_51F654
 *   0x000000000051F694  sub_51F694
 *   0x000000000055F224  sub_55F224
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 33
 *   insn=0x000000000055F3B0 string=0x000000000055F3B4 "`"
 *   insn=0x000000000055F3C4 string=0x000000000055F3C8 "`"
 *   insn=0x000000000055F3D4 string=0x000000000055F3D8 "`j@"
 *   insn=0x000000000055F3D4 string=0x000000000055F448 "`N@"
 *   insn=0x000000000055F3D8 string=0x000000000055F3DC "@"
 *   insn=0x000000000055F3DC string=0x000000000055F3E4 "aN@"
 *   insn=0x000000000055F3E0 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000055F3E8 string=0x000000000055F3EC "b"
 *   insn=0x000000000055F404 string=0x000000000055F408 "a"
 *   insn=0x000000000055F408 string=0x000000000055F40C "a\n"
 *   insn=0x000000000055F40C string=0x000000000055F410 "a"
 *   insn=0x000000000055F41C string=0x000000000055F420 "bB"
 *   insn=0x000000000055F420 string=0x000000000055F424 "b"
 *   insn=0x000000000055F448 string=0x000000000055F44C "@"
 *   insn=0x000000000055F478 string=0x000000000055F47C "YT"
 *   insn=0x000000000055F478 string=0x000000000055F48C "UT"
 *   insn=0x000000000055F47C string=0x00000000001F45E0 "P'"
 *   insn=0x000000000055F48C string=0x000000000055F490 "@x"
 *   insn=0x000000000055F490 string=0x000000000055F494 "4"
 *   insn=0x000000000055F490 string=0x00000000001FD590 "0'"
 *   insn=0x000000000055F49C string=0x000000000055F4A0 "<x"
 *   insn=0x000000000055F4A8 string=0x000000000055F4AC "`"
 *   insn=0x000000000055F4B8 string=0x000000000055F4BC "`N@"
 *   insn=0x000000000055F4B8 string=0x000000000055F4D0 "`j@"
 *   insn=0x000000000055F4BC string=0x000000000055F4C0 "@"
 *   insn=0x000000000055F4D0 string=0x000000000055F4D4 "@"
 *   insn=0x000000000055F4D4 string=0x000000000055F4DC "aN@"
 *   insn=0x000000000055F4E0 string=0x000000000055F4E4 "b"
 *   insn=0x000000000055F4FC string=0x000000000055F500 "a"
 *   insn=0x000000000055F500 string=0x000000000055F504 "a\n"
 *   insn=0x000000000055F504 string=0x000000000055F508 "a"
 *   insn=0x000000000055F514 string=0x000000000055F518 "bB"
 *   insn=0x000000000055F518 string=0x000000000055F51C "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_55F390(__int64 a1)
{
  __int64 v1; // x21
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  int v10; // w20
  int v11; // w0
  void *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  void *v16; // x0
  char v17; // [xsp+0h] [xbp+0h]

  v1 = a1 + 104;
  if ( !sub_51F654((_QWORD *)(a1 + 104)) )
    return 0;
  v10 = (unsigned __int8)sub_55F224(a1, v3, v4, v5, v6, v7, v8, v9, v17) ^ 1;
  v11 = *(unsigned __int8 *)(a1 + 168);
  *(_DWORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 192) = 0;
  if ( v11 )
  {
    v16 = *(void **)(a1 + 152);
    if ( v16 )
      operator delete[](v16);
    *(_QWORD *)(a1 + 152) = 0;
    *(_BYTE *)(a1 + 168) = 0;
  }
  v12 = *(void **)(a1 + 208);
  if ( v12 )
    operator delete[](v12);
  v13 = *(_QWORD *)(a1 + 152);
  v14 = *(_QWORD *)(a1 + 124);
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_BYTE *)(a1 + 169) = 0;
  *(_BYTE *)(a1 + 170) = 0;
  *(_QWORD *)(a1 + 8) = v13;
  *(_QWORD *)(a1 + 16) = v13;
  *(_QWORD *)(a1 + 24) = v13;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 132) = v14;
  *(_QWORD *)(a1 + 140) = v14;
  if ( !sub_51F694(v1) )
    return 0;
  if ( !v10 )
    return a1;
  else
    return 0;
}

