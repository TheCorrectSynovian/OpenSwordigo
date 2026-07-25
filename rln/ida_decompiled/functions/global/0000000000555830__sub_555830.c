/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000555830
 * Mangled: sub_555830
 * Demangled: sub_555830
 *
 * Callers: 3
 *   0x0000000000555830  sub_555830
 *   0x00000000005566DC  sub_5566DC
 *   0x0000000000556864  sub_556864
 *
 * Callees: 7
 *   0x0000000000202DD0  .wcslen
 *   0x000000000054D8C4  sub_54D8C4
 *   0x000000000054F6AC  sub_54F6AC
 *   0x000000000054F8CC  sub_54F8CC
 *   0x00000000005513A0  sub_5513A0
 *   0x0000000000554B08  sub_554B08
 *   0x0000000000554B9C  sub_554B9C
 *
 * Referenced strings: 231
 *   insn=0x0000000000555878 string=0x000000000055587C "#"
 *   insn=0x000000000055588C string=0x0000000000555890 ""
 *   insn=0x00000000005558AC string=0x00000000005558B0 "H"
 *   insn=0x00000000005558B4 string=0x00000000005558B8 "@"
 *   insn=0x00000000005558B8 string=0x000000000059EFB4 "O"
 *   insn=0x00000000005558D0 string=0x00000000005558D4 "5"
 *   insn=0x00000000005558DC string=0x00000000005558E0 "@\t"
 *   insn=0x00000000005558F4 string=0x00000000005558F8 "_"
 *   insn=0x0000000000555910 string=0x00000000005559C4 "`"
 *   insn=0x0000000000555914 string=0x0000000000555918 "D"
 *   insn=0x000000000055591C string=0x0000000000555920 "az{"
 *   insn=0x0000000000555924 string=0x0000000000555928 "u\n"
 *   insn=0x000000000055593C string=0x0000000000555A2C "D"
 *   insn=0x0000000000555940 string=0x0000000000555944 "wz{"
 *   insn=0x0000000000555950 string=0x0000000000555954 "?"
 *   insn=0x000000000055596C string=0x0000000000555970 "{"
 *   insn=0x0000000000555970 string=0x0000000000555974 "5"
 *   insn=0x0000000000555978 string=0x000000000055597C " "
 *   insn=0x0000000000555980 string=0x0000000000555984 "5"
 *   insn=0x0000000000555988 string=0x000000000055598C "_"
 *   insn=0x0000000000555998 string=0x000000000055599C "?"
 *   insn=0x000000000055599C string=0x00000000005559A0 "B"
 *   insn=0x00000000005559A0 string=0x00000000005559A4 " "
 *   insn=0x00000000005559B8 string=0x00000000005559BC "a"
 *   insn=0x0000000000555A1C string=0x0000000000555A20 "@"
 *   insn=0x0000000000555A38 string=0x0000000000555A3C "w"
 *   insn=0x0000000000555A54 string=0x0000000000555B30 "D"
 *   insn=0x0000000000555A64 string=0x0000000000555A68 "\t"
 *   insn=0x0000000000555A7C string=0x0000000000555A80 "{"
 *   insn=0x0000000000555A88 string=0x0000000000555A8C " X`xa"
 *   insn=0x0000000000555A8C string=0x0000000000555A90 "a"
 *   insn=0x0000000000555A90 string=0x0000000000555A94 " "
 *   insn=0x0000000000555A98 string=0x0000000000555BD8 "\t@"
 *   insn=0x0000000000555A98 string=0x0000000000555DC8 "@"
 *   insn=0x0000000000555A98 string=0x0000000000555F4C "@"
 *   insn=0x0000000000555A98 string=0x0000000000556014 "@"
 *   insn=0x0000000000555A98 string=0x000000000055627C "\t@"
 *   insn=0x0000000000555AA8 string=0x0000000000555AAC "{"
 *   insn=0x0000000000555AB8 string=0x0000000000555ABC "?"
 *   insn=0x0000000000555AC0 string=0x0000000000555AC4 " "
 *   insn=0x0000000000555AD4 string=0x0000000000555AD8 "`"
 *   insn=0x0000000000555AE8 string=0x0000000000555AEC " "
 *   insn=0x0000000000555AF4 string=0x0000000000555AF8 "?"
 *   insn=0x0000000000555AFC string=0x0000000000555B00 "!"
 *   insn=0x0000000000555B08 string=0x0000000000555B0C "{"
 *   insn=0x0000000000555B1C string=0x0000000000555B20 "!"
 *   insn=0x0000000000555B20 string=0x0000000000555B24 "w"
 *   insn=0x0000000000555B3C string=0x0000000000555B40 "w"
 *   insn=0x0000000000555B44 string=0x0000000000555B48 "`"
 *   insn=0x0000000000555B58 string=0x0000000000555B5C "!$@"
 *   insn=0x0000000000555B5C string=0x0000000000555B60 " "
 *   insn=0x0000000000555B68 string=0x0000000000555B6C "!$@"
 *   insn=0x0000000000555B6C string=0x0000000000555B70 " "
 *   insn=0x0000000000555B78 string=0x0000000000555B7C "!$@"
 *   insn=0x0000000000555B7C string=0x0000000000555B80 " "
 *   insn=0x0000000000555B98 string=0x0000000000555B9C "#@"
 *   insn=0x0000000000555BA4 string=0x0000000000555BA8 "!@"
 *   insn=0x0000000000555BB0 string=0x0000000000555BB4 "c"
 *   insn=0x0000000000555BEC string=0x0000000000555BF0 "#-@"
 *   insn=0x0000000000555BFC string=0x0000000000555C00 "!@"
 *   insn=0x0000000000555C00 string=0x0000000000555C04 "*1@"
 *   insn=0x0000000000555C08 string=0x0000000000555C0C "c"
 *   insn=0x0000000000555C0C string=0x0000000000555C10 ")5@"
 *   insn=0x0000000000555C18 string=0x0000000000555C1C "\t@"
 *   insn=0x0000000000555C20 string=0x0000000000555C24 ")9@"
 *   insn=0x0000000000555C28 string=0x0000000000555C2C "\t@"
 *   insn=0x0000000000555C2C string=0x0000000000555C30 ")=@"
 *   insn=0x0000000000555C34 string=0x0000000000555C38 "\t@"
 *   insn=0x0000000000555C38 string=0x0000000000555C3C ")A@"
 *   insn=0x0000000000555C40 string=0x0000000000555C44 "\t@"
 *   insn=0x0000000000555C44 string=0x0000000000555C48 ")E@"
 *   insn=0x0000000000555C88 string=0x0000000000555C8C "E@"
 *   insn=0x0000000000555C8C string=0x0000000000555C90 ""d@"
 *   insn=0x0000000000555C98 string=0x0000000000555C9C ""h@"
 *   insn=0x0000000000555CA0 string=0x0000000000555CA4 "!l@"
 *   insn=0x0000000000555CAC string=0x0000000000555CB0 "!p@"
 *   insn=0x0000000000555CB8 string=0x0000000000555CBC "!t@"
 *   insn=0x0000000000555CC4 string=0x0000000000555CC8 "!x@"
 *   insn=0x0000000000555CD0 string=0x0000000000555CD4 "!|@"
 *   insn=0x0000000000555CDC string=0x0000000000555CE0 "!"
 *   insn=0x0000000000555CE8 string=0x0000000000555CEC "!"
 *   insn=0x0000000000555CF4 string=0x0000000000555CF8 "!"
 *   insn=0x0000000000555D00 string=0x0000000000555D04 "!"
 *   insn=0x0000000000555D10 string=0x0000000000555D14 "!"
 *   insn=0x0000000000555D20 string=0x0000000000555D24 "!@"
 *   insn=0x0000000000555D2C string=0x0000000000555D30 "c"
 *   insn=0x0000000000555D4C string=0x0000000000555D50 "L"
 *   insn=0x0000000000555D78 string=0x0000000000555D7C "!@"
 *   insn=0x0000000000555D7C string=0x0000000000555D80 "c"
 *   insn=0x0000000000555DA0 string=0x0000000000555DA4 "`&"
 *   insn=0x0000000000555DBC string=0x0000000000555DC0 " "
 *   insn=0x0000000000555DC0 string=0x0000000000555DC4 "/"
 *   insn=0x0000000000555DC8 string=0x0000000000555DCC "A"
 *   insn=0x0000000000555DCC string=0x000000000059E370 "%m/%d/%y"
 *   insn=0x0000000000555DD0 string=0x0000000000555DD4 "B"
 *   insn=0x0000000000555DD4 string=0x0000000000555DD8 "!"
 *   insn=0x0000000000555DD8 string=0x0000000000555DDC "B"
 *   insn=0x0000000000555E08 string=0x0000000000555E0C "!@"
 *   insn=0x0000000000555E0C string=0x0000000000555E10 "c"
 *   insn=0x0000000000555E48 string=0x0000000000555E4C "@"
 *   insn=0x0000000000555E64 string=0x0000000000555E68 "!@"
 *   insn=0x0000000000555E68 string=0x0000000000555E6C "c"
 *   insn=0x0000000000555EA4 string=0x0000000000555EA8 "@"
 *   insn=0x0000000000555EAC string=0x0000000000555EB0 "&"
 *   insn=0x0000000000555EC0 string=0x0000000000555EC4 "!@"
 *   insn=0x0000000000555EC4 string=0x0000000000555EC8 "c"
 *   insn=0x0000000000555F00 string=0x0000000000555F04 "@"
 *   insn=0x0000000000555F10 string=0x0000000000555F14 "g"
 *   insn=0x0000000000555F1C string=0x0000000000555F20 "!@"
 *   insn=0x0000000000555F20 string=0x0000000000555F24 "c"
 *   insn=0x0000000000555F28 string=0x0000000000555F2C "h"
 *   insn=0x0000000000555F4C string=0x0000000000555F50 "A"
 *   insn=0x0000000000555F50 string=0x000000000059E380 "%H:%M"
 *   insn=0x0000000000555F54 string=0x0000000000555F58 "B"
 *   insn=0x0000000000555F58 string=0x0000000000555F5C "!"
 *   insn=0x0000000000555F5C string=0x0000000000555F60 "B"
 *   insn=0x0000000000555F8C string=0x0000000000555F90 "!@"
 *   insn=0x0000000000555F90 string=0x0000000000555F94 "c"
 *   insn=0x0000000000555F98 string=0x0000000000555F9C "%"
 *   insn=0x0000000000555FCC string=0x0000000000555FD0 "@"
 *   insn=0x0000000000555FE0 string=0x0000000000555FE4 "!@"
 *   insn=0x0000000000555FE4 string=0x0000000000555FE8 "c"
 *   insn=0x0000000000555FF0 string=0x0000000000555FF4 "6"
 *   insn=0x0000000000556014 string=0x0000000000556018 "A"
 *   insn=0x0000000000556018 string=0x000000000059E388 "%H:%M:%S"
 *   insn=0x000000000055601C string=0x0000000000556020 "B"
 *   insn=0x0000000000556020 string=0x0000000000556024 "! "
 *   insn=0x0000000000556024 string=0x0000000000556028 "BD"
 *   insn=0x0000000000556054 string=0x0000000000556058 "!@"
 *   insn=0x0000000000556058 string=0x000000000055605C "c"
 *   insn=0x0000000000556094 string=0x0000000000556098 "#"
 *   insn=0x00000000005560A0 string=0x00000000005560A4 "!@"
 *   insn=0x00000000005560AC string=0x00000000005560B0 "c"
 *   insn=0x00000000005560CC string=0x00000000005560D0 "l"
 *   insn=0x00000000005560DC string=0x00000000005560E0 "C"
 *   insn=0x00000000005560E4 string=0x00000000005560E8 "!"
 *   insn=0x00000000005560E8 string=0x00000000005560EC "c@"
 *   insn=0x00000000005560EC string=0x00000000005560F0 "`"
 *   insn=0x0000000000556148 string=0x000000000055614C "!@"
 *   insn=0x0000000000556150 string=0x0000000000556154 "m"
 *   insn=0x000000000055615C string=0x0000000000556160 "j"
 *   insn=0x0000000000556170 string=0x0000000000556174 "?"
 *   insn=0x0000000000556184 string=0x0000000000556188 "@"
 *   insn=0x000000000055618C string=0x0000000000556190 "^"
 *   insn=0x0000000000556194 string=0x0000000000556198 "B"
 *   insn=0x00000000005561A0 string=0x00000000005561A4 "B(@"
 *   insn=0x00000000005561A4 string=0x00000000005561A8 "@"
 *   insn=0x00000000005561AC string=0x00000000005561B0 "`"
 *   insn=0x00000000005561B4 string=0x00000000005561B8 "T"
 *   insn=0x00000000005561BC string=0x00000000005561C0 "B"
 *   insn=0x00000000005561C4 string=0x00000000005561C8 "a"
 *   insn=0x00000000005561C8 string=0x00000000005561CC "B(@"
 *   insn=0x00000000005561CC string=0x00000000005561D0 "@"
 *   insn=0x00000000005561E4 string=0x00000000005561E8 "U"
 *   insn=0x0000000000556228 string=0x000000000055622C "g"
 *   insn=0x000000000055622C string=0x0000000000556230 "#"
 *   insn=0x0000000000556250 string=0x0000000000556254 "!@"
 *   insn=0x0000000000556290 string=0x0000000000556294 "#I@"
 *   insn=0x00000000005562A0 string=0x00000000005562A4 "!@"
 *   insn=0x00000000005562A4 string=0x00000000005562A8 "*M@"
 *   insn=0x00000000005562AC string=0x00000000005562B0 "c"
 *   insn=0x00000000005562B0 string=0x00000000005562B4 ")Q@"
 *   insn=0x00000000005562BC string=0x00000000005562C0 "\t@"
 *   insn=0x00000000005562C4 string=0x00000000005562C8 ")U@"
 *   insn=0x00000000005562CC string=0x00000000005562D0 "\t@"
 *   insn=0x00000000005562D0 string=0x00000000005562D4 ")Y@"
 *   insn=0x00000000005562D8 string=0x00000000005562DC "\t@"
 *   insn=0x00000000005562DC string=0x00000000005562E0 ")]@"
 *   insn=0x00000000005562E4 string=0x00000000005562E8 "\t@"
 *   insn=0x00000000005562E8 string=0x00000000005562EC ")a@"
 *   insn=0x00000000005562F8 string=0x00000000005562FC "("
 *   insn=0x000000000055632C string=0x0000000000556330 "E@"
 *   insn=0x0000000000556330 string=0x0000000000556334 """
 *   insn=0x000000000055633C string=0x0000000000556340 """
 *   insn=0x0000000000556344 string=0x0000000000556348 "!"
 *   insn=0x0000000000556350 string=0x0000000000556354 "!"
 *   insn=0x000000000055635C string=0x0000000000556360 "!"
 *   insn=0x0000000000556368 string=0x000000000055636C "!"
 *   insn=0x0000000000556374 string=0x0000000000556378 "!"
 *   insn=0x0000000000556380 string=0x0000000000556384 "!"
 *   insn=0x000000000055638C string=0x0000000000556390 "!"
 *   insn=0x0000000000556398 string=0x000000000055639C "!"
 *   insn=0x00000000005563A4 string=0x00000000005563A8 "!"
 *   insn=0x00000000005563B4 string=0x00000000005563B8 "!"
 *   insn=0x00000000005563C4 string=0x00000000005563C8 "!@"
 *   insn=0x00000000005563D0 string=0x00000000005563D4 "c"
 *   insn=0x0000000000556408 string=0x000000000055640C "#"
 *   insn=0x0000000000556414 string=0x0000000000556418 "!@"
 *   insn=0x0000000000556420 string=0x0000000000556424 "c"
 *   insn=0x0000000000556458 string=0x000000000055645C "@"
 *   insn=0x0000000000556460 string=0x0000000000556464 "&"
 *   insn=0x0000000000556474 string=0x0000000000556478 "!@"
 *   insn=0x0000000000556478 string=0x000000000055647C "c"
 *   insn=0x000000000055649C string=0x00000000005564A0 "x"
 *   insn=0x00000000005564AC string=0x00000000005564B0 "C"
 *   insn=0x00000000005564B8 string=0x00000000005564BC "c@"
 *   insn=0x00000000005564BC string=0x00000000005564C0 "`"
 *   insn=0x00000000005564CC string=0x00000000005564D0 " "
 *   insn=0x00000000005564D8 string=0x00000000005564DC "?"
 *   insn=0x00000000005564DC string=0x00000000005564E0 """
 *   insn=0x00000000005564E0 string=0x00000000005564E4 "!"
 *   insn=0x0000000000556504 string=0x0000000000556508 "&"
 *   insn=0x000000000055650C string=0x0000000000556510 "'"
 *   insn=0x000000000055651C string=0x0000000000556520 "!@"
 *   insn=0x0000000000556520 string=0x0000000000556524 "c"
 *   insn=0x0000000000556544 string=0x0000000000556548 "N"
 *   insn=0x000000000055655C string=0x0000000000556560 "@"
 *   insn=0x000000000055656C string=0x0000000000556570 "&"
 *   insn=0x0000000000556570 string=0x0000000000556574 "!@"
 *   insn=0x0000000000556574 string=0x0000000000556578 "c"
 *   insn=0x00000000005565B0 string=0x00000000005565B4 " "
 *   insn=0x00000000005565B4 string=0x00000000005565B8 "2"
 *   insn=0x00000000005565BC string=0x00000000005565C0 "R"
 *   insn=0x00000000005565C4 string=0x00000000005565C8 "C"
 *   insn=0x00000000005565D0 string=0x00000000005565D4 "c0@"
 *   insn=0x00000000005565D4 string=0x00000000005565D8 "`"
 *   insn=0x00000000005565E4 string=0x00000000005565E8 "A"
 *   insn=0x0000000000556610 string=0x0000000000556614 ""
 *   insn=0x0000000000556618 string=0x000000000055661C ";"
 *   insn=0x0000000000556620 string=0x0000000000556624 "C"
 *   insn=0x000000000055662C string=0x0000000000556630 "c0@"
 *   insn=0x0000000000556630 string=0x0000000000556634 "`"
 *   insn=0x0000000000556640 string=0x0000000000556644 "a"
 *   insn=0x000000000055664C string=0x0000000000556650 "!(@"
 *   insn=0x0000000000556650 string=0x0000000000556654 " "
 *   insn=0x0000000000556658 string=0x000000000055665C "+"
 *   insn=0x0000000000556678 string=0x000000000055667C "@"
 *   insn=0x0000000000556680 string=0x0000000000556684 "F"
 *   insn=0x0000000000556694 string=0x0000000000556698 "!@"
 *   insn=0x0000000000556698 string=0x000000000055669C "c"
 *   insn=0x00000000005566CC string=0x00000000005566D0 "}"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_555830(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        int *a8,
        const wchar_t *a9)
{
  __int64 v9; // x20
  _QWORD *v12; // x24
  size_t v13; // x27
  void *v14; // x26
  size_t v15; // x20
  _QWORD *v16; // x21
  _QWORD *v17; // x0
  int v18; // w21
  int v19; // w1
  int v20; // w0
  const wchar_t *v21; // x21
  _QWORD *v22; // x0
  wchar_t v23; // w23
  int *v24; // x1
  int v25; // w0
  int *v27; // x0
  int v28; // w0
  size_t v29; // x23
  int v30; // w0
  size_t v31; // x27
  int *v32; // x1
  int v33; // w0
  unsigned __int64 v34; // x1
  _QWORD *v35; // x9
  int v36; // w1
  _QWORD *v37; // x1
  int v38; // w1
  int v39; // w1
  int v40; // w0
  int v41; // w1
  int v42; // w1
  int v43; // w1
  int v44; // w1
  int v45; // w1
  int v46; // w1
  int v47; // w1
  unsigned int v48; // w0
  int v49; // w1
  int v50; // w27
  int v51; // w21
  int v52; // w21
  int v53; // w1
  int v54; // w1
  _QWORD *v55; // x9
  int v56; // w1
  _QWORD *v57; // x1
  int v58; // w1
  int v59; // w1
  int v60; // w1
  unsigned int v61; // w0
  unsigned __int64 v62; // x1
  int v63; // w1
  int v64; // w1
  unsigned int v65; // w0
  char v66; // w0
  unsigned __int64 v67; // x0
  unsigned int v68; // w0
  char v69; // w0
  int v70; // w1
  _QWORD *v73; // [xsp+210h] [xbp+1F0h] BYREF
  __int64 v74; // [xsp+218h] [xbp+1F8h]
  _QWORD *v75; // [xsp+220h] [xbp+200h] BYREF
  __int64 v76; // [xsp+228h] [xbp+208h]
  int v77; // [xsp+238h] [xbp+218h] BYREF
  int v78; // [xsp+23Ch] [xbp+21Ch] BYREF
  __int64 v79; // [xsp+240h] [xbp+220h] BYREF
  __int64 v80; // [xsp+248h] [xbp+228h]
  __int64 v81; // [xsp+250h] [xbp+230h]
  __int64 v82; // [xsp+258h] [xbp+238h]
  __int64 v83; // [xsp+260h] [xbp+240h]
  __int64 v84; // [xsp+268h] [xbp+248h]
  __int64 v85; // [xsp+270h] [xbp+250h]
  __int64 v86; // [xsp+278h] [xbp+258h]
  __int64 v87; // [xsp+280h] [xbp+260h]
  __int64 v88; // [xsp+288h] [xbp+268h]
  __int64 v89; // [xsp+290h] [xbp+270h]
  __int64 v90; // [xsp+298h] [xbp+278h]

  v9 = a6 + 208;
  v75 = a2;
  v76 = a3;
  v73 = a4;
  v74 = a5;
  v12 = sub_5513A0(a6 + 208);
  v13 = 0;
  v14 = sub_54F6AC(v9);
  v15 = wcslen(a9);
  v16 = v75;
  v77 = 0;
  if ( !v75 )
    goto LABEL_15;
LABEL_2:
  if ( (_DWORD)v76 == -1 )
  {
    v27 = (int *)v16[2];
    if ( (unsigned __int64)v27 >= v16[3] )
      v28 = (*(__int64 (__fastcall **)(_QWORD *))(*v16 + 72LL))(v16);
    else
      v28 = *v27;
    if ( v28 != -1 )
    {
      LODWORD(v76) = v28;
      goto LABEL_3;
    }
    v75 = 0;
    while ( 1 )
    {
LABEL_15:
      v17 = v73;
      if ( !v73 )
        goto LABEL_21;
      v18 = 1;
      v19 = 0;
      if ( (_DWORD)v74 != -1 )
        goto LABEL_5;
LABEL_17:
      v24 = (int *)v17[2];
      if ( (unsigned __int64)v24 >= v17[3] )
        v25 = (*(__int64 (__fastcall **)(_QWORD *))(*v17 + 72LL))(v17);
      else
        v25 = *v24;
      if ( v25 == -1 )
      {
        v73 = 0;
        v19 = 1;
        goto LABEL_5;
      }
      LODWORD(v74) = v25;
      if ( !v18 )
        goto LABEL_21;
LABEL_6:
      v20 = v77;
      if ( v13 >= v15 || v77 )
        goto LABEL_22;
      v21 = &a9[v13];
      if ( (*(unsigned __int8 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)v14 + 96LL))(
             v14,
             *(unsigned int *)v21,
             0) == 37 )
      {
        v29 = v13 + 1;
        v30 = (*(unsigned __int8 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)v14 + 96LL))(
                v14,
                *((unsigned int *)v21 + 1),
                0);
        v78 = 0;
        if ( (unsigned __int8)v30 == 79 || (unsigned __int8)v30 == 69 )
        {
          v29 = v13 + 2;
          v30 = (*(unsigned __int8 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)v14 + 96LL))(
                  v14,
                  *((unsigned int *)v21 + 2),
                  0);
        }
        switch ( v30 )
        {
          case 'A':
            v35 = (_QWORD *)v12[2];
            v31 = v29;
            v79 = v35[11];
            v80 = v35[12];
            v81 = v35[13];
            v82 = *(_QWORD *)(v12[2] + 112LL);
            v83 = *(_QWORD *)(v12[2] + 120LL);
            v84 = *(_QWORD *)(v12[2] + 128LL);
            v85 = *(_QWORD *)(v12[2] + 136LL);
            v16 = sub_554B9C(a1, v75, v76, (__int64)v73, v74, a8 + 6, (__int64)&v79, 7, a6, &v77);
            v75 = v16;
            LODWORD(v76) = v36;
            break;
          case 'B':
            v37 = (_QWORD *)v12[2];
            v31 = v29;
            v79 = v37[25];
            v80 = v37[26];
            v81 = v37[27];
            v82 = *(_QWORD *)(v12[2] + 224LL);
            v83 = *(_QWORD *)(v12[2] + 232LL);
            v84 = *(_QWORD *)(v12[2] + 240LL);
            v85 = *(_QWORD *)(v12[2] + 248LL);
            v86 = *(_QWORD *)(v12[2] + 256LL);
            v87 = *(_QWORD *)(v12[2] + 264LL);
            v88 = *(_QWORD *)(v12[2] + 272LL);
            v89 = *(_QWORD *)(v12[2] + 280LL);
            v90 = *(_QWORD *)(v12[2] + 288LL);
            v16 = sub_554B9C(a1, v75, v76, (__int64)v73, v74, a8 + 4, (__int64)&v79, 12, a6, &v77);
            v75 = v16;
            LODWORD(v76) = v38;
            break;
          case 'C':
          case 'Y':
          case 'y':
            v75 = sub_54F8CC(a1, v75, v76, v73, v74, &v78, 0, 9999, 4u, a6, &v77);
            LODWORD(v76) = v39;
            if ( v77 )
              goto LABEL_76;
            if ( v78 < 0 )
              v40 = v78 + 100;
            else
              v40 = v78 - 1900;
            v31 = v29;
            v16 = v75;
            a8[5] = v40;
            break;
          case 'D':
            v31 = v29;
            (*(void (**)(void *, const char *, ...))(*(_QWORD *)v14 + 88LL))(v14, "%m/%d/%y", &unk_59E379, &v79);
            v16 = (_QWORD *)sub_555830(a1, v75, v76, v73, v74, a6, &v77, a8);
            v75 = v16;
            LODWORD(v76) = v41;
            break;
          case 'H':
            v31 = v29;
            v16 = sub_54F8CC(a1, v75, v76, v73, v74, a8 + 2, 0, 23, 2u, a6, &v77);
            v75 = v16;
            LODWORD(v76) = v42;
            break;
          case 'I':
            v31 = v29;
            v16 = sub_54F8CC(a1, v75, v76, v73, v74, a8 + 2, 1, 12, 2u, a6, &v77);
            v75 = v16;
            LODWORD(v76) = v43;
            break;
          case 'M':
            v31 = v29;
            v16 = sub_54F8CC(a1, v75, v76, v73, v74, a8 + 1, 0, 59, 2u, a6, &v77);
            v75 = v16;
            LODWORD(v76) = v44;
            break;
          case 'R':
            v31 = v29;
            (*(void (**)(void *, const char *, ...))(*(_QWORD *)v14 + 88LL))(v14, "%H:%M", &unk_59E386, &v79);
            v16 = (_QWORD *)sub_555830(a1, v75, v76, v73, v74, a6, &v77, a8);
            v75 = v16;
            LODWORD(v76) = v45;
            break;
          case 'S':
            v31 = v29;
            v16 = sub_54F8CC(a1, v75, v76, v73, v74, a8, 0, 61, 2u, a6, &v77);
            v75 = v16;
            LODWORD(v76) = v46;
            break;
          case 'T':
            v31 = v29;
            (*(void (**)(void *, const char *, ...))(*(_QWORD *)v14 + 88LL))(v14, "%H:%M:%S", &unk_59E391, &v79);
            v16 = (_QWORD *)sub_555830(a1, v75, v76, v73, v74, a6, &v77, a8);
            v75 = v16;
            LODWORD(v76) = v47;
            break;
          case 'X':
          case 'c':
          case 'x':
            v31 = v29;
            v16 = (_QWORD *)sub_555830(a1, v75, v76, v73, v74, a6, &v77, a8);
            v75 = v16;
            LODWORD(v76) = v59;
            break;
          case 'Z':
            v48 = sub_554B08((__int64)&v75);
            if ( !(*(unsigned __int8 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v14 + 16LL))(v14, 1, v48) )
              goto LABEL_33;
            v75 = sub_554B9C(a1, v75, v76, (__int64)v73, v74, &v79, (__int64)&off_6E89C0, 14, a6, &v77);
            LODWORD(v76) = v49;
            v50 = sub_554B08((__int64)&v75);
            if ( (v50 == -1) != ((unsigned int)sub_554B08((__int64)&v73) == -1) && !v77 && !(_DWORD)v79 )
            {
              v51 = sub_554B08((__int64)&v75);
              if ( v51 == (*(unsigned int (__fastcall **)(void *, __int64))(*(_QWORD *)v14 + 80LL))(v14, 45)
                || (v52 = sub_554B08((__int64)&v75),
                    v52 == (*(unsigned int (__fastcall **)(void *, __int64))(*(_QWORD *)v14 + 80LL))(v14, 43)) )
              {
                v75 = sub_54F8CC(a1, v75, v76, v73, v74, (int *)&v79, 0, 23, 2u, a6, &v77);
                LODWORD(v76) = v53;
                v75 = sub_54F8CC(a1, v75, v53, v73, v74, (int *)&v79, 0, 59, 2u, a6, &v77);
                LODWORD(v76) = v54;
              }
            }
LABEL_76:
            v16 = v75;
            v31 = v29;
            break;
          case 'a':
            v55 = (_QWORD *)v12[2];
            v31 = v29;
            v79 = v55[18];
            v80 = v55[19];
            v81 = v55[20];
            v82 = *(_QWORD *)(v12[2] + 168LL);
            v83 = *(_QWORD *)(v12[2] + 176LL);
            v84 = *(_QWORD *)(v12[2] + 184LL);
            v85 = *(_QWORD *)(v12[2] + 192LL);
            v16 = sub_554B9C(a1, v75, v76, (__int64)v73, v74, a8 + 6, (__int64)&v79, 7, a6, &v77);
            v75 = v16;
            LODWORD(v76) = v56;
            break;
          case 'b':
          case 'h':
            v57 = (_QWORD *)v12[2];
            v31 = v29;
            v79 = v57[37];
            v80 = v57[38];
            v81 = v57[39];
            v82 = *(_QWORD *)(v12[2] + 320LL);
            v83 = *(_QWORD *)(v12[2] + 328LL);
            v84 = *(_QWORD *)(v12[2] + 336LL);
            v85 = *(_QWORD *)(v12[2] + 344LL);
            v86 = *(_QWORD *)(v12[2] + 352LL);
            v87 = *(_QWORD *)(v12[2] + 360LL);
            v88 = *(_QWORD *)(v12[2] + 368LL);
            v89 = *(_QWORD *)(v12[2] + 376LL);
            v90 = *(_QWORD *)(v12[2] + 384LL);
            v16 = sub_554B9C(a1, v75, v76, (__int64)v73, v74, a8 + 4, (__int64)&v79, 12, a6, &v77);
            v75 = v16;
            LODWORD(v76) = v58;
            break;
          case 'd':
            v31 = v29;
            v16 = sub_54F8CC(a1, v75, v76, v73, v74, a8 + 3, 1, 31, 2u, a6, &v77);
            v75 = v16;
            LODWORD(v76) = v60;
            break;
          case 'e':
            v61 = sub_554B08((__int64)&v75);
            if ( (*(unsigned __int8 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v14 + 16LL))(v14, 8, v61) )
            {
              if ( v75 )
              {
                v62 = v75[2];
                if ( v62 >= v75[3] )
                  sub_54D8C4((__int64)v75);
                else
                  v75[2] = v62 + 4;
                LODWORD(v76) = -1;
              }
              v31 = v29;
              v16 = sub_54F8CC(a1, v75, v76, v73, v74, a8 + 3, 1, 9, 1u, a6, &v77);
              v75 = v16;
              LODWORD(v76) = v63;
            }
            else
            {
              v31 = v29;
              v16 = sub_54F8CC(a1, v75, v76, v73, v74, a8 + 3, 10, 31, 2u, a6, &v77);
              v75 = v16;
              LODWORD(v76) = v70;
            }
            break;
          case 'm':
            v75 = sub_54F8CC(a1, v75, v76, v73, v74, &v78, 1, 12, 2u, a6, &v77);
            LODWORD(v76) = v64;
            v16 = v75;
            if ( v77 )
              goto LABEL_35;
            v31 = v29;
            a8[4] = v78 - 1;
            break;
          case 'n':
            v65 = sub_554B08((__int64)&v75);
            v66 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)v14 + 96LL))(v14, v65, 0);
            v16 = v75;
            if ( v66 != 10 )
              goto LABEL_34;
            goto LABEL_90;
          case 't':
            v68 = sub_554B08((__int64)&v75);
            v69 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)v14 + 96LL))(v14, v68, 0);
            v16 = v75;
            if ( v69 != 9 )
              goto LABEL_34;
LABEL_90:
            if ( !v16 )
              goto LABEL_35;
            v67 = v16[2];
            if ( v67 >= v16[3] )
            {
              sub_54D8C4((__int64)v16);
              v16 = v75;
            }
            else
            {
              v16[2] = v67 + 4;
            }
            v31 = v29;
            LODWORD(v76) = -1;
            break;
          default:
LABEL_33:
            v16 = v75;
LABEL_34:
            v77 |= 4u;
LABEL_35:
            v31 = v29;
            break;
        }
        v13 = v31 + 1;
        goto LABEL_14;
      }
      v22 = v75;
      v23 = a9[v13];
      v16 = v75;
      if ( !v75 )
        goto LABEL_39;
      if ( (_DWORD)v76 == -1 )
      {
        v32 = (int *)v75[2];
        if ( (unsigned __int64)v32 >= v75[3] )
          v33 = (*(__int64 (__fastcall **)(_QWORD *))(*v75 + 72LL))(v75);
        else
          v33 = *v32;
        if ( v33 == -1 )
        {
          v75 = 0;
LABEL_39:
          v16 = 0;
          if ( v23 == -1 )
          {
            ++v13;
            goto LABEL_14;
          }
          goto LABEL_12;
        }
        LODWORD(v76) = v33;
        if ( v23 == v33 )
        {
          v22 = v75;
          v16 = v75;
          if ( v75 )
          {
LABEL_47:
            v34 = v22[2];
            if ( v34 >= v22[3] )
            {
              (*(void (__fastcall **)(_QWORD *))(*v22 + 80LL))(v22);
              v22 = v75;
            }
            else
            {
              v22[2] = v34 + 4;
            }
            v16 = v22;
            ++v13;
            LODWORD(v76) = -1;
            goto LABEL_14;
          }
          goto LABEL_13;
        }
        v16 = v75;
      }
      else if ( v23 == (_DWORD)v76 )
      {
        goto LABEL_47;
      }
LABEL_12:
      v77 |= 4u;
LABEL_13:
      ++v13;
LABEL_14:
      if ( v16 )
        goto LABEL_2;
    }
  }
LABEL_3:
  v17 = v73;
  v18 = 0;
  if ( !v73 )
    goto LABEL_6;
  v19 = 0;
  if ( (_DWORD)v74 == -1 )
    goto LABEL_17;
LABEL_5:
  if ( v18 != v19 )
    goto LABEL_6;
LABEL_21:
  v20 = v77;
LABEL_22:
  if ( v20 || v13 != v15 )
    *a7 |= 4u;
  return v75;
}

