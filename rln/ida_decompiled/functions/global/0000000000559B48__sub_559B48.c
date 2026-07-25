/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000559B48
 * Mangled: sub_559B48
 * Demangled: sub_559B48
 *
 * Callers: 3
 *   0x00000000005598EC  sub_5598EC
 *   0x000000000055A464  sub_55A464
 *   0x000000000055A478  sub_55A478
 *
 * Callees: 10
 *   0x0000000000200670  .wmemchr
 *   0x000000000053CA8C  sub_53CA8C
 *   0x000000000054D8C4  sub_54D8C4
 *   0x000000000054D8E0  sub_54D8E0
 *   0x0000000000554A24  sub_554A24
 *   0x0000000000554B08  sub_554B08
 *   0x000000000055A464  sub_55A464
 *   0x0000000000567088  sub_567088
 *   0x0000000000567890  sub_567890
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 161
 *   insn=0x0000000000559B88 string=0x0000000000559B8C "@\t"
 *   insn=0x0000000000559B90 string=0x0000000000559B94 "{"
 *   insn=0x0000000000559BA0 string=0x0000000000559BA4 "@"
 *   insn=0x0000000000559BD8 string=0x0000000000559BDC "?"
 *   insn=0x0000000000559BFC string=0x0000000000559C00 "`0"
 *   insn=0x0000000000559C10 string=0x0000000000559C14 "@"
 *   insn=0x0000000000559C18 string=0x0000000000559C1C " "
 *   insn=0x0000000000559C24 string=0x0000000000559C28 "?"
 *   insn=0x0000000000559C2C string=0x0000000000559C30 "!"
 *   insn=0x0000000000559C2C string=0x000000000055A3FC "2"
 *   insn=0x0000000000559C60 string=0x0000000000559C64 "?"
 *   insn=0x0000000000559C8C string=0x0000000000559C90 "?"
 *   insn=0x0000000000559C94 string=0x000000000055A3D0 ""
 *   insn=0x0000000000559C98 string=0x0000000000559C9C "?"
 *   insn=0x0000000000559CA4 string=0x0000000000559CA8 "?"
 *   insn=0x0000000000559CB8 string=0x0000000000559CBC "?"
 *   insn=0x0000000000559CC4 string=0x0000000000559CC8 "?"
 *   insn=0x0000000000559CCC string=0x000000000055A09C "!"
 *   insn=0x0000000000559CD0 string=0x0000000000559CD4 "@"
 *   insn=0x0000000000559CD4 string=0x0000000000559CD8 "{9"
 *   insn=0x0000000000559CD8 string=0x000000000055A404 "!"
 *   insn=0x0000000000559CF4 string=0x0000000000559CF8 "?"
 *   insn=0x0000000000559CF8 string=0x0000000000559CFC ""6"
 *   insn=0x0000000000559CFC string=0x0000000000559D00 "!"
 *   insn=0x0000000000559D0C string=0x0000000000559D10 "~"
 *   insn=0x0000000000559D18 string=0x0000000000559D1C "{"
 *   insn=0x0000000000559D1C string=0x0000000000559D20 "?"
 *   insn=0x0000000000559D2C string=0x0000000000559D30 "?"
 *   insn=0x0000000000559D38 string=0x0000000000559D3C "s"
 *   insn=0x0000000000559D44 string=0x0000000000559D48 " 7"
 *   insn=0x0000000000559D54 string=0x0000000000559D58 ";"
 *   insn=0x0000000000559D68 string=0x0000000000559D6C "a"
 *   insn=0x0000000000559D70 string=0x0000000000559D74 "!"
 *   insn=0x0000000000559D74 string=0x0000000000559D78 "!`"
 *   insn=0x0000000000559DA0 string=0x0000000000559DA4 " "
 *   insn=0x0000000000559DB8 string=0x0000000000559DBC "["
 *   insn=0x0000000000559DD0 string=0x0000000000559EA0 "`"
 *   insn=0x0000000000559DD4 string=0x0000000000559DD8 "i"
 *   insn=0x0000000000559DE4 string=0x0000000000559DE8 "`"
 *   insn=0x0000000000559DE8 string=0x0000000000559DEC "?"
 *   insn=0x0000000000559DF4 string=0x0000000000559DF8 "6"
 *   insn=0x0000000000559E04 string=0x0000000000559E08 "?"
 *   insn=0x0000000000559E0C string=0x0000000000559E10 "!"
 *   insn=0x0000000000559E20 string=0x0000000000559E24 "?"
 *   insn=0x0000000000559E28 string=0x0000000000559E2C "!"
 *   insn=0x0000000000559E2C string=0x0000000000559E30 "?"
 *   insn=0x0000000000559E4C string=0x0000000000559E50 "_"
 *   insn=0x0000000000559E50 string=0x0000000000559E54 " "
 *   insn=0x0000000000559E54 string=0x0000000000559E58 "?"
 *   insn=0x0000000000559E58 string=0x0000000000559E5C "@"
 *   insn=0x0000000000559E64 string=0x0000000000559E68 " "
 *   insn=0x0000000000559E7C string=0x0000000000559E80 "?"
 *   insn=0x0000000000559E80 string=0x0000000000559E84 "B)"
 *   insn=0x0000000000559E84 string=0x0000000000559E88 "3"
 *   insn=0x0000000000559E8C string=0x0000000000559E90 "`%"
 *   insn=0x0000000000559EA4 string=0x0000000000559EA8 ")"
 *   insn=0x0000000000559EA8 string=0x0000000000559EAC "`"
 *   insn=0x0000000000559EB0 string=0x0000000000559EB4 ") "
 *   insn=0x0000000000559EB4 string=0x0000000000559EB8 "`"
 *   insn=0x0000000000559EB4 string=0x000000000055A2B8 "`^"
 *   insn=0x0000000000559EBC string=0x0000000000559EC0 "(\n"
 *   insn=0x0000000000559EC0 string=0x0000000000559EC4 "?"
 *   insn=0x0000000000559EC4 string=0x0000000000559EC8 "`"
 *   insn=0x0000000000559EC8 string=0x0000000000559ECC "C"
 *   insn=0x0000000000559ED8 string=0x0000000000559EDC "B"
 *   insn=0x0000000000559EE0 string=0x0000000000559EE4 "_"
 *   insn=0x0000000000559EF4 string=0x0000000000559EF8 "@"
 *   insn=0x0000000000559EFC string=0x0000000000559F00 " "
 *   insn=0x0000000000559F04 string=0x0000000000559F08 "3"
 *   insn=0x0000000000559F0C string=0x0000000000559F10 "_"
 *   insn=0x0000000000559F10 string=0x0000000000559F14 "!"
 *   insn=0x0000000000559F1C string=0x0000000000559F20 "?"
 *   insn=0x0000000000559F20 string=0x0000000000559F24 "B!"
 *   insn=0x0000000000559F24 string=0x0000000000559F28 " "
 *   insn=0x0000000000559F38 string=0x0000000000559F3C "?"
 *   insn=0x0000000000559F48 string=0x0000000000559F4C ";"
 *   insn=0x0000000000559F60 string=0x0000000000559F64 "K6"
 *   insn=0x0000000000559F74 string=0x000000000053CA8C "E"
 *   insn=0x0000000000559F98 string=0x0000000000559F9C "`"
 *   insn=0x0000000000559FAC string=0x0000000000559FB0 " "
 *   insn=0x0000000000559FB4 string=0x0000000000559FC8 "`"
 *   insn=0x0000000000559FB8 string=0x0000000000559FBC " "
 *   insn=0x0000000000559FC0 string=0x0000000000559FC4 " "
 *   insn=0x000000000055A00C string=0x000000000055A010 "@"
 *   insn=0x000000000055A028 string=0x000000000055A02C "6"
 *   insn=0x000000000055A044 string=0x000000000055A048 " "
 *   insn=0x000000000055A050 string=0x000000000055A054 " "
 *   insn=0x000000000055A064 string=0x000000000055A068 "?"
 *   insn=0x000000000055A068 string=0x000000000055A06C "c"
 *   insn=0x000000000055A078 string=0x000000000055A07C " "
 *   insn=0x000000000055A078 string=0x000000000055A088 " "
 *   insn=0x000000000055A080 string=0x000000000055A084 ";"
 *   insn=0x000000000055A0A4 string=0x000000000055A0A8 ""
 *   insn=0x000000000055A0B4 string=0x000000000055A0B8 "A"
 *   insn=0x000000000055A0BC string=0x000000000055A0C0 "!"
 *   insn=0x000000000055A0C0 string=0x000000000055A0C4 "!`"
 *   insn=0x000000000055A0D8 string=0x000000000055A0DC "*"
 *   insn=0x000000000055A118 string=0x000000000055A11C "U"
 *   insn=0x000000000055A11C string=0x000000000055A120 " "
 *   insn=0x000000000055A134 string=0x000000000055A138 "?"
 *   insn=0x000000000055A138 string=0x000000000055A13C "c\t"
 *   insn=0x000000000055A148 string=0x000000000055A14C "B"
 *   insn=0x000000000055A150 string=0x000000000055A154 "_"
 *   insn=0x000000000055A164 string=0x000000000055A168 "`"
 *   insn=0x000000000055A170 string=0x000000000055A174 "?"
 *   insn=0x000000000055A174 string=0x000000000055A178 """
 *   insn=0x000000000055A178 string=0x000000000055A17C "!"
 *   insn=0x000000000055A190 string=0x000000000055A194 "?"
 *   insn=0x000000000055A198 string=0x000000000055A19C "!"
 *   insn=0x000000000055A19C string=0x000000000055A1A0 "?"
 *   insn=0x000000000055A1BC string=0x000000000055A1C0 "_"
 *   insn=0x000000000055A1C0 string=0x000000000055A1C4 "`"
 *   insn=0x000000000055A1C4 string=0x000000000055A1C8 "?"
 *   insn=0x000000000055A1E0 string=0x000000000055A1E4 "a"
 *   insn=0x000000000055A1EC string=0x000000000055A1F0 "?"
 *   insn=0x000000000055A1F0 string=0x000000000055A1F4 """
 *   insn=0x000000000055A1F4 string=0x000000000055A1F8 "3"
 *   insn=0x000000000055A1FC string=0x000000000055A200 " \n"
 *   insn=0x000000000055A224 string=0x000000000055A228 "!"
 *   insn=0x000000000055A228 string=0x000000000055A22C " "
 *   insn=0x000000000055A23C string=0x000000000055A240 ";"
 *   insn=0x000000000055A260 string=0x000000000055A264 "T"
 *   insn=0x000000000055A268 string=0x000000000055A26C "6"
 *   insn=0x000000000055A274 string=0x000000000055A278 "`"
 *   insn=0x000000000055A284 string=0x000000000055A288 "_"
 *   insn=0x000000000055A294 string=0x000000000055A298 "?"
 *   insn=0x000000000055A29C string=0x000000000055A2A0 " "
 *   insn=0x000000000055A2C0 string=0x000000000055A2C4 "!"
 *   insn=0x000000000055A2CC string=0x000000000055A2D0 ""
 *   insn=0x000000000055A2D4 string=0x000000000055A424 "3"
 *   insn=0x000000000055A2DC string=0x000000000055A2E0 "l5"
 *   insn=0x000000000055A2EC string=0x000000000055A2F0 "!(@"
 *   insn=0x000000000055A2F0 string=0x000000000055A2F4 " "
 *   insn=0x000000000055A31C string=0x000000000055A320 "!(@"
 *   insn=0x000000000055A320 string=0x000000000055A324 " "
 *   insn=0x000000000055A344 string=0x000000000055A348 "j"
 *   insn=0x000000000055A34C string=0x000000000055A350 "!$@"
 *   insn=0x000000000055A350 string=0x000000000055A354 " "
 *   insn=0x000000000055A35C string=0x000000000055A360 "!$@"
 *   insn=0x000000000055A360 string=0x000000000055A364 " "
 *   insn=0x000000000055A378 string=0x000000000055A37C "!$@"
 *   insn=0x000000000055A37C string=0x000000000055A380 " "
 *   insn=0x000000000055A38C string=0x000000000055A390 "!$@"
 *   insn=0x000000000055A390 string=0x000000000055A394 " "
 *   insn=0x000000000055A3A0 string=0x000000000055A3A4 " "
 *   insn=0x000000000055A3AC string=0x000000000055A3B0 "!$@"
 *   insn=0x000000000055A3B0 string=0x000000000055A3B4 " "
 *   insn=0x000000000055A3C0 string=0x000000000055A3C4 "!(@"
 *   insn=0x000000000055A3C4 string=0x000000000055A3C8 " "
 *   insn=0x000000000055A3C8 string=0x000000000055A3CC "O"
 *   insn=0x000000000055A3D0 string=0x000000000055A3D4 "b"
 *   insn=0x000000000055A3D8 string=0x000000000055A3DC "!$@"
 *   insn=0x000000000055A3DC string=0x000000000055A3E0 " "
 *   insn=0x000000000055A3F0 string=0x000000000055A3F4 ";"
 *   insn=0x000000000055A404 string=0x000000000055A408 ""
 *   insn=0x000000000055A40C string=0x000000000055A410 "U"
 *   insn=0x000000000055A42C string=0x000000000055A430 ""
 *   insn=0x000000000055A430 string=0x000000000055A434 "J"
 *   insn=0x000000000055A438 string=0x000000000055A43C "@"
 *   insn=0x000000000055A44C string=0x000000000055A450 "`"
 *   insn=0x000000000055A454 string=0x000000000055A458 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_559B48(
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
  int v13; // w0
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
  int *v28; // x1
  int v29; // w1
  _QWORD *v30; // x0
  int v31; // w19
  int v32; // w1
  unsigned int *v33; // x1
  bool v34; // cf
  int v35; // w0
  int *v36; // x1
  int v37; // w0
  char *v38; // x28
  int v39; // w19
  _QWORD *v40; // x20
  unsigned __int64 v42; // x0
  wchar_t *v43; // x0
  __int64 v44; // x0
  int v45; // w0
  _QWORD *v46; // x0
  unsigned __int64 v47; // x1
  int *v48; // x1
  int v49; // w1
  _QWORD *v50; // x0
  int v51; // w19
  int v52; // w1
  unsigned int *v53; // x1
  int *v54; // x1
  int v55; // w0
  _BOOL4 v57; // [xsp+6Ch] [xbp+6Ch]
  int v59; // [xsp+80h] [xbp+80h]
  unsigned int v60; // [xsp+84h] [xbp+84h]
  unsigned __int64 v62; // [xsp+88h] [xbp+88h]
  _QWORD *v63; // [xsp+90h] [xbp+90h] BYREF
  __int64 v64; // [xsp+98h] [xbp+98h]
  _QWORD *v65; // [xsp+A0h] [xbp+A0h] BYREF
  __int64 v66; // [xsp+A8h] [xbp+A8h]
  char v67[8]; // [xsp+B8h] [xbp+B8h] BYREF
  char *v68; // [xsp+C8h] [xbp+C8h] BYREF

  v65 = a2;
  v66 = a3;
  v63 = a4;
  v64 = a5;
  v8 = sub_554A24((__int64)v67, (__int64 *)(a6 + 208));
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
  v11 = sub_554B08((__int64)&v65);
  if ( (v11 == -1) == ((unsigned int)sub_554B08((__int64)&v63) == -1) )
  {
    v12 = 0;
    v57 = 0;
  }
  else
  {
    v12 = sub_554B08((__int64)&v65);
    v57 = v12 == *(_DWORD *)(v8 + 224);
    if ( v12 != *(_DWORD *)(v8 + 224) && v12 != *(_DWORD *)(v8 + 228) )
    {
      v13 = *(unsigned __int8 *)(v8 + 32);
      goto LABEL_15;
    }
    v13 = *(unsigned __int8 *)(v8 + 32);
    if ( *(_BYTE *)(v8 + 32) && v12 == *(_DWORD *)(v8 + 76) )
    {
      v13 = 1;
      goto LABEL_15;
    }
    if ( v12 == *(_DWORD *)(v8 + 72) )
    {
LABEL_15:
      v16 = 0;
      v60 = 0;
      while ( 1 )
      {
        if ( v13 && *(_DWORD *)(v8 + 76) == v12 || *(_DWORD *)(v8 + 72) == v12 )
        {
LABEL_164:
          v19 = 0;
          goto LABEL_34;
        }
        if ( *(_DWORD *)(v8 + 240) == v12 )
        {
          if ( (v10 == 10) >= v60 )
          {
            ++v16;
            if ( v10 == 8 || (v60 = 1, !v9) )
            {
              v16 = 0;
              v60 = 1;
              v10 = 8;
            }
            goto LABEL_26;
          }
        }
        else if ( !v60 )
        {
          goto LABEL_164;
        }
        if ( *(_DWORD *)(v8 + 232) != v12 && *(_DWORD *)(v8 + 236) != v12 )
        {
          v60 = 1;
          v19 = 0;
          if ( v10 != 16 )
            goto LABEL_35;
          goto LABEL_98;
        }
        if ( v10 != 16 && v9 )
        {
          v19 = 0;
          v60 = 1;
          goto LABEL_35;
        }
        v16 = 0;
        v60 = 0;
        v10 = 16;
LABEL_26:
        if ( v65 )
        {
          v17 = v65[2];
          if ( v17 >= v65[3] )
            (*(void (__fastcall **)(_QWORD *))(*v65 + 80LL))(v65);
          else
            v65[2] = v17 + 4;
          LODWORD(v66) = -1;
        }
        v18 = sub_554B08((__int64)&v65);
        if ( (v18 == -1) == ((unsigned int)sub_554B08((__int64)&v63) == -1) )
        {
          v13 = *(unsigned __int8 *)(v8 + 32);
          v19 = 1;
          goto LABEL_34;
        }
        v12 = sub_554B08((__int64)&v65);
        if ( !v60 )
        {
          v13 = *(unsigned __int8 *)(v8 + 32);
          v19 = 0;
          goto LABEL_34;
        }
        v13 = *(unsigned __int8 *)(v8 + 32);
      }
    }
    if ( v65 )
    {
      v14 = v65[2];
      if ( v14 >= v65[3] )
        sub_54D8C4((__int64)v65);
      else
        v65[2] = v14 + 4;
      LODWORD(v66) = -1;
    }
    v15 = sub_554B08((__int64)&v65);
    if ( (v15 == -1) != ((unsigned int)sub_554B08((__int64)&v63) == -1) )
    {
      v12 = sub_554B08((__int64)&v65);
      v13 = *(unsigned __int8 *)(v8 + 32);
      goto LABEL_15;
    }
  }
  v13 = *(unsigned __int8 *)(v8 + 32);
  v19 = 1;
  v16 = 0;
  v60 = 0;
LABEL_34:
  if ( v10 == 16 )
  {
LABEL_98:
    v20 = 22;
    v68 = &byte_6FD2F8;
    if ( !v13 )
      goto LABEL_36;
LABEL_99:
    sub_567088(&v68, 32);
    goto LABEL_36;
  }
LABEL_35:
  v20 = v10;
  v68 = &byte_6FD2F8;
  if ( v13 )
    goto LABEL_99;
LABEL_36:
  v59 = *(unsigned __int8 *)(v8 + 328);
  v21 = 0x8000000000000000LL;
  if ( !v57 )
    v21 = 0x7FFFFFFFFFFFFFFFLL;
  v62 = v21;
  v22 = v21 / v10;
  if ( !*(_BYTE *)(v8 + 328) )
  {
    v23 = 0;
    v24 = 0;
    if ( !v19 )
    {
      while ( v20 > 0xA )
      {
        v25 = v12 - 48;
        if ( v12 - 48 <= 9 )
          goto LABEL_44;
        if ( v12 - 97 <= 5 )
        {
          v25 = v12 - 87;
          goto LABEL_44;
        }
        if ( v12 - 65 > 5 )
          goto LABEL_85;
        v25 = v12 - 55;
        if ( v22 < v23 )
          goto LABEL_45;
LABEL_64:
        ++v16;
        v34 = v62 - v25 >= v23 * v10;
        v23 = v25 + v23 * v10;
        v35 = !v34;
        v24 |= v35;
        v26 = v65;
        if ( v65 )
          goto LABEL_46;
LABEL_68:
        v30 = v63;
        if ( !v63 )
          goto LABEL_74;
        v31 = 1;
        v32 = 0;
        if ( (_DWORD)v64 != -1 )
          goto LABEL_53;
LABEL_70:
        v36 = (int *)v30[2];
        if ( (unsigned __int64)v36 >= v30[3] )
          v37 = (*(__int64 (__fastcall **)(_QWORD *))(*v30 + 72LL))(v30);
        else
          v37 = *v36;
        if ( v37 == -1 )
        {
          v63 = 0;
          v32 = 1;
          goto LABEL_53;
        }
        LODWORD(v64) = v37;
        if ( !v31 )
          goto LABEL_74;
LABEL_54:
        v12 = -1;
        if ( !v65 )
          continue;
        v12 = v66;
        if ( (_DWORD)v66 != -1 )
          continue;
        v33 = (unsigned int *)v65[2];
        if ( (unsigned __int64)v33 >= v65[3] )
          v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v65 + 72LL))(v65);
        else
          v12 = *v33;
        if ( v12 == -1 )
        {
          v65 = 0;
          continue;
        }
        LODWORD(v66) = v12;
      }
      if ( v12 > 0x2F && v12 < (int)v20 + 48 )
      {
        v25 = v12 - 48;
LABEL_44:
        if ( v22 >= v23 )
          goto LABEL_64;
LABEL_45:
        v26 = v65;
        v24 = 1;
        if ( !v65 )
          goto LABEL_68;
LABEL_46:
        v27 = v26[2];
        if ( v27 >= v26[3] )
        {
          (*(void (__fastcall **)(_QWORD *))(*v26 + 80LL))(v26);
          v26 = v65;
          LODWORD(v66) = -1;
          if ( !v65 )
            goto LABEL_68;
        }
        else
        {
          LODWORD(v66) = -1;
          v26[2] = v27 + 4;
        }
        v28 = (int *)v26[2];
        if ( (unsigned __int64)v28 >= v26[3] )
          v29 = (*(__int64 (__fastcall **)(_QWORD *))(*v26 + 72LL))(v26);
        else
          v29 = *v28;
        if ( v29 == -1 )
        {
          v65 = 0;
          goto LABEL_68;
        }
        v30 = v63;
        v31 = 0;
        LODWORD(v66) = v29;
        if ( !v63 )
          goto LABEL_54;
        v32 = 0;
        if ( (_DWORD)v64 == -1 )
          goto LABEL_70;
LABEL_53:
        if ( v32 != v31 )
          goto LABEL_54;
LABEL_74:
        v38 = v68;
        v39 = 0;
        v19 = 1;
        if ( !*((_QWORD *)v68 - 3) )
          goto LABEL_87;
        goto LABEL_75;
      }
    }
