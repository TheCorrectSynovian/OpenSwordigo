/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053F19C
 * Mangled: sub_53F19C
 * Demangled: sub_53F19C
 *
 * Callers: 4
 *   0x000000000053CB20  sub_53CB20
 *   0x000000000053F0E4  sub_53F0E4
 *   0x000000000054E6D0  sub_54E6D0
 *   0x000000000054E8C8  sub_54E8C8
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 93
 *   insn=0x000000000053F1B0 string=0x000000000053F1B4 "?"
 *   insn=0x000000000053F1B8 string=0x000000000053F1BC " "
 *   insn=0x000000000053F1C0 string=0x000000000053F1C4 " H"
 *   insn=0x000000000053F1C8 string=0x000000000053F1CC " L"
 *   insn=0x000000000053F1CC string=0x000000000053F1D0 " "
 *   insn=0x000000000053F1D0 string=0x000000000053F1D4 "?"
 *   insn=0x000000000053F1D4 string=0x000000000053F1D8 ""@"
 *   insn=0x000000000053F1D8 string=0x000000000053F1DC "$"
 *   insn=0x000000000053F1E4 string=0x000000000059E538 "-+xX0123456789abcdef0123456789ABCDEF"
 *   insn=0x000000000053F1E8 string=0x000000000053F1EC "_"
 *   insn=0x000000000053F1EC string=0x000000000053F1F0 "b"
 *   insn=0x000000000053F1FC string=0x000000000053F200 "*"
 *   insn=0x000000000053F200 string=0x000000000053F204 ")"
 *   insn=0x000000000053F204 string=0x000000000053F208 "("
 *   insn=0x000000000053F208 string=0x000000000053F20C "`"
 *   insn=0x000000000053F20C string=0x000000000053F210 "+@"
 *   insn=0x000000000053F210 string=0x000000000053F214 "'"
 *   insn=0x000000000053F214 string=0x000000000053F218 "&"
 *   insn=0x000000000053F218 string=0x000000000053F21C " "
 *   insn=0x000000000053F224 string=0x000000000053F228 "#"
 *   insn=0x000000000053F228 string=0x000000000053F22C "!"
 *   insn=0x000000000053F234 string=0x000000000053F238 "C"
 *   insn=0x000000000053F238 string=0x000000000053F23C "A"
 *   insn=0x000000000053F23C string=0x000000000053F240 """
 *   insn=0x000000000053F244 string=0x000000000053F248 "`"
 *   insn=0x000000000053F248 string=0x000000000059E548 "cdef0123456789ABCDEF"
 *   insn=0x000000000053F250 string=0x000000000053F254 "#"
 *   insn=0x000000000053F254 string=0x000000000053F258 "!"
 *   insn=0x000000000053F260 string=0x000000000053F264 "c"
 *   insn=0x000000000053F274 string=0x000000000053F278 " "
 *   insn=0x000000000053F274 string=0x000000000059E558 "CDEF"
 *   insn=0x000000000053F27C string=0x000000000053F280 " "
 *   insn=0x000000000053F27C string=0x000000000059E559 "DEF"
 *   insn=0x000000000053F284 string=0x000000000053F288 " "
 *   insn=0x000000000053F284 string=0x000000000059E55A "EF"
 *   insn=0x000000000053F28C string=0x000000000053F290 " "
 *   insn=0x000000000053F28C string=0x000000000059E55B "F"
 *   insn=0x000000000053F290 string=0x000000000053F294 " "
 *   insn=0x000000000053F29C string=0x000000000053F2A0 "@h"
 *   insn=0x000000000053F29C string=0x000000000059E560 "-+xX0123456789abcdefABCDEF"
 *   insn=0x000000000053F2A8 string=0x000000000053F2AC "  "
 *   insn=0x000000000053F2A8 string=0x000000000053F2B8 "@"
 *   insn=0x000000000053F2AC string=0x000000000053F2B0 "_"
 *   insn=0x000000000053F2B8 string=0x000000000053F2BC "%"
 *   insn=0x000000000053F2BC string=0x000000000053F2C0 "#"
 *   insn=0x000000000053F2C0 string=0x000000000053F2C4 " @"
 *   insn=0x000000000053F2CC string=0x000000000053F2D0 "#"
 *   insn=0x000000000053F2D0 string=0x000000000053F2D4 "!"
 *   insn=0x000000000053F2E4 string=0x000000000053F2E8 "b"
 *   insn=0x000000000053F2EC string=0x000000000053F2F0 "@@@9  "
 *   insn=0x000000000053F2F0 string=0x000000000053F2F4 "  "
 *   insn=0x000000000053F2F0 string=0x000000000059E570 "cdefABCDEF"
 *   insn=0x000000000053F2F4 string=0x000000000053F2F8 "@D@9 $"
 *   insn=0x000000000053F2F8 string=0x000000000053F2FC " $"
 *   insn=0x000000000053F2F8 string=0x000000000059E571 "defABCDEF"
 *   insn=0x000000000053F2FC string=0x000000000053F300 "@H@9 ("
 *   insn=0x000000000053F300 string=0x000000000053F304 " ("
 *   insn=0x000000000053F300 string=0x000000000059E572 "efABCDEF"
 *   insn=0x000000000053F304 string=0x000000000053F308 "@L@9 ,"
 *   insn=0x000000000053F308 string=0x000000000053F30C " ,"
 *   insn=0x000000000053F308 string=0x000000000059E573 "fABCDEF"
 *   insn=0x000000000053F30C string=0x000000000053F310 "@P@9 0"
 *   insn=0x000000000053F310 string=0x000000000053F314 " 0"
 *   insn=0x000000000053F310 string=0x000000000059E574 "ABCDEF"
 *   insn=0x000000000053F314 string=0x000000000053F318 "@T@9 4"
 *   insn=0x000000000053F318 string=0x000000000053F31C " 4"
 *   insn=0x000000000053F318 string=0x000000000059E575 "BCDEF"
 *   insn=0x000000000053F31C string=0x000000000053F320 "@X@9 8"
 *   insn=0x000000000053F320 string=0x000000000053F324 " 8"
 *   insn=0x000000000053F320 string=0x000000000059E576 "CDEF"
 *   insn=0x000000000053F324 string=0x000000000053F328 "@\@9 <"
 *   insn=0x000000000053F328 string=0x000000000053F32C " <"
 *   insn=0x000000000053F328 string=0x000000000059E577 "DEF"
 *   insn=0x000000000053F32C string=0x000000000053F330 "@`@9 @"
 *   insn=0x000000000053F330 string=0x000000000053F334 " @"
 *   insn=0x000000000053F330 string=0x000000000059E578 "EF"
 *   insn=0x000000000053F334 string=0x000000000053F338 "@d@9 D"
 *   insn=0x000000000053F338 string=0x000000000053F33C " D"
 *   insn=0x000000000053F338 string=0x000000000059E579 "F"
 *   insn=0x000000000053F340 string=0x000000000059E680 "t"
 *   insn=0x000000000053F348 string=0x000000000053F34C " "
 *   insn=0x000000000053F350 string=0x000000000053F354 " "
 *   insn=0x000000000053F358 string=0x000000000053F360 " "
 *   insn=0x000000000053F358 string=0x000000000059E698 "f"
 *   insn=0x000000000053F364 string=0x000000000053F368 "  "
 *   insn=0x000000000053F374 string=0x000000000053F378 "Ch`8"
 *   insn=0x000000000053F398 string=0x000000000053F39C "CD"
 *   insn=0x000000000053F3B4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000053F3B8 string=0x000000000053F3BC "B"
 *   insn=0x000000000053F3C0 string=0x000000000053F3C4 "B"
 *   insn=0x000000000053F3C8 string=0x000000000053F3CC "B@"
 *   insn=0x000000000053F3F4 string=0x000000000053F3F8 "`\n"
 *   insn=0x000000000053F3F8 string=0x000000000053F3FC "m"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53F19C(__int64 a1)
{
  uint32x4_t *v1; // x1
  uint32x4_t *v2; // x2
  char *v3; // x4
  char *v4; // x5
  uint16x8_t v5; // q1
  uint16x8_t v6; // q0
  uint8x16_t v7; // q0
  uint16x8_t v8; // q1
  uint16x8_t v9; // q0
  unsigned __int8 *v10; // x2
  uint16x8_t v11; // q1
  uint16x8_t v12; // q0
  __int64 result; // x0
  __int64 j; // x0
  int v15; // w3
  __int64 i; // x0
  unsigned __int32 v17; // w3
  __int64 v19; // x0

  v1 = *(uint32x4_t **)(a1 + 16);
  if ( !v1 )
  {
    v19 = operator new(0x150u);
    *(_DWORD *)(v19 + 8) = 0;
    v1 = (uint32x4_t *)v19;
    *(_QWORD *)(v19 + 16) = 0;
    *(_QWORD *)(v19 + 24) = 0;
    *(_QWORD *)v19 = off_6B7C80;
    *(_BYTE *)(v19 + 32) = 0;
    *(_QWORD *)(v19 + 40) = 0;
    *(_QWORD *)(v19 + 48) = 0;
    *(_QWORD *)(v19 + 56) = 0;
    *(_QWORD *)(v19 + 64) = 0;
    *(_DWORD *)(v19 + 72) = 0;
    *(_DWORD *)(v19 + 76) = 0;
    *(_BYTE *)(v19 + 328) = 0;
    *(_QWORD *)(a1 + 16) = v19;
  }
  v1[1].n128_u64[1] = 0;
  v1[1].n128_u64[0] = (unsigned __int64)"";
  v1[4].n128_u32[2] = 46;
  v1[4].n128_u32[3] = 44;
  v1[2].n128_u8[0] = 0;
  v2 = v1 + 5;
  v3 = (char *)&v1[14];
  v4 = off_6E8938[0];
  if ( (char *)&v1[5] < off_6E8938[0] + 36 && off_6E8938[0] < v3 )
  {
    for ( i = 0; i != 36; ++i )
    {
      v17 = (unsigned __int8)v4[i];
      v2->n128_u32[0] = v17;
      v2 = (uint32x4_t *)((char *)v2 + 4);
    }
  }
  else
  {
    v5 = vmovl_u8(*(uint8x8_t *)off_6E8938[0]);
    v6 = vmovl_high_u8(*(uint8x16_t *)off_6E8938[0]);
    *v2 = vmovl_u16((uint16x4_t)v5.n128_u64[0]);
    v1[6] = vmovl_high_u16(v5);
    v1[7] = vmovl_u16((uint16x4_t)v6.n128_u64[0]);
    v1[8] = vmovl_high_u16(v6);
    v7 = *((uint8x16_t *)v4 + 1);
    v8 = vmovl_u8((uint8x8_t)v7.n128_u64[0]);
    v9 = vmovl_high_u8(v7);
    v1[9] = vmovl_u16((uint16x4_t)v8.n128_u64[0]);
    v1[10] = vmovl_high_u16(v8);
    v1[11] = vmovl_u16((uint16x4_t)v9.n128_u64[0]);
    v1[12] = vmovl_high_u16(v9);
    v1[13].n128_u32[0] = (unsigned __int8)v4[32];
    v1[13].n128_u32[1] = (unsigned __int8)v4[33];
    v1[13].n128_u32[2] = (unsigned __int8)v4[34];
    v1[13].n128_u32[3] = (unsigned __int8)v4[35];
  }
  v10 = (unsigned __int8 *)off_6E8930[0];
  if ( v3 < off_6E8930[0] + 26 && off_6E8930[0] < &v1[20].n128_i8[8] )
  {
    for ( j = 0; j != 26; ++j )
    {
      v15 = v10[j];
      *(_DWORD *)v3 = v15;
      v3 += 4;
    }
  }
  else
  {
    v11 = vmovl_u8(*(uint8x8_t *)off_6E8930[0]);
    v12 = vmovl_high_u8(*(uint8x16_t *)off_6E8930[0]);
    *(uint32x4_t *)v3 = vmovl_u16((uint16x4_t)v11.n128_u64[0]);
    v1[15] = vmovl_high_u16(v11);
    v1[16] = vmovl_u16((uint16x4_t)v12.n128_u64[0]);
    v1[17] = vmovl_high_u16(v12);
    v1[18].n128_u32[0] = v10[16];
    v1[18].n128_u32[1] = v10[17];
    v1[18].n128_u32[2] = v10[18];
    v1[18].n128_u32[3] = v10[19];
    v1[19].n128_u32[0] = v10[20];
    v1[19].n128_u32[1] = v10[21];
    v1[19].n128_u32[2] = v10[22];
    v1[19].n128_u32[3] = v10[23];
    v1[20].n128_u32[0] = v10[24];
    v1[20].n128_u32[1] = v10[25];
  }
  v1[2].n128_u64[1] = (unsigned __int64)"t";
  v1[3].n128_u64[0] = 4;
  v1[3].n128_u64[1] = (unsigned __int64)"f";
  result = 5;
  v1[4].n128_u64[0] = 5;
  return result;
}

