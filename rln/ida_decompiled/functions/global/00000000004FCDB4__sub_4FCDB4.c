/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004FCDB4
 * Mangled: sub_4FCDB4
 * Demangled: sub_4FCDB4
 *
 * Callers: 4
 *   0x00000000004FC250  sub_4FC250
 *   0x00000000004FCAF8  sub_4FCAF8
 *   0x00000000004FCDB4  sub_4FCDB4
 *   0x00000000004FD99C  sub_4FD99C
 *
 * Callees: 3
 *   0x00000000001F5190  .memcmp
 *   0x00000000001FADF0  luaL_error(lua_State *,char const*,...)
 *   0x00000000004FD7F0  sub_4FD7F0
 *
 * Referenced strings: 220
 *   insn=0x00000000004FCDD4 string=0x000000000059ADF7 "malformed pattern (missing ']')"
 *   insn=0x00000000004FCDD8 string=0x000000000059AC2C "H("
 *   insn=0x00000000004FCE00 string=0x00000000004FCE04 "h"
 *   insn=0x00000000004FCE0C string=0x00000000004FCE3C ""
 *   insn=0x00000000004FCE10 string=0x000000000059AB84 "X*"
 *   insn=0x00000000004FCE18 string=0x00000000004FCE1C "Iy"
 *   insn=0x00000000004FCE20 string=0x00000000004FCE24 ")"
 *   insn=0x00000000004FCE24 string=0x00000000004FCE28 " "
 *   insn=0x00000000004FCE28 string=0x00000000004FD3E0 "i"
 *   insn=0x00000000004FCE30 string=0x00000000004FCE34 "("
 *   insn=0x00000000004FCE38 string=0x00000000004FD464 "h"
 *   insn=0x00000000004FCE40 string=0x00000000004FCE44 "u"
 *   insn=0x00000000004FCE48 string=0x00000000004FCE4C "h@9i"
 *   insn=0x00000000004FCE4C string=0x00000000004FCE50 "i"
 *   insn=0x00000000004FCE54 string=0x00000000004FCE58 "7"
 *   insn=0x00000000004FCE64 string=0x00000000004FCE68 "`\n@"
 *   insn=0x00000000004FCE64 string=0x00000000004FCE78 ""
 *   insn=0x00000000004FCE70 string=0x00000000001FADF0 "0'"
 *   insn=0x00000000004FCE84 string=0x00000000004FCE98 "("
 *   insn=0x00000000004FCE90 string=0x00000000004FCE94 ")"
 *   insn=0x00000000004FCEA8 string=0x00000000004FCEAC "<"
 *   insn=0x00000000004FCEB4 string=0x00000000004FCF00 "h"
 *   insn=0x00000000004FCED4 string=0x00000000004FCED8 ""
 *   insn=0x00000000004FCED4 string=0x00000000004FD274 "h@9h"
 *   insn=0x00000000004FCED8 string=0x00000000004FCEDC "\t"
 *   insn=0x00000000004FCEDC string=0x00000000004FCEE0 "?)"
 *   insn=0x00000000004FCEE8 string=0x00000000004FCEEC "`\n@"
 *   insn=0x00000000004FCEE8 string=0x00000000004FCEFC "|"
 *   insn=0x00000000004FCEF0 string=0x000000000059ADD4 "malformed pattern (ends with '%%')"
 *   insn=0x00000000004FCF08 string=0x00000000004FCF0C "h"
 *   insn=0x00000000004FCF18 string=0x00000000004FCFA8 "h@9"
 *   insn=0x00000000004FCF28 string=0x00000000004FD048 ""
 *   insn=0x00000000004FCF30 string=0x00000000004FCF34 "/"
 *   insn=0x00000000004FCF38 string=0x00000000004FCF3C "J"
 *   insn=0x00000000004FCF3C string=0x00000000004FD064 "_"
 *   insn=0x00000000004FCF40 string=0x00000000004FCF44 "J"
 *   insn=0x00000000004FCF54 string=0x00000000004FCF58 "`\n@"
 *   insn=0x00000000004FCF5C string=0x000000000059AD74 "missing '[' after '%%f' in pattern"
 *   insn=0x00000000004FCF6C string=0x00000000004FCF70 "w"
 *   insn=0x00000000004FCF74 string=0x00000000004FCF78 ""
 *   insn=0x00000000004FCF74 string=0x00000000004FD0A8 "h"
 *   insn=0x00000000004FCF80 string=0x00000000004FCF84 "!"
 *   insn=0x00000000004FCF84 string=0x00000000004FD108 "i"
 *   insn=0x00000000004FCF8C string=0x00000000004FCF90 "`\n@"
 *   insn=0x00000000004FCF8C string=0x00000000004FCFA0 "h"
 *   insn=0x00000000004FCFA0 string=0x00000000004FCFA4 "Y"
 *   insn=0x00000000004FCFBC string=0x00000000004FCFC4 "("
 *   insn=0x00000000004FCFC8 string=0x00000000004FCFCC "b"
 *   insn=0x00000000004FCFCC string=0x00000000004FCFD0 "\n"
 *   insn=0x00000000004FCFD8 string=0x00000000004FCFDC "_"
 *   insn=0x00000000004FCFE0 string=0x00000000004FCFF8 "?"
 *   insn=0x00000000004FCFFC string=0x00000000004FD000 ")"
 *   insn=0x00000000004FCFFC string=0x00000000004FD01C "_"
 *   insn=0x00000000004FD000 string=0x00000000004FD004 "?"
 *   insn=0x00000000004FD008 string=0x00000000004FD00C "_"
 *   insn=0x00000000004FD010 string=0x00000000004FD028 "("
 *   insn=0x00000000004FD030 string=0x00000000004FD034 "c"
 *   insn=0x00000000004FD038 string=0x00000000004FD03C "\t"
 *   insn=0x00000000004FD040 string=0x00000000004FD044 ""
 *   insn=0x00000000004FD058 string=0x00000000004FD05C "Z"
 *   insn=0x00000000004FD06C string=0x00000000004FD070 ")"
 *   insn=0x00000000004FD070 string=0x00000000004FD074 "?U"
 *   insn=0x00000000004FD07C string=0x00000000004FD080 ")"
 *   insn=0x00000000004FD080 string=0x00000000004FD084 " "
 *   insn=0x00000000004FD098 string=0x00000000004FD09C "F"
 *   insn=0x00000000004FD09C string=0x00000000004FD0A0 " "
 *   insn=0x00000000004FD0A0 string=0x00000000004FD0A4 "N"
 *   insn=0x00000000004FD0A8 string=0x00000000004FD0AC "i"
 *   insn=0x00000000004FD0B0 string=0x00000000004FD0B4 "5"
 *   insn=0x00000000004FD0C0 string=0x00000000004FD0C4 "`\n@"
 *   insn=0x00000000004FD0C0 string=0x00000000004FD0D4 ""
 *   insn=0x00000000004FD0C8 string=0x00000000004FD0CC "I"
 *   insn=0x00000000004FD0E0 string=0x00000000004FD0F4 "("
 *   insn=0x00000000004FD0EC string=0x00000000004FD0F0 ")"
 *   insn=0x00000000004FD100 string=0x00000000004FD104 "("
 *   insn=0x00000000004FD110 string=0x00000000004FD114 "`"
 *   insn=0x00000000004FD124 string=0x00000000004FD128 "z"
 *   insn=0x00000000004FD148 string=0x00000000004FD14C "\n"
 *   insn=0x00000000004FD154 string=0x00000000004FD158 "_"
 *   insn=0x00000000004FD15C string=0x00000000004FD174 "?"
 *   insn=0x00000000004FD178 string=0x00000000004FD17C ")"
 *   insn=0x00000000004FD178 string=0x00000000004FD198 "_"
 *   insn=0x00000000004FD17C string=0x00000000004FD180 "?"
 *   insn=0x00000000004FD184 string=0x00000000004FD188 "_"
 *   insn=0x00000000004FD188 string=0x00000000004FD18C "I"
 *   insn=0x00000000004FD18C string=0x00000000004FD1B4 "("
 *   insn=0x00000000004FD198 string=0x00000000004FD19C "@"
 *   insn=0x00000000004FD1A0 string=0x00000000004FD1A4 "("
 *   insn=0x00000000004FD1AC string=0x00000000004FD1B0 ")"
 *   insn=0x00000000004FD1E8 string=0x00000000004FD200 "?"
 *   insn=0x00000000004FD208 string=0x00000000004FD20C "?"
 *   insn=0x00000000004FD214 string=0x00000000004FD218 "I"
 *   insn=0x00000000004FD218 string=0x00000000004FD240 "("
 *   insn=0x00000000004FD238 string=0x00000000004FD23C "\t"
 *   insn=0x00000000004FD274 string=0x00000000004FD278 "h"
 *   insn=0x00000000004FD278 string=0x00000000004FD27C "i"
 *   insn=0x00000000004FD278 string=0x00000000004FD284 "`\n@"
 *   insn=0x00000000004FD288 string=0x000000000059ADC1 "unbalanced pattern"
 *   insn=0x00000000004FD298 string=0x00000000004FD29C "?"
 *   insn=0x00000000004FD2A0 string=0x00000000004FD2A4 "j"
 *   insn=0x00000000004FD2A8 string=0x00000000004FD2AC "?"
 *   insn=0x00000000004FD2AC string=0x00000000004FD2B0 "B"
 *   insn=0x00000000004FD2B0 string=0x00000000004FD2B4 "k"
 *   insn=0x00000000004FD2B8 string=0x00000000004FD2BC "-"
 *   insn=0x00000000004FD2CC string=0x00000000004FD2D0 "*"
 *   insn=0x00000000004FD2CC string=0x00000000004FD2DC ")"
 *   insn=0x00000000004FD2D0 string=0x00000000004FD378 "4"
 *   insn=0x00000000004FD2DC string=0x00000000004FD2E0 "?"
 *   insn=0x00000000004FD2EC string=0x00000000004FD2F0 "H"
 *   insn=0x00000000004FD2F8 string=0x00000000004FD2FC "#"
 *   insn=0x00000000004FD2FC string=0x00000000004FD300 "i"
 *   insn=0x00000000004FD2FC string=0x00000000004FD320 "`\n@"
 *   insn=0x00000000004FD300 string=0x00000000004FD304 ""
 *   insn=0x00000000004FD30C string=0x00000000004FD310 "i"
 *   insn=0x00000000004FD310 string=0x00000000004FD314 "9"
 *   insn=0x00000000004FD314 string=0x00000000004FD318 "?"
 *   insn=0x00000000004FD31C string=0x00000000004FD33C "i"
 *   insn=0x00000000004FD324 string=0x000000000059AE17 "invalid capture index"
 *   insn=0x00000000004FD334 string=0x00000000004FD338 "|@"
 *   insn=0x00000000004FD33C string=0x00000000004FD340 ")"
 *   insn=0x00000000004FD340 string=0x00000000004FD344 "?"
 *   insn=0x00000000004FD348 string=0x00000000004FD34C "h"
 *   insn=0x00000000004FD35C string=0x00000000001F5190 "P'"
 *   insn=0x00000000004FD36C string=0x00000000004FD370 "("
 *   insn=0x00000000004FD370 string=0x00000000004FCDF4 "|"
 *   insn=0x00000000004FD378 string=0x00000000004FD37C "|"
 *   insn=0x00000000004FD38C string=0x00000000004FD390 "a"
 *   insn=0x00000000004FD390 string=0x00000000004FD394 "v"
 *   insn=0x00000000004FD390 string=0x00000000004FD5FC "u"
 *   insn=0x00000000004FD394 string=0x00000000004FD398 "u"
 *   insn=0x00000000004FD3A0 string=0x00000000004FD3A4 "`\n@"
 *   insn=0x00000000004FD3A0 string=0x00000000004FD3B4 "h"
 *   insn=0x00000000004FD3A8 string=0x000000000059AD97 "too many captures"
 *   insn=0x00000000004FD3CC string=0x00000000004FD3D0 "j"
 *   insn=0x00000000004FD3D0 string=0x00000000004FD3D4 "x"
 *   insn=0x00000000004FD3D4 string=0x00000000004FD3D8 " "
 *   insn=0x00000000004FD3DC string=0x00000000004FD640 "h"
 *   insn=0x00000000004FD3E0 string=0x00000000004FD3E4 "u"
 *   insn=0x00000000004FD3E4 string=0x00000000004FD3E8 "?"
 *   insn=0x00000000004FD3EC string=0x00000000004FD3F0 "j"
 *   insn=0x00000000004FD3EC string=0x00000000004FD420 "`\n@"
 *   insn=0x00000000004FD3F0 string=0x00000000004FD3F4 "("
 *   insn=0x00000000004FD3F4 string=0x00000000004FD3F8 " "
 *   insn=0x00000000004FD3F8 string=0x00000000004FD3FC "Ia"
 *   insn=0x00000000004FD3FC string=0x00000000004FD400 "*"
 *   insn=0x00000000004FD400 string=0x00000000004FD404 "_"
 *   insn=0x00000000004FD404 string=0x00000000004FD408 "@"
 *   insn=0x00000000004FD408 string=0x00000000004FD40C ""
 *   insn=0x00000000004FD408 string=0x00000000004FD430 "v"
 *   insn=0x00000000004FD414 string=0x00000000004FD418 ")A"
 *   insn=0x00000000004FD418 string=0x00000000004FD41C "*"
 *   insn=0x00000000004FD424 string=0x00000000004FD42C "q"
 *   insn=0x00000000004FD424 string=0x000000000059ADA9 "invalid pattern capture"
 *   insn=0x00000000004FD448 string=0x00000000004FD44C "Z"
 *   insn=0x00000000004FD44C string=0x00000000004FD450 "`"
 *   insn=0x00000000004FD454 string=0x00000000004FD458 "\t"
 *   insn=0x00000000004FD458 string=0x00000000004FD45C "\t"
 *   insn=0x00000000004FD45C string=0x00000000004FD460 "_"
 *   insn=0x00000000004FD46C string=0x00000000004FD470 "["
 *   insn=0x00000000004FD4AC string=0x00000000004FD4B0 "h"
 *   insn=0x00000000004FD4C0 string=0x00000000004FD4C4 "<"
 *   insn=0x00000000004FD4CC string=0x00000000004FD4D0 "h"
 *   insn=0x00000000004FD4D8 string=0x00000000004FD4DC "h"
 *   insn=0x00000000004FD4E4 string=0x00000000004FD4E8 "`"
 *   insn=0x00000000004FD4E8 string=0x00000000004FD514 "h@9"
 *   insn=0x00000000004FD4EC string=0x00000000004FD4F0 " "
 *   insn=0x00000000004FD4F4 string=0x00000000004FD4F8 "a"
 *   insn=0x00000000004FD4F8 string=0x00000000004FD5A4 ""
 *   insn=0x00000000004FD508 string=0x00000000004FD50C "W"
 *   insn=0x00000000004FD50C string=0x00000000004FD510 "2"
 *   insn=0x00000000004FD524 string=0x00000000004FD52C "("
 *   insn=0x00000000004FD534 string=0x00000000004FD538 "\n"
 *   insn=0x00000000004FD53C string=0x00000000004FD540 "A/@8_"
 *   insn=0x00000000004FD540 string=0x00000000004FD544 "_"
 *   insn=0x00000000004FD548 string=0x00000000004FD560 "?"
 *   insn=0x00000000004FD55C string=0x00000000004FD5B0 "W"
 *   insn=0x00000000004FD564 string=0x00000000004FD568 ")"
 *   insn=0x00000000004FD564 string=0x00000000004FD584 "_"
 *   insn=0x00000000004FD568 string=0x00000000004FD56C "?"
 *   insn=0x00000000004FD570 string=0x00000000004FD574 "_"
 *   insn=0x00000000004FD578 string=0x00000000004FD590 "("
 *   insn=0x00000000004FD588 string=0x00000000004FD58C "\t"
 *   insn=0x00000000004FD598 string=0x00000000004FD59C "c"
 *   insn=0x00000000004FD5C4 string=0x00000000004FD5C8 "@"
 *   insn=0x00000000004FD604 string=0x00000000004FD608 "`\n@"
 *   insn=0x00000000004FD604 string=0x00000000004FD618 "h"
 *   insn=0x00000000004FD618 string=0x00000000004FD61C "\t"
 *   insn=0x00000000004FD624 string=0x00000000004FD628 "j"
 *   insn=0x00000000004FD640 string=0x00000000004FD644 ""
 *   insn=0x00000000004FD644 string=0x00000000004FD648 "h"
 *   insn=0x00000000004FD670 string=0x00000000004FD674 "z"
 *   insn=0x00000000004FD678 string=0x00000000004FD67C "_"
 *   insn=0x00000000004FD67C string=0x00000000004FD680 "\t\t"
 *   insn=0x00000000004FD688 string=0x00000000004FD68C "|"
 *   insn=0x00000000004FD690 string=0x00000000004FD694 "u"
 *   insn=0x00000000004FD6A4 string=0x00000000004FD6A8 "`"
 *   insn=0x00000000004FD6AC string=0x00000000004FD6B0 "@"
 *   insn=0x00000000004FD6B0 string=0x00000000004FD778 "9"
 *   insn=0x00000000004FD6B8 string=0x00000000004FD6BC "a"
 *   insn=0x00000000004FD6C0 string=0x00000000004FD6C4 "K"
 *   insn=0x00000000004FD6C8 string=0x00000000004FD6CC "w"
 *   insn=0x00000000004FD6CC string=0x00000000004FD6D0 "1"
 *   insn=0x00000000004FD6D4 string=0x00000000004FD6D8 "("
 *   insn=0x00000000004FD6E0 string=0x00000000004FD6E4 "i"
 *   insn=0x00000000004FD6E8 string=0x00000000004FD6F0 "("
 *   insn=0x00000000004FD6F8 string=0x00000000004FD6FC "\n"
 *   insn=0x00000000004FD704 string=0x00000000004FD708 "_"
 *   insn=0x00000000004FD70C string=0x00000000004FD724 "?"
 *   insn=0x00000000004FD710 string=0x00000000004FD714 "7"
 *   insn=0x00000000004FD728 string=0x00000000004FD72C ")"
 *   insn=0x00000000004FD728 string=0x00000000004FD748 "_"
 *   insn=0x00000000004FD72C string=0x00000000004FD730 "?"
 *   insn=0x00000000004FD734 string=0x00000000004FD738 "_"
 *   insn=0x00000000004FD73C string=0x00000000004FD754 "("
 *   insn=0x00000000004FD74C string=0x00000000004FD750 "\t"
 *   insn=0x00000000004FD75C string=0x00000000004FD760 "c"
 *   insn=0x00000000004FD78C string=0x00000000004FD790 "W"
 *   insn=0x00000000004FD794 string=0x00000000004FD798 "y"
 *   insn=0x00000000004FD798 string=0x00000000004FD7A4 "u"
 *   insn=0x00000000004FD7C0 string=0x00000000004FD7C4 "9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4FCDB4(__int64 result, unsigned __int8 *a2, unsigned __int8 *a3)
{
  unsigned __int64 v3; // x9
  unsigned __int64 v4; // x10
  __int64 v7; // x19
  unsigned __int8 *v8; // x27
  __int64 v9; // kr00_8
  unsigned __int64 v10; // kr08_8
  unsigned __int8 *v11; // x21
  _BYTE *v12; // x23
  int v13; // w8
  unsigned __int8 *v14; // x9
  int v15; // w8
  __int64 v16; // x8
  int v17; // w8
  unsigned int v18; // w25
  int v19; // w26
  _BOOL4 v20; // w8
  char *v21; // x28
  unsigned __int8 *v22; // x23
  int v23; // w8
  unsigned __int64 v24; // x23
  unsigned __int8 *v25; // x9
  unsigned __int8 *v26; // x8
  int v27; // w1
  unsigned __int8 *v28; // x24
  unsigned __int8 *v29; // x9
  _BYTE *v30; // x21
  int v31; // w8
  unsigned __int8 *v32; // x9
  unsigned __int8 *v33; // x8
  unsigned int v34; // w25
  int v35; // w8
  unsigned __int64 v36; // x26
  unsigned __int8 *v37; // x28
  int v38; // w21
  unsigned __int8 *v39; // x8
  int v40; // w1
  unsigned __int8 *v41; // x24
  unsigned int v42; // w25
  unsigned int v43; // w8
  int v44; // w1
  int v45; // w8
  int v46; // w12
  int v47; // w13
  __int64 v48; // x8
  size_t v49; // x25
  int v50; // w8
  __int64 v51; // x22
  __int64 v52; // x8
  __int64 v53; // x9
  __int64 v54; // x8
  int v55; // w0
  _QWORD *v56; // x9
  __int64 v57; // x22
  __int64 v58; // x0
  unsigned __int8 *v59; // x1
  unsigned __int8 *v60; // x2
  unsigned __int8 *v61; // x3
  unsigned __int64 v62; // x25
  int v63; // w8
  unsigned int v64; // w24
  int v65; // w8
  _BOOL4 v66; // w23
  unsigned __int8 *v67; // x9
  unsigned __int8 *v68; // x8
  unsigned int v69; // w10
  int v70; // w1
  unsigned __int8 *v71; // x26
  int v72; // w0
  __int64 v73; // x21
  __int64 v74; // x8
  __int64 v75; // x19
  unsigned __int64 v76; // x26
  unsigned __int8 *v77; // x20
  unsigned __int8 *v78; // x27
  int v79; // w28
  __int64 v80; // x25
  unsigned __int64 v81; // x21
  unsigned __int8 *v82; // x8
  unsigned int v83; // w24
  unsigned __int8 *v84; // x9
  int v85; // w8
  _BOOL4 v86; // w23
  unsigned __int8 *v87; // x8
  unsigned int v88; // w10
  int v89; // w1
  unsigned __int8 *v90; // x22
  int v91; // w0
  _BYTE *v92; // x21
  unsigned __int8 *v93; // [xsp+0h] [xbp-60h]
  unsigned __int8 *v94; // [xsp+8h] [xbp-58h]

  v7 = result;
LABEL_3:
  v8 = a3;
  while ( 2 )
  {
    v9 = result;
    v10 = v4;
    v4 = v3;
    result = (__int64)a2;
    switch ( *v8 )
    {
      case 0u:
        return result;
      case 0x24u:
        v11 = v8 + 1;
        if ( v8[1] )
          goto LABEL_19;
        if ( a2 == *(unsigned __int8 **)(v7 + 8) )
          return (__int64)a2;
        else
          return 0;
      case 0x25u:
        v11 = v8 + 1;
        v15 = (char)v8[1];
        if ( v15 == 102 )
        {
          v21 = (char *)(v8 + 2);
          if ( v8[2] != 91 )
            luaL_error();
          v22 = v8 + 3;
          if ( v8[3] == 94 )
            v30 = v8 + 4;
          else
            v30 = v8 + 3;
          LOBYTE(v31) = *v30;
          do
          {
            if ( !(_BYTE)v31 )
              luaL_error();
            v32 = v30 + 1;
            if ( (unsigned __int8)v31 == 37 )
            {
              v4 = (unsigned __int64)(v30 + 2);
              if ( v30[1] )
                v32 = v30 + 2;
            }
            v31 = *v32;
            v30 = v32;
          }
          while ( v31 != 93 );
          v33 = v32 + 1;
          v3 = *(_QWORD *)v7;
          v8 = v33;
          if ( a2 == *(unsigned __int8 **)v7 )
            v34 = 0;
          else
            v34 = *(a2 - 1);
          v35 = *v22;
          v36 = (unsigned __int64)(v8 - 1);
          if ( v35 != 94 )
            v22 = (unsigned __int8 *)v21;
          v37 = v22 + 1;
          v38 = v35 != 94;
          if ( (unsigned __int64)(v22 + 1) < v36 )
          {
            v39 = v22 + 1;
            v3 = (unsigned __int64)v22;
            do
            {
              v4 = *v39;
              v41 = (unsigned __int8 *)(v3 + 2);
              v40 = *(unsigned __int8 *)(v3 + 2);
              if ( (_DWORD)v4 == 37 )
              {
                result = sub_4FD7F0(v34, v40);
                v39 = v41;
                if ( (_DWORD)result )
                  goto LABEL_87;
              }
              else if ( v40 == 45 && (v3 += 3LL, v3 < v36) )
              {
                if ( (unsigned int)v4 <= v34 )
                {
                  v39 = (unsigned __int8 *)v3;
                  if ( *(unsigned __int8 *)v3 >= v34 )
                  {
LABEL_87:
                    if ( !v38 )
                      goto LABEL_88;
                    return 0;
                  }
                }
                else
                {
                  v39 = (unsigned __int8 *)v3;
                }
              }
              else if ( (_DWORD)v4 == v34 )
              {
                goto LABEL_87;
              }
              v3 = (unsigned __int64)v39++;
            }
            while ( (unsigned __int64)v39 < v36 );
          }
          if ( v38 != 1 )
            return 0;
LABEL_88:
          if ( (unsigned __int64)v37 < v36 )
          {
            v42 = *a2;
            do
            {
              v43 = *v37;
              v44 = v22[2];
              if ( v43 == 37 )
              {
                result = sub_4FD7F0(v42, v44);
                v37 = v22 + 2;
                if ( (_DWORD)result )
                  goto LABEL_105;
              }
              else if ( v44 == 45 && (v3 = (unsigned __int64)(v22 + 3), (unsigned __int64)(v22 + 3) < v36) )
              {
                if ( v43 <= v42 )
                {
                  v37 = v22 + 3;
                  if ( *(unsigned __int8 *)v3 >= v42 )
                    goto LABEL_105;
                }
                else
                {
                  v37 = v22 + 3;
                }
              }
              else if ( v43 == v42 )
              {
                goto LABEL_105;
              }
              v22 = v37++;
            }
            while ( (unsigned __int64)v37 < v36 );
          }
          v38 ^= 1u;
LABEL_105:
          if ( !v38 )
            return 0;
          continue;
        }
        if ( v15 == 98 )
        {
          v45 = v8[2];
          if ( !v8[2] || !v8[3] )
            luaL_error();
          if ( *a2 != v45 )
            return 0;
          v4 = *(_QWORD *)(v7 + 8);
          v3 = (unsigned __int64)(a2 + 1);
          if ( (unsigned __int64)(a2 + 1) >= v4 )
            return 0;
          v46 = 1;
          while ( 1 )
          {
            v47 = *(unsigned __int8 *)v3;
            if ( v47 == v8[3] )
            {
              if ( !--v46 )
              {
                a2 = (unsigned __int8 *)(v3 + 1);
                a3 = v8 + 4;
                goto LABEL_3;
              }
            }
            else if ( v47 == v45 )
            {
              ++v46;
            }
            if ( ++v3 >= v4 )
              return 0;
          }
        }
        v16 = v8[1];
        if ( (unsigned int)(v16 - 48) >= 0xA )
        {
          if ( !v8[1] )
            luaL_error();
          a3 = v8 + 2;
LABEL_26:
          if ( (unsigned __int64)a2 >= *(_QWORD *)(v7 + 8) )
          {
            v20 = 0;
          }
          else
          {
            v17 = (char)*v8;
            v18 = *a2;
            switch ( v17 )
            {
              case '[':
                v23 = v8[1];
                v24 = (unsigned __int64)(a3 - 1);
                v19 = v23 != 94;
                if ( v23 == 94 )
                  v25 = v11;
                else
                  v25 = v8;
                while ( 1 )
                {
                  v26 = v25 + 1;
                  if ( (unsigned __int64)(v25 + 1) >= v24 )
                    break;
                  v4 = *v26;
                  v28 = v25 + 2;
                  v27 = v25[2];
                  if ( (_DWORD)v4 == 37 )
                  {
                    result = sub_4FD7F0(v18, v27);
                    v26 = v28;
                    if ( (_DWORD)result )
                      goto LABEL_54;
                  }
                  else if ( v27 == 45 && (v29 = v25 + 3, (unsigned __int64)v29 < v24) )
                  {
                    if ( (unsigned int)v4 <= v18 )
                    {
                      v26 = v29;
                      if ( *v29 >= v18 )
                        goto LABEL_54;
                    }
                    else
                    {
                      v26 = v29;
                    }
                  }
                  else if ( (_DWORD)v4 == v18 )
                  {
                    goto LABEL_54;
                  }
                  v25 = v26;
                }
                v19 ^= 1u;
                break;
              case '.':
                v19 = 1;
                break;
              case '%':
                result = sub_4FD7F0(v18, *v11);
                v19 = result;
                break;
              default:
                v19 = *v8 == v18;
                break;
            }
LABEL_54:
            v20 = v19 != 0;
          }
          v3 = (unsigned int)((char)*a3 - 42);
          switch ( *a3 )
          {
            case '*':
              v58 = v7;
              v59 = a2;
              goto LABEL_148;
            case '+':
              if ( !v20 )
                return 0;
              v59 = a2 + 1;
              v58 = v7;
LABEL_148:
              v60 = v8;
              v61 = a3;
              v75 = v58;
              v76 = *(_QWORD *)(v58 + 8);
              v77 = v59;
              if ( v76 <= (unsigned __int64)v59 )
              {
                v80 = 0;
                goto LABEL_215;
              }
              v94 = v8;
              v78 = v8 + 1;
              v79 = (char)*v60;
              v80 = 0;
              v81 = (unsigned __int64)(v61 - 1);
              v82 = v59;
              v93 = v61;
              while ( 1 )
              {
                v83 = *v82;
                if ( v79 != 91 )
                {
                  if ( v79 == 46 )
                    goto LABEL_209;
                  if ( v79 == 37 )
                  {
                    if ( (unsigned int)sub_4FD7F0(v83, *v78) )
                      goto LABEL_209;
                  }
                  else
                  {
                    v86 = (unsigned __int8)v79 == v83;
LABEL_208:
                    if ( v86 )
                      goto LABEL_209;
                  }
                  goto LABEL_212;
                }
                v84 = v94;
                v85 = v94[1];
                v86 = v85 != 94;
                if ( v85 == 94 )
                  v84 = v78;
                while ( 1 )
                {
                  v87 = v84 + 1;
                  if ( (unsigned __int64)(v84 + 1) >= v81 )
                    break;
                  v88 = *v87;
                  v90 = v84 + 2;
                  v89 = v84[2];
                  if ( v88 == 37 )
                  {
                    v91 = sub_4FD7F0(v83, v89);
                    v87 = v90;
                    if ( v91 )
                      goto LABEL_208;
                    goto LABEL_194;
                  }
                  if ( v89 != 45 || (v84 += 3, (unsigned __int64)v84 >= v81) )
                  {
                    if ( v88 == v83 )
                      goto LABEL_208;
                    goto LABEL_194;
                  }
                  if ( v88 <= v83 )
                  {
                    v87 = v84;
                    if ( *v84 >= v83 )
                      goto LABEL_208;
LABEL_194:
                    v84 = v87;
                  }
                }
                if ( v86 )
                  goto LABEL_212;
LABEL_209:
                v82 = &v77[++v80];
                if ( (unsigned __int64)&v77[v80] >= v76 )
                {
LABEL_212:
                  v61 = v93;
                  if ( v80 < 0 )
                    return 0;
LABEL_215:
                  v92 = v61 + 1;
                  do
                  {
                    result = sub_4FCDB4(v75, &v77[v80], v92);
                    if ( result )
                      return result;
                    --v80;
                  }
                  while ( (v80 & 0x8000000000000000LL) == 0 );
                  return 0;
                }
              }
            case '-':
              result = sub_4FCDB4(v7, a2, a3 + 1);
              if ( result )
                return result;
              v62 = (unsigned __int64)(a3 - 1);
LABEL_151:
              if ( (unsigned __int64)a2 >= *(_QWORD *)(v7 + 8) )
                return 0;
              v63 = (char)*v8;
              v64 = *a2;
              if ( v63 != 91 )
              {
                if ( v63 == 46 )
                  goto LABEL_175;
                if ( v63 == 37 )
                {
                  if ( !(unsigned int)sub_4FD7F0(v64, *v11) )
                    return 0;
                  goto LABEL_175;
                }
                v66 = *v8 == v64;
LABEL_174:
                if ( v66 )
                  goto LABEL_175;
                return 0;
              }
              v65 = v8[1];
              v66 = v65 != 94;
              if ( v65 == 94 )
                v67 = v11;
              else
                v67 = v8;
              break;
            case '?':
              v8 = a3 + 1;
              if ( v20 )
              {
                result = sub_4FCDB4(v7, a2 + 1, a3 + 1);
                if ( result )
                  return result;
              }
              continue;
            default:
              ++a2;
              if ( !v20 )
                return 0;
              goto LABEL_3;
          }
          while ( 1 )
          {
LABEL_161:
            v68 = v67 + 1;
            if ( (unsigned __int64)(v67 + 1) >= v62 )
            {
              if ( v66 )
                return 0;
LABEL_175:
              result = sub_4FCDB4(v7, ++a2, a3 + 1);
              if ( result )
                return result;
              goto LABEL_151;
            }
            v69 = *v68;
            v71 = v67 + 2;
            v70 = v67[2];
            if ( v69 == 37 )
              break;
            if ( v70 != 45 || (v67 += 3, (unsigned __int64)v67 >= v62) )
            {
              if ( v69 == v64 )
                goto LABEL_174;
              goto LABEL_160;
            }
            if ( v69 <= v64 )
            {
              v68 = v67;
              if ( *v67 >= v64 )
                goto LABEL_174;
              goto LABEL_160;
            }
          }
          v72 = sub_4FD7F0(v64, v70);
          v68 = v71;
          if ( v72 )
            goto LABEL_174;
LABEL_160:
          v67 = v68;
          goto LABEL_161;
        }
        if ( (unsigned int)v16 < 0x31
          || (v48 = v16 - 49, (int)v48 >= *(_DWORD *)(v7 + 24))
          || (v49 = *(_QWORD *)(v7 + 16 * v48 + 40), v49 == -1) )
        {
          luaL_error();
        }
        if ( *(_QWORD *)(v7 + 8) - (_QWORD)a2 < v49 )
          return 0;
        v50 = memcmp(*(const void **)(v7 + 16 * v48 + 32), a2, v49);
        a2 += v49;
        result = 0;
        if ( !a2 || v50 )
          return result;
        a3 = v8 + 2;
        goto LABEL_3;
      case 0x28u:
        if ( v8[1] == 41 )
        {
          v51 = *(int *)(v7 + 24);
          if ( (int)v51 >= 32 )
            luaL_error();
          v52 = v7 + 16 * v51;
          *(_QWORD *)(v52 + 32) = a2;
          *(_QWORD *)(v52 + 40) = -2;
          *(_DWORD *)(v7 + 24) = v51 + 1;
          result = sub_4FCDB4(v7, a2, v8 + 2);
          if ( !result )
LABEL_183:
            --*(_DWORD *)(v7 + 24);
        }
        else
        {
          v73 = *(int *)(v7 + 24);
          if ( (int)v73 >= 32 )
            luaL_error();
          v74 = v7 + 16 * v73;
          *(_QWORD *)(v74 + 32) = a2;
          *(_QWORD *)(v74 + 40) = -1;
          *(_DWORD *)(v7 + 24) = v73 + 1;
          result = sub_4FCDB4(v7, a2, v8 + 1);
          if ( !result )
            goto LABEL_183;
        }
        return result;
      case 0x29u:
        v53 = *(int *)(v7 + 24);
        if ( (int)v53 < 1 )
          goto LABEL_139;
        v54 = v53 + 1;
        v55 = v53 - 1;
        v56 = (_QWORD *)(v7 + 16 * v53 + 24);
        while ( *v56 != -1 )
        {
          --v54;
          --v55;
          v56 -= 2;
          if ( v54 < 2 )
LABEL_139:
            luaL_error();
        }
        v57 = v7 + 16LL * v55;
        *(_QWORD *)(v57 + 40) = &a2[-*(_QWORD *)(v57 + 32)];
        result = sub_4FCDB4(v7, a2, v8 + 1);
        if ( !result )
          *(_QWORD *)(v57 + 40) = -1;
        return result;
      default:
        v4 = v10;
        result = v9;
        v11 = v8 + 1;
        if ( *v8 == 91 )
        {
          if ( v8[1] == 94 )
            v12 = v8 + 2;
          else
            v12 = v8 + 1;
          LOBYTE(v13) = *v12;
          do
          {
            if ( !(_BYTE)v13 )
              luaL_error();
            v14 = v12 + 1;
            if ( (unsigned __int8)v13 == 37 )
            {
              v4 = (unsigned __int64)(v12 + 2);
              if ( v12[1] )
                v14 = v12 + 2;
            }
            v13 = *v14;
            v12 = v14;
          }
          while ( v13 != 93 );
          a3 = v14 + 1;
        }
        else
        {
LABEL_19:
          a3 = v11;
        }
        goto LABEL_26;
    }
  }
}

