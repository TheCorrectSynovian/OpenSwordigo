/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053797C
 * Mangled: sub_53797C
 * Demangled: sub_53797C
 *
 * Callers: 3
 *   0x0000000000537734  sub_537734
 *   0x0000000000538318  sub_538318
 *   0x000000000053832C  sub_53832C
 *
 * Callees: 10
 *   0x0000000000203020  .memchr
 *   0x000000000052B45C  sub_52B45C
 *   0x000000000052B4A0  sub_52B4A0
 *   0x0000000000532724  sub_532724
 *   0x0000000000532808  sub_532808
 *   0x0000000000538318  sub_538318
 *   0x000000000053CA8C  sub_53CA8C
 *   0x0000000000567088  sub_567088
 *   0x0000000000567890  sub_567890
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 169
 *   insn=0x00000000005379B0 string=0x00000000005379B4 "\"
 *   insn=0x00000000005379BC string=0x00000000005379C0 "@\t"
 *   insn=0x00000000005379C4 string=0x00000000005379C8 "{"
 *   insn=0x00000000005379D4 string=0x00000000005379D8 "@"
 *   insn=0x0000000000537A0C string=0x0000000000537A10 "?"
 *   insn=0x0000000000537A10 string=0x0000000000537A14 "`2"
 *   insn=0x0000000000537A18 string=0x0000000000537A1C "{"
 *   insn=0x0000000000537A24 string=0x0000000000537A28 "?"
 *   insn=0x0000000000537A30 string=0x0000000000537A34 " 0"
 *   insn=0x0000000000537A44 string=0x0000000000537A48 "@"
 *   insn=0x0000000000537A4C string=0x0000000000537A50 " "
 *   insn=0x0000000000537A58 string=0x0000000000537A5C "?"
 *   insn=0x0000000000537A60 string=0x0000000000537A64 "!"
 *   insn=0x0000000000537A60 string=0x00000000005382BC "y"
 *   insn=0x0000000000537A74 string=0x0000000000537A78 "d"
 *   insn=0x0000000000537A80 string=0x0000000000537A84 "a"
 *   insn=0x0000000000537A94 string=0x0000000000537A98 "?"
 *   insn=0x0000000000537A98 string=0x0000000000537A9C "`."
 *   insn=0x0000000000537AA0 string=0x0000000000537AA4 "Y"
 *   insn=0x0000000000537B00 string=0x0000000000537E5C " "
 *   insn=0x0000000000537B04 string=0x0000000000537B08 "@"
 *   insn=0x0000000000537B0C string=0x00000000005382C4 " "
 *   insn=0x0000000000537B28 string=0x0000000000537B2C "?"
 *   insn=0x0000000000537B2C string=0x0000000000537B30 "b;"
 *   insn=0x0000000000537B30 string=0x0000000000537B34 "!"
 *   insn=0x0000000000537B40 string=0x0000000000537B44 "1"
 *   insn=0x0000000000537B4C string=0x0000000000537B50 "."
 *   insn=0x0000000000537B50 string=0x0000000000537B54 "?"
 *   insn=0x0000000000537B60 string=0x0000000000537B64 "?"
 *   insn=0x0000000000537B6C string=0x0000000000537B70 "&"
 *   insn=0x0000000000537B84 string=0x0000000000537B88 ""
 *   insn=0x0000000000537B94 string=0x0000000000537B98 "`"
 *   insn=0x0000000000537BCC string=0x0000000000537BD0 " "
 *   insn=0x0000000000537BDC string=0x0000000000537E6C "[#"
 *   insn=0x0000000000537BFC string=0x0000000000537C00 "H"
 *   insn=0x0000000000537C00 string=0x0000000000537CA8 "`"
 *   insn=0x0000000000537C04 string=0x0000000000537C08 "i)"
 *   insn=0x0000000000537C14 string=0x0000000000537C18 "`"
 *   insn=0x0000000000537C18 string=0x0000000000537C1C "?"
 *   insn=0x0000000000537C1C string=0x0000000000537C20 """
 *   insn=0x0000000000537C24 string=0x0000000000537C28 "6"
 *   insn=0x0000000000537C28 string=0x0000000000537C2C " "
 *   insn=0x0000000000537C34 string=0x0000000000537C38 "?"
 *   insn=0x0000000000537C3C string=0x0000000000537C40 "!"
 *   insn=0x0000000000537C50 string=0x0000000000537C54 "?"
 *   insn=0x0000000000537C58 string=0x0000000000537C5C "!"
 *   insn=0x0000000000537C74 string=0x0000000000537C78 "_"
 *   insn=0x0000000000537C80 string=0x0000000000537C84 "`"
 *   insn=0x0000000000537C94 string=0x0000000000537C98 "`"
 *   insn=0x0000000000537C9C string=0x0000000000537CA0 "s"
 *   insn=0x0000000000537CA0 string=0x0000000000537CA4 "\t"
 *   insn=0x0000000000537CAC string=0x0000000000537CB0 "?$"
 *   insn=0x0000000000537CB0 string=0x0000000000537CB4 "I"
 *   insn=0x0000000000537CB4 string=0x0000000000537CB8 "`"
 *   insn=0x0000000000537CC0 string=0x0000000000537CC4 "\t "
 *   insn=0x0000000000537CC4 string=0x0000000000537CC8 "`"
 *   insn=0x0000000000537CC4 string=0x00000000005380C4 "`^"
 *   insn=0x0000000000537CD0 string=0x0000000000537CD4 "#"
 *   insn=0x0000000000537CD4 string=0x0000000000537CD8 "?"
 *   insn=0x0000000000537CD8 string=0x0000000000537CDC "`"
 *   insn=0x0000000000537CDC string=0x0000000000537CE0 "#"
 *   insn=0x0000000000537CEC string=0x0000000000537CF0 "B"
 *   insn=0x0000000000537CF4 string=0x0000000000537CF8 "_"
 *   insn=0x0000000000537D08 string=0x0000000000537D0C " "
 *   insn=0x0000000000537D18 string=0x0000000000537D1C "3"
 *   insn=0x0000000000537D20 string=0x0000000000537D24 "_"
 *   insn=0x0000000000537D30 string=0x0000000000537D34 "?"
 *   insn=0x0000000000537D38 string=0x0000000000537D3C " "
 *   insn=0x0000000000537D50 string=0x0000000000537D54 ";"
 *   insn=0x0000000000537D5C string=0x0000000000537D60 " "
 *   insn=0x0000000000537D74 string=0x000000000053818C "s"
 *   insn=0x0000000000537D84 string=0x0000000000537D88 " "
 *   insn=0x0000000000537D8C string=0x0000000000537DA0 "`"
 *   insn=0x0000000000537D90 string=0x0000000000537D94 " "
 *   insn=0x0000000000537D98 string=0x0000000000537D9C " "
 *   insn=0x0000000000537DDC string=0x0000000000537DE0 ";"
 *   insn=0x0000000000537DE4 string=0x0000000000537DE8 "A"
 *   insn=0x0000000000537DF0 string=0x0000000000537DF4 "`"
 *   insn=0x0000000000537E04 string=0x0000000000537E08 "A"
 *   insn=0x0000000000537E14 string=0x0000000000537E18 "f"
 *   insn=0x0000000000537E38 string=0x0000000000537E3C " "
 *   insn=0x0000000000537E38 string=0x0000000000537E48 " "
 *   insn=0x0000000000537E54 string=0x0000000000537E58 "1"
 *   insn=0x0000000000537E5C string=0x0000000000537E60 ""
 *   insn=0x0000000000537E8C string=0x0000000000537F7C "W"
 *   insn=0x0000000000537EA4 string=0x0000000000537EA8 "^,"
 *   insn=0x0000000000537EA8 string=0x0000000000537EAC "@"
 *   insn=0x0000000000537EBC string=0x0000000000537EC0 "?"
 *   insn=0x0000000000537EC4 string=0x000000000053807C "6"
 *   insn=0x0000000000537ED0 string=0x0000000000537ED4 "B"
 *   insn=0x0000000000537ED8 string=0x0000000000537EDC "_"
 *   insn=0x0000000000537EEC string=0x0000000000537EF0 "`"
 *   insn=0x0000000000537EF8 string=0x0000000000537EFC "?"
 *   insn=0x0000000000537F00 string=0x0000000000537F04 "!"
 *   insn=0x0000000000537F18 string=0x0000000000537F1C "?"
 *   insn=0x0000000000537F1C string=0x0000000000537F20 "b"
 *   insn=0x0000000000537F20 string=0x0000000000537F24 "!"
 *   insn=0x0000000000537F3C string=0x0000000000537F40 "_"
 *   insn=0x0000000000537F44 string=0x0000000000537F48 "?"
 *   insn=0x0000000000537F48 string=0x0000000000537F4C " "
 *   insn=0x0000000000537F5C string=0x0000000000537F60 " \n"
 *   insn=0x0000000000537F64 string=0x0000000000537F68 "s"
 *   insn=0x0000000000537F68 string=0x0000000000537F6C " "
 *   insn=0x0000000000537F7C string=0x00000000005382E4 "3"
 *   insn=0x0000000000537F90 string=0x0000000000537F94 "3"
 *   insn=0x0000000000537FA0 string=0x0000000000537FA4 "_"
 *   insn=0x0000000000537FB0 string=0x0000000000537FB4 "5"
 *   insn=0x0000000000537FC4 string=0x0000000000537FC8 "a"
 *   insn=0x0000000000537FD0 string=0x0000000000537FD4 "!"
 *   insn=0x0000000000537FDC string=0x0000000000537FE0 "_"
 *   insn=0x0000000000537FE0 string=0x0000000000537FE4 "@"
 *   insn=0x000000000053800C string=0x0000000000538010 "_"
 *   insn=0x000000000053801C string=0x0000000000538020 "?"
 *   insn=0x0000000000538020 string=0x0000000000538024 "B"
 *   insn=0x0000000000538024 string=0x0000000000538028 " "
 *   insn=0x0000000000538050 string=0x0000000000538054 "a"
 *   insn=0x0000000000538054 string=0x0000000000538058 "!"
 *   insn=0x0000000000538068 string=0x000000000053806C ";"
 *   insn=0x0000000000538074 string=0x0000000000538078 "["
 *   insn=0x0000000000538088 string=0x000000000053808C "?"
 *   insn=0x000000000053808C string=0x0000000000538090 """
 *   insn=0x0000000000538090 string=0x0000000000538094 " "
 *   insn=0x00000000005380A8 string=0x00000000005380AC "?"
 *   insn=0x00000000005380B0 string=0x00000000005380B4 " "
 *   insn=0x00000000005380BC string=0x00000000005380C0 "o"
 *   insn=0x00000000005380CC string=0x00000000005380D0 "!(@"
 *   insn=0x00000000005380D0 string=0x00000000005380D4 " "
 *   insn=0x00000000005380E8 string=0x00000000005380EC "?"
 *   insn=0x00000000005380EC string=0x00000000005380F0 "c"
 *   insn=0x00000000005380F4 string=0x00000000005380F8 "!$@"
 *   insn=0x00000000005380F8 string=0x00000000005380FC " "
 *   insn=0x0000000000538114 string=0x0000000000538118 "!$@"
 *   insn=0x0000000000538118 string=0x000000000053811C " "
 *   insn=0x000000000053813C string=0x0000000000538140 " "
 *   insn=0x000000000053815C string=0x0000000000538160 "K"
 *   insn=0x0000000000538160 string=0x000000000053CA8C "E"
 *   insn=0x0000000000538164 string=0x0000000000538168 " \t"
 *   insn=0x000000000053817C string=0x0000000000538180 "i"
 *   insn=0x000000000053818C string=0x0000000000538190 "6"
 *   insn=0x00000000005381A8 string=0x00000000005381AC " "
 *   insn=0x00000000005381B4 string=0x00000000005381B8 " "
 *   insn=0x00000000005381C0 string=0x00000000005381C4 "!(@"
 *   insn=0x00000000005381C4 string=0x00000000005381C8 " "
 *   insn=0x00000000005381D4 string=0x00000000005381D8 " "
 *   insn=0x00000000005381E0 string=0x00000000005381E4 "?"
 *   insn=0x00000000005381EC string=0x00000000005381F0 "!$@"
 *   insn=0x00000000005381F0 string=0x00000000005381F4 " "
 *   insn=0x00000000005381FC string=0x0000000000538200 "A"
 *   insn=0x0000000000538204 string=0x0000000000538208 "}"
 *   insn=0x000000000053820C string=0x0000000000538210 "!$@"
 *   insn=0x0000000000538210 string=0x0000000000538214 " "
 *   insn=0x000000000053822C string=0x0000000000538230 "!$@"
 *   insn=0x0000000000538230 string=0x0000000000538234 " "
 *   insn=0x0000000000538238 string=0x000000000053823C "!"
 *   insn=0x0000000000538240 string=0x0000000000538244 "!"
 *   insn=0x000000000053824C string=0x0000000000538250 "!$@"
 *   insn=0x0000000000538250 string=0x0000000000538254 " "
 *   insn=0x0000000000538264 string=0x0000000000538268 "8"
 *   insn=0x0000000000538290 string=0x0000000000538294 " "
 *   insn=0x000000000053829C string=0x00000000005382A0 "!(@"
 *   insn=0x00000000005382A0 string=0x00000000005382A4 " "
 *   insn=0x00000000005382A4 string=0x00000000005382A8 "%"
 *   insn=0x00000000005382B0 string=0x00000000005382B4 "j"
 *   insn=0x00000000005382C4 string=0x00000000005382C8 ""
 *   insn=0x00000000005382CC string=0x00000000005382D0 "0"
 *   insn=0x00000000005382EC string=0x00000000005382F0 "`"
 *   insn=0x0000000000538300 string=0x0000000000538304 "`"
 *   insn=0x0000000000538308 string=0x000000000053830C "T"
 *   insn=0x0000000000538310 string=0x0000000000538314 "l%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_53797C(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        unsigned __int64 *a8)
{
  __int64 v8; // x20
  int v9; // w27
  int v10; // w28
  int v11; // w19
  unsigned int v12; // w19
  int v13; // w1
  unsigned __int64 v14; // x1
  int v15; // w22
  unsigned int v16; // w23
  unsigned __int64 v17; // x1
  int v18; // w25
  int v19; // w27
  size_t v20; // x24
  unsigned __int64 v21; // x0
  unsigned __int64 v22; // x25
  unsigned __int64 v23; // x21
  int v24; // w22
  signed int v25; // w0
  _QWORD *v26; // x0
  unsigned __int64 v27; // x1
  unsigned __int64 v28; // x2
  unsigned __int8 *v29; // x1
  int v30; // w1
  _QWORD *v31; // x0
  int v32; // w19
  int v33; // w1
  bool v34; // cf
  int v35; // w0
  unsigned __int8 *v36; // x1
  int v37; // w0
  int v38; // w19
  char *v39; // x28
  _QWORD *v40; // x20
  void *v42; // x0
  int v43; // w0
  int v44; // w0
  _QWORD *v45; // x0
  unsigned __int64 v46; // x1
  unsigned __int8 *v47; // x1
  int v48; // w1
  _QWORD *v49; // x0
  int v50; // w19
  int v51; // w1
  char *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x19
  char *v55; // x0
  unsigned __int8 *v56; // x1
  int v57; // w0
  unsigned __int8 *v58; // x1
  int v59; // w0
  unsigned __int8 *v60; // x1
  int v61; // w0
  unsigned __int64 v62; // x0
  _BOOL4 v64; // [xsp+6Ch] [xbp+6Ch]
  int v66; // [xsp+80h] [xbp+80h]
  unsigned int v67; // [xsp+84h] [xbp+84h]
  unsigned __int64 v69; // [xsp+88h] [xbp+88h]
  _QWORD *v70; // [xsp+90h] [xbp+90h] BYREF
  __int64 v71; // [xsp+98h] [xbp+98h]
  _QWORD *v72; // [xsp+A0h] [xbp+A0h] BYREF
  __int64 v73; // [xsp+A8h] [xbp+A8h]
  char v74[8]; // [xsp+B8h] [xbp+B8h] BYREF
  char *v75; // [xsp+C8h] [xbp+C8h] BYREF

  v72 = a2;
  v73 = a3;
  v70 = a4;
  v71 = a5;
  v8 = sub_532724((__int64)v74, (_QWORD *)(a6 + 208));
  v9 = *(_DWORD *)(a6 + 24) & 0x4A;
  if ( v9 == 64 )
  {
    v10 = 8;
  }
  else if ( v9 == 8 )
  {
    v10 = 16;
  }
  else
  {
    v10 = 10;
  }
  v11 = sub_532808((__int64)&v72);
  if ( (v11 == -1) == ((unsigned int)sub_532808((__int64)&v70) == -1) )
  {
    v12 = 0;
    v64 = 0;
  }
  else
  {
    v12 = (unsigned __int8)sub_532808((__int64)&v72);
    v64 = *(unsigned __int8 *)(v8 + 110) == v12;
    if ( *(unsigned __int8 *)(v8 + 110) != v12 && *(unsigned __int8 *)(v8 + 111) != v12 )
    {
      v13 = *(unsigned __int8 *)(v8 + 32);
      goto LABEL_15;
    }
    v13 = *(unsigned __int8 *)(v8 + 32);
    if ( *(_BYTE *)(v8 + 32) && *(unsigned __int8 *)(v8 + 73) == v12 )
    {
      v13 = 1;
      goto LABEL_15;
    }
    if ( *(unsigned __int8 *)(v8 + 72) == v12 )
    {
LABEL_15:
      v16 = 0;
      v67 = 0;
      while ( 1 )
      {
        if ( v13 && *(unsigned __int8 *)(v8 + 73) == v12 || *(unsigned __int8 *)(v8 + 72) == v12 )
        {
LABEL_32:
          v19 = 0;
          if ( v10 == 16 )
            goto LABEL_78;
          goto LABEL_33;
        }
        if ( *(unsigned __int8 *)(v8 + 114) != v12 )
          break;
        if ( (v10 == 10) < v67 )
          goto LABEL_21;
        ++v16;
        if ( v10 == 8 || (v67 = 1, !v9) )
        {
          v16 = 0;
          v67 = 1;
          v10 = 8;
        }
LABEL_26:
        if ( v72 )
        {
          v17 = v72[2];
          if ( v17 >= v72[3] )
            (*(void (__fastcall **)(_QWORD *))(*v72 + 80LL))(v72);
          else
            v72[2] = v17 + 1;
          LODWORD(v73) = -1;
        }
        v18 = sub_532808((__int64)&v72);
        if ( (v18 == -1) == ((unsigned int)sub_532808((__int64)&v70) == -1) )
        {
          v13 = *(unsigned __int8 *)(v8 + 32);
          v19 = 1;
          goto LABEL_77;
        }
        v12 = (unsigned __int8)sub_532808((__int64)&v72);
        v13 = *(unsigned __int8 *)(v8 + 32);
        if ( !v67 )
          goto LABEL_32;
      }
      if ( !v67 )
        goto LABEL_32;
LABEL_21:
      if ( *(unsigned __int8 *)(v8 + 112) != v12 && *(unsigned __int8 *)(v8 + 113) != v12 )
      {
        v19 = 0;
        v67 = 1;
        goto LABEL_77;
      }
      if ( v10 != 16 && v9 )
      {
        v19 = 0;
        v67 = 1;
        goto LABEL_33;
      }
      v16 = 0;
      v67 = 0;
      v10 = 16;
      goto LABEL_26;
    }
    if ( v72 )
    {
      v14 = v72[2];
      if ( v14 >= v72[3] )
        sub_52B4A0((__int64)v72);
      else
        v72[2] = v14 + 1;
      LODWORD(v73) = -1;
    }
    v15 = sub_532808((__int64)&v72);
    if ( (v15 == -1) != ((unsigned int)sub_532808((__int64)&v70) == -1) )
    {
      v12 = (unsigned __int8)sub_532808((__int64)&v72);
      v13 = *(unsigned __int8 *)(v8 + 32);
      goto LABEL_15;
    }
  }
  v13 = *(unsigned __int8 *)(v8 + 32);
  v19 = 1;
  v16 = 0;
  v67 = 0;
LABEL_77:
  if ( v10 == 16 )
  {
LABEL_78:
    v20 = 22;
    v75 = &byte_6FD2F8;
    if ( !v13 )
      goto LABEL_34;
  }
  else
  {
LABEL_33:
    v20 = v10;
    v75 = &byte_6FD2F8;
    if ( !v13 )
      goto LABEL_34;
  }
  sub_567088(&v75, 32);
LABEL_34:
  v66 = *(unsigned __int8 *)(v8 + 136);
  v21 = 0x8000000000000000LL;
  if ( !v64 )
    v21 = 0x7FFFFFFFFFFFFFFFLL;
  v69 = v21;
  v22 = v21 / v10;
  if ( *(_BYTE *)(v8 + 136) )
  {
    if ( v19 )
      goto LABEL_169;
    v23 = 0;
    v24 = 0;
LABEL_87:
    if ( !*(_BYTE *)(v8 + 32) || *(unsigned __int8 *)(v8 + 73) != v12 )
    {
LABEL_89:
      if ( *(unsigned __int8 *)(v8 + 72) == v12 )
        goto LABEL_141;
      v42 = memchr((const void *)(v8 + 114), v12, v20);
      if ( !v42 )
        goto LABEL_141;
      v43 = (_DWORD)v42 - (v8 + 114);
      if ( v43 >= 16 )
        v43 -= 6;
      if ( v22 < v23 )
      {
        v24 = 1;
      }
      else
      {
        ++v16;
        v34 = v69 - v43 >= v23 * v10;
        v23 = v43 + v23 * v10;
        v44 = !v34;
        v24 |= v44;
      }
      goto LABEL_98;
    }
    while ( 1 )
    {
      if ( !v16 )
      {
        v38 = 1;
        goto LABEL_68;
      }
      v52 = v75;
      v53 = *((_QWORD *)v75 - 3);
      v54 = v53 + 1;
      if ( (unsigned __int64)(v53 + 1) > *((_QWORD *)v75 - 2) || *((int *)v75 - 2) > 0 )
      {
        sub_567088(&v75, v53 + 1);
        v52 = v75;
        v53 = *((_QWORD *)v75 - 3);
      }
      v52[v53] = v16;
      v16 = 0;
      v55 = v75;
      if ( v75 - 24 == (char *)&qword_6FD2E0 )
      {
LABEL_98:
        v45 = v72;
        if ( !v72 )
          goto LABEL_115;
      }
      else
      {
        *((_DWORD *)v75 - 2) = 0;
        *((_QWORD *)v55 - 3) = v54;
        v55[v54] = 0;
        v45 = v72;
        if ( !v72 )
          goto LABEL_115;
      }
      v46 = v45[2];
      if ( v46 >= v45[3] )
      {
        (*(void (__fastcall **)(_QWORD *))(*v45 + 80LL))(v45);
        v45 = v72;
        LODWORD(v73) = -1;
        if ( !v72 )
          goto LABEL_115;
        v47 = (unsigned __int8 *)v72[2];
        if ( (unsigned __int64)v47 < v72[3] )
        {
LABEL_101:
          v48 = *v47;
LABEL_102:
          v49 = v70;
          v50 = 0;
          LODWORD(v73) = v48;
          if ( !v70 )
            goto LABEL_105;
          v51 = 0;
          if ( (_DWORD)v71 != -1 )
            goto LABEL_104;
          goto LABEL_117;
        }
      }
      else
      {
        v45[2] = v46 + 1;
        LODWORD(v73) = -1;
        v47 = (unsigned __int8 *)v45[2];
        if ( (unsigned __int64)v47 < v45[3] )
          goto LABEL_101;
      }
      v48 = (*(__int64 (__fastcall **)(_QWORD *))(*v45 + 72LL))(v45);
      if ( v48 != -1 )
        goto LABEL_102;
      v72 = 0;
LABEL_115:
      v49 = v70;
      if ( !v70 )
        goto LABEL_67;
      v51 = 0;
      v50 = v66;
      if ( (_DWORD)v71 != -1 )
        goto LABEL_104;
LABEL_117:
      v56 = (unsigned __int8 *)v49[2];
      if ( (unsigned __int64)v56 < v49[3] )
      {
        v57 = *v56;
LABEL_119:
        LODWORD(v71) = v57;
        v51 = 0;
        goto LABEL_104;
      }
      v57 = (*(__int64 (__fastcall **)(_QWORD *))(*v49 + 72LL))(v49);
      if ( v57 != -1 )
        goto LABEL_119;
      v70 = 0;
      v51 = v66;
LABEL_104:
      if ( v51 == v50 )
        goto LABEL_67;
LABEL_105:
      if ( !v72 )
        goto LABEL_157;
      if ( (_DWORD)v73 == -1 )
      {
        v60 = (unsigned __int8 *)v72[2];
        if ( (unsigned __int64)v60 < v72[3] )
        {
          v61 = *v60;
          goto LABEL_132;
        }
        v61 = (*(__int64 (__fastcall **)(_QWORD *))(*v72 + 72LL))(v72);
        if ( v61 == -1 )
        {
          v72 = 0;
LABEL_157:
          v12 = 255;
        }
        else
        {
LABEL_132:
          LODWORD(v73) = v61;
          v12 = (unsigned __int8)v61;
        }
        goto LABEL_87;
      }
      v12 = (unsigned __int8)v73;
      if ( !*(_BYTE *)(v8 + 32) || *(unsigned __int8 *)(v8 + 73) != (unsigned __int8)v73 )
        goto LABEL_89;
    }
  }
  if ( v19 )
  {
LABEL_169:
    v23 = 0;
    v24 = 0;
    v38 = 0;
    goto LABEL_68;
  }
  v23 = 0;
  v24 = 0;
  while ( v20 > 0xA )
  {
    while ( 1 )
    {
      v25 = v12 - 48;
      if ( (unsigned __int8)(v12 - 48) <= 9u )
        goto LABEL_43;
      if ( (unsigned __int8)(v12 - 97) <= 5u )
      {
        v25 = v12 - 87;
        goto LABEL_43;
      }
      if ( (unsigned __int8)(v12 - 65) > 5u )
        goto LABEL_141;
      v25 = v12 - 55;
      if ( v22 < v23 )
        goto LABEL_44;
LABEL_58:
      ++v16;
      v34 = v69 - v25 >= v23 * v10;
      v23 = v25 + v23 * v10;
      v35 = !v34;
      v24 |= v35;
      v26 = v72;
      if ( v72 )
        goto LABEL_45;
LABEL_62:
      v31 = v70;
      if ( !v70 )
        goto LABEL_67;
      v32 = 1;
      v33 = 0;
      if ( (_DWORD)v71 != -1 )
        goto LABEL_50;
LABEL_64:
      v36 = (unsigned __int8 *)v31[2];
      if ( (unsigned __int64)v36 >= v31[3] )
      {
        v37 = (*(__int64 (__fastcall **)(_QWORD *))(*v31 + 72LL))(v31);
        if ( v37 == -1 )
        {
          v70 = 0;
          v33 = 1;
          goto LABEL_50;
        }
      }
      else
      {
        v37 = *v36;
      }
      LODWORD(v71) = v37;
      if ( !v32 )
        goto LABEL_67;
LABEL_51:
      if ( !v72 )
        goto LABEL_140;
      if ( (_DWORD)v73 == -1 )
        break;
      v12 = (unsigned __int8)v73;
      if ( v20 <= 0xA )
        goto LABEL_40;
    }
    v58 = (unsigned __int8 *)v72[2];
    if ( (unsigned __int64)v58 < v72[3] )
    {
      v59 = *v58;
LABEL_129:
      LODWORD(v73) = v59;
      v12 = (unsigned __int8)v59;
      continue;
    }
    v59 = (*(__int64 (__fastcall **)(_QWORD *))(*v72 + 72LL))(v72);
    if ( v59 != -1 )
      goto LABEL_129;
    v72 = 0;
LABEL_140:
    v12 = 255;
  }
LABEL_40:
  if ( v12 <= 0x2F || v12 >= (unsigned __int8)(v20 + 48) )
  {
LABEL_141:
    v39 = v75;
    v38 = 0;
    if ( !*((_QWORD *)v75 - 3) )
      goto LABEL_69;
LABEL_142:
    sub_567890(&v75, v16);
    if ( !(unsigned __int8)sub_53CA8C(*(_QWORD *)(v8 + 16), *(_QWORD *)(v8 + 24), &v75) )
      *a7 = 4;
    v39 = v75;
    if ( (v16 == 0) > v67 && !*((_QWORD *)v75 - 3) )
      goto LABEL_70;
    goto LABEL_146;
  }
  v25 = v12 - 48;
LABEL_43:
  if ( v22 >= v23 )
    goto LABEL_58;
LABEL_44:
  v26 = v72;
  v24 = 1;
  if ( !v72 )
    goto LABEL_62;
LABEL_45:
  v27 = v26[2];
  if ( v27 >= v26[3] )
  {
    (*(void (__fastcall **)(_QWORD *))(*v26 + 80LL))(v26);
    v26 = v72;
    LODWORD(v73) = -1;
    if ( !v72 )
      goto LABEL_62;
    v29 = (unsigned __int8 *)v72[2];
    if ( (unsigned __int64)v29 < v72[3] )
      goto LABEL_47;
LABEL_136:
    v30 = (*(__int64 (__fastcall **)(_QWORD *))(*v26 + 72LL))(v26);
    if ( v30 == -1 )
    {
      v72 = 0;
      goto LABEL_62;
    }
    goto LABEL_48;
  }
  v26[2] = v27 + 1;
  v28 = v26[3];
  v29 = (unsigned __int8 *)v26[2];
  LODWORD(v73) = -1;
  if ( (unsigned __int64)v29 >= v28 )
    goto LABEL_136;
LABEL_47:
  v30 = *v29;
LABEL_48:
  v31 = v70;
  v32 = 0;
  LODWORD(v73) = v30;
  if ( !v70 )
    goto LABEL_51;
  v33 = 0;
  if ( (_DWORD)v71 == -1 )
    goto LABEL_64;
LABEL_50:
  if ( v32 != v33 )
    goto LABEL_51;
LABEL_67:
  v38 = 0;
  v19 = 1;
LABEL_68:
  v39 = v75;
  if ( *((_QWORD *)v75 - 3) )
    goto LABEL_142;
LABEL_69:
  if ( (v16 == 0) > v67 )
  {
LABEL_70:
    *a8 = 0;
    *a7 = 4;
    goto LABEL_71;
  }
LABEL_146:
  if ( v38 )
    goto LABEL_70;
  if ( v24 )
  {
    v62 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v64 )
      v62 = 0x8000000000000000LL;
    *a8 = v62;
    *a7 = 4;
  }
  else
  {
    if ( v64 )
      v23 = -(__int64)v23;
    *a8 = v23;
  }
LABEL_71:
  if ( v19 )
    *a7 |= 2u;
  v40 = v72;
  if ( v39 - 24 != (char *)&qword_6FD2E0 )
    sub_52B45C((unsigned int *)v39 - 6);
  return v40;
}