LABEL_85:
    v39 = 0;
    goto LABEL_86;
  }
  if ( v19 )
  {
    v23 = 0;
    v24 = 0;
    v39 = 0;
    goto LABEL_86;
  }
  v23 = 0;
  v24 = 0;
  while ( !*(_BYTE *)(v8 + 32) || v12 != *(_DWORD *)(v8 + 76) )
  {
    if ( v12 == *(_DWORD *)(v8 + 72) )
      goto LABEL_85;
    v43 = wmemchr((const wchar_t *)(v8 + 240), v12, v20);
    if ( !v43 )
      goto LABEL_85;
    v44 = ((__int64)v43 - v8 - 240) >> 2;
    if ( (int)v44 >= 16 )
      LODWORD(v44) = v44 - 6;
    if ( v22 >= v23 )
    {
      ++v16;
      v34 = v62 - (int)v44 >= v23 * v10;
      v23 = (int)v44 + v23 * v10;
      v45 = !v34;
      v24 |= v45;
LABEL_113:
      v46 = v65;
      if ( !v65 )
        goto LABEL_138;
      goto LABEL_114;
    }
    v46 = v65;
    v24 = 1;
    if ( !v65 )
      goto LABEL_138;
LABEL_114:
    v47 = v46[2];
    if ( v47 >= v46[3] )
    {
      (*(void (__fastcall **)(_QWORD *))(*v46 + 80LL))(v46);
      v46 = v65;
      LODWORD(v66) = -1;
      if ( !v65 )
        goto LABEL_138;
    }
    else
    {
      v46[2] = v47 + 4;
      LODWORD(v66) = -1;
    }
    v48 = (int *)v46[2];
    if ( (unsigned __int64)v48 >= v46[3] )
      v49 = (*(__int64 (__fastcall **)(_QWORD *))(*v46 + 72LL))(v46);
    else
      v49 = *v48;
    if ( v49 == -1 )
    {
      v65 = 0;
LABEL_138:
      v50 = v63;
      if ( !v63 )
        goto LABEL_74;
      v52 = 0;
      v51 = v59;
      if ( (_DWORD)v64 != -1 )
        goto LABEL_121;
LABEL_140:
      v54 = (int *)v50[2];
      if ( (unsigned __int64)v54 >= v50[3] )
        v55 = (*(__int64 (__fastcall **)(_QWORD *))(*v50 + 72LL))(v50);
      else
        v55 = *v54;
      if ( v55 == -1 )
      {
        v63 = 0;
        v52 = v59;
      }
      else
      {
        LODWORD(v64) = v55;
        v52 = 0;
      }
      goto LABEL_121;
    }
    v50 = v63;
    v51 = 0;
    LODWORD(v66) = v49;
    if ( !v63 )
      goto LABEL_122;
    v52 = 0;
    if ( (_DWORD)v64 == -1 )
      goto LABEL_140;
LABEL_121:
    if ( v52 == v51 )
      goto LABEL_74;
LABEL_122:
    v12 = -1;
    if ( v65 )
    {
      v12 = v66;
      if ( (_DWORD)v66 == -1 )
      {
        v53 = (unsigned int *)v65[2];
        if ( (unsigned __int64)v53 >= v65[3] )
          v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v65 + 72LL))(v65);
        else
          v12 = *v53;
        if ( v12 == -1 )
          v65 = 0;
        else
          LODWORD(v66) = v12;
      }
    }
  }
  if ( v16 )
  {
    sub_567890(&v68, v16);
    v16 = 0;
    goto LABEL_113;
  }
  v39 = 1;
LABEL_86:
  v38 = v68;
  if ( *((_QWORD *)v68 - 3) )
  {
LABEL_75:
    sub_567890(&v68, v16);
    if ( !sub_53CA8C(*(_QWORD *)(v8 + 16), *(_QWORD *)(v8 + 24), (unsigned __int8 **)&v68) )
      *a7 = 4;
    v38 = v68;
    if ( (v16 == 0) > v60 && !*((_QWORD *)v68 - 3) )
      goto LABEL_79;
LABEL_88:
    if ( v39 )
      goto LABEL_79;
    if ( v24 )
    {
      v42 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v57 )
        v42 = 0x8000000000000000LL;
      *a8 = v42;
      *a7 = 4;
    }
    else
    {
      if ( v57 )
        v23 = -(__int64)v23;
      *a8 = v23;
    }
    goto LABEL_80;
  }
LABEL_87:
  if ( (v16 == 0) <= v60 )
    goto LABEL_88;
LABEL_79:
  *a8 = 0;
  *a7 = 4;
LABEL_80:
  if ( v19 )
    *a7 |= 2u;
  v40 = v65;
  if ( v38 - 24 != (char *)&qword_6FD2E0 )
    sub_54D8E0((unsigned int *)v38 - 6);
  return v40;
}

