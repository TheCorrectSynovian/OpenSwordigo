/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000561A68
 * Mangled: sub_561A68
 * Demangled: sub_561A68
 *
 * Callers: 0
 *
 * Callees: 9
 *   0x000000000051F468  sub_51F468
 *   0x0000000000520C14  sub_520C14
 *   0x00000000005210E8  sub_5210E8
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000055EDEC  sub_55EDEC
 *   0x000000000055F390  sub_55F390
 *   0x000000000055F8C0  sub_55F8C0
 *   0x0000000000571950  sub_571950
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 44
 *   insn=0x0000000000561A8C string=0x0000000000561A90 "`"
 *   insn=0x0000000000561A9C string=0x0000000000561AA0 "cj""
 *   insn=0x0000000000561AA8 string=0x0000000000561AAC "`"
 *   insn=0x0000000000561AB4 string=0x0000000000561AB8 "cB"
 *   insn=0x0000000000561AB8 string=0x0000000000561ABC "`\n"
 *   insn=0x0000000000561AC8 string=0x0000000000561ACC "`"
 *   insn=0x0000000000561ACC string=0x0000000000561AD0 "dh""
 *   insn=0x0000000000561AD8 string=0x0000000000561ADC "ub"
 *   insn=0x0000000000561ADC string=0x0000000000561AE0 "a"
 *   insn=0x0000000000561AE4 string=0x0000000000561AE8 "!"
 *   insn=0x0000000000561AEC string=0x0000000000561AF0 "bj!"
 *   insn=0x0000000000561AF4 string=0x0000000000561AF8 "a\n"
 *   insn=0x0000000000561AFC string=0x0000000000561B00 "a"
 *   insn=0x0000000000561B00 string=0x0000000000561B04 "!"
 *   insn=0x0000000000561B08 string=0x0000000000561B0C "bj!"
 *   insn=0x0000000000561B10 string=0x0000000000561B14 "a\n"
 *   insn=0x0000000000561B18 string=0x0000000000561B1C "`"
 *   insn=0x0000000000561B24 string=0x0000000000561B28 "`"
 *   insn=0x0000000000561B28 string=0x0000000000561B2C "o"
 *   insn=0x0000000000561B38 string=0x0000000000561B3C "a"
 *   insn=0x0000000000561B3C string=0x0000000000561B40 "`"
 *   insn=0x0000000000561B40 string=0x0000000000561B44 "`"
 *   insn=0x0000000000561B40 string=0x0000000000561B6C "`"
 *   insn=0x0000000000561B4C string=0x0000000000561B50 "`"
 *   insn=0x0000000000561B50 string=0x0000000000561B54 "0"
 *   insn=0x0000000000561B70 string=0x0000000000561B74 "a"
 *   insn=0x0000000000561B78 string=0x0000000000561B7C "! @"
 *   insn=0x0000000000561B7C string=0x0000000000561B80 "!"
 *   insn=0x0000000000561B80 string=0x0000000000561B84 "$"
 *   insn=0x0000000000561B9C string=0x0000000000561BA0 "a"
 *   insn=0x0000000000561BA0 string=0x0000000000561BA4 "!"
 *   insn=0x0000000000561BA8 string=0x0000000000561BAC "bj!"
 *   insn=0x0000000000561BAC string=0x0000000000561BB0 "E"
 *   insn=0x0000000000561BB8 string=0x0000000000561BBC "!@"
 *   insn=0x0000000000561BC0 string=0x0000000000561BC4 "a"
 *   insn=0x0000000000561BC4 string=0x0000000000561BC8 "5"
 *   insn=0x0000000000561BCC string=0x0000000000561BD0 "`"
 *   insn=0x0000000000561BD0 string=0x0000000000561BD4 "%"
 *   insn=0x0000000000561BD8 string=0x0000000000561BDC "`B"
 *   insn=0x0000000000561BE0 string=0x0000000000561BE4 "u"
 *   insn=0x0000000000561BE4 string=0x0000000000561BE8 "8i"
 *   insn=0x0000000000561BF0 string=0x0000000000561BF4 "W?"
 *   insn=0x0000000000561BF4 string=0x0000000000571950 """
 *   insn=0x0000000000561BF8 string=0x0000000000561BFC "2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_561A68(__int64 *a1, __int64 *a2, const char **a3, unsigned int a4)
{
  __int64 v7; // x0
  __int64 v9; // x0
  _QWORD *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x1

  v7 = a2[2];
  *a1 = v7;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v7 - 24)) = a2[3];
  a1[1] = 0;
  sub_5210E8((__int64)a1 + *(_QWORD *)(v7 - 24), 0);
  v9 = a2[4];
  a1[2] = v9;
  v10 = (__int64 *)((char *)a1 + *(_QWORD *)(v9 - 24) + 16);
  *v10 = a2[5];
  sub_5210E8((__int64)v10, 0);
  v11 = a2[1];
  *a1 = v11;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v11 - 24)) = a2[6];
  a1[2] = a2[7];
  v12 = *a2;
  *a1 = *a2;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v12 - 24)) = a2[8];
  a1[2] = a2[9];
  sub_55EDEC((__int64)(a1 + 3));
  sub_5210E8((__int64)a1 + *(_QWORD *)(*a1 - 24), (__int64)(a1 + 3));
  if ( sub_55F8C0((__int64)(a1 + 3), *a3, a4) )
    return sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24), 0);
  else
    return sub_520C14((__int64)a1 + *(_QWORD *)(*a1 - 24), *(_DWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24) + 32) | 4u);
}

