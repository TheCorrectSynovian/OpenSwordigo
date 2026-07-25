/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F0E8C
 * Mangled: sub_4F0E8C
 * Demangled: sub_4F0E8C
 *
 * Callers: 2
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F28AC  sub_4F28AC
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004FDB84  sub_4FDB84
 *   0x00000000004FDE2C  sub_4FDE2C
 *   0x00000000005007A0  sub_5007A0
 *   0x0000000000500A74  sub_500A74
 *
 * Referenced strings: 51
 *   insn=0x00000000004F0EA0 string=0x00000000004F0EA4 "V"
 *   insn=0x00000000004F0EB8 string=0x00000000004F0EBC ""
 *   insn=0x00000000004F0EC4 string=0x00000000004F0EC8 "h*A9"
 *   insn=0x00000000004F0ED0 string=0x00000000004F0ED4 "h"
 *   insn=0x00000000004F0ED8 string=0x00000000004F0EDC "i"
 *   insn=0x00000000004F0EE0 string=0x00000000004F0EE4 "\t"
 *   insn=0x00000000004F0EE4 string=0x00000000004F0EE8 ")"
 *   insn=0x00000000004F0EE8 string=0x00000000004F0EEC "*="
 *   insn=0x00000000004F0EEC string=0x00000000004F0EF0 "_%"
 *   insn=0x00000000004F0EF0 string=0x00000000004F0EF4 "\t"
 *   insn=0x00000000004F0EF8 string=0x00000000004F0EFC "A"
 *   insn=0x00000000004F0EFC string=0x000000000059A00A "chunk has too many syntax levels"
 *   insn=0x00000000004F0F08 string=0x00000000004F0F0C "%>"
 *   insn=0x00000000004F0F14 string=0x00000000004F0F18 "8"
 *   insn=0x00000000004F0F1C string=0x00000000004F0F20 ""
 *   insn=0x00000000004F0F48 string=0x00000000004F0F4C "a"
 *   insn=0x00000000004F0F58 string=0x00000000004F0F5C "\t)A9\t="
 *   insn=0x00000000004F0F5C string=0x00000000004F0F60 "\t="
 *   insn=0x00000000004F0F68 string=0x00000000004F0F6C "\t"
 *   insn=0x00000000004F0F6C string=0x00000000004F0F70 ")"
 *   insn=0x00000000004F0F70 string=0x00000000004F0F74 "\t"
 *   insn=0x00000000004F0F74 string=0x00000000004F0F78 "t"
 *   insn=0x00000000004F0F78 string=0x00000000004F0F7C "i"
 *   insn=0x00000000004F0F80 string=0x00000000004F0F84 "h"
 *   insn=0x00000000004F0F84 string=0x00000000004F0F88 "("
 *   insn=0x00000000004F0F94 string=0x00000000004F0F98 ")"
 *   insn=0x00000000004F0F98 string=0x00000000004F0F9C "\n"
 *   insn=0x00000000004F0FA0 string=0x00000000004F0FA4 "\t1@"
 *   insn=0x00000000004F0FA4 string=0x00000000004F0FA8 "l"
 *   insn=0x00000000004F0FA8 string=0x00000000004F0FAC "J"
 *   insn=0x00000000004F0FB0 string=0x00000000004F0FB4 "k"
 *   insn=0x00000000004F0FB8 string=0x00000000004F0FBC "b"
 *   insn=0x00000000004F0FC4 string=0x00000000004F1014 "l"
 *   insn=0x00000000004F0FCC string=0x00000000004F0FD0 "m"
 *   insn=0x00000000004F0FE8 string=0x00000000004F0FEC "0zpx/zox"
 *   insn=0x00000000004F0FEC string=0x00000000004F0FF0 "/zox"
 *   insn=0x00000000004F0FF8 string=0x00000000004F0FFC "P"
 *   insn=0x00000000004F0FFC string=0x00000000004F1000 "O"
 *   insn=0x00000000004F1004 string=0x00000000004F1008 "\t"
 *   insn=0x00000000004F100C string=0x00000000004F1010 "L"
 *   insn=0x00000000004F1014 string=0x00000000004F1018 ""
 *   insn=0x00000000004F1024 string=0x00000000004F1028 "k"
 *   insn=0x00000000004F1028 string=0x00000000004F102C "L"
 *   insn=0x00000000004F1030 string=0x00000000004F1034 ""
 *   insn=0x00000000004F1040 string=0x00000000004F1044 "a"
 *   insn=0x00000000004F1040 string=0x00000000004F1058 "h*A9"
 *   insn=0x00000000004F1054 string=0x00000000004FDB84 ""
 *   insn=0x00000000004F105C string=0x00000000004F1060 "h>"
 *   insn=0x00000000004F1064 string=0x00000000004F1068 "q3"
 *   insn=0x00000000004F1068 string=0x00000000004FDE2C "0@"
 *   insn=0x00000000004F1094 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F0E8C(__int64 a1)
{
  __int64 v2; // x19
  char v3; // w8
  __int64 v4; // x8
  unsigned int v5; // w10
  unsigned int v6; // w8
  int v7; // w21
  __int64 v8; // x20
  __int64 v9; // x9
  __int64 v10; // x8
  unsigned int v11; // w2
  __int64 v12; // x14
  int v13; // w9
  __int64 v14; // x10
  unsigned __int64 v15; // x11
  __int64 v16; // x11
  _BOOL8 v17; // x12
  unsigned __int64 v18; // x13
  __int64 v19; // x14
  __int64 v20; // x16
  __int64 v21; // x15
  __int64 v22; // x13
  __int64 v24; // [xsp+8h] [xbp-48h] BYREF
  int v25; // [xsp+10h] [xbp-40h]
  char v26; // [xsp+14h] [xbp-3Ch]
  char v27; // [xsp+15h] [xbp-3Bh]
  char v28; // [xsp+16h] [xbp-3Ah]
  __int64 v29; // [xsp+18h] [xbp-38h]

  v29 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *(_QWORD *)(a1 + 48);
  v25 = -1;
  v28 = 0;
  v3 = *(_BYTE *)(v2 + 74);
  v27 = 0;
  v26 = v3;
  v24 = *(_QWORD *)(v2 + 40);
  *(_QWORD *)(v2 + 40) = &v24;
  v4 = *(_QWORD *)(a1 + 56);
  v5 = (unsigned __int16)++*(_WORD *)(v4 + 96);
  if ( v5 >= 0xC9 )
    sub_5007A0(a1, "chunk has too many syntax levels", 0);
  do
  {
    v6 = *(_DWORD *)(a1 + 16) - 260;
    if ( v6 <= 0x1B && ((1 << v6) & 0x8010007) != 0 )
      break;
    v7 = sub_4EFACC(a1);
    if ( *(_DWORD *)(a1 + 16) == 59 )
      sub_500A74(a1);
    *(_DWORD *)(*(_QWORD *)(a1 + 48) + 60LL) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 74LL);
  }
  while ( !v7 );
  --*(_WORD *)(*(_QWORD *)(a1 + 56) + 96LL);
  v8 = *(_QWORD *)(v2 + 40);
  v9 = *(_QWORD *)(v2 + 24);
  *(_QWORD *)(v2 + 40) = *(_QWORD *)v8;
  v10 = *(_QWORD *)(v9 + 48);
  v11 = *(unsigned __int8 *)(v8 + 12);
  v12 = *(unsigned __int8 *)(v10 + 74);
  if ( (unsigned int)v12 > v11 )
  {
    v13 = *(_DWORD *)(v10 + 48);
    v14 = *(_QWORD *)(*(_QWORD *)v10 + 48LL);
    v15 = (unsigned __int8)(v12 - 1 - v11) + 1LL;
    if ( v15 >= 2 )
    {
      v17 = (((_BYTE)v12 - 1 - (_BYTE)v11) & 1) == 0;
      v18 = v15 - v17;
      v16 = v12 - (v15 - v17);
      v19 = v12 + 254;
      do
      {
        v20 = *(unsigned __int16 *)(v10 + 196 + 2LL * (unsigned __int8)v19);
        v21 = *(unsigned __int16 *)(v10 + 196 + 2LL * (unsigned __int8)(v19 + 1));
        v18 -= 2LL;
        v19 -= 2;
        *(_DWORD *)(v14 + 16 * v21 + 12) = v13;
        *(_DWORD *)(v14 + 16 * v20 + 12) = v13;
      }
      while ( v18 );
      if ( !v17 )
        goto LABEL_15;
    }
    else
    {
      v16 = *(unsigned __int8 *)(v10 + 74);
    }
    do
    {
      v22 = *(unsigned __int16 *)(v10 + 2LL * (unsigned __int8)--v16 + 196);
      *(_DWORD *)(v14 + 16 * v22 + 12) = v13;
    }
    while ( (unsigned __int8)v16 > v11 );
LABEL_15:
    *(_BYTE *)(v10 + 74) = v11;
  }
  if ( *(_BYTE *)(v8 + 13) )
    sub_4FDB84(v2, 35);
  *(_DWORD *)(v2 + 60) = *(unsigned __int8 *)(v2 + 74);
  return sub_4FDE2C(v2, *(unsigned int *)(v8 + 8));
}

