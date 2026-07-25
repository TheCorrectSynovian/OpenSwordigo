/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000558854
 * Mangled: sub_558854
 * Demangled: sub_558854
 *
 * Callers: 4
 *   0x00000000005586A4  sub_5586A4
 *   0x0000000000559434  sub_559434
 *   0x0000000000559690  sub_559690
 *   0x00000000005598EC  sub_5598EC
 *
 * Callees: 11
 *   0x0000000000200670  .wmemchr
 *   0x000000000053CA8C  sub_53CA8C
 *   0x000000000054D8C4  sub_54D8C4
 *   0x000000000054D8E0  sub_54D8E0
 *   0x0000000000554A24  sub_554A24
 *   0x0000000000554B08  sub_554B08
 *   0x0000000000559434  sub_559434
 *   0x0000000000567088  sub_567088
 *   0x0000000000567890  sub_567890
 *   0x0000000000568CB8  sub_568CB8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 212
 *   insn=0x000000000055888C string=0x0000000000558890 "e"
 *   insn=0x00000000005588C4 string=0x00000000005588C8 "?"
 *   insn=0x00000000005588D8 string=0x00000000005588DC "8"
 *   insn=0x00000000005588DC string=0x00000000005588E0 "z"
 *   insn=0x00000000005588E0 string=0x00000000005588E4 "@"
 *   insn=0x0000000000558900 string=0x0000000000558904 ""
 *   insn=0x0000000000558908 string=0x000000000055890C "x"
 *   insn=0x0000000000558910 string=0x0000000000558914 "h"
 *   insn=0x0000000000558930 string=0x0000000000558934 "?"
 *   insn=0x0000000000558954 string=0x0000000000558958 "6"
 *   insn=0x000000000055895C string=0x0000000000558960 "A"
 *   insn=0x0000000000558964 string=0x0000000000558968 "_"
 *   insn=0x0000000000558968 string=0x000000000055896C "!"
 *   insn=0x000000000055897C string=0x0000000000558980 "?"
 *   insn=0x0000000000558984 string=0x0000000000558988 "!"
 *   insn=0x000000000055899C string=0x00000000005589A0 "?"
 *   insn=0x00000000005589A4 string=0x00000000005589A8 "!"
 *   insn=0x00000000005589A8 string=0x00000000005589AC "?"
 *   insn=0x00000000005589BC string=0x00000000005589C0 "@"
 *   insn=0x00000000005589C8 string=0x00000000005589CC "_"
 *   insn=0x00000000005589D0 string=0x00000000005589D4 "?"
 *   insn=0x00000000005589DC string=0x00000000005589E0 "`"
 *   insn=0x00000000005589E4 string=0x00000000005589E8 "{"
 *   insn=0x00000000005589E4 string=0x0000000000558A1C "Z"
 *   insn=0x0000000000558A00 string=0x0000000000558A04 """
 *   insn=0x0000000000558A04 string=0x000000000053CA8C "E"
 *   insn=0x0000000000558A14 string=0x0000000000558A18 " "
 *   insn=0x0000000000558A1C string=0x0000000000558A20 "`b"
 *   insn=0x0000000000558A28 string=0x0000000000558A2C "A@"
 *   insn=0x0000000000558A5C string=0x0000000000558A60 ""
 *   insn=0x0000000000558A7C string=0x0000000000558E5C "`"
 *   insn=0x0000000000558A88 string=0x0000000000558A8C "`"
 *   insn=0x0000000000558A90 string=0x0000000000558A94 "\t<"
 *   insn=0x0000000000558AA4 string=0x0000000000558AA8 "3"
 *   insn=0x0000000000558AB8 string=0x0000000000558ABC "_"
 *   insn=0x0000000000558AC8 string=0x0000000000558ACC "o9"
 *   insn=0x0000000000558ADC string=0x0000000000558AE0 "A"
 *   insn=0x0000000000558AE4 string=0x0000000000558AE8 "_"
 *   insn=0x0000000000558AF8 string=0x0000000000558AFC "3"
 *   insn=0x0000000000558B08 string=0x0000000000558B0C "_"
 *   insn=0x0000000000558B18 string=0x0000000000558B1C "[9"
 *   insn=0x0000000000558B2C string=0x0000000000558B30 "<"
 *   insn=0x0000000000558B34 string=0x0000000000558B38 "A"
 *   insn=0x0000000000558B3C string=0x0000000000558B40 "_"
 *   insn=0x0000000000558B48 string=0x0000000000558B4C " "
 *   insn=0x0000000000558B54 string=0x0000000000558B58 "?"
 *   insn=0x0000000000558B58 string=0x0000000000558B5C "B!"
 *   insn=0x0000000000558B5C string=0x0000000000558B60 "!"
 *   insn=0x0000000000558B74 string=0x0000000000558B78 "?"
 *   insn=0x0000000000558B78 string=0x0000000000558B7C "b'"
 *   insn=0x0000000000558B7C string=0x0000000000558B80 "!"
 *   insn=0x0000000000558B80 string=0x0000000000558B84 "?"
 *   insn=0x0000000000558BA0 string=0x0000000000558BA4 "_"
 *   insn=0x0000000000558BA4 string=0x0000000000558BA8 " "
 *   insn=0x0000000000558BAC string=0x0000000000558BB0 "`"
 *   insn=0x0000000000558BD0 string=0x0000000000558BD4 "x"
 *   insn=0x0000000000558BE4 string=0x0000000000558BE8 "@"
 *   insn=0x0000000000558BE8 string=0x0000000000558F50 "`"
 *   insn=0x0000000000558C14 string=0x0000000000558C18 "3"
 *   insn=0x0000000000558C24 string=0x0000000000558C28 "_"
 *   insn=0x0000000000558C4C string=0x0000000000558C50 "A"
 *   insn=0x0000000000558C54 string=0x0000000000558C58 "_"
 *   insn=0x0000000000558C58 string=0x0000000000558C5C "a"
 *   insn=0x0000000000558C60 string=0x0000000000558C64 " "
 *   insn=0x0000000000558C6C string=0x0000000000558C70 "_"
 *   insn=0x0000000000558C70 string=0x0000000000558C74 ")"
 *   insn=0x0000000000558C74 string=0x0000000000558C78 "!"
 *   insn=0x0000000000558CA8 string=0x0000000000558CAC "@+"
 *   insn=0x0000000000558CC4 string=0x0000000000558E54 "x"
 *   insn=0x0000000000558CC8 string=0x0000000000558CCC ";"
 *   insn=0x0000000000558CE4 string=0x0000000000558CE8 "3"
 *   insn=0x0000000000558CF4 string=0x0000000000558CF8 "_"
 *   insn=0x0000000000558D14 string=0x0000000000558D18 ";"
 *   insn=0x0000000000558D1C string=0x0000000000558D20 "A"
 *   insn=0x0000000000558D24 string=0x0000000000558D28 "_"
 *   insn=0x0000000000558D28 string=0x0000000000558D2C " "
 *   insn=0x0000000000558D4C string=0x0000000000558D50 "3"
 *   insn=0x0000000000558D54 string=0x0000000000558D58 "_"
 *   insn=0x0000000000558D64 string=0x0000000000558D68 "?"
 *   insn=0x0000000000558D68 string=0x0000000000558D6C "B'"
 *   insn=0x0000000000558D6C string=0x0000000000558D70 " "
 *   insn=0x0000000000558D74 string=0x0000000000558D78 "`"
 *   insn=0x0000000000558D8C string=0x0000000000558D90 "B"
 *   insn=0x0000000000558D90 string=0x0000000000558D94 "7"
 *   insn=0x0000000000558D94 string=0x0000000000558D98 "`"
 *   insn=0x0000000000558DA4 string=0x0000000000558DA8 """
 *   insn=0x0000000000558DAC string=0x0000000000558DB0 " "
 *   insn=0x0000000000558DC4 string=0x0000000000558DC8 """
 *   insn=0x0000000000558DC8 string=0x0000000000558DCC "_"
 *   insn=0x0000000000558DD0 string=0x0000000000558DE8 "6h 8"
 *   insn=0x0000000000558DE0 string=0x0000000000558DE4 " "
 *   insn=0x0000000000558DEC string=0x0000000000558DF0 "A"
 *   insn=0x0000000000558DF4 string=0x0000000000558DF8 "_"
 *   insn=0x0000000000558DF8 string=0x0000000000558DFC "a"
 *   insn=0x0000000000558E04 string=0x0000000000558E08 "6"
 *   insn=0x0000000000558E08 string=0x0000000000558E0C " "
 *   insn=0x0000000000558E10 string=0x0000000000558E14 "@"
 *   insn=0x0000000000558E20 string=0x0000000000558E24 "_"
 *   insn=0x0000000000558E24 string=0x0000000000558E28 "!"
 *   insn=0x0000000000558E30 string=0x0000000000558E34 "?"
 *   insn=0x0000000000558E38 string=0x0000000000558E3C " "
 *   insn=0x0000000000558E40 string=0x0000000000558E44 "`\t"
 *   insn=0x0000000000558E4C string=0x0000000000558E50 "W"
 *   insn=0x0000000000558E7C string=0x0000000000558E80 "2"
 *   insn=0x0000000000558E94 string=0x0000000000558E98 "!"
 *   insn=0x0000000000558EB8 string=0x0000000000558EBC "u:"
 *   insn=0x0000000000558EC4 string=0x0000000000558EC8 "r:"
 *   insn=0x0000000000558ECC string=0x0000000000558ED0 " "
 *   insn=0x0000000000558ED8 string=0x0000000000558EDC "?"
 *   insn=0x0000000000558EE0 string=0x0000000000558EE4 "!"
 *   insn=0x0000000000558F30 string=0x0000000000558F34 "!"
 *   insn=0x0000000000558F44 string=0x0000000000558F48 ";"
 *   insn=0x0000000000558F60 string=0x0000000000558F64 "K:"
 *   insn=0x0000000000558F64 string=0x0000000000558F68 "<"
 *   insn=0x0000000000558F74 string=0x0000000000558F78 ""
 *   insn=0x0000000000558F84 string=0x0000000000558F88 "!(@"
 *   insn=0x0000000000558F88 string=0x0000000000558F8C " "
 *   insn=0x0000000000558FA4 string=0x0000000000558FA8 "!"
 *   insn=0x0000000000558FB0 string=0x0000000000558FB4 "d"
 *   insn=0x0000000000558FC4 string=0x0000000000558FC8 "@ "
 *   insn=0x0000000000558FC8 string=0x00000000005593D0 " "
 *   insn=0x0000000000558FD4 string=0x0000000000558FD8 "?"
 *   insn=0x0000000000558FDC string=0x0000000000558FE0 "a"
 *   insn=0x0000000000558FE4 string=0x0000000000558FE8 "A"
 *   insn=0x0000000000558FE8 string=0x0000000000558FEC "):"
 *   insn=0x0000000000558FEC string=0x0000000000558FF0 ";"
 *   insn=0x0000000000558FF8 string=0x0000000000558FFC "!(@"
 *   insn=0x0000000000558FFC string=0x0000000000559000 " "
 *   insn=0x0000000000559010 string=0x0000000000559014 "a"
 *   insn=0x0000000000559030 string=0x0000000000559034 ""
 *   insn=0x0000000000559038 string=0x000000000055903C "!(@"
 *   insn=0x000000000055903C string=0x0000000000559040 " "
 *   insn=0x0000000000559050 string=0x0000000000559054 "k"
 *   insn=0x0000000000559058 string=0x000000000055905C "!$@"
 *   insn=0x000000000055905C string=0x0000000000559060 " "
 *   insn=0x0000000000559060 string=0x0000000000559064 "w"
 *   insn=0x0000000000559068 string=0x000000000055906C "!$@"
 *   insn=0x000000000055906C string=0x0000000000559070 " "
 *   insn=0x0000000000559084 string=0x0000000000559088 "!`"
 *   insn=0x00000000005590CC string=0x00000000005593FC "!"
 *   insn=0x00000000005590D8 string=0x00000000005590DC "_"
 *   insn=0x00000000005590DC string=0x00000000005590E0 "a"
 *   insn=0x00000000005590E8 string=0x00000000005590EC "A"
 *   insn=0x00000000005590F4 string=0x00000000005590F8 " "
 *   insn=0x0000000000559100 string=0x0000000000559104 "?"
 *   insn=0x0000000000559108 string=0x000000000055910C "!"
 *   insn=0x0000000000559108 string=0x0000000000559404 "0"
 *   insn=0x000000000055911C string=0x0000000000559120 "z"
 *   insn=0x0000000000559128 string=0x000000000055912C "w"
 *   insn=0x000000000055913C string=0x0000000000559140 "?"
 *   insn=0x0000000000559140 string=0x0000000000559144 "`"
 *   insn=0x0000000000559148 string=0x000000000055914C "o"
 *   insn=0x0000000000559158 string=0x000000000055915C "z"
 *   insn=0x000000000055915C string=0x0000000000559160 ""
 *   insn=0x000000000055916C string=0x0000000000559170 "_"
 *   insn=0x0000000000559170 string=0x0000000000559174 "@"
 *   insn=0x0000000000559174 string=0x000000000055907C "A"
 *   insn=0x0000000000559178 string=0x000000000055917C "_"
 *   insn=0x0000000000559188 string=0x000000000055918C "!"
 *   insn=0x000000000055918C string=0x0000000000559190 "v"
 *   insn=0x00000000005591A4 string=0x00000000005591A8 "?"
 *   insn=0x00000000005591AC string=0x00000000005591B0 "!"
 *   insn=0x00000000005591C0 string=0x00000000005591C4 "?"
 *   insn=0x00000000005591C8 string=0x00000000005591CC "!"
 *   insn=0x00000000005591CC string=0x00000000005591D0 "?"
 *   insn=0x00000000005591D0 string=0x00000000005591D4 "@"
 *   insn=0x00000000005591EC string=0x00000000005591F0 "_"
 *   insn=0x00000000005591FC string=0x00000000005592B0 "6"
 *   insn=0x0000000000559200 string=0x0000000000559204 "6"
 *   insn=0x0000000000559204 string=0x0000000000559208 "@"
 *   insn=0x0000000000559214 string=0x0000000000559218 "`"
 *   insn=0x000000000055921C string=0x0000000000559220 "Z"
 *   insn=0x0000000000559220 string=0x0000000000559224 "`b"
 *   insn=0x0000000000559240 string=0x0000000000559244 "!$@"
 *   insn=0x0000000000559244 string=0x0000000000559248 " "
 *   insn=0x0000000000559254 string=0x0000000000559258 "!$@"
 *   insn=0x0000000000559258 string=0x000000000055925C " "
 *   insn=0x000000000055926C string=0x0000000000559270 " "
 *   insn=0x0000000000559274 string=0x0000000000559278 "`"
 *   insn=0x00000000005592C0 string=0x00000000005592C4 "!(@"
 *   insn=0x00000000005592C4 string=0x00000000005592C8 " "
 *   insn=0x00000000005592D0 string=0x00000000005592D4 "@"
 *   insn=0x00000000005592E0 string=0x00000000005592E4 "6"
 *   insn=0x00000000005592E8 string=0x00000000005592EC "_"
 *   insn=0x00000000005592EC string=0x00000000005592F0 "A"
 *   insn=0x00000000005592F8 string=0x00000000005592FC "?"
 *   insn=0x0000000000559300 string=0x0000000000559304 " "
 *   insn=0x0000000000559324 string=0x0000000000559328 "6"
 *   insn=0x0000000000559334 string=0x0000000000559338 "_"
 *   insn=0x000000000055933C string=0x0000000000559354 "h!8"
 *   insn=0x0000000000559344 string=0x0000000000559348 "P7"
 *   insn=0x0000000000559358 string=0x000000000055935C "A"
 *   insn=0x0000000000559360 string=0x0000000000559364 "_"
 *   insn=0x0000000000559364 string=0x0000000000559368 "`"
 *   insn=0x0000000000559384 string=0x0000000000559388 "!"
 *   insn=0x0000000000559394 string=0x0000000000559398 "S"
 *   insn=0x000000000055939C string=0x00000000005593A0 "!$@"
 *   insn=0x00000000005593A0 string=0x00000000005593A4 " "
 *   insn=0x00000000005593B0 string=0x00000000005593B4 "!$@"
 *   insn=0x00000000005593B4 string=0x00000000005593B8 " "
 *   insn=0x00000000005593C0 string=0x00000000005593C4 "!(@"
 *   insn=0x00000000005593C4 string=0x00000000005593C8 " "
 *   insn=0x00000000005593D0 string=0x00000000005593D4 ";"
 *   insn=0x00000000005593E8 string=0x00000000005593EC "B"
 *   insn=0x00000000005593EC string=0x00000000005593F0 "2>"
 *   insn=0x00000000005593F4 string=0x00000000005593F8 "y"
 *   insn=0x00000000005593FC string=0x0000000000559400 "U"
 *   insn=0x0000000000559404 string=0x0000000000559408 "C"
 *   insn=0x0000000000559410 string=0x0000000000559414 "Z"
 *   insn=0x000000000055941C string=0x0000000000559420 "`"
 *   insn=0x0000000000559424 string=0x0000000000559428 "."
 *   insn=0x000000000055942C string=0x0000000000559430 "%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_558854(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 *a8)
{
  wchar_t v9; // w19
  __int64 v10; // x21
  int v11; // w22
  int v12; // w1
  unsigned int v13; // w23
  unsigned int i; // w22
  int v15; // w24
  unsigned int v16; // w27
  unsigned int v17; // w28
  char v18; // w24
  __int64 v19; // x22
  __int64 v20; // x0
  __int64 v21; // x19
  __int64 v22; // x0
  _QWORD *v23; // x0
  unsigned __int64 v24; // x1
  int *v25; // x1
  int v26; // w1
  _QWORD *v27; // x0
  int v28; // w19
  int v29; // w1
  char *v30; // x19
  unsigned int *v31; // x0
  _QWORD *v32; // x20
  int v34; // w0
  char *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x19
  char *v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x19
  __int64 v42; // x0
  _QWORD *v43; // x0
  unsigned __int64 v44; // x1
  int *v45; // x1
  int v46; // w1
  _QWORD *v47; // x0
  int v48; // w19
  int v49; // w1
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x19
  __int64 v53; // x0
  unsigned __int64 v54; // x1
  _BOOL4 v55; // w19
  char v56; // w24
  __int64 v57; // x0
  __int64 v58; // x1
  int *v59; // x1
  int v60; // w0
  wchar_t *v61; // x0
  __int64 v62; // x1
  __int64 v63; // x22
  __int64 v64; // x0
  __int64 v65; // x19
  char v66; // w22
  __int64 v67; // x0
  int *v68; // x1
  int v69; // w0
  unsigned __int64 v70; // x1
  _BOOL4 v71; // w19
  __int64 v72; // x1
  wchar_t v73; // w0
  __int64 v74; // x1
  unsigned __int64 v75; // x1
  int v76; // w22
  _QWORD *v77; // x0
  unsigned __int64 v78; // x1
  int *v79; // x1
  int v80; // w1
  _QWORD *v81; // x0
  int v82; // w22
  int v83; // w1
  int *v84; // x1
  int v85; // w0
  __int64 v86; // x0
  __int64 v87; // x1
  __int64 v88; // x22
  __int64 v89; // x0
  int v91; // [xsp+6Ch] [xbp+6Ch]
  wchar_t *s; // [xsp+78h] [xbp+78h]
  _QWORD *v93; // [xsp+80h] [xbp+80h] BYREF
  __int64 v94; // [xsp+88h] [xbp+88h]
  _QWORD *v95; // [xsp+90h] [xbp+90h] BYREF
  __int64 v96; // [xsp+98h] [xbp+98h]
  char v97[8]; // [xsp+A8h] [xbp+A8h] BYREF
  char *v98; // [xsp+B8h] [xbp+B8h] BYREF

  v95 = a2;
  v96 = a3;
  v93 = a4;
  v94 = a5;
  v9 = 0;
  v10 = sub_554A24((__int64)v97, (__int64 *)(a6 + 208));
  v11 = sub_554B08((__int64)&v95);
  if ( (v11 == -1) == ((unsigned int)sub_554B08((__int64)&v93) == -1) )
  {
LABEL_2:
    v12 = *(unsigned __int8 *)(v10 + 32);
    v13 = 0;
    i = 0;
    v15 = 1;
    goto LABEL_3;
  }
  v9 = sub_554B08((__int64)&v95);
  if ( v9 == *(_DWORD *)(v10 + 228) || v9 == *(_DWORD *)(v10 + 224) )
  {
    v12 = *(unsigned __int8 *)(v10 + 32);
    if ( *(_BYTE *)(v10 + 32) && (v73 = *(_DWORD *)(v10 + 76), v9 == v73) )
    {
      v12 = 1;
    }
    else
    {
      v73 = *(_DWORD *)(v10 + 72);
      if ( v9 != v73 )
      {
        if ( v9 == *(_DWORD *)(v10 + 228) )
          v74 = 43;
        else
          v74 = 45;
        sub_567890(a8, v74);
        if ( v95 )
        {
          v75 = v95[2];
          if ( v75 >= v95[3] )
            sub_54D8C4((__int64)v95);
          else
            v95[2] = v75 + 4;
          LODWORD(v96) = -1;
        }
        v76 = sub_554B08((__int64)&v95);
        if ( (v76 == -1) == ((unsigned int)sub_554B08((__int64)&v93) == -1) )
          goto LABEL_2;
        v73 = sub_554B08((__int64)&v95);
        v12 = *(unsigned __int8 *)(v10 + 32);
      }
    }
  }
  else
  {
    v12 = *(unsigned __int8 *)(v10 + 32);
    v73 = v9;
  }
  v13 = 0;
  for ( i = 0; ; i = 1 )
  {
    if ( v12 && *(_DWORD *)(v10 + 76) == v73 )
    {
      v9 = v73;
      v15 = 0;
      v98 = &byte_6FD2F8;
      goto LABEL_135;
    }
    if ( *(_DWORD *)(v10 + 72) == v73 )
      break;
    v9 = *(_DWORD *)(v10 + 240);
    if ( v9 != v73 )
      break;
    if ( !i )
    {
      v86 = *a8;
      v87 = *(_QWORD *)(*a8 - 24);
      v88 = v87 + 1;
      if ( (unsigned __int64)(v87 + 1) > *(_QWORD *)(*a8 - 16) || *(int *)(v86 - 8) > 0 )
      {
        sub_567088(a8, v87 + 1);
        v86 = *a8;
        v87 = *(_QWORD *)(*a8 - 24);
      }
      *(_BYTE *)(v86 + v87) = 48;
      v89 = *a8;
      if ( (__int64 *)(*a8 - 24) != &qword_6FD2E0 )
      {
        *(_DWORD *)(v89 - 8) = 0;
        *(_QWORD *)(v89 - 24) = v88;
        *(_BYTE *)(v89 + v88) = 0;
      }
    }
    v77 = v95;
    ++v13;
    if ( !v95 )
      goto LABEL_176;
    v78 = v95[2];
    if ( v78 >= v95[3] )
    {
      (*(void (**)(void))(*v95 + 80LL))();
      LODWORD(v96) = -1;
      v77 = v95;
      if ( !v95 )
        goto LABEL_176;
    }
    else
    {
      LODWORD(v96) = -1;
      v95[2] = v78 + 4;
    }
    v79 = (int *)v77[2];
    if ( (unsigned __int64)v79 >= v77[3] )
      v80 = (*(__int64 (__fastcall **)(_QWORD *))(*v77 + 72LL))(v77);
    else
      v80 = *v79;
    if ( v80 == -1 )
    {
      v95 = 0;
LABEL_176:
      v81 = v93;
      if ( !v93 )
      {
LABEL_174:
        i = 1;
        v12 = *(unsigned __int8 *)(v10 + 32);
        v15 = 1;
        goto LABEL_3;
      }
      v82 = 1;
      v83 = 0;
      if ( (_DWORD)v94 != -1 )
        goto LABEL_163;
LABEL_178:
      v84 = (int *)v81[2];
      if ( (unsigned __int64)v84 >= v81[3] )
        v85 = (*(__int64 (__fastcall **)(_QWORD *))(*v81 + 72LL))(v81);
      else
        v85 = *v84;
      if ( v85 == -1 )
      {
        v93 = 0;
        v83 = 1;
      }
      else
      {
        LODWORD(v94) = v85;
        v83 = 0;
      }
      goto LABEL_163;
    }
    v81 = v93;
    v82 = 0;
    LODWORD(v96) = v80;
    if ( !v93 )
      goto LABEL_164;
    v83 = 0;
    if ( (_DWORD)v94 == -1 )
      goto LABEL_178;
LABEL_163:
    if ( v82 == v83 )
      goto LABEL_174;
LABEL_164:
    v73 = sub_554B08((__int64)&v95);
    v12 = *(unsigned __int8 *)(v10 + 32);
  }
  v9 = v73;
  v15 = 0;
LABEL_3:
  v98 = &byte_6FD2F8;
  if ( v12 )
LABEL_135:
    sub_567088(&v98, 32);
  v91 = *(unsigned __int8 *)(v10 + 328);
  if ( *(_BYTE *)(v10 + 328) )
  {
    if ( v15 )
      goto LABEL_170;
    v34 = *(unsigned __int8 *)(v10 + 32);
    v16 = 0;
    s = (wchar_t *)(v10 + 240);
    v17 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v34 && v9 == *(_DWORD *)(v10 + 76) )
        {
          if ( (v16 ^ 1) <= v17 )
            goto LABEL_165;
          if ( !v13 )
          {
            sub_568CB8(a8, 0, *(_QWORD *)(*a8 - 24), 0);
            v17 = 0;
LABEL_21:
            v30 = v98;
            if ( !*((_QWORD *)v98 - 3) )
              goto LABEL_25;
            if ( v17 < (v16 ^ 1) )
              goto LABEL_171;
            goto LABEL_23;
          }
          sub_567890(&v98, v13);
          v17 = 0;
          v13 = 0;
LABEL_44:
          v43 = v95;
          if ( !v95 )
            goto LABEL_89;
          goto LABEL_45;
        }
        if ( v9 == *(_DWORD *)(v10 + 72) )
        {
          if ( (v16 ^ 1) <= v17 )
            goto LABEL_165;
          v35 = v98;
          v36 = *((_QWORD *)v98 - 3);
          if ( v36 )
          {
            v37 = v36 + 1;
            if ( (unsigned __int64)(v36 + 1) > *((_QWORD *)v98 - 2) || *((int *)v98 - 2) > 0 )
            {
              sub_567088(&v98, v36 + 1);
              v35 = v98;
              v36 = *((_QWORD *)v98 - 3);
            }
            v35[v36] = v13;
            v38 = v98;
            if ( v98 - 24 != (char *)&qword_6FD2E0 )
            {
              *((_DWORD *)v98 - 2) = 0;
              *((_QWORD *)v38 - 3) = v37;
              v38[v37] = 0;
            }
          }
          v39 = *a8;
          v40 = *(_QWORD *)(*a8 - 24);
          v41 = v40 + 1;
          if ( (unsigned __int64)(v40 + 1) > *(_QWORD *)(*a8 - 16) || *(int *)(v39 - 8) > 0 )
          {
            sub_567088(a8, v40 + 1);
            v39 = *a8;
            v40 = *(_QWORD *)(*a8 - 24);
          }
          *(_BYTE *)(v39 + v40) = 46;
          v17 = 1;
          v42 = *a8;
          if ( (__int64 *)(*a8 - 24) != &qword_6FD2E0 )
          {
            *(_DWORD *)(v42 - 8) = 0;
            *(_QWORD *)(v42 - 24) = v41;
            *(_BYTE *)(v42 + v41) = 0;
          }
          goto LABEL_44;
        }
        v61 = wmemchr(s, v9, 0xAu);
        if ( !v61 )
          break;
        v62 = *a8;
        v63 = v61 - s;
        v64 = *(_QWORD *)(*a8 - 24);
        v65 = v64 + 1;
        v66 = v63 + 48;
        if ( (unsigned __int64)(v64 + 1) > *(_QWORD *)(*a8 - 16) || *(int *)(v62 - 8) > 0 )
        {
          sub_567088(a8, v65);
          v62 = *a8;
          v64 = *(_QWORD *)(*a8 - 24);
        }
        *(_BYTE *)(v62 + v64) = v66;
        v67 = *a8;
        if ( (__int64 *)(*a8 - 24) != &qword_6FD2E0 )
        {
          *(_DWORD *)(v67 - 8) = 0;
          *(_QWORD *)(v67 - 24) = v65;
          *(_BYTE *)(v67 + v65) = 0;
        }
        v43 = v95;
        ++v13;
        i = 1;
        if ( !v95 )
          goto LABEL_89;
LABEL_45:
        v44 = v43[2];
        if ( v44 >= v43[3] )
        {
          (*(void (__fastcall **)(_QWORD *))(*v43 + 80LL))(v43);
          v43 = v95;
          LODWORD(v96) = -1;
          if ( !v95 )
            goto LABEL_89;
        }
        else
        {
          v43[2] = v44 + 4;
          LODWORD(v96) = -1;
        }
        v45 = (int *)v43[2];
        if ( (unsigned __int64)v45 >= v43[3] )
          v46 = (*(__int64 (__fastcall **)(_QWORD *))(*v43 + 72LL))(v43);
        else
          v46 = *v45;
        if ( v46 == -1 )
        {
          v95 = 0;
LABEL_89:
          v47 = v93;
          if ( !v93 )
            goto LABEL_21;
          v49 = 0;
          v48 = v91;
          if ( (_DWORD)v94 != -1 )
            goto LABEL_52;
LABEL_91:
          v68 = (int *)v47[2];
          if ( (unsigned __int64)v68 >= v47[3] )
            v69 = (*(__int64 (__fastcall **)(_QWORD *))(*v47 + 72LL))(v47);
          else
            v69 = *v68;
          if ( v69 == -1 )
          {
            v93 = 0;
            v49 = v91;
          }
          else
          {
            LODWORD(v94) = v69;
            v49 = 0;
          }
          goto LABEL_52;
        }
        v47 = v93;
        v48 = 0;
        LODWORD(v96) = v46;
        if ( !v93 )
          goto LABEL_53;
        v49 = 0;
        if ( (_DWORD)v94 == -1 )
          goto LABEL_91;
LABEL_52:
        if ( v48 == v49 )
          goto LABEL_21;
LABEL_53:
        v9 = sub_554B08((__int64)&v95);
        v34 = *(unsigned __int8 *)(v10 + 32);
      }
      if ( v9 != *(_DWORD *)(v10 + 296) && v9 != *(_DWORD *)(v10 + 320) || i <= v16 )
        goto LABEL_21;
      if ( !v17 && *((_QWORD *)v98 - 3) )
        sub_567890(&v98, v13);
      sub_567890(a8, 101);
      if ( v95 )
      {
        v70 = v95[2];
        if ( v70 >= v95[3] )
          (*(void (**)(void))(*v95 + 80LL))();
        else
          v95[2] = v70 + 4;
        LODWORD(v96) = -1;
      }
      v71 = sub_554B08((__int64)&v95) == -1;
      if ( ((unsigned int)sub_554B08((__int64)&v93) == -1) == v71 )
      {
LABEL_165:
        v30 = v98;
        if ( *((_QWORD *)v98 - 3) )
          goto LABEL_23;
        v31 = (unsigned int *)(v98 - 24);
        v32 = v95;
        if ( v98 - 24 == (char *)&qword_6FD2E0 )
          return v32;
        goto LABEL_167;
      }
      v9 = sub_554B08((__int64)&v95);
      if ( v9 != *(_DWORD *)(v10 + 228) && v9 != *(_DWORD *)(v10 + 224) )
        break;
      v34 = *(unsigned __int8 *)(v10 + 32);
      if ( *(_BYTE *)(v10 + 32) && v9 == *(_DWORD *)(v10 + 76) )
      {
        v34 = 1;
        v16 = 1;
      }
      else
      {
        if ( v9 != *(_DWORD *)(v10 + 72) )
        {
          if ( v9 == *(_DWORD *)(v10 + 228) )
            v72 = 43;
          else
            v72 = 45;
          sub_567890(a8, v72);
          v16 = 1;
          goto LABEL_44;
        }
LABEL_113:
        v16 = 1;
      }
    }
    v34 = *(unsigned __int8 *)(v10 + 32);
    goto LABEL_113;
  }
  if ( !v15 )
  {
    v16 = 0;
    v17 = 0;
LABEL_7:
    v18 = v9 - 48;
    if ( (unsigned int)(v9 - 48) > 9 )
    {
      while ( *(_DWORD *)(v10 + 72) != v9 || (v16 ^ 1) <= v17 )
      {
        if ( *(_DWORD *)(v10 + 296) != v9 && *(_DWORD *)(v10 + 320) != v9 || i <= v16 )
          goto LABEL_21;
        v50 = *a8;
        v51 = *(_QWORD *)(*a8 - 24);
        v52 = v51 + 1;
        if ( (unsigned __int64)(v51 + 1) > *(_QWORD *)(*a8 - 16) || *(int *)(v50 - 8) > 0 )
        {
          sub_567088(a8, v51 + 1);
          v50 = *a8;
          v51 = *(_QWORD *)(*a8 - 24);
        }
        *(_BYTE *)(v50 + v51) = 101;
        v53 = *a8;
        if ( (__int64 *)(*a8 - 24) != &qword_6FD2E0 )
        {
          *(_DWORD *)(v53 - 8) = 0;
          *(_QWORD *)(v53 - 24) = v52;
          *(_BYTE *)(v53 + v52) = 0;
        }
        if ( v95 )
        {
          v54 = v95[2];
          if ( v95[3] <= v54 )
            (*(void (**)(void))(*v95 + 80LL))();
          else
            v95[2] = v54 + 4;
          LODWORD(v96) = -1;
        }
        v55 = sub_554B08((__int64)&v95) == -1;
        if ( ((unsigned int)sub_554B08((__int64)&v93) == -1) == v55 )
          goto LABEL_165;
        v9 = sub_554B08((__int64)&v95);
        if ( v9 == *(_DWORD *)(v10 + 228) )
        {
          v56 = 43;
        }
        else
        {
          v16 = 1;
          v56 = 45;
          if ( v9 != *(_DWORD *)(v10 + 224) )
            goto LABEL_7;
        }
        v57 = *a8;
        v58 = *(_QWORD *)(*a8 - 24);
        v21 = v58 + 1;
        if ( (unsigned __int64)(v58 + 1) > *(_QWORD *)(*a8 - 16) || *(int *)(v57 - 8) > 0 )
        {
          sub_567088(a8, v58 + 1);
          v57 = *a8;
          v58 = *(_QWORD *)(*a8 - 24);
        }
        *(_BYTE *)(v57 + v58) = v56;
        v16 = 1;
        v22 = *a8;
        if ( (__int64 *)(*a8 - 24) == &qword_6FD2E0 )
          goto LABEL_12;
LABEL_75:
        *(_DWORD *)(v22 - 8) = 0;
        *(_QWORD *)(v22 - 24) = v21;
        *(_BYTE *)(v22 + v21) = 0;
        v23 = v95;
        if ( v95 )
          goto LABEL_13;
LABEL_76:
        v27 = v93;
        if ( !v93 )
          goto LABEL_21;
        v28 = 1;
        v29 = 0;
        if ( (_DWORD)v94 == -1 )
        {
LABEL_78:
          v59 = (int *)v27[2];
          if ( (unsigned __int64)v59 >= v27[3] )
            v60 = (*(__int64 (__fastcall **)(_QWORD *))(*v27 + 72LL))(v27);
          else
            v60 = *v59;
          if ( v60 == -1 )
          {
            v93 = 0;
            v29 = 1;
          }
          else
          {
            LODWORD(v94) = v60;
            v29 = 0;
          }
        }
LABEL_20:
        if ( v29 == v28 )
          goto LABEL_21;
LABEL_54:
        v9 = sub_554B08((__int64)&v95);
        v18 = v9 - 48;
        if ( (unsigned int)(v9 - 48) <= 9 )
          goto LABEL_8;
      }
      sub_567890(a8, 46);
      v17 = 1;
    }
    else
    {
LABEL_8:
      v19 = *a8;
      v20 = *(_QWORD *)(*a8 - 24);
      v21 = v20 + 1;
      if ( (unsigned __int64)(v20 + 1) > *(_QWORD *)(*a8 - 16) || *(int *)(v19 - 8) > 0 )
      {
        sub_567088(a8, v21);
        v19 = *a8;
        v20 = *(_QWORD *)(*a8 - 24);
      }
      *(_BYTE *)(v19 + v20) = v18 + 48;
      i = 1;
      v22 = *a8;
      if ( (__int64 *)(*a8 - 24) != &qword_6FD2E0 )
        goto LABEL_75;
    }
LABEL_12:
    v23 = v95;
    if ( !v95 )
      goto LABEL_76;
LABEL_13:
    v24 = v23[2];
    if ( v24 >= v23[3] )
    {
      (*(void (__fastcall **)(_QWORD *))(*v23 + 80LL))(v23);
      v23 = v95;
      LODWORD(v96) = -1;
      if ( !v95 )
        goto LABEL_76;
    }
    else
    {
      v23[2] = v24 + 4;
      LODWORD(v96) = -1;
    }
    v25 = (int *)v23[2];
    if ( (unsigned __int64)v25 >= v23[3] )
      v26 = (*(__int64 (__fastcall **)(_QWORD *))(*v23 + 72LL))(v23);
    else
      v26 = *v25;
    if ( v26 != -1 )
    {
      v27 = v93;
      v28 = 0;
      LODWORD(v96) = v26;
      if ( v93 )
      {
        v29 = 0;
        if ( (_DWORD)v94 == -1 )
          goto LABEL_78;
        goto LABEL_20;
      }
      goto LABEL_54;
    }
    v95 = 0;
    goto LABEL_76;
  }
LABEL_170:
  v30 = v98;
  if ( *((_QWORD *)v98 - 3) )
  {
LABEL_171:
    sub_567890(&v98, v13);
    v30 = v98;
LABEL_23:
    if ( !sub_53CA8C(*(_QWORD *)(v10 + 16), *(_QWORD *)(v10 + 24), (unsigned __int8 **)&v98) )
      *a7 = 4;
  }
LABEL_25:
  v31 = (unsigned int *)(v30 - 24);
  v32 = v95;
  if ( v30 - 24 != (char *)&qword_6FD2E0 )
LABEL_167:
    sub_54D8E0(v31);
  return v32;
}

