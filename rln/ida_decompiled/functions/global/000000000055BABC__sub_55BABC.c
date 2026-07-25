/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055BABC
 * Mangled: sub_55BABC
 * Demangled: sub_55BABC
 *
 * Callers: 2
 *   0x000000000055C3C4  sub_55C3C4
 *   0x000000000055C3D8  sub_55C3D8
 *
 * Callees: 10
 *   0x0000000000200670  .wmemchr
 *   0x000000000053CA8C  sub_53CA8C
 *   0x000000000054D8C4  sub_54D8C4
 *   0x000000000054D8E0  sub_54D8E0
 *   0x0000000000554A24  sub_554A24
 *   0x0000000000554B08  sub_554B08
 *   0x000000000055C3C4  sub_55C3C4
 *   0x0000000000567088  sub_567088
 *   0x0000000000567890  sub_567890
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 166
 *   insn=0x000000000055BAFC string=0x000000000055BB00 "@\t"
 *   insn=0x000000000055BB04 string=0x000000000055BB08 "{"
 *   insn=0x000000000055BB14 string=0x000000000055BB18 "@"
 *   insn=0x000000000055BB1C string=0x000000000055BB20 "Z"
 *   insn=0x000000000055BB4C string=0x000000000055BB50 "?"
 *   insn=0x000000000055BB84 string=0x000000000055BB88 "@"
 *   insn=0x000000000055BB8C string=0x000000000055BB90 " "
 *   insn=0x000000000055BB98 string=0x000000000055BB9C "?"
 *   insn=0x000000000055BBA0 string=0x000000000055BBA4 "!"
 *   insn=0x000000000055BBA0 string=0x000000000055C35C "Z"
 *   insn=0x000000000055BBD4 string=0x000000000055BBD8 "?"
 *   insn=0x000000000055BC00 string=0x000000000055BC04 "?"
 *   insn=0x000000000055BC04 string=0x000000000055BC08 "@9"
 *   insn=0x000000000055BC08 string=0x000000000055C330 ""
 *   insn=0x000000000055BC0C string=0x000000000055BC10 "?"
 *   insn=0x000000000055BC18 string=0x000000000055BC1C "?"
 *   insn=0x000000000055BC1C string=0x000000000055BC20 " "
 *   insn=0x000000000055BC20 string=0x000000000055BFA4 "_+"
 *   insn=0x000000000055BC24 string=0x000000000055BC28 "A8"
 *   insn=0x000000000055BC2C string=0x000000000055BC30 "?"
 *   insn=0x000000000055BC34 string=0x000000000055BC44 "_C"
 *   insn=0x000000000055BC38 string=0x000000000055BC3C "?"
 *   insn=0x000000000055BC3C string=0x000000000055BC40 "!"
 *   insn=0x000000000055BC40 string=0x000000000055BFE4 "!"
 *   insn=0x000000000055BC44 string=0x000000000055BC48 "@"
 *   insn=0x000000000055BC4C string=0x000000000055C364 "!"
 *   insn=0x000000000055BC68 string=0x000000000055BC6C "?"
 *   insn=0x000000000055BC70 string=0x000000000055BC74 "!"
 *   insn=0x000000000055BC90 string=0x000000000055BC94 "?"
 *   insn=0x000000000055BCA0 string=0x000000000055BCA4 "?"
 *   insn=0x000000000055BCC8 string=0x000000000055BCCC ";"
 *   insn=0x000000000055BCCC string=0x000000000055BCD0 "_C"
 *   insn=0x000000000055BCD0 string=0x000000000055BCD4 " "
 *   insn=0x000000000055BCDC string=0x000000000055BCE0 "A"
 *   insn=0x000000000055BCE0 string=0x000000000055BCE4 "X"
 *   insn=0x000000000055BCE4 string=0x000000000055BCE8 "!"
 *   insn=0x000000000055BCE8 string=0x000000000055BCEC "!`"
 *   insn=0x000000000055BCF0 string=0x000000000055BCF4 " "
 *   insn=0x000000000055BD2C string=0x000000000055BDFC "`"
 *   insn=0x000000000055BD3C string=0x000000000055BD40 "B"
 *   insn=0x000000000055BD40 string=0x000000000055BD44 "`"
 *   insn=0x000000000055BD44 string=0x000000000055BD48 "?"
 *   insn=0x000000000055BD50 string=0x000000000055BD54 "6"
 *   insn=0x000000000055BD60 string=0x000000000055BD64 "?"
 *   insn=0x000000000055BD64 string=0x000000000055BD68 ""'"
 *   insn=0x000000000055BD68 string=0x000000000055BD6C "!"
 *   insn=0x000000000055BD7C string=0x000000000055BD80 "?"
 *   insn=0x000000000055BD84 string=0x000000000055BD88 "!"
 *   insn=0x000000000055BD88 string=0x000000000055BD8C "?"
 *   insn=0x000000000055BDA8 string=0x000000000055BDAC "_"
 *   insn=0x000000000055BDB0 string=0x000000000055BDB4 "?"
 *   insn=0x000000000055BDB4 string=0x000000000055BDB8 " "
 *   insn=0x000000000055BDC0 string=0x000000000055BDC4 " "
 *   insn=0x000000000055BDD8 string=0x000000000055BDDC "?"
 *   insn=0x000000000055BDDC string=0x000000000055BDE0 "b)"
 *   insn=0x000000000055BDE0 string=0x000000000055BDE4 "3"
 *   insn=0x000000000055BE00 string=0x000000000055BE04 ")"
 *   insn=0x000000000055BE04 string=0x000000000055BE08 "`"
 *   insn=0x000000000055BE0C string=0x000000000055BE10 "I "
 *   insn=0x000000000055BE10 string=0x000000000055BE14 "`"
 *   insn=0x000000000055BE10 string=0x000000000055C218 "`^"
 *   insn=0x000000000055BE18 string=0x000000000055BE1C "h\n"
 *   insn=0x000000000055BE1C string=0x000000000055BE20 "?"
 *   insn=0x000000000055BE20 string=0x000000000055BE24 "`"
 *   insn=0x000000000055BE24 string=0x000000000055BE28 "C"
 *   insn=0x000000000055BE38 string=0x000000000055BE3C "_"
 *   insn=0x000000000055BE4C string=0x000000000055BE50 "`"
 *   insn=0x000000000055BE54 string=0x000000000055BE58 " "
 *   insn=0x000000000055BE5C string=0x000000000055BE60 "3"
 *   insn=0x000000000055BE64 string=0x000000000055BE68 "_"
 *   insn=0x000000000055BE68 string=0x000000000055BE6C "A"
 *   insn=0x000000000055BE74 string=0x000000000055BE78 "?"
 *   insn=0x000000000055BE7C string=0x000000000055BE80 " "
 *   insn=0x000000000055BE90 string=0x000000000055BE94 "?"
 *   insn=0x000000000055BE94 string=0x000000000055BE98 "!"
 *   insn=0x000000000055BEA0 string=0x000000000055BEA4 ";"
 *   insn=0x000000000055BEA4 string=0x000000000055BEA8 "@"
 *   insn=0x000000000055BEA8 string=0x000000000055BEAC "`"
 *   insn=0x000000000055BEB8 string=0x000000000055BEBC "u."
 *   insn=0x000000000055BECC string=0x000000000053CA8C "E"
 *   insn=0x000000000055BED0 string=0x000000000055BED4 "@!"
 *   insn=0x000000000055BEE8 string=0x000000000055BEEC "i"
 *   insn=0x000000000055BEEC string=0x000000000055BEF0 "@"
 *   insn=0x000000000055BF04 string=0x000000000055BF08 " "
 *   insn=0x000000000055BF10 string=0x000000000055BF14 " "
 *   insn=0x000000000055BF18 string=0x000000000055BF2C "@"
 *   insn=0x000000000055BF1C string=0x000000000055BF20 " "
 *   insn=0x000000000055BF24 string=0x000000000055BF28 " "
 *   insn=0x000000000055BF2C string=0x000000000055BF30 "Sc"
 *   insn=0x000000000055BF3C string=0x000000000055BF40 "a "
 *   insn=0x000000000055BF6C string=0x000000000055BF70 "@"
 *   insn=0x000000000055BF98 string=0x000000000055BF9C " "
 *   insn=0x000000000055BFAC string=0x000000000055BFB0 "?"
 *   insn=0x000000000055BFB4 string=0x000000000055BFB8 "_#"
 *   insn=0x000000000055BFC0 string=0x000000000055BFC4 " "
 *   insn=0x000000000055BFC0 string=0x000000000055BFD0 " "
 *   insn=0x000000000055BFE4 string=0x000000000055BFE8 "_C"
 *   insn=0x000000000055BFEC string=0x000000000055BFF0 ""
 *   insn=0x000000000055BFF0 string=0x000000000055BFF4 "!"
 *   insn=0x000000000055BFFC string=0x000000000055C000 "A"
 *   insn=0x000000000055C004 string=0x000000000055C008 "!"
 *   insn=0x000000000055C008 string=0x000000000055C00C "!`"
 *   insn=0x000000000055C010 string=0x000000000055C014 " "
 *   insn=0x000000000055C078 string=0x000000000055C07C "}"
 *   insn=0x000000000055C07C string=0x000000000055C080 "@"
 *   insn=0x000000000055C094 string=0x000000000055C098 "?"
 *   insn=0x000000000055C098 string=0x000000000055C09C "c\t"
 *   insn=0x000000000055C0AC string=0x000000000055C0B0 "_"
 *   insn=0x000000000055C0CC string=0x000000000055C0D0 "?"
 *   insn=0x000000000055C0D0 string=0x000000000055C0D4 "B"
 *   insn=0x000000000055C0D8 string=0x000000000055C0DC "!"
 *   insn=0x000000000055C0EC string=0x000000000055C0F0 "?"
 *   insn=0x000000000055C0F0 string=0x000000000055C0F4 """
 *   insn=0x000000000055C0F4 string=0x000000000055C0F8 "!"
 *   insn=0x000000000055C0F8 string=0x000000000055C0FC "?"
 *   insn=0x000000000055C118 string=0x000000000055C11C "_"
 *   insn=0x000000000055C120 string=0x000000000055C124 "?"
 *   insn=0x000000000055C148 string=0x000000000055C14C "?"
 *   insn=0x000000000055C14C string=0x000000000055C150 "B"
 *   insn=0x000000000055C150 string=0x000000000055C154 "3"
 *   insn=0x000000000055C158 string=0x000000000055C15C "@\n"
 *   insn=0x000000000055C16C string=0x000000000055C170 "@"
 *   insn=0x000000000055C184 string=0x000000000055C188 " "
 *   insn=0x000000000055C198 string=0x000000000055C19C ";"
 *   insn=0x000000000055C1BC string=0x000000000055C1C0 " "
 *   insn=0x000000000055C1C0 string=0x000000000055C1C4 "U"
 *   insn=0x000000000055C1C8 string=0x000000000055C1CC "6"
 *   insn=0x000000000055C1D4 string=0x000000000055C1D8 " "
 *   insn=0x000000000055C1E4 string=0x000000000055C1E8 "_"
 *   insn=0x000000000055C1F4 string=0x000000000055C1F8 "?"
 *   insn=0x000000000055C1FC string=0x000000000055C200 " "
 *   insn=0x000000000055C220 string=0x000000000055C224 "!"
 *   insn=0x000000000055C22C string=0x000000000055C230 "\t"
 *   insn=0x000000000055C234 string=0x000000000055C384 "3"
 *   insn=0x000000000055C24C string=0x000000000055C250 "!(@"
 *   insn=0x000000000055C250 string=0x000000000055C254 " "
 *   insn=0x000000000055C27C string=0x000000000055C280 "!(@"
 *   insn=0x000000000055C280 string=0x000000000055C284 " "
 *   insn=0x000000000055C2A4 string=0x000000000055C2A8 "j"
 *   insn=0x000000000055C2AC string=0x000000000055C2B0 "!$@"
 *   insn=0x000000000055C2B0 string=0x000000000055C2B4 " "
 *   insn=0x000000000055C2BC string=0x000000000055C2C0 "!$@"
 *   insn=0x000000000055C2C0 string=0x000000000055C2C4 " "
 *   insn=0x000000000055C2D8 string=0x000000000055C2DC "!$@"
 *   insn=0x000000000055C2DC string=0x000000000055C2E0 " "
 *   insn=0x000000000055C2EC string=0x000000000055C2F0 "!$@"
 *   insn=0x000000000055C2F0 string=0x000000000055C2F4 " "
 *   insn=0x000000000055C300 string=0x000000000055C304 " "
 *   insn=0x000000000055C30C string=0x000000000055C310 "!$@"
 *   insn=0x000000000055C310 string=0x000000000055C314 " "
 *   insn=0x000000000055C320 string=0x000000000055C324 "!(@"
 *   insn=0x000000000055C324 string=0x000000000055C328 " "
 *   insn=0x000000000055C328 string=0x000000000055C32C "T"
 *   insn=0x000000000055C330 string=0x000000000055C334 "g"
 *   insn=0x000000000055C338 string=0x000000000055C33C "!$@"
 *   insn=0x000000000055C33C string=0x000000000055C340 " "
 *   insn=0x000000000055C350 string=0x000000000055C354 "c"
 *   insn=0x000000000055C364 string=0x000000000055C368 ""
 *   insn=0x000000000055C36C string=0x000000000055C370 "Z"
 *   insn=0x000000000055C38C string=0x000000000055C390 ""
 *   insn=0x000000000055C390 string=0x000000000055C394 "O"
 *   insn=0x000000000055C398 string=0x000000000055C39C "@"
 *   insn=0x000000000055C3A4 string=0x000000000055C3A8 "@c"
 *   insn=0x000000000055C3AC string=0x000000000055C3B0 "`"
 *   insn=0x000000000055C3B4 string=0x000000000055C3B8 "J"
 *   insn=0x000000000055C3BC string=0x000000000055C3C0 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_55BABC(
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
  int v9; // w27
  unsigned __int64 v10; // x26
  int v11; // w19
  unsigned int v12; // w19
  int v13; // w0
  unsigned __int64 v14; // x1
  int v15; // w22
  unsigned int v16; // w23
  unsigned __int64 v17; // x1
  int v18; // w25
  int v19; // w27
  size_t v20; // x24
  unsigned __int64 v21; // x25
  unsigned __int64 v22; // x21
  int v23; // w22
  signed int v24; // w0
  _QWORD *v25; // x0
  unsigned __int64 v26; // x1
  int *v27; // x1
  int v28; // w1
  _QWORD *v29; // x0
  int v30; // w19
  int v31; // w1
  unsigned int *v32; // x1
  bool v33; // cf
  int v34; // w0
  int *v35; // x1
  int v36; // w0
  char *v37; // x26
  int v38; // w19
  _QWORD *v39; // x20
  wchar_t *v41; // x0
  __int64 v42; // x0
  int v43; // w0
  _QWORD *v44; // x0
  unsigned __int64 v45; // x1
  int *v46; // x1
  int v47; // w1
  _QWORD *v48; // x0
  int v49; // w19
  int v50; // w1
  unsigned int *v51; // x1
  int *v52; // x1
  int v53; // w0
  bool v54; // [xsp+64h] [xbp+64h]
  int v57; // [xsp+80h] [xbp+80h]
  unsigned int v59; // [xsp+88h] [xbp+88h]
  _QWORD *v60; // [xsp+90h] [xbp+90h] BYREF
  __int64 v61; // [xsp+98h] [xbp+98h]
  _QWORD *v62; // [xsp+A0h] [xbp+A0h] BYREF
  __int64 v63; // [xsp+A8h] [xbp+A8h]
  char v64[8]; // [xsp+B8h] [xbp+B8h] BYREF
  char *v65; // [xsp+C8h] [xbp+C8h] BYREF

  v62 = a2;
  v63 = a3;
  v60 = a4;
  v61 = a5;
  v8 = sub_554A24((__int64)v64, (__int64 *)(a6 + 208));
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
  v11 = sub_554B08((__int64)&v62);
  if ( (v11 == -1) == ((unsigned int)sub_554B08((__int64)&v60) == -1) )
  {
    v12 = 0;
    v54 = 0;
    goto LABEL_128;
  }
  v12 = sub_554B08((__int64)&v62);
  v54 = v12 == *(_DWORD *)(v8 + 224);
  if ( v12 != *(_DWORD *)(v8 + 224) && v12 != *(_DWORD *)(v8 + 228) )
  {
    v13 = *(unsigned __int8 *)(v8 + 32);
    goto LABEL_14;
  }
  v13 = *(unsigned __int8 *)(v8 + 32);
  if ( *(_BYTE *)(v8 + 32) && v12 == *(_DWORD *)(v8 + 76) )
  {
    v13 = 1;
    goto LABEL_14;
  }
  if ( v12 != *(_DWORD *)(v8 + 72) )
  {
    if ( v62 )
    {
      v14 = v62[2];
      if ( v14 >= v62[3] )
        sub_54D8C4((__int64)v62);
      else
        v62[2] = v14 + 4;
      LODWORD(v63) = -1;
    }
    v15 = sub_554B08((__int64)&v62);
    if ( (v15 == -1) != ((unsigned int)sub_554B08((__int64)&v60) == -1) )
    {
      v12 = sub_554B08((__int64)&v62);
      v13 = *(unsigned __int8 *)(v8 + 32);
      goto LABEL_14;
    }
LABEL_128:
    v13 = *(unsigned __int8 *)(v8 + 32);
    v19 = 1;
    v16 = 0;
    v59 = 0;
    goto LABEL_33;
  }
LABEL_14:
  v16 = 0;
  v59 = 0;
  while ( 1 )
  {
    if ( v13 && *(_DWORD *)(v8 + 76) == v12 || *(_DWORD *)(v8 + 72) == v12 )
    {
LABEL_157:
      v19 = 0;
      goto LABEL_33;
    }
    if ( *(_DWORD *)(v8 + 240) == v12 )
    {
      if ( ((_DWORD)v10 == 10) >= v59 )
      {
        ++v16;
        if ( (_DWORD)v10 == 8 || (v59 = 1, !v9) )
        {
          v16 = 0;
          v59 = 1;
          v10 = 8;
        }
        goto LABEL_25;
      }
    }
    else if ( !v59 )
    {
      goto LABEL_157;
    }
    if ( *(_DWORD *)(v8 + 232) != v12 && *(_DWORD *)(v8 + 236) != v12 )
    {
      v59 = 1;
      v19 = 0;
      if ( (_DWORD)v10 != 16 )
        goto LABEL_34;
      goto LABEL_93;
    }
    if ( (_DWORD)v10 != 16 && v9 )
    {
      v19 = 0;
      v59 = 1;
      goto LABEL_34;
    }
    v16 = 0;
    v59 = 0;
    v10 = 16;
LABEL_25:
    if ( v62 )
    {
      v17 = v62[2];
      if ( v17 >= v62[3] )
        (*(void (__fastcall **)(_QWORD *))(*v62 + 80LL))(v62);
      else
        v62[2] = v17 + 4;
      LODWORD(v63) = -1;
    }
    v18 = sub_554B08((__int64)&v62);
    if ( (v18 == -1) == ((unsigned int)sub_554B08((__int64)&v60) == -1) )
    {
      v13 = *(unsigned __int8 *)(v8 + 32);
      v19 = 1;
      goto LABEL_33;
    }
    v12 = sub_554B08((__int64)&v62);
    if ( !v59 )
      break;
    v13 = *(unsigned __int8 *)(v8 + 32);
  }
  v13 = *(unsigned __int8 *)(v8 + 32);
  v19 = 0;
LABEL_33:
  if ( (_DWORD)v10 != 16 )
  {
LABEL_34:
    v20 = (int)v10;
    v65 = &byte_6FD2F8;
    if ( !v13 )
      goto LABEL_35;
LABEL_94:
    sub_567088(&v65, 32);
    v57 = *(unsigned __int8 *)(v8 + 328);
    v21 = 0xFFFFFFFFFFFFFFFFLL / v10;
    if ( *(_BYTE *)(v8 + 328) )
      goto LABEL_95;
LABEL_36:
    v22 = 0;
    v23 = 0;
    if ( v19 )
      goto LABEL_84;
LABEL_37:
    if ( v20 <= 0xA )
    {
LABEL_38:
      if ( v12 > 0x2F && v12 < (int)v20 + 48 )
      {
        v24 = v12 - 48;
        goto LABEL_41;
      }
LABEL_84:
      v38 = 0;
      goto LABEL_85;
    }
    while ( 1 )
    {
      v24 = v12 - 48;
      if ( v12 - 48 <= 9 )
        break;
      if ( v12 - 97 <= 5 )
      {
        v24 = v12 - 87;
        break;
      }
      if ( v12 - 65 > 5 )
        goto LABEL_84;
      v24 = v12 - 55;
      if ( v21 < v22 )
        goto LABEL_42;
LABEL_61:
      ++v16;
      v33 = ~(__int64)v24 >= v22 * v10;
      v22 = v24 + v22 * v10;
      v34 = !v33;
      v23 |= v34;
      v25 = v62;
      if ( v62 )
        goto LABEL_43;
LABEL_65:
      v29 = v60;
      if ( !v60 )
        goto LABEL_71;
      v30 = 1;
      v31 = 0;
      if ( (_DWORD)v61 != -1 )
        goto LABEL_50;
LABEL_67:
      v35 = (int *)v29[2];
      if ( (unsigned __int64)v35 >= v29[3] )
        v36 = (*(__int64 (__fastcall **)(_QWORD *))(*v29 + 72LL))(v29);
      else
        v36 = *v35;
      if ( v36 == -1 )
      {
        v60 = 0;
        v31 = 1;
        goto LABEL_50;
      }
      LODWORD(v61) = v36;
      if ( !v30 )
        goto LABEL_71;
LABEL_51:
      v12 = -1;
      if ( !v62 )
        goto LABEL_37;
      v12 = v63;
      if ( (_DWORD)v63 != -1 )
        goto LABEL_37;
      v32 = (unsigned int *)v62[2];
      if ( (unsigned __int64)v32 >= v62[3] )
        v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v62 + 72LL))(v62);
      else
        v12 = *v32;
      if ( v12 == -1 )
      {
        v62 = 0;
        goto LABEL_37;
      }
      LODWORD(v63) = v12;
      if ( v20 <= 0xA )
        goto LABEL_38;
    }
LABEL_41:
    if ( v21 >= v22 )
      goto LABEL_61;
LABEL_42:
    v25 = v62;
    v23 = 1;
    if ( !v62 )
      goto LABEL_65;
LABEL_43:
    v26 = v25[2];
    if ( v26 >= v25[3] )
    {
      (*(void (__fastcall **)(_QWORD *))(*v25 + 80LL))(v25);
      v25 = v62;
      LODWORD(v63) = -1;
      if ( !v62 )
        goto LABEL_65;
    }
    else
    {
      LODWORD(v63) = -1;
      v25[2] = v26 + 4;
    }
    v27 = (int *)v25[2];
    if ( (unsigned __int64)v27 >= v25[3] )
      v28 = (*(__int64 (__fastcall **)(_QWORD *))(*v25 + 72LL))(v25);
    else
      v28 = *v27;
    if ( v28 == -1 )
    {
      v62 = 0;
      goto LABEL_65;
    }
    v29 = v60;
    v30 = 0;
    LODWORD(v63) = v28;
    if ( !v60 )
      goto LABEL_51;
    v31 = 0;
    if ( (_DWORD)v61 == -1 )
      goto LABEL_67;
LABEL_50:
    if ( v31 != v30 )
      goto LABEL_51;
LABEL_71:
    v37 = v65;
    v38 = 0;
    v19 = 1;
    if ( !*((_QWORD *)v65 - 3) )
      goto LABEL_86;
LABEL_72:
    sub_567890(&v65, v16);
    if ( !sub_53CA8C(*(_QWORD *)(v8 + 16), *(_QWORD *)(v8 + 24), (unsigned __int8 **)&v65) )
      *a7 = 4;
    v37 = v65;
    if ( (v16 == 0) <= v59 || *((_QWORD *)v65 - 3) )
      goto LABEL_76;
LABEL_87:
    *a8 = 0;
    *a7 = 4;
    goto LABEL_79;
  }
LABEL_93:
  v20 = 22;
  v65 = &byte_6FD2F8;
  if ( v13 )
    goto LABEL_94;
LABEL_35:
  v57 = *(unsigned __int8 *)(v8 + 328);
  v21 = 0xFFFFFFFFFFFFFFFFLL / v10;
  if ( !*(_BYTE *)(v8 + 328) )
    goto LABEL_36;
LABEL_95:
  if ( v19 )
  {
    v22 = 0;
    v23 = 0;
    v38 = 0;
    goto LABEL_85;
  }
  v22 = 0;
  v23 = 0;
  while ( 2 )
  {
    if ( !*(_BYTE *)(v8 + 32) || v12 != *(_DWORD *)(v8 + 76) )
    {
      if ( v12 == *(_DWORD *)(v8 + 72) )
        goto LABEL_84;
      v41 = wmemchr((const wchar_t *)(v8 + 240), v12, v20);
      if ( !v41 )
        goto LABEL_84;
      v42 = ((__int64)v41 - v8 - 240) >> 2;
      if ( (int)v42 >= 16 )
        LODWORD(v42) = v42 - 6;
      if ( v21 < v22 )
      {
        v44 = v62;
        v23 = 1;
        if ( v62 )
          goto LABEL_109;
      }
      else
      {
        ++v16;
        v33 = ~(__int64)(int)v42 >= v22 * v10;
        v22 = (int)v42 + v22 * v10;
        v43 = !v33;
        v23 |= v43;
LABEL_108:
        v44 = v62;
        if ( v62 )
        {
LABEL_109:
          v45 = v44[2];
          if ( v45 < v44[3] )
          {
            LODWORD(v63) = -1;
            v44[2] = v45 + 4;
            goto LABEL_111;
          }
          (*(void (__fastcall **)(_QWORD *))(*v44 + 80LL))(v44);
          v44 = v62;
          LODWORD(v63) = -1;
          if ( v62 )
          {
LABEL_111:
            v46 = (int *)v44[2];
            if ( (unsigned __int64)v46 >= v44[3] )
              v47 = (*(__int64 (__fastcall **)(_QWORD *))(*v44 + 72LL))(v44);
            else
              v47 = *v46;
            if ( v47 != -1 )
            {
              v48 = v60;
              v49 = 0;
              LODWORD(v63) = v47;
              if ( v60 )
              {
                v50 = 0;
                if ( (_DWORD)v61 != -1 )
                  goto LABEL_116;
LABEL_133:
                v52 = (int *)v48[2];
                if ( (unsigned __int64)v52 >= v48[3] )
                  v53 = (*(__int64 (__fastcall **)(_QWORD *))(*v48 + 72LL))(v48);
                else
                  v53 = *v52;
                if ( v53 == -1 )
                {
                  v60 = 0;
                  v50 = v57;
                }
                else
                {
                  LODWORD(v61) = v53;
                  v50 = 0;
                }
                goto LABEL_116;
              }
LABEL_117:
              v12 = -1;
              if ( v62 )
              {
                v12 = v63;
                if ( (_DWORD)v63 == -1 )
                {
                  v51 = (unsigned int *)v62[2];
                  if ( (unsigned __int64)v51 >= v62[3] )
                    v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v62 + 72LL))(v62);
                  else
                    v12 = *v51;
                  if ( v12 == -1 )
                    v62 = 0;
                  else
                    LODWORD(v63) = v12;
                }
              }
              continue;
            }
            v62 = 0;
          }
        }
      }
      v48 = v60;
      if ( !v60 )
        goto LABEL_71;
      v50 = 0;
      v49 = v57;
      if ( (_DWORD)v61 == -1 )
        goto LABEL_133;
LABEL_116:
      if ( v50 == v49 )
        goto LABEL_71;
      goto LABEL_117;
    }
    break;
  }
  if ( v16 )
  {
    sub_567890(&v65, v16);
    v16 = 0;
    goto LABEL_108;
  }
  v38 = 1;
LABEL_85:
  v37 = v65;
  if ( *((_QWORD *)v65 - 3) )
    goto LABEL_72;
LABEL_86:
  if ( (v16 == 0) > v59 )
    goto LABEL_87;
LABEL_76:
  if ( v38 )
    goto LABEL_87;
  if ( v23 )
  {
    *a8 = -1;
    *a7 = 4;
  }
  else
  {
    *a8 = (v22 ^ -(__int64)v54) + v54;
  }
LABEL_79:
  if ( v19 )
    *a7 |= 2u;
  v39 = v62;
  if ( v37 - 24 != (char *)&qword_6FD2E0 )
    sub_54D8E0((unsigned int *)v37 - 6);
  return v39;
}

