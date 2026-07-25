/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EBCF4
 * Mangled: sub_4EBCF4
 * Demangled: sub_4EBCF4
 *
 * Callers: 3
 *   0x00000000004EC63C  sub_4EC63C
 *   0x00000000004EC700  lua_resume(lua_State *,int)
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Callees: 14
 *   0x00000000004EB03C  sub_4EB03C
 *   0x00000000004EB320  sub_4EB320
 *   0x00000000004EB814  sub_4EB814
 *   0x00000000004EBA24  sub_4EBA24
 *   0x00000000004EBBD4  sub_4EBBD4
 *   0x00000000004EC3A4  sub_4EC3A4
 *   0x00000000004EDCB0  sub_4EDCB0
 *   0x00000000004EED74  sub_4EED74
 *   0x00000000004EEDE0  sub_4EEDE0
 *   0x00000000004F356C  sub_4F356C
 *   0x00000000004F3DB4  sub_4F3DB4
 *   0x00000000004F49E8  sub_4F49E8
 *   0x00000000004F4ADC  sub_4F4ADC
 *   0x00000000004F4ED4  sub_4F4ED4
 *
 * Referenced strings: 204
 *   insn=0x00000000004EBD24 string=0x00000000004EBD28 "a"
 *   insn=0x00000000004EBD28 string=0x00000000004EBD2C "x"
 *   insn=0x00000000004EBD2C string=0x00000000004EBD30 "2"
 *   insn=0x00000000004EBD30 string=0x00000000004EBDF8 "i"
 *   insn=0x00000000004EBD3C string=0x00000000004EBD40 "e$"
 *   insn=0x00000000004EBD40 string=0x00000000004F4ED4 "(@"
 *   insn=0x00000000004EBD58 string=0x00000000004EBD5C "b"
 *   insn=0x00000000004EBD58 string=0x00000000004EBD70 "h\n@"
 *   insn=0x00000000004EBD5C string=0x000000000059A362 "call"
 *   insn=0x00000000004EBD74 string=0x00000000004EBD78 "I"
 *   insn=0x00000000004EBD78 string=0x00000000004EBDA0 "i"
 *   insn=0x00000000004EBD7C string=0x00000000004EBD80 "*_"
 *   insn=0x00000000004EBD80 string=0x00000000004EBD84 ""
 *   insn=0x00000000004EBD84 string=0x00000000004EBD88 "\n"
 *   insn=0x00000000004EBD88 string=0x00000000004EBD8C "?"
 *   insn=0x00000000004EBD8C string=0x00000000004EBD90 "\t"
 *   insn=0x00000000004EBD94 string=0x00000000004EBD98 "H"
 *   insn=0x00000000004EBD98 string=0x00000000004EBD9C "h\n@"
 *   insn=0x00000000004EBDA4 string=0x00000000004EBDA8 "("
 *   insn=0x00000000004EBDAC string=0x00000000004EBDB0 ","
 *   insn=0x00000000004EBDB0 string=0x00000000004EBDB4 "hZ@"
 *   insn=0x00000000004EBDB0 string=0x00000000004EBDD4 "h\n@"
 *   insn=0x00000000004EBDB8 string=0x00000000004EBDBC "k"
 *   insn=0x00000000004EBDD4 string=0x00000000004EBDD8 "A"
 *   insn=0x00000000004EBDD8 string=0x00000000004EBDDC "h\n"
 *   insn=0x00000000004EBDDC string=0x00000000004EBDE0 "h"@"
 *   insn=0x00000000004EBDFC string=0x00000000004EBE00 "k"@"
 *   insn=0x00000000004EBE00 string=0x00000000004EBE04 "*"
 *   insn=0x00000000004EBE04 string=0x00000000004EBE08 "\t)@9"
 *   insn=0x00000000004EBE0C string=0x00000000004EBE10 "i"
 *   insn=0x00000000004EBE10 string=0x00000000004EBE14 "h"
 *   insn=0x00000000004EBE14 string=0x00000000004EBE18 "i\n@"
 *   insn=0x00000000004EBE18 string=0x00000000004EBE1C ""
 *   insn=0x00000000004EBE24 string=0x00000000004EBE28 "hZ@"
 *   insn=0x00000000004EBE24 string=0x00000000004EBE78 "h"
 *   insn=0x00000000004EBE3C string=0x00000000004EBE40 "i"
 *   insn=0x00000000004EBE40 string=0x00000000004EBE44 "j\n@"
 *   insn=0x00000000004EBE44 string=0x00000000004EBE48 "("
 *   insn=0x00000000004EBE48 string=0x00000000004EBE4C ")"
 *   insn=0x00000000004EBE4C string=0x00000000004EBE50 "?Q("
 *   insn=0x00000000004EBE54 string=0x00000000004EBE58 "iZ@"
 *   insn=0x00000000004EBE54 string=0x00000000004EBED4 "\t"
 *   insn=0x00000000004EBE58 string=0x00000000004EBE5C "?"
 *   insn=0x00000000004EBE5C string=0x00000000004EBE60 "J"
 *   insn=0x00000000004EBE60 string=0x00000000004EBE64 "!"
 *   insn=0x00000000004EBE60 string=0x00000000004EBEC8 "!y"
 *   insn=0x00000000004EBE78 string=0x00000000004EBE7C "i&@"
 *   insn=0x00000000004EBE84 string=0x00000000004EBE88 "v^"
 *   insn=0x00000000004EBE84 string=0x00000000004EC040 "\t"
 *   insn=0x00000000004EBE88 string=0x00000000004EBE8C "("
 *   insn=0x00000000004EBE90 string=0x00000000004EBE94 "*("
 *   insn=0x00000000004EBE94 string=0x00000000004EBE98 "u*@"
 *   insn=0x00000000004EBEAC string=0x00000000004EBEB0 "#"
 *   insn=0x00000000004EBEC0 string=0x00000000004EBEC4 "N"
 *   insn=0x00000000004EBEC4 string=0x00000000004EBFFC "i"
 *   insn=0x00000000004EBED4 string=0x00000000004EBED8 "("
 *   insn=0x00000000004EBED8 string=0x00000000004EBEDC "6"
 *   insn=0x00000000004EBEDC string=0x00000000004EBEE0 ""
 *   insn=0x00000000004EBEE0 string=0x00000000004EBEE4 "w\n@"
 *   insn=0x00000000004EBEE0 string=0x00000000004EBF80 "("
 *   insn=0x00000000004EBEE4 string=0x00000000004EBEE8 ";"
 *   insn=0x00000000004EBEEC string=0x00000000004EBEF0 ")"
 *   insn=0x00000000004EBEF0 string=0x00000000004EBEF4 "k"
 *   insn=0x00000000004EBEF4 string=0x00000000004EBEF8 "."
 *   insn=0x00000000004EBF00 string=0x00000000004EBF04 "I"
 *   insn=0x00000000004EBF04 string=0x00000000004EBF08 "l"
 *   insn=0x00000000004EBF08 string=0x00000000004EBF0C "i"
 *   insn=0x00000000004EBF10 string=0x00000000004EBF14 ")"
 *   insn=0x00000000004EBF1C string=0x00000000004EBF4C "J!"
 *   insn=0x00000000004EBF20 string=0x00000000004EBF24 "K"
 *   insn=0x00000000004EBF4C string=0x00000000004EBF50 "k"
 *   insn=0x00000000004EBF50 string=0x00000000004EBF54 "k"
 *   insn=0x00000000004EBF54 string=0x00000000004EBF58 "_"
 *   insn=0x00000000004EBF60 string=0x00000000004EBF64 "7A"
 *   insn=0x00000000004EBF68 string=0x00000000004EBF6C "w\n"
 *   insn=0x00000000004EBF70 string=0x00000000004EBFA0 "h"
 *   insn=0x00000000004EBF74 string=0x00000000004EBF78 "["
 *   insn=0x00000000004EBF80 string=0x00000000004EBF84 "i\n@"
 *   insn=0x00000000004EBF8C string=0x00000000004EBF90 "?"
 *   insn=0x00000000004EBF90 string=0x00000000004EBF94 "\t"
 *   insn=0x00000000004EBF94 string=0x00000000004EBF98 "h\n"
 *   insn=0x00000000004EBF94 string=0x00000000004EC214 "j"
 *   insn=0x00000000004EBFA4 string=0x00000000004EBFA8 "\t!G"
 *   insn=0x00000000004EBFB4 string=0x00000000004EBFC4 "i"
 *   insn=0x00000000004EBFB8 string=0x00000000004EBFBC "="
 *   insn=0x00000000004EBFBC string=0x00000000004EBFC0 "w\n@"
 *   insn=0x00000000004EBFC4 string=0x00000000004EBFC8 "("
 *   insn=0x00000000004EBFCC string=0x00000000004EBFD0 ")"
 *   insn=0x00000000004EBFD0 string=0x00000000004EBFD4 "?Q("
 *   insn=0x00000000004EBFD8 string=0x00000000004EBFDC "iZ@"
 *   insn=0x00000000004EBFDC string=0x00000000004EBFE0 "?"
 *   insn=0x00000000004EBFE4 string=0x00000000004EBFE8 "!"
 *   insn=0x00000000004EBFE4 string=0x00000000004EC0C0 "!y"
 *   insn=0x00000000004EBFE8 string=0x00000000004EBFEC "6"
 *   insn=0x00000000004EBFF0 string=0x00000000004EBFF4 "{"
 *   insn=0x00000000004EBFFC string=0x00000000004EC000 "\n"
 *   insn=0x00000000004EC000 string=0x00000000004EC004 ""
 *   insn=0x00000000004EC004 string=0x00000000004EC008 ""
 *   insn=0x00000000004EC008 string=0x00000000004EC00C "+"
 *   insn=0x00000000004EC00C string=0x00000000004EC010 "h"
 *   insn=0x00000000004EC010 string=0x00000000004EC014 "("
 *   insn=0x00000000004EC014 string=0x00000000004EC018 ""
 *   insn=0x00000000004EC01C string=0x00000000004EC020 "w^"
 *   insn=0x00000000004EC020 string=0x00000000004EC024 "h"
 *   insn=0x00000000004EC028 string=0x00000000004EC02C "a"
 *   insn=0x00000000004EC02C string=0x0000000000599A68 "stack overflow"
 *   insn=0x00000000004EC040 string=0x00000000004EC044 "i"
 *   insn=0x00000000004EC044 string=0x00000000004EC048 "\n"
 *   insn=0x00000000004EC048 string=0x00000000004EC04C "J"
 *   insn=0x00000000004EC04C string=0x00000000004EC050 "KA"
 *   insn=0x00000000004EC050 string=0x00000000004EC054 ""
 *   insn=0x00000000004EC054 string=0x00000000004EC058 "j\n@"
 *   insn=0x00000000004EC058 string=0x00000000004EC05C "k"
 *   insn=0x00000000004EC060 string=0x00000000004EC064 "J"
 *   insn=0x00000000004EC064 string=0x00000000004EC068 "\n"
 *   insn=0x00000000004EC068 string=0x00000000004EC06C "h"
 *   insn=0x00000000004EC070 string=0x00000000004EC088 "("
 *   insn=0x00000000004EC080 string=0x00000000004EC084 "i"
 *   insn=0x00000000004EC08C string=0x00000000004EC090 ""
 *   insn=0x00000000004EC090 string=0x00000000004EC094 ""
 *   insn=0x00000000004EC09C string=0x00000000004EC0A0 "h\n@"
 *   insn=0x00000000004EC0C4 string=0x00000000004EC0C8 "W"
 *   insn=0x00000000004EC0D4 string=0x00000000004EC0D8 "7"
 *   insn=0x00000000004EC0F8 string=0x00000000004EC0FC "h"
 *   insn=0x00000000004EC100 string=0x00000000004EC104 "|\n@"
 *   insn=0x00000000004EC114 string=0x00000000004EC118 "4""
 *   insn=0x00000000004EC11C string=0x00000000004EC120 "\t"
 *   insn=0x00000000004EC128 string=0x00000000004EC12C "\t"
 *   insn=0x00000000004EC12C string=0x00000000004EC130 "\t@"
 *   insn=0x00000000004EC130 string=0x00000000004EC134 ""
 *   insn=0x00000000004EC134 string=0x00000000004EC138 "a"
 *   insn=0x00000000004EC13C string=0x000000000058F115 "n"
 *   insn=0x00000000004EC148 string=0x00000000004EC14C ""
 *   insn=0x00000000004EC158 string=0x00000000004EC15C "`""
 *   insn=0x00000000004EC170 string=0x00000000004EC174 ""
 *   insn=0x00000000004EC174 string=0x00000000004EC178 "w\n@"
 *   insn=0x00000000004EC184 string=0x00000000004EC188 "i\n"
 *   insn=0x00000000004EC188 string=0x00000000004EC18C "\t"
 *   insn=0x00000000004EC19C string=0x00000000004EC1A0 "I\t@"
 *   insn=0x00000000004EC1A8 string=0x00000000004EC1AC "_\t"
 *   insn=0x00000000004EC1B4 string=0x00000000004EC1B8 "("
 *   insn=0x00000000004EC1BC string=0x00000000004EC1C0 "!"
 *   insn=0x00000000004EC1C0 string=0x00000000004EC1C4 "i"
 *   insn=0x00000000004EC1C4 string=0x00000000004EC1C8 "j\n@"
 *   insn=0x00000000004EC1C8 string=0x00000000004EC1CC ")"
 *   insn=0x00000000004EC1CC string=0x00000000004EC1D0 "KA"
 *   insn=0x00000000004EC1D0 string=0x00000000004EC1D4 "k\n"
 *   insn=0x00000000004EC1D4 string=0x00000000004EC1D8 ""
 *   insn=0x00000000004EC1D8 string=0x00000000004EC1DC "K"
 *   insn=0x00000000004EC1DC string=0x00000000004EC1E0 ""
 *   insn=0x00000000004EC1E0 string=0x00000000004EC1E4 "K\t"
 *   insn=0x00000000004EC1F0 string=0x00000000004EC1F4 "h\n@"
 *   insn=0x00000000004EC1F0 string=0x00000000004EC20C ""
 *   insn=0x00000000004EC1F8 string=0x00000000004EC1FC "\nA"
 *   insn=0x00000000004EC1FC string=0x00000000004EC200 "j\n"
 *   insn=0x00000000004EC204 string=0x00000000004EC208 "\t\t"
 *   insn=0x00000000004EC214 string=0x00000000004EC218 "h&@"
 *   insn=0x00000000004EC218 string=0x00000000004EC21C "_"
 *   insn=0x00000000004EC220 string=0x00000000004EC224 "x^"
 *   insn=0x00000000004EC220 string=0x00000000004EC2B4 "H"
 *   insn=0x00000000004EC224 string=0x00000000004EC228 "("
 *   insn=0x00000000004EC22C string=0x00000000004EC230 "J"
 *   insn=0x00000000004EC230 string=0x00000000004EC234 "u*@"
 *   insn=0x00000000004EC238 string=0x00000000004EC23C "X"
 *   insn=0x00000000004EC23C string=0x00000000004EC240 ""
 *   insn=0x00000000004EC240 string=0x00000000004EC244 "I"
 *   insn=0x00000000004EC248 string=0x00000000004EC24C "#"
 *   insn=0x00000000004EC260 string=0x00000000004EC270 "i"
 *   insn=0x00000000004EC270 string=0x00000000004EC274 "\n"
 *   insn=0x00000000004EC274 string=0x00000000004EC278 ""
 *   insn=0x00000000004EC278 string=0x00000000004EC27C ""
 *   insn=0x00000000004EC27C string=0x00000000004EC280 "+"
 *   insn=0x00000000004EC280 string=0x00000000004EC284 "h"
 *   insn=0x00000000004EC284 string=0x00000000004EC288 "("
 *   insn=0x00000000004EC288 string=0x00000000004EC28C "\n"
 *   insn=0x00000000004EC290 string=0x00000000004EC294 "z^"
 *   insn=0x00000000004EC294 string=0x00000000004EC298 "j"
 *   insn=0x00000000004EC29C string=0x00000000004EC2A0 "a"
 *   insn=0x00000000004EC2B4 string=0x00000000004EC2B8 "h"
 *   insn=0x00000000004EC2B8 string=0x00000000004EC2BC "W"
 *   insn=0x00000000004EC2BC string=0x00000000004EC2C0 "w"
 *   insn=0x00000000004EC2C0 string=0x00000000004EC2C4 "("
 *   insn=0x00000000004EC2C8 string=0x00000000004EC2CC "H"
 *   insn=0x00000000004EC2CC string=0x00000000004EC2D0 ")"
 *   insn=0x00000000004EC2D0 string=0x00000000004EC2D4 "i"
 *   insn=0x00000000004EC2D4 string=0x00000000004EC2D8 "\}\t)m\n@"
 *   insn=0x00000000004EC2D8 string=0x00000000004EC2DC "m\n@"
 *   insn=0x00000000004EC2E4 string=0x00000000004EC33C "j"
 *   insn=0x00000000004EC2E8 string=0x00000000004EC2EC "\n"
 *   insn=0x00000000004EC2EC string=0x00000000004EC2F0 "J"
 *   insn=0x00000000004EC2F0 string=0x00000000004EC2F4 "K"
 *   insn=0x00000000004EC2FC string=0x00000000004EC300 "c"
 *   insn=0x00000000004EC300 string=0x00000000004EC304 "l"
 *   insn=0x00000000004EC300 string=0x00000000004EC32C "_\t"
 *   insn=0x00000000004EC32C string=0x00000000004EC330 "JA"
 *   insn=0x00000000004EC330 string=0x00000000004EC334 "_"
 *   insn=0x00000000004EC33C string=0x00000000004EC340 "h\n"
 *   insn=0x00000000004EC340 string=0x00000000004EC344 "j"
 *   insn=0x00000000004EC344 string=0x00000000004EC350 "("
 *   insn=0x00000000004EC348 string=0x00000000004EC34C ""
 *   insn=0x00000000004EC35C string=0x00000000004EC360 "h"
 *   insn=0x00000000004EC364 string=0x00000000004EC368 "h"
 *   insn=0x00000000004EC36C string=0x00000000004EC370 ""
 *   insn=0x00000000004EC370 string=0x00000000004EC374 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4EBCF4(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // x21
  _QWORD *v6; // x24
  __int64 v7; // x22
  __int64 v8; // x23
  unsigned __int64 v9; // x8
  unsigned __int64 v10; // x9
  __int64 v11; // t1
  int v12; // w11
  int v13; // w8
  int v14; // w1
  __int64 v15; // x8
  __int64 v16; // x11
  __int64 v17; // x26
  int v18; // w8
  int v19; // w1
  __int64 v20; // x25
  int v21; // w8
  int v22; // w9
  int v23; // w1
  __int64 v24; // x8
  __int64 v25; // x22
  __int64 v26; // x21
  __int64 v27; // x0
  char v28; // w8
  __int64 v29; // x22
  __int64 v30; // x23
  __int64 v31; // x27
  unsigned __int64 v32; // x9
  __int64 v33; // x11
  int v34; // w14
  __int64 v35; // x12
  __int64 v36; // x9
  __int64 v37; // x10
  _BOOL8 v38; // x11
  __int64 v39; // x12
  _DWORD *v40; // x13
  _DWORD *v41; // x10
  int v42; // w11
  __int64 v43; // x21
  unsigned __int64 v44; // x8
  int v45; // w20
  int v46; // w8
  int v47; // w9
  int v48; // w1
  __int64 v49; // x9
  __int64 v50; // x9
  __int64 v51; // x10
  __int64 v52; // x11
  __int64 v53; // x10
  int v54; // w0
  __int64 result; // x0
  __int64 v56; // x23
  __int64 v57; // x22
  __int64 v58; // x28
  __int64 v59; // x0
  __int64 v60; // x8
  __int64 v61; // x9
  __int64 v62; // x0
  __int64 v63; // x0
  __int64 v64; // x10
  _DWORD *v65; // x8
  __int64 v66; // x9
  __int64 v67; // x10
  __int64 v68; // x8
  __int64 v69; // x10
  __int64 v70; // x24
  __int64 v71; // x21
  __int64 v72; // x0
  __int64 v73; // x9
  unsigned __int64 v74; // x8
  __int64 v75; // x9
  unsigned __int64 v76; // x13
  unsigned __int64 v77; // x11
  unsigned __int64 v78; // x10
  _DWORD *v79; // x13
  __int64 v80; // x14
  char v81; // w10
  int v82; // [xsp+0h] [xbp-60h]
  int v83; // [xsp+8h] [xbp-58h]

  v3 = a2;
  if ( *(_DWORD *)(a2 + 8) == 6 )
  {
    v6 = (_QWORD *)(a1 + 64);
  }
  else
  {
    v7 = sub_4F4ED4(a1, a2, 16);
    v6 = (_QWORD *)(a1 + 64);
    v8 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)(v7 + 8) != 6 )
      sub_4EB03C(a1, v3, "call");
    v9 = *(_QWORD *)(a1 + 16);
    if ( v9 > v3 )
    {
      v10 = *(_QWORD *)(a1 + 16);
      do
      {
        v11 = *(_QWORD *)(v10 - 16);
        v10 -= 16LL;
        v12 = *(_DWORD *)(v9 - 8);
        *(_QWORD *)v9 = v11;
        *(_DWORD *)(v9 + 8) = v12;
        v9 = v10;
      }
      while ( v10 > v3 );
      v9 = *(_QWORD *)(a1 + 16);
    }
    if ( (__int64)(*(_QWORD *)(a1 + 56) - v9) <= 16 )
    {
      v13 = *(_DWORD *)(a1 + 88);
      if ( v13 < 1 )
        v14 = v13 + 1;
      else
        v14 = 2 * v13;
      sub_4EBA24(a1, v14);
    }
    *(_QWORD *)(a1 + 16) += 16LL;
    v3 = *(_QWORD *)(a1 + 64) + v3 - v8;
    *(_QWORD *)v3 = *(_QWORD *)v7;
    *(_DWORD *)(v3 + 8) = *(_DWORD *)(v7 + 8);
  }
  v15 = *(_QWORD *)v3;
  v16 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL) = *(_QWORD *)(a1 + 48);
  v17 = v3 - v16;
  if ( *(_BYTE *)(v15 + 10) )
  {
    if ( (__int64)(*(_QWORD *)(a1 + 56) - *(_QWORD *)(a1 + 16)) <= 320 )
    {
      v18 = *(_DWORD *)(a1 + 88);
      if ( v18 >= 20 )
        v19 = 2 * v18;
      else
        v19 = v18 + 20;
      sub_4EBA24(a1, v19);
    }
    v24 = *(_QWORD *)(a1 + 40);
    if ( v24 != *(_QWORD *)(a1 + 72) )
      goto LABEL_52;
    v25 = *(int *)(a1 + 92);
    if ( (int)v25 < 20001 )
    {
      v26 = *(_QWORD *)(a1 + 80);
      if ( (v25 & 0x80000000) != 0 )
        sub_4EEDE0(a1);
      v27 = sub_4EED74(a1, *(_QWORD *)(a1 + 80), 40 * v25, 80 * v25);
      v49 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 72) = v27 + 80 * v25 - 40;
      *(_QWORD *)(a1 + 80) = v27;
      v24 = v27 + v49 - v26;
      *(_DWORD *)(a1 + 92) = 2 * v25;
      *(_QWORD *)(a1 + 40) = v24;
      if ( (int)v25 >= 10001 )
        sub_4EB320(a1, "stack overflow");
LABEL_52:
      v50 = v24 + 40;
      *(_QWORD *)(a1 + 40) = v24 + 40;
      v51 = *v6 + v17;
      v52 = v51 + 16;
      *(_QWORD *)(v24 + 40) = v51 + 16;
      *(_QWORD *)(v24 + 48) = v51;
      v53 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 24) = v52;
      *(_DWORD *)(v24 + 72) = a3;
      *(_QWORD *)(v24 + 56) = v53 + 320;
      if ( (*(_BYTE *)(a1 + 100) & 1) != 0 )
      {
        sub_4EBBD4(a1, 0, -1);
        v50 = *(_QWORD *)(a1 + 40);
      }
      v54 = (*(__int64 (__fastcall **)(__int64))(**(_QWORD **)(v50 + 8) + 32LL))(a1);
      if ( v54 < 0 )
        return 2;
      sub_4EC3A4(a1, *(_QWORD *)(a1 + 16) - 16LL * v54);
      return 1;
    }
