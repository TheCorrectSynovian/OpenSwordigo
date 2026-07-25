/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054C268
 * Mangled: sub_54C268
 * Demangled: sub_54C268
 *
 * Callers: 2
 *   0x000000000054EBF4  sub_54EBF4
 *   0x000000000054EC54  sub_54EC54
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 98
 *   insn=0x000000000054C280 string=0x000000000059EA68 "%"
 *   insn=0x000000000054C284 string=0x000000000054C288 " "
 *   insn=0x000000000054C288 string=0x000000000054C28C " "
 *   insn=0x000000000054C28C string=0x000000000054C290 "c"
 *   insn=0x000000000054C290 string=0x000000000054C294 " ("
 *   insn=0x000000000054C298 string=0x000000000054C2A0 " ,"
 *   insn=0x000000000054C298 string=0x000000000059EAB0 "S"
 *   insn=0x000000000054C2A4 string=0x000000000054C2A8 "#"
 *   insn=0x000000000054C2A4 string=0x000000000059EAD0 "M"
 *   insn=0x000000000054C2AC string=0x000000000054C2B0 " 0"
 *   insn=0x000000000054C2B4 string=0x000000000054C2B8 "#"
 *   insn=0x000000000054C2B4 string=0x000000000059EAF0 "T"
 *   insn=0x000000000054C2BC string=0x000000000054C2C0 " 4"
 *   insn=0x000000000054C2C4 string=0x000000000059EB10 "W"
 *   insn=0x000000000054C2C8 string=0x000000000059EA90 "A"
 *   insn=0x000000000054C2CC string=0x000000000054C2D0 " 8"
 *   insn=0x000000000054C2D4 string=0x000000000054C2D8 "c@*"
 *   insn=0x000000000054C2D4 string=0x000000000059EB38 "T"
 *   insn=0x000000000054C2DC string=0x000000000054C2E0 " <"
 *   insn=0x000000000054C2E4 string=0x000000000054C2E8 "# "
 *   insn=0x000000000054C2E4 string=0x000000000059EB60 "F"
 *   insn=0x000000000054C2EC string=0x000000000054C2F0 " @"
 *   insn=0x000000000054C2F4 string=0x000000000059EB80 "S"
 *   insn=0x000000000054C2F8 string=0x000000000059EA40 "%"
 *   insn=0x000000000054C2FC string=0x000000000054C300 " D"
 *   insn=0x000000000054C304 string=0x000000000059EBA8 "S"
 *   insn=0x000000000054C308 string=0x000000000059EC90 "M"
 *   insn=0x000000000054C30C string=0x000000000054C310 " H"
 *   insn=0x000000000054C314 string=0x000000000059EBB8 "M"
 *   insn=0x000000000054C318 string=0x000000000059EAA0 "P"
 *   insn=0x000000000054C31C string=0x000000000054C320 " L"
 *   insn=0x000000000054C324 string=0x000000000059EBC8 "T"
 *   insn=0x000000000054C32C string=0x000000000054C330 " P"
 *   insn=0x000000000054C334 string=0x000000000054C338 "B@2"
 *   insn=0x000000000054C334 string=0x000000000059EBD8 "W"
 *   insn=0x000000000054C33C string=0x000000000054C340 " T"
 *   insn=0x000000000054C344 string=0x000000000054C348 "$"
 *   insn=0x000000000054C344 string=0x000000000059EBE8 "T"
 *   insn=0x000000000054C34C string=0x000000000054C350 " X"
 *   insn=0x000000000054C354 string=0x000000000054C358 "$"
 *   insn=0x000000000054C354 string=0x000000000059EBF8 "F"
 *   insn=0x000000000054C35C string=0x000000000054C360 " \"
 *   insn=0x000000000054C364 string=0x000000000054C368 "c"
 *   insn=0x000000000054C364 string=0x000000000059EC08 "S"
 *   insn=0x000000000054C36C string=0x000000000054C370 " `"
 *   insn=0x000000000054C374 string=0x000000000054C378 "#$"
 *   insn=0x000000000054C374 string=0x000000000059EC18 "J"
 *   insn=0x000000000054C37C string=0x000000000054C380 " d"
 *   insn=0x000000000054C384 string=0x000000000054C388 ""t"
 *   insn=0x000000000054C384 string=0x000000000059EC38 "F"
 *   insn=0x000000000054C38C string=0x000000000054C390 " h"
 *   insn=0x000000000054C394 string=0x000000000054C39C " l"
 *   insn=0x000000000054C394 string=0x000000000059EC60 "M"
 *   insn=0x000000000054C3A0 string=0x000000000054C3A8 " p"
 *   insn=0x000000000054C3A0 string=0x000000000059EC78 "A"
 *   insn=0x000000000054C3AC string=0x000000000054C3B4 " x"
 *   insn=0x000000000054C3AC string=0x000000000059ECA0 "J"
 *   insn=0x000000000054C3B8 string=0x000000000054C3C0 " |"
 *   insn=0x000000000054C3B8 string=0x000000000059ECB8 "J"
 *   insn=0x000000000054C3C4 string=0x000000000054C3CC " "
 *   insn=0x000000000054C3C4 string=0x000000000059ECD0 "A"
 *   insn=0x000000000054C3D0 string=0x000000000054C3D8 " "
 *   insn=0x000000000054C3D0 string=0x000000000059ECF0 "S"
 *   insn=0x000000000054C3DC string=0x000000000054C3E4 " "
 *   insn=0x000000000054C3DC string=0x000000000059ED18 "O"
 *   insn=0x000000000054C3E8 string=0x000000000054C3F0 " "
 *   insn=0x000000000054C3E8 string=0x000000000059ED38 "N"
 *   insn=0x000000000054C3F4 string=0x000000000054C3F8 """
 *   insn=0x000000000054C3F4 string=0x000000000059ED60 "D"
 *   insn=0x000000000054C3FC string=0x000000000054C400 " "
 *   insn=0x000000000054C404 string=0x000000000059ED88 "J"
 *   insn=0x000000000054C40C string=0x000000000054C410 " "
 *   insn=0x000000000054C414 string=0x000000000054C41C " "
 *   insn=0x000000000054C414 string=0x000000000059ED98 "F"
 *   insn=0x000000000054C420 string=0x000000000054C428 " "
 *   insn=0x000000000054C420 string=0x000000000059EDA8 "M"
 *   insn=0x000000000054C42C string=0x000000000054C434 " "
 *   insn=0x000000000054C42C string=0x000000000059EDB8 "A"
 *   insn=0x000000000054C438 string=0x000000000054C440 " "
 *   insn=0x000000000054C438 string=0x000000000059EDC8 "J"
 *   insn=0x000000000054C444 string=0x000000000054C44C " "
 *   insn=0x000000000054C444 string=0x000000000059EDD8 "J"
 *   insn=0x000000000054C450 string=0x000000000054C458 " "
 *   insn=0x000000000054C450 string=0x000000000059EDE8 "A"
 *   insn=0x000000000054C45C string=0x000000000054C464 " "
 *   insn=0x000000000054C45C string=0x000000000059EDF8 "S"
 *   insn=0x000000000054C468 string=0x000000000054C470 " "
 *   insn=0x000000000054C468 string=0x000000000059EE08 "O"
 *   insn=0x000000000054C474 string=0x000000000054C47C " "
 *   insn=0x000000000054C474 string=0x000000000059EE18 "N"
 *   insn=0x000000000054C480 string=0x000000000054C488 " "
 *   insn=0x000000000054C480 string=0x000000000059EE28 "D"
 *   insn=0x000000000054C498 string=0x000000000054C49C "Q"
 *   insn=0x000000000054C49C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000054C4A8 string=0x000000000054C4AC "B"
 *   insn=0x000000000054C4B0 string=0x000000000054C4B4 "B@"
 *   insn=0x000000000054C574 string=0x000000000054C578 "`\n"
 *   insn=0x000000000054C578 string=0x000000000054C57C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const char *__fastcall sub_54C268(__int64 a1)
{
  _QWORD *v1; // x1
  const char *result; // x0
  __int64 v4; // x0

  v1 = *(_QWORD **)(a1 + 16);
  if ( !v1 )
  {
    v4 = operator new(0x190u);
    *(_DWORD *)(v4 + 8) = 0;
    v1 = (_QWORD *)v4;
    *(_QWORD *)(v4 + 16) = 0;
    *(_QWORD *)(v4 + 24) = 0;
    *(_QWORD *)v4 = off_6B79C0;
    *(_QWORD *)(v4 + 32) = 0;
    *(_QWORD *)(v4 + 40) = 0;
    *(_QWORD *)(v4 + 48) = 0;
    *(_QWORD *)(v4 + 56) = 0;
    *(_QWORD *)(v4 + 64) = 0;
    *(_QWORD *)(v4 + 72) = 0;
    *(_QWORD *)(v4 + 80) = 0;
    *(_QWORD *)(v4 + 88) = 0;
    *(_QWORD *)(v4 + 96) = 0;
    *(_QWORD *)(v4 + 104) = 0;
    *(_QWORD *)(v4 + 112) = 0;
    *(_QWORD *)(v4 + 120) = 0;
    *(_QWORD *)(v4 + 128) = 0;
    *(_QWORD *)(v4 + 136) = 0;
    *(_QWORD *)(v4 + 144) = 0;
    *(_QWORD *)(v4 + 152) = 0;
    *(_QWORD *)(v4 + 160) = 0;
    *(_QWORD *)(v4 + 168) = 0;
    *(_QWORD *)(v4 + 176) = 0;
    *(_QWORD *)(v4 + 184) = 0;
    *(_QWORD *)(v4 + 192) = 0;
    *(_QWORD *)(v4 + 200) = 0;
    *(_QWORD *)(v4 + 208) = 0;
    *(_QWORD *)(v4 + 216) = 0;
    *(_QWORD *)(v4 + 224) = 0;
    *(_QWORD *)(v4 + 232) = 0;
    *(_QWORD *)(v4 + 240) = 0;
    *(_QWORD *)(v4 + 248) = 0;
    *(_QWORD *)(v4 + 256) = 0;
    *(_QWORD *)(v4 + 264) = 0;
    *(_QWORD *)(v4 + 272) = 0;
    *(_QWORD *)(v4 + 280) = 0;
    *(_QWORD *)(v4 + 288) = 0;
    *(_QWORD *)(v4 + 296) = 0;
    *(_QWORD *)(v4 + 304) = 0;
    *(_QWORD *)(v4 + 312) = 0;
    *(_QWORD *)(v4 + 320) = 0;
    *(_QWORD *)(v4 + 328) = 0;
    *(_QWORD *)(v4 + 336) = 0;
    *(_QWORD *)(v4 + 344) = 0;
    *(_QWORD *)(v4 + 352) = 0;
    *(_QWORD *)(v4 + 360) = 0;
    *(_QWORD *)(v4 + 368) = 0;
    *(_QWORD *)(v4 + 376) = 0;
    *(_QWORD *)(v4 + 384) = 0;
    *(_BYTE *)(v4 + 392) = 0;
    *(_QWORD *)(a1 + 16) = v4;
  }
  v1[6] = &unk_59EA98;
  v1[7] = &unk_59EA98;
  v1[10] = &unk_59EA98;
  v1[11] = "S";
  v1[4] = "%";
  v1[12] = "M";
  v1[5] = "%";
  v1[13] = "T";
  v1[14] = "W";
  v1[15] = "T";
  v1[8] = "A";
  v1[16] = "F";
  v1[17] = "S";
  v1[18] = "S";
  v1[19] = "M";
  v1[20] = "T";
  v1[21] = "W";
  v1[2] = "%";
  v1[22] = "T";
  v1[3] = "%";
  v1[23] = "F";
  v1[24] = "S";
  v1[9] = "P";
  v1[25] = "J";
  v1[29] = "M";
  v1[26] = "F";
  v1[27] = "M";
  v1[28] = "A";
  v1[30] = "J";
  v1[31] = "J";
  v1[32] = "A";
  v1[33] = "S";
  v1[34] = "O";
  v1[35] = "N";
  v1[41] = "M";
  v1[36] = "D";
  v1[37] = "J";
  v1[38] = "F";
  v1[39] = "M";
  v1[40] = "A";
  v1[42] = "J";
  v1[43] = "J";
  v1[44] = "A";
  v1[45] = "S";
  v1[46] = "O";
  v1[47] = "N";
  result = "D";
  v1[48] = "D";
  return result;
}

