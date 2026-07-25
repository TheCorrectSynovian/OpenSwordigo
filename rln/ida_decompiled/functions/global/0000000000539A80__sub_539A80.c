/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000539A80
 * Mangled: sub_539A80
 * Demangled: sub_539A80
 *
 * Callers: 2
 *   0x000000000053A3FC  sub_53A3FC
 *   0x000000000053A410  sub_53A410
 *
 * Callees: 10
 *   0x0000000000203020  .memchr
 *   0x000000000052B45C  sub_52B45C
 *   0x000000000052B4A0  sub_52B4A0
 *   0x0000000000532724  sub_532724
 *   0x0000000000532808  sub_532808
 *   0x000000000053A3FC  sub_53A3FC
 *   0x000000000053CA8C  sub_53CA8C
 *   0x0000000000567088  sub_567088
 *   0x0000000000567890  sub_567890
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 169
 *   insn=0x0000000000539AB4 string=0x0000000000539AB8 ""
 *   insn=0x0000000000539AC0 string=0x0000000000539AC4 "@\t"
 *   insn=0x0000000000539AD0 string=0x0000000000539AD4 "@D"
 *   insn=0x0000000000539AD8 string=0x0000000000539ADC "@"
 *   insn=0x0000000000539AE0 string=0x0000000000539AE4 "Z"
 *   insn=0x0000000000539AF0 string=0x0000000000539AF4 "E"
 *   insn=0x0000000000539AFC string=0x0000000000539B00 "B"
 *   insn=0x0000000000539B10 string=0x0000000000539B14 "?"
 *   insn=0x0000000000539B14 string=0x0000000000539B18 " 2"
 *   insn=0x0000000000539B1C string=0x0000000000539B20 ":"
 *   insn=0x0000000000539B28 string=0x0000000000539B2C "?"
 *   insn=0x0000000000539B3C string=0x0000000000539B40 "A0"
 *   insn=0x0000000000539B48 string=0x0000000000539B4C "@"
 *   insn=0x0000000000539B50 string=0x0000000000539B54 " "
 *   insn=0x0000000000539B5C string=0x0000000000539B60 "?"
 *   insn=0x0000000000539B64 string=0x0000000000539B68 "!"
 *   insn=0x0000000000539B64 string=0x000000000053A3A0 "@"
 *   insn=0x0000000000539B78 string=0x0000000000539B7C "#"
 *   insn=0x0000000000539B84 string=0x0000000000539B88 " "
 *   insn=0x0000000000539B98 string=0x0000000000539B9C "?"
 *   insn=0x0000000000539B9C string=0x0000000000539BA0 " ."
 *   insn=0x0000000000539BCC string=0x0000000000539C88 "_C"
 *   insn=0x0000000000539BE4 string=0x000000000053A0E4 "_+"
 *   insn=0x0000000000539BF8 string=0x0000000000539C08 "_C"
 *   insn=0x0000000000539C04 string=0x000000000053A124 " "
 *   insn=0x0000000000539C08 string=0x0000000000539C0C "@"
 *   insn=0x0000000000539C10 string=0x000000000053A3A8 " "
 *   insn=0x0000000000539C2C string=0x0000000000539C30 "?"
 *   insn=0x0000000000539C30 string=0x0000000000539C34 "b:"
 *   insn=0x0000000000539C34 string=0x0000000000539C38 "!"
 *   insn=0x0000000000539C54 string=0x0000000000539C58 "?"
 *   insn=0x0000000000539C64 string=0x0000000000539C68 "?"
 *   insn=0x0000000000539C8C string=0x0000000000539C90 " "
 *   insn=0x0000000000539C98 string=0x0000000000539C9C "`"
 *   insn=0x0000000000539C9C string=0x0000000000539CA0 "X"
 *   insn=0x0000000000539CAC string=0x0000000000539CB0 "!"
 *   insn=0x0000000000539CC8 string=0x0000000000539CCC "|7"
 *   insn=0x0000000000539CDC string=0x0000000000539CE0 " "
 *   insn=0x0000000000539CE8 string=0x0000000000539CEC "H"
 *   insn=0x0000000000539CEC string=0x0000000000539D94 "`"
 *   insn=0x0000000000539CFC string=0x0000000000539D00 "B-"
 *   insn=0x0000000000539D00 string=0x0000000000539D04 "`"
 *   insn=0x0000000000539D04 string=0x0000000000539D08 "?"
 *   insn=0x0000000000539D08 string=0x0000000000539D0C """
 *   insn=0x0000000000539D10 string=0x0000000000539D14 "6"
 *   insn=0x0000000000539D20 string=0x0000000000539D24 "?"
 *   insn=0x0000000000539D28 string=0x0000000000539D2C "!"
 *   insn=0x0000000000539D3C string=0x0000000000539D40 "?"
 *   insn=0x0000000000539D40 string=0x0000000000539D44 "b%"
 *   insn=0x0000000000539D44 string=0x0000000000539D48 "!"
 *   insn=0x0000000000539D60 string=0x0000000000539D64 "_"
 *   insn=0x0000000000539D64 string=0x0000000000539D68 "`"
 *   insn=0x0000000000539D6C string=0x0000000000539D70 "@"
 *   insn=0x0000000000539D74 string=0x0000000000539D78 "@)"
 *   insn=0x0000000000539D88 string=0x0000000000539D8C "s"
 *   insn=0x0000000000539D8C string=0x0000000000539D90 "\t"
 *   insn=0x0000000000539D98 string=0x0000000000539D9C "?$"
 *   insn=0x0000000000539D9C string=0x0000000000539DA0 "I"
 *   insn=0x0000000000539DA0 string=0x0000000000539DA4 "`"
 *   insn=0x0000000000539DB0 string=0x0000000000539DB4 "`"
 *   insn=0x0000000000539DB0 string=0x000000000053A1C0 "`^"
 *   insn=0x0000000000539DBC string=0x0000000000539DC0 "H'"
 *   insn=0x0000000000539DC0 string=0x0000000000539DC4 "?"
 *   insn=0x0000000000539DC4 string=0x0000000000539DC8 "`"
 *   insn=0x0000000000539DC8 string=0x0000000000539DCC "#"
 *   insn=0x0000000000539DDC string=0x0000000000539DE0 "_"
 *   insn=0x0000000000539DF0 string=0x0000000000539DF4 "@"
 *   insn=0x0000000000539E00 string=0x0000000000539E04 "3"
 *   insn=0x0000000000539E08 string=0x0000000000539E0C "_"
 *   insn=0x0000000000539E18 string=0x0000000000539E1C "?"
 *   insn=0x0000000000539E20 string=0x0000000000539E24 " "
 *   insn=0x0000000000539E38 string=0x0000000000539E3C "<"
 *   insn=0x0000000000539E40 string=0x0000000000539E44 "@"
 *   insn=0x0000000000539E44 string=0x0000000000539E48 "@"
 *   insn=0x0000000000539E58 string=0x0000000000539E5C "I "
 *   insn=0x0000000000539E6C string=0x0000000000539E70 " "
 *   insn=0x0000000000539E74 string=0x0000000000539E88 "`"
 *   insn=0x0000000000539E78 string=0x0000000000539E7C " "
 *   insn=0x0000000000539E80 string=0x0000000000539E84 " "
 *   insn=0x0000000000539E88 string=0x0000000000539E8C "Sc"
 *   insn=0x0000000000539EC4 string=0x0000000000539EC8 "<"
 *   insn=0x0000000000539EC8 string=0x0000000000539ECC "_C"
 *   insn=0x0000000000539ECC string=0x0000000000539ED0 "!"
 *   insn=0x0000000000539ED8 string=0x0000000000539EDC "`"
 *   insn=0x0000000000539EEC string=0x0000000000539EF0 "!"
 *   insn=0x0000000000539EF8 string=0x0000000000539EFC "c"
 *   insn=0x0000000000539F38 string=0x0000000000539F3C "`"
 *   insn=0x0000000000539F54 string=0x0000000000539F58 "2$"
 *   insn=0x0000000000539F58 string=0x0000000000539F5C "`"
 *   insn=0x0000000000539F6C string=0x0000000000539F70 "?"
 *   insn=0x0000000000539F70 string=0x0000000000539F74 "#"
 *   insn=0x0000000000539F74 string=0x000000000053A178 "6"
 *   insn=0x0000000000539F84 string=0x0000000000539F88 "_"
 *   insn=0x0000000000539F98 string=0x0000000000539F9C "`"
 *   insn=0x0000000000539FA4 string=0x0000000000539FA8 "?"
 *   insn=0x0000000000539FA8 string=0x0000000000539FAC """
 *   insn=0x0000000000539FAC string=0x0000000000539FB0 "!"
 *   insn=0x0000000000539FC4 string=0x0000000000539FC8 "?"
 *   insn=0x0000000000539FCC string=0x0000000000539FD0 "!"
 *   insn=0x0000000000539FE8 string=0x0000000000539FEC "_"
 *   insn=0x000000000053A010 string=0x000000000053A014 "s"
 *   insn=0x000000000053A014 string=0x000000000053A018 "@"
 *   insn=0x000000000053A028 string=0x000000000053A3C8 "3"
 *   insn=0x000000000053A03C string=0x000000000053A040 "3"
 *   insn=0x000000000053A04C string=0x000000000053A050 "_"
 *   insn=0x000000000053A05C string=0x000000000053A060 "\n"
 *   insn=0x000000000053A070 string=0x000000000053A074 "A"
 *   insn=0x000000000053A07C string=0x000000000053A080 "!"
 *   insn=0x000000000053A088 string=0x000000000053A08C "_"
 *   insn=0x000000000053A08C string=0x000000000053A090 "@"
 *   insn=0x000000000053A0A8 string=0x000000000053A0AC "`"
 *   insn=0x000000000053A0B8 string=0x000000000053A0BC "_"
 *   insn=0x000000000053A0C8 string=0x000000000053A0CC "?"
 *   insn=0x000000000053A0CC string=0x000000000053A0D0 "b"
 *   insn=0x000000000053A0D0 string=0x000000000053A0D4 " "
 *   insn=0x000000000053A0F4 string=0x000000000053A0F8 "_#"
 *   insn=0x000000000053A100 string=0x000000000053A104 " "
 *   insn=0x000000000053A100 string=0x000000000053A110 " "
 *   insn=0x000000000053A12C string=0x000000000053A130 "g"
 *   insn=0x000000000053A150 string=0x000000000053A154 "!"
 *   insn=0x000000000053A164 string=0x000000000053A168 "<"
 *   insn=0x000000000053A170 string=0x000000000053A174 "V"
 *   insn=0x000000000053A184 string=0x000000000053A188 "?"
 *   insn=0x000000000053A18C string=0x000000000053A190 " "
 *   insn=0x000000000053A1A4 string=0x000000000053A1A8 "?"
 *   insn=0x000000000053A1AC string=0x000000000053A1B0 " "
 *   insn=0x000000000053A1B8 string=0x000000000053A1BC "\"
 *   insn=0x000000000053A1C8 string=0x000000000053A1CC "!(@"
 *   insn=0x000000000053A1CC string=0x000000000053A1D0 " "
 *   insn=0x000000000053A1E4 string=0x000000000053A1E8 "?"
 *   insn=0x000000000053A1F0 string=0x000000000053A1F4 "!$@"
 *   insn=0x000000000053A1F4 string=0x000000000053A1F8 " "
 *   insn=0x000000000053A200 string=0x000000000053A204 "A"
 *   insn=0x000000000053A22C string=0x000000000053CA8C "E"
 *   insn=0x000000000053A23C string=0x000000000053A240 " "
 *   insn=0x000000000053A254 string=0x000000000053A258 "i"
 *   insn=0x000000000053A258 string=0x000000000053A25C "@"
 *   insn=0x000000000053A270 string=0x000000000053A274 " "
 *   insn=0x000000000053A27C string=0x000000000053A280 " "
 *   insn=0x000000000053A288 string=0x000000000053A28C "!$@"
 *   insn=0x000000000053A28C string=0x000000000053A290 " "
 *   insn=0x000000000053A2B0 string=0x000000000053A2B4 "!(@"
 *   insn=0x000000000053A2B4 string=0x000000000053A2B8 " "
 *   insn=0x000000000053A2D0 string=0x000000000053A2D4 "?"
 *   insn=0x000000000053A2DC string=0x000000000053A2E0 "!$@"
 *   insn=0x000000000053A2E0 string=0x000000000053A2E4 " "
 *   insn=0x000000000053A2EC string=0x000000000053A2F0 "!"
 *   insn=0x000000000053A2F4 string=0x000000000053A2F8 "l"
 *   insn=0x000000000053A2FC string=0x000000000053A300 "!$@"
 *   insn=0x000000000053A300 string=0x000000000053A304 " "
 *   insn=0x000000000053A308 string=0x000000000053A30C "A"
 *   insn=0x000000000053A31C string=0x000000000053A320 "!$@"
 *   insn=0x000000000053A320 string=0x000000000053A324 " "
 *   insn=0x000000000053A330 string=0x000000000053A334 "!"
 *   insn=0x000000000053A33C string=0x000000000053A340 "!$@"
 *   insn=0x000000000053A340 string=0x000000000053A344 " "
 *   insn=0x000000000053A348 string=0x000000000053A34C "a"
 *   insn=0x000000000053A354 string=0x000000000053A358 "'"
 *   insn=0x000000000053A374 string=0x000000000053A378 " "
 *   insn=0x000000000053A380 string=0x000000000053A384 "!(@"
 *   insn=0x000000000053A384 string=0x000000000053A388 " "
 *   insn=0x000000000053A388 string=0x000000000053A38C "-"
 *   insn=0x000000000053A394 string=0x000000000053A398 "1"
 *   insn=0x000000000053A3B0 string=0x000000000053A3B4 "8"
 *   insn=0x000000000053A3D0 string=0x000000000053A3D4 "@"
 *   insn=0x000000000053A3DC string=0x000000000053A3E0 "@c"
 *   insn=0x000000000053A3E4 string=0x000000000053A3E8 "`"
 *   insn=0x000000000053A3EC string=0x000000000053A3F0 ""
 *   insn=0x000000000053A3F4 string=0x000000000053A3F8 "3"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_539A80(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        _QWORD *a8)
{
  __int64 v8; // x20
  int v9; // w28
  unsigned __int64 v10; // x26
  int v11; // w19
  unsigned int v12; // w19
  int v13; // w1
  unsigned __int64 v14; // x1
  int v15; // w22
  unsigned int v16; // w23
  unsigned __int64 v17; // x1
  int v18; // w25
  int v19; // w28
  size_t v20; // x24
  unsigned __int64 v21; // x25
  unsigned __int64 v22; // x21
  int v23; // w22
  signed int v24; // w0
  _QWORD *v25; // x0
  unsigned __int64 v26; // x1
  unsigned __int64 v27; // x2
  unsigned __int8 *v28; // x1
  int v29; // w1
  _QWORD *v30; // x0
  int v31; // w19
  int v32; // w1
  bool v33; // cf
  int v34; // w0
  unsigned __int8 *v35; // x1
  int v36; // w0
  int v37; // w19
  char *v38; // x26
  _QWORD *v39; // x20
  void *v41; // x0
  int v42; // w0
  int v43; // w0
  _QWORD *v44; // x0
  unsigned __int64 v45; // x1
  unsigned __int8 *v46; // x1
  int v47; // w1
  _QWORD *v48; // x0
  int v49; // w19
  int v50; // w1
  char *v51; // x0
  __int64 v52; // x1
  __int64 v53; // x19
  char *v54; // x0
  unsigned __int8 *v55; // x1
  int v56; // w0
  unsigned __int8 *v57; // x1
  int v58; // w0
  unsigned __int8 *v59; // x1
  int v60; // w0
  bool v61; // [xsp+64h] [xbp+64h]
  int v64; // [xsp+80h] [xbp+80h]
  unsigned int v66; // [xsp+88h] [xbp+88h]
  _QWORD *v67; // [xsp+90h] [xbp+90h] BYREF
  __int64 v68; // [xsp+98h] [xbp+98h]
  _QWORD *v69; // [xsp+A0h] [xbp+A0h] BYREF
  __int64 v70; // [xsp+A8h] [xbp+A8h]
  char v71[8]; // [xsp+B8h] [xbp+B8h] BYREF
  char *v72; // [xsp+C8h] [xbp+C8h] BYREF

  v69 = a2;
  v70 = a3;
  v67 = a4;
  v68 = a5;
  v8 = sub_532724((__int64)v71, (_QWORD *)(a6 + 208));
  v9 = *(_DWORD *)(a6 + 24) & 0x4A;
  if ( v9 == 64 )
  {
    v10 = 8;
  }
  else
  {
    v10 = 16;
    if ( v9 != 8 )
      v10 = 10;
  }
  v11 = sub_532808((__int64)&v69);
  if ( (v11 == -1) == ((unsigned int)sub_532808((__int64)&v67) == -1) )
  {
    v12 = 0;
    v61 = 0;
  }
  else
  {
    v12 = (unsigned __int8)sub_532808((__int64)&v69);
    v61 = *(unsigned __int8 *)(v8 + 110) == v12;
    if ( *(unsigned __int8 *)(v8 + 110) != v12 && *(unsigned __int8 *)(v8 + 111) != v12 )
    {
      v13 = *(unsigned __int8 *)(v8 + 32);
      goto LABEL_14;
    }
    v13 = *(unsigned __int8 *)(v8 + 32);
    if ( *(_BYTE *)(v8 + 32) && *(unsigned __int8 *)(v8 + 73) == v12 )
    {
      v13 = 1;
      goto LABEL_14;
    }
    if ( *(unsigned __int8 *)(v8 + 72) == v12 )
    {
LABEL_14:
      v16 = 0;
      v66 = 0;
      while ( (!v13 || *(unsigned __int8 *)(v8 + 73) != v12) && *(unsigned __int8 *)(v8 + 72) != v12 )
      {
        if ( *(unsigned __int8 *)(v8 + 114) == v12 )
        {
          if ( ((_DWORD)v10 == 10) >= v66 )
          {
            ++v16;
            if ( (_DWORD)v10 == 8 || (v66 = 1, !v9) )
            {
              v16 = 0;
              v66 = 1;
              v10 = 8;
            }
            goto LABEL_25;
          }
        }
        else if ( !v66 )
        {
          break;
        }
        if ( *(unsigned __int8 *)(v8 + 112) != v12 && *(unsigned __int8 *)(v8 + 113) != v12 )
        {
          v19 = 0;
          v66 = 1;
          goto LABEL_74;
        }
        if ( (_DWORD)v10 != 16 && v9 )
        {
          v19 = 0;
          v66 = 1;
          goto LABEL_32;
        }
        v16 = 0;
        v66 = 0;
        v10 = 16;
LABEL_25:
        if ( v69 )
        {
          v17 = v69[2];
          if ( v17 >= v69[3] )
            (*(void (__fastcall **)(_QWORD *))(*v69 + 80LL))(v69);
          else
            v69[2] = v17 + 1;
          LODWORD(v70) = -1;
        }
        v18 = sub_532808((__int64)&v69);
        if ( (v18 == -1) == ((unsigned int)sub_532808((__int64)&v67) == -1) )
        {
          v13 = *(unsigned __int8 *)(v8 + 32);
          v19 = 1;
          goto LABEL_74;
        }
        v12 = (unsigned __int8)sub_532808((__int64)&v69);
        v13 = *(unsigned __int8 *)(v8 + 32);
        if ( !v66 )
          break;
      }
      v19 = 0;
      if ( (_DWORD)v10 != 16 )
        goto LABEL_32;
LABEL_75:
      v20 = 22;
      v72 = &byte_6FD2F8;
      if ( v13 )
        goto LABEL_76;
LABEL_33:
      v64 = *(unsigned __int8 *)(v8 + 136);
      v21 = 0xFFFFFFFFFFFFFFFFLL / v10;
      if ( !*(_BYTE *)(v8 + 136) )
        goto LABEL_34;
LABEL_77:
      if ( !v19 )
      {
        v22 = 0;
        v23 = 0;
        while ( 1 )
        {
          if ( !*(_BYTE *)(v8 + 32) || *(unsigned __int8 *)(v8 + 73) != v12 )
          {
LABEL_81:
            if ( *(unsigned __int8 *)(v8 + 72) == v12 )
              goto LABEL_145;
            v41 = memchr((const void *)(v8 + 114), v12, v20);
            if ( !v41 )
              goto LABEL_145;
            v42 = (_DWORD)v41 - (v8 + 114);
            if ( v42 >= 16 )
              v42 -= 6;
            if ( v21 < v22 )
            {
              v23 = 1;
            }
            else
            {
              ++v16;
              v33 = ~(__int64)v42 >= v22 * v10;
              v22 = v42 + v22 * v10;
              v43 = !v33;
              v23 |= v43;
            }
            goto LABEL_90;
          }
          while ( 1 )
          {
            if ( !v16 )
            {
              v37 = 1;
              goto LABEL_65;
            }
            v51 = v72;
            v52 = *((_QWORD *)v72 - 3);
            v53 = v52 + 1;
            if ( (unsigned __int64)(v52 + 1) > *((_QWORD *)v72 - 2) || *((int *)v72 - 2) > 0 )
            {
              sub_567088(&v72, v52 + 1);
              v51 = v72;
              v52 = *((_QWORD *)v72 - 3);
            }
            v51[v52] = v16;
            v16 = 0;
            v54 = v72;
            if ( v72 - 24 == (char *)&qword_6FD2E0 )
            {
LABEL_90:
              v44 = v69;
              if ( !v69 )
                goto LABEL_107;
            }
            else
            {
              *((_DWORD *)v72 - 2) = 0;
              *((_QWORD *)v54 - 3) = v53;
              v54[v53] = 0;
              v44 = v69;
              if ( !v69 )
                goto LABEL_107;
            }
            v45 = v44[2];
            if ( v45 >= v44[3] )
            {
              (*(void (__fastcall **)(_QWORD *))(*v44 + 80LL))(v44);
              v44 = v69;
              LODWORD(v70) = -1;
              if ( !v69 )
                goto LABEL_107;
              v46 = (unsigned __int8 *)v69[2];
              if ( (unsigned __int64)v46 < v69[3] )
              {
LABEL_93:
                v47 = *v46;
LABEL_94:
                v48 = v67;
                v49 = 0;
                LODWORD(v70) = v47;
                if ( !v67 )
                  goto LABEL_97;
                v50 = 0;
                if ( (_DWORD)v68 != -1 )
                  goto LABEL_96;
                goto LABEL_109;
              }
            }
            else
            {
              v44[2] = v45 + 1;
              LODWORD(v70) = -1;
              v46 = (unsigned __int8 *)v44[2];
              if ( (unsigned __int64)v46 < v44[3] )
                goto LABEL_93;
            }
            v47 = (*(__int64 (__fastcall **)(_QWORD *))(*v44 + 72LL))(v44);
            if ( v47 != -1 )
              goto LABEL_94;
            v69 = 0;
LABEL_107:
            v48 = v67;
            if ( !v67 )
              goto LABEL_64;
            v50 = 0;
            v49 = v64;
            if ( (_DWORD)v68 != -1 )
              goto LABEL_96;
LABEL_109:
            v55 = (unsigned __int8 *)v48[2];
            if ( (unsigned __int64)v55 < v48[3] )
            {
              v56 = *v55;
LABEL_111:
              LODWORD(v68) = v56;
              v50 = 0;
              goto LABEL_96;
            }
            v56 = (*(__int64 (__fastcall **)(_QWORD *))(*v48 + 72LL))(v48);
            if ( v56 != -1 )
              goto LABEL_111;
            v67 = 0;
            v50 = v64;
LABEL_96:
            if ( v49 == v50 )
              goto LABEL_64;
LABEL_97:
            if ( !v69 )
              goto LABEL_152;
            if ( (_DWORD)v70 == -1 )
              break;
            v12 = (unsigned __int8)v70;
            if ( !*(_BYTE *)(v8 + 32) || *(unsigned __int8 *)(v8 + 73) != (unsigned __int8)v70 )
              goto LABEL_81;
          }
          v59 = (unsigned __int8 *)v69[2];
          if ( (unsigned __int64)v59 < v69[3] )
          {
            v60 = *v59;
            goto LABEL_129;
          }
          v60 = (*(__int64 (__fastcall **)(_QWORD *))(*v69 + 72LL))(v69);
          if ( v60 == -1 )
          {
            v69 = 0;
LABEL_152:
            v12 = 255;
          }
          else
          {
LABEL_129:
            LODWORD(v70) = v60;
            v12 = (unsigned __int8)v60;
          }
        }
      }
LABEL_162:
      v22 = 0;
      v23 = 0;
      v37 = 0;
      goto LABEL_65;
    }
    if ( v69 )
    {
      v14 = v69[2];
      if ( v14 >= v69[3] )
        sub_52B4A0((__int64)v69);
      else
        v69[2] = v14 + 1;
      LODWORD(v70) = -1;
    }
    v15 = sub_532808((__int64)&v69);
    if ( (v15 == -1) != ((unsigned int)sub_532808((__int64)&v67) == -1) )
    {
      v12 = (unsigned __int8)sub_532808((__int64)&v69);
      v13 = *(unsigned __int8 *)(v8 + 32);
      goto LABEL_14;
    }
  }
  v13 = *(unsigned __int8 *)(v8 + 32);
  v19 = 1;
  v16 = 0;
  v66 = 0;
LABEL_74:
  if ( (_DWORD)v10 == 16 )
    goto LABEL_75;
LABEL_32:
  v20 = (int)v10;
  v72 = &byte_6FD2F8;
  if ( !v13 )
    goto LABEL_33;
LABEL_76:
  sub_567088(&v72, 32);
  v64 = *(unsigned __int8 *)(v8 + 136);
  v21 = 0xFFFFFFFFFFFFFFFFLL / v10;
  if ( *(_BYTE *)(v8 + 136) )
    goto LABEL_77;
LABEL_34:
  if ( v19 )
    goto LABEL_162;
  v22 = 0;
  v23 = 0;
  while ( v20 > 0xA )
  {
    while ( 1 )
    {
      v24 = v12 - 48;
      if ( (unsigned __int8)(v12 - 48) <= 9u )
        goto LABEL_40;
      if ( (unsigned __int8)(v12 - 97) <= 5u )
      {
        v24 = v12 - 87;
        goto LABEL_40;
      }
      if ( (unsigned __int8)(v12 - 65) > 5u )
        goto LABEL_145;
      v24 = v12 - 55;
      if ( v21 < v22 )
        goto LABEL_41;
LABEL_55:
      ++v16;
      v33 = ~(__int64)v24 >= v22 * v10;
      v22 = v24 + v22 * v10;
      v34 = !v33;
      v23 |= v34;
      v25 = v69;
      if ( v69 )
        goto LABEL_42;
LABEL_59:
      v30 = v67;
      if ( !v67 )
        goto LABEL_64;
      v31 = 1;
      v32 = 0;
      if ( (_DWORD)v68 != -1 )
        goto LABEL_47;
LABEL_61:
      v35 = (unsigned __int8 *)v30[2];
      if ( (unsigned __int64)v35 >= v30[3] )
      {
        v36 = (*(__int64 (__fastcall **)(_QWORD *))(*v30 + 72LL))(v30);
        if ( v36 == -1 )
        {
          v67 = 0;
          v32 = 1;
          goto LABEL_47;
        }
      }
      else
      {
        v36 = *v35;
      }
      LODWORD(v68) = v36;
      if ( !v31 )
        goto LABEL_64;
LABEL_48:
      if ( !v69 )
        goto LABEL_144;
      if ( (_DWORD)v70 == -1 )
        break;
      v12 = (unsigned __int8)v70;
      if ( v20 <= 0xA )
        goto LABEL_37;
    }
    v57 = (unsigned __int8 *)v69[2];
    if ( (unsigned __int64)v57 < v69[3] )
    {
      v58 = *v57;
LABEL_126:
      LODWORD(v70) = v58;
      v12 = (unsigned __int8)v58;
      continue;
    }
    v58 = (*(__int64 (__fastcall **)(_QWORD *))(*v69 + 72LL))(v69);
    if ( v58 != -1 )
      goto LABEL_126;
    v69 = 0;
LABEL_144:
    v12 = 255;
  }
LABEL_37:
  if ( v12 <= 0x2F || v12 >= (unsigned __int8)(v20 + 48) )
  {
LABEL_145:
    v37 = 0;
    goto LABEL_65;
  }
  v24 = v12 - 48;
LABEL_40:
  if ( v21 >= v22 )
    goto LABEL_55;
LABEL_41:
  v25 = v69;
  v23 = 1;
  if ( !v69 )
    goto LABEL_59;
LABEL_42:
  v26 = v25[2];
  if ( v26 >= v25[3] )
  {
    (*(void (__fastcall **)(_QWORD *))(*v25 + 80LL))(v25);
    v25 = v69;
    LODWORD(v70) = -1;
    if ( !v69 )
      goto LABEL_59;
    v28 = (unsigned __int8 *)v69[2];
    if ( (unsigned __int64)v28 < v69[3] )
      goto LABEL_44;
LABEL_133:
    v29 = (*(__int64 (__fastcall **)(_QWORD *))(*v25 + 72LL))(v25);
    if ( v29 == -1 )
    {
      v69 = 0;
      goto LABEL_59;
    }
    goto LABEL_45;
  }
  v25[2] = v26 + 1;
  v27 = v25[3];
  v28 = (unsigned __int8 *)v25[2];
  LODWORD(v70) = -1;
  if ( (unsigned __int64)v28 >= v27 )
    goto LABEL_133;
LABEL_44:
  v29 = *v28;
LABEL_45:
  v30 = v67;
  v31 = 0;
  LODWORD(v70) = v29;
  if ( !v67 )
    goto LABEL_48;
  v32 = 0;
  if ( (_DWORD)v68 == -1 )
    goto LABEL_61;
LABEL_47:
  if ( v31 != v32 )
    goto LABEL_48;
LABEL_64:
  v37 = 0;
  v19 = 1;
LABEL_65:
  v38 = v72;
  if ( *((_QWORD *)v72 - 3) )
  {
    sub_567890(&v72, v16);
    if ( !(unsigned __int8)sub_53CA8C(*(_QWORD *)(v8 + 16), *(_QWORD *)(v8 + 24), &v72) )
      *a7 = 4;
    v38 = v72;
    if ( (v16 == 0) > v66 && !*((_QWORD *)v72 - 3) )
      goto LABEL_67;
  }
  else if ( (v16 == 0) > v66 )
  {
LABEL_67:
    *a8 = 0;
    *a7 = 4;
    goto LABEL_68;
  }
  if ( v37 )
    goto LABEL_67;
  if ( v23 )
  {
    *a8 = -1;
    *a7 = 4;
  }
  else
  {
    *a8 = (v22 ^ -(__int64)v61) + v61;
  }
LABEL_68:
  if ( v19 )
    *a7 |= 2u;
  v39 = v69;
  if ( v38 - 24 != (char *)&qword_6FD2E0 )
    sub_52B45C((unsigned int *)v38 - 6);
  return v39;
}