LABEL_85:
    sub_4EB814(a1, 5);
  }
  v20 = *(_QWORD *)(v15 + 32);
  v21 = *(unsigned __int8 *)(v20 + 115);
  if ( *(_QWORD *)(a1 + 56) - *(_QWORD *)(a1 + 16) <= 16LL * *(unsigned __int8 *)(v20 + 115) )
  {
    v22 = *(_DWORD *)(a1 + 88);
    if ( v22 >= v21 )
      v23 = 2 * v22;
    else
      v23 = v22 + v21;
    sub_4EBA24(a1, v23);
  }
  v28 = *(_BYTE *)(v20 + 114);
  v29 = *v6 + v17;
  if ( v28 )
  {
    v30 = *(_QWORD *)(a1 + 16);
    v31 = *(unsigned __int8 *)(v20 + 113);
    v32 = (unsigned __int64)(v30 - v29) >> 4;
    v33 = (unsigned int)(v31 - v32);
    v34 = v32 - 1;
    if ( (int)v31 >= (int)v32 )
    {
      v35 = v33 + 1;
      v36 = (unsigned int)(v31 - v32);
      v37 = *(_QWORD *)(a1 + 16);
      if ( (unsigned __int64)(v33 + 1) < 2 )
        goto LABEL_36;
      v38 = (v33 & 1) == 0;
      v39 = v35 - v38;
      v37 = v30 + 16 * v39;
      v34 += v39;
      v40 = (_DWORD *)(v30 + 24);
      do
      {
        *(v40 - 4) = 0;
        *v40 = 0;
        v40 += 8;
        v39 -= 2;
      }
      while ( v39 );
      if ( v38 )
      {
LABEL_36:
        v41 = (_DWORD *)(v37 + 8);
        v42 = v31 - v34;
        do
        {
          --v42;
          *v41 = 0;
          v41 += 4;
        }
        while ( v42 );
      }
      v30 += 16 * v36 + 16;
      v34 = v31;
      *(_QWORD *)(a1 + 16) = v30;
    }
    if ( (v28 & 4) != 0 )
    {
      v45 = v34 - v31;
      v83 = v34;
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 120LL) >= *(_QWORD *)(*(_QWORD *)(a1 + 32) + 112LL) )
      {
        sub_4EDCB0(a1);
        v30 = *(_QWORD *)(a1 + 16);
      }
      v46 = *(unsigned __int8 *)(v20 + 115);
      v82 = a3;
      if ( *(_QWORD *)(a1 + 56) - v30 <= 16LL * *(unsigned __int8 *)(v20 + 115) )
      {
        v47 = *(_DWORD *)(a1 + 88);
        if ( v47 >= v46 )
          v48 = 2 * v47;
        else
          v48 = v47 + v46;
        sub_4EBA24(a1, v48);
      }
      v43 = sub_4F3DB4(a1, (unsigned int)v45, 1);
      if ( v45 >= 1 )
      {
        v56 = 0;
        v57 = 16 * v31 - 16LL * v83;
        do
        {
          v58 = *(_QWORD *)(a1 + 16);
          ++v56;
          v59 = sub_4F49E8(a1, v43);
          v60 = v58 + v57;
          v61 = *(_QWORD *)(v58 + v57);
          v57 += 16;
          *(_QWORD *)v59 = v61;
          *(_DWORD *)(v59 + 8) = *(_DWORD *)(v60 + 8);
        }
        while ( v45 != v56 );
      }
      v62 = sub_4F356C(a1, "n", 1u);
      v63 = sub_4F4ADC(a1, v43, v62);
      a3 = v82;
      v34 = v83;
      *(double *)v63 = (double)v45;
      *(_DWORD *)(v63 + 8) = 3;
      v30 = *(_QWORD *)(a1 + 16);
      if ( !(_DWORD)v31 )
        goto LABEL_66;
    }
    else
    {
      v43 = 0;
      if ( !(_DWORD)v31 )
      {
LABEL_66:
        if ( v43 )
        {
          v68 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 16) = v68 + 16;
          *(_QWORD *)v68 = v43;
          *(_DWORD *)(v68 + 8) = 5;
        }
        v29 = *v6 + v17;
        goto LABEL_69;
      }
    }
    *(_QWORD *)(a1 + 16) = v30 + 16;
    v64 = v30 - 16LL * v34;
    *(_QWORD *)v30 = *(_QWORD *)v64;
    *(_DWORD *)(v30 + 8) = *(_DWORD *)(v64 + 8);
    *(_DWORD *)(v64 + 8) = 0;
    if ( (_DWORD)v31 != 1 )
    {
      v65 = (_DWORD *)(v30 + 16 * (1LL - v34) + 8);
      v66 = v31 - 1;
      do
      {
        v67 = *(_QWORD *)(a1 + 16);
        --v66;
        *(_QWORD *)(a1 + 16) = v67 + 16;
        *(_QWORD *)v67 = *((_QWORD *)v65 - 1);
        *(_DWORD *)(v67 + 8) = *v65;
        *v65 = 0;
        v65 += 4;
      }
      while ( v66 );
    }
    goto LABEL_66;
  }
  v30 = v29 + 16;
  v44 = v29 + 16 + 16LL * *(unsigned __int8 *)(v20 + 113);
  if ( *(_QWORD *)(a1 + 16) > v44 )
    *(_QWORD *)(a1 + 16) = v44;
