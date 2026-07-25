/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000562F10
 * Mangled: sub_562F10
 * Demangled: sub_562F10
 *
 * Callers: 35
 *   0x0000000000563050  sub_563050
 *   0x000000000056309C  sub_56309C
 *   0x00000000005630F0  sub_5630F0
 *   0x00000000005631CC  sub_5631CC
 *   0x00000000005632D0  sub_5632D0
 *   0x0000000000563350  sub_563350
 *   0x00000000005633E0  sub_5633E0
 *   0x0000000000563478  sub_563478
 *   0x000000000056354C  sub_56354C
 *   0x000000000056364C  sub_56364C
 *   0x00000000005636CC  sub_5636CC
 *   0x000000000056375C  sub_56375C
 *   0x00000000005637F4  sub_5637F4
 *   0x000000000056392C  sub_56392C
 *   0x0000000000563A7C  sub_563A7C
 *   0x0000000000563B38  sub_563B38
 *   0x0000000000563BDC  sub_563BDC
 *   0x0000000000563F40  sub_563F40
 *   0x0000000000564084  sub_564084
 *   0x00000000005641F0  sub_5641F0
 *   0x000000000056432C  sub_56432C
 *   0x0000000000564494  sub_564494
 *   0x0000000000564634  sub_564634
 *   0x00000000005647E8  sub_5647E8
 *   0x000000000056492C  sub_56492C
 *   0x0000000000564A98  sub_564A98
 *   0x0000000000564BD4  sub_564BD4
 *   0x0000000000564D3C  sub_564D3C
 *   0x0000000000564EDC  sub_564EDC
 *   0x0000000000565090  sub_565090
 *   0x00000000005650DC  sub_5650DC
 *   0x0000000000565128  sub_565128
 *   0x0000000000565174  sub_565174
 *   0x0000000000570F04  sub_570F04
 *   0x000000000057100C  sub_57100C
 *
 * Callees: 9
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000051F654  sub_51F654
 *   0x000000000051F694  sub_51F694
 *   0x0000000000562468  sub_562468
 *   0x0000000000562E74  sub_562E74
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 27
 *   insn=0x0000000000562F3C string=0x0000000000562F40 "J"
 *   insn=0x0000000000562F4C string=0x0000000000562F50 "`"
 *   insn=0x0000000000562F5C string=0x0000000000562F60 "`j@"
 *   insn=0x0000000000562F5C string=0x0000000000562FD4 "`N@"
 *   insn=0x0000000000562F60 string=0x0000000000562F64 "@"
 *   insn=0x0000000000562F68 string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000562F80 string=0x0000000000562F84 ""L@"
 *   insn=0x0000000000562F84 string=0x0000000000562F88 "#"
 *   insn=0x0000000000562F88 string=0x0000000000562F8C "?"
 *   insn=0x0000000000562F8C string=0x0000000000562F90 "?"
 *   insn=0x0000000000562F90 string=0x0000000000562F94 """
 *   insn=0x0000000000562F94 string=0x0000000000562F98 """
 *   insn=0x0000000000562F98 string=0x0000000000562F9C """
 *   insn=0x0000000000562F9C string=0x0000000000562FA0 "?"
 *   insn=0x0000000000562FA0 string=0x0000000000562FA4 "?"
 *   insn=0x0000000000562FA4 string=0x0000000000562FA8 "?"
 *   insn=0x0000000000562FA8 string=0x0000000000562FAC "#@"
 *   insn=0x0000000000562FAC string=0x0000000000562FB0 "#"
 *   insn=0x0000000000562FD4 string=0x0000000000562FD8 "@"
 *   insn=0x0000000000563004 string=0x0000000000563008 "vE"
 *   insn=0x0000000000563004 string=0x0000000000563018 "rE"
 *   insn=0x0000000000563008 string=0x00000000001F45E0 "P'"
 *   insn=0x0000000000563018 string=0x000000000056301C "]i"
 *   insn=0x000000000056301C string=0x0000000000563020 "5"
 *   insn=0x000000000056301C string=0x00000000001FD590 "0'"
 *   insn=0x0000000000563028 string=0x000000000056302C "Yi"
 *   insn=0x0000000000563040 string=0x0000000000563044 " z"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_562F10(__int64 a1)
{
  __int64 v1; // x22
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  int v10; // w21
  int v11; // w0
  void *v12; // x0
  __int64 v13; // x2
  __int64 v14; // x3
  void *v16; // x0
  char v17; // [xsp+0h] [xbp+0h]

  v1 = a1 + 104;
  if ( !sub_51F654((_QWORD *)(a1 + 104)) )
    return 0;
  v10 = (unsigned __int8)sub_562468(a1, v3, v4, v5, v6, v7, v8, v9, v17) ^ 1;
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
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  v13 = *(_QWORD *)(a1 + 152);
  v14 = *(_QWORD *)(a1 + 124);
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