LABEL_69:
  v69 = *(_QWORD *)(a1 + 40);
  if ( v69 == *(_QWORD *)(a1 + 72) )
  {
    v70 = *(int *)(a1 + 92);
    if ( (int)v70 >= 20001 )
      goto LABEL_85;
    v71 = *(_QWORD *)(a1 + 80);
    if ( (v70 & 0x80000000) != 0 )
      sub_4EEDE0(a1);
    v72 = sub_4EED74(a1, *(_QWORD *)(a1 + 80), 40 * v70, 80 * v70);
    v73 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 72) = v72 + 80 * v70 - 40;
    *(_QWORD *)(a1 + 80) = v72;
    v69 = v72 + v73 - v71;
    *(_DWORD *)(a1 + 92) = 2 * v70;
    *(_QWORD *)(a1 + 40) = v69;
    if ( (int)v70 >= 10001 )
      sub_4EB320(a1, "stack overflow");
  }
  *(_QWORD *)(a1 + 40) = v69 + 40;
  *(_QWORD *)(v69 + 40) = v30;
  *(_QWORD *)(v69 + 48) = v29;
  *(_QWORD *)(a1 + 24) = v30;
  v74 = v30 + 16LL * *(unsigned __int8 *)(v20 + 115);
  *(_QWORD *)(v69 + 56) = v74;
  v75 = *(_QWORD *)(v20 + 24);
  *(_QWORD *)(a1 + 48) = v75;
  *(_DWORD *)(v69 + 72) = a3;
  *(_DWORD *)(v69 + 76) = 0;
  v76 = *(_QWORD *)(a1 + 16);
  if ( v76 < v74 )
  {
    v77 = ((v74 + ~v76) >> 4) + 1;
    v78 = *(_QWORD *)(a1 + 16);
    if ( v77 < 2 )
      goto LABEL_88;
    v78 = v76 + 16 * (v77 & 0x1FFFFFFFFFFFFFFELL);
    v79 = (_DWORD *)(v76 + 24);
    v80 = v77 & 0x1FFFFFFFFFFFFFFELL;
    do
    {
      *(v79 - 4) = 0;
      *v79 = 0;
      v79 += 8;
      v80 -= 2;
    }
    while ( v80 );
    if ( v77 != (v77 & 0x1FFFFFFFFFFFFFFELL) )
    {
LABEL_88:
      do
      {
        *(_DWORD *)(v78 + 8) = 0;
        v78 += 16LL;
      }
      while ( v78 < v74 );
    }
  }
  v81 = *(_BYTE *)(a1 + 100);
  *(_QWORD *)(a1 + 16) = v74;
  if ( (v81 & 1) == 0 )
    return 0;
  *(_QWORD *)(a1 + 48) = v75 + 4;
  sub_4EBBD4(a1, 0, -1);
  result = 0;
  *(_QWORD *)(a1 + 48) -= 4LL;
  return result;
}

