/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055C444
 * Mangled: sub_55C444
 * Demangled: sub_55C444
 *
 * Callers: 1
 *   0x000000000055CDC4  sub_55CDC4
 *
 * Callees: 10
 *   0x0000000000200670  .wmemchr
 *   0x000000000053CA8C  sub_53CA8C
 *   0x000000000054D8C4  sub_54D8C4
 *   0x000000000054D8E0  sub_54D8E0
 *   0x0000000000554A24  sub_554A24
 *   0x0000000000554B08  sub_554B08
 *   0x000000000055CDC4  sub_55CDC4
 *   0x0000000000567088  sub_567088
 *   0x0000000000567890  sub_567890
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 172
 *   insn=0x000000000055C478 string=0x000000000055C47C "j"
 *   insn=0x000000000055C484 string=0x000000000055C488 "@\t"
 *   insn=0x000000000055C48C string=0x000000000055C490 "{"
 *   insn=0x000000000055C49C string=0x000000000055C4A0 "@"
 *   insn=0x000000000055C4D4 string=0x000000000055C4D8 "?"
 *   insn=0x000000000055C4F8 string=0x000000000055C4FC "`0"
 *   insn=0x000000000055C50C string=0x000000000055C510 "@"
 *   insn=0x000000000055C514 string=0x000000000055C518 " "
 *   insn=0x000000000055C520 string=0x000000000055C524 "?"
 *   insn=0x000000000055C528 string=0x000000000055C52C "!"
 *   insn=0x000000000055C53C string=0x000000000055C540 "r"
 *   insn=0x000000000055C548 string=0x000000000055C54C "o"
 *   insn=0x000000000055C55C string=0x000000000055C560 "?"
 *   insn=0x000000000055C568 string=0x000000000055C56C "g"
 *   insn=0x000000000055C588 string=0x000000000055C58C "?"
 *   insn=0x000000000055C590 string=0x000000000055CD30 ""
 *   insn=0x000000000055C594 string=0x000000000055C598 "?"
 *   insn=0x000000000055C5A0 string=0x000000000055C5A4 "?"
 *   insn=0x000000000055C5B4 string=0x000000000055C5B8 "?"
 *   insn=0x000000000055C5C0 string=0x000000000055C5C4 "?"
 *   insn=0x000000000055C5C8 string=0x000000000055C998 "!"
 *   insn=0x000000000055C5CC string=0x000000000055C5D0 "@"
 *   insn=0x000000000055C5D4 string=0x000000000055CD64 "!"
 *   insn=0x000000000055C5F0 string=0x000000000055C5F4 "?"
 *   insn=0x000000000055C5F4 string=0x000000000055C5F8 "B9"
 *   insn=0x000000000055C5F8 string=0x000000000055C5FC "!"
 *   insn=0x000000000055C608 string=0x000000000055C60C "?"
 *   insn=0x000000000055C614 string=0x000000000055C618 "<"
 *   insn=0x000000000055C618 string=0x000000000055C61C "?"
 *   insn=0x000000000055C628 string=0x000000000055C62C "?"
 *   insn=0x000000000055C634 string=0x000000000055C638 "4"
 *   insn=0x000000000055C640 string=0x000000000055C644 "@:"
 *   insn=0x000000000055C650 string=0x000000000055C654 ";"
 *   insn=0x000000000055C664 string=0x000000000055C668 "A"
 *   insn=0x000000000055C66C string=0x000000000055C670 "!"
 *   insn=0x000000000055C670 string=0x000000000055C674 "!`"
 *   insn=0x000000000055C69C string=0x000000000055C6A0 " "
 *   insn=0x000000000055C6B4 string=0x000000000055C6B8 "["
 *   insn=0x000000000055C6CC string=0x000000000055C79C "`"
 *   insn=0x000000000055C6D0 string=0x000000000055C6D4 "i"
 *   insn=0x000000000055C6DC string=0x000000000055C6E0 "\t"
 *   insn=0x000000000055C6E0 string=0x000000000055C6E4 "`"
 *   insn=0x000000000055C6E4 string=0x000000000055C6E8 "?"
 *   insn=0x000000000055C6F0 string=0x000000000055C6F4 "6"
 *   insn=0x000000000055C700 string=0x000000000055C704 "?"
 *   insn=0x000000000055C704 string=0x000000000055C708 ""*"
 *   insn=0x000000000055C708 string=0x000000000055C70C "!"
 *   insn=0x000000000055C71C string=0x000000000055C720 "?"
 *   insn=0x000000000055C724 string=0x000000000055C728 "!"
 *   insn=0x000000000055C728 string=0x000000000055C72C "?"
 *   insn=0x000000000055C748 string=0x000000000055C74C "_"
 *   insn=0x000000000055C74C string=0x000000000055C750 " "
 *   insn=0x000000000055C750 string=0x000000000055C754 "?"
 *   insn=0x000000000055C754 string=0x000000000055C758 "@"
 *   insn=0x000000000055C760 string=0x000000000055C764 " "
 *   insn=0x000000000055C778 string=0x000000000055C77C "?"
 *   insn=0x000000000055C77C string=0x000000000055C780 "b,"
 *   insn=0x000000000055C780 string=0x000000000055C784 "3"
 *   insn=0x000000000055C7A0 string=0x000000000055C7A4 ")"
 *   insn=0x000000000055C7A4 string=0x000000000055C7A8 "`"
 *   insn=0x000000000055C7AC string=0x000000000055C7B0 ") "
 *   insn=0x000000000055C7B0 string=0x000000000055C7B4 "`"
 *   insn=0x000000000055C7B0 string=0x000000000055CBB4 "`^"
 *   insn=0x000000000055C7B8 string=0x000000000055C7BC "(\n"
 *   insn=0x000000000055C7BC string=0x000000000055C7C0 "?"
 *   insn=0x000000000055C7C0 string=0x000000000055C7C4 "`"
 *   insn=0x000000000055C7C4 string=0x000000000055C7C8 "C"
 *   insn=0x000000000055C7D4 string=0x000000000055C7D8 "B"
 *   insn=0x000000000055C7DC string=0x000000000055C7E0 "_"
 *   insn=0x000000000055C7F0 string=0x000000000055C7F4 "@"
 *   insn=0x000000000055C7F8 string=0x000000000055C7FC " "
 *   insn=0x000000000055C800 string=0x000000000055C804 "3"
 *   insn=0x000000000055C808 string=0x000000000055C80C "_"
 *   insn=0x000000000055C80C string=0x000000000055C810 "!"
 *   insn=0x000000000055C818 string=0x000000000055C81C "?"
 *   insn=0x000000000055C81C string=0x000000000055C820 "b$"
 *   insn=0x000000000055C820 string=0x000000000055C824 " "
 *   insn=0x000000000055C834 string=0x000000000055C838 "?"
 *   insn=0x000000000055C844 string=0x000000000055C848 ";"
 *   insn=0x000000000055C870 string=0x000000000053CA8C "E"
 *   insn=0x000000000055C874 string=0x000000000055C878 " $"
 *   insn=0x000000000055C894 string=0x000000000055C898 "`"
 *   insn=0x000000000055C8A8 string=0x000000000055C8AC " "
 *   insn=0x000000000055C8B0 string=0x000000000055C8C4 "@"
 *   insn=0x000000000055C8B4 string=0x000000000055C8B8 " "
 *   insn=0x000000000055C8BC string=0x000000000055C8C0 " "
 *   insn=0x000000000055C908 string=0x000000000055C90C "@"
 *   insn=0x000000000055C924 string=0x000000000055C928 "6"
 *   insn=0x000000000055C940 string=0x000000000055C944 " "
 *   insn=0x000000000055C94C string=0x000000000055C950 " "
 *   insn=0x000000000055C960 string=0x000000000055C964 "?"
 *   insn=0x000000000055C964 string=0x000000000055C968 "c"
 *   insn=0x000000000055C974 string=0x000000000055C978 " "
 *   insn=0x000000000055C974 string=0x000000000055C984 " "
 *   insn=0x000000000055C97C string=0x000000000055C980 ";"
 *   insn=0x000000000055C9A0 string=0x000000000055C9A4 ""
 *   insn=0x000000000055C9B0 string=0x000000000055C9B4 "A"
 *   insn=0x000000000055C9B8 string=0x000000000055C9BC "!"
 *   insn=0x000000000055C9BC string=0x000000000055C9C0 "!`"
 *   insn=0x000000000055C9D4 string=0x000000000055C9D8 "*"
 *   insn=0x000000000055CA18 string=0x000000000055CA1C " "
 *   insn=0x000000000055CA30 string=0x000000000055CA34 "?"
 *   insn=0x000000000055CA34 string=0x000000000055CA38 "c\t"
 *   insn=0x000000000055CA44 string=0x000000000055CA48 "B"
 *   insn=0x000000000055CA4C string=0x000000000055CA50 "_"
 *   insn=0x000000000055CA60 string=0x000000000055CA64 "`"
 *   insn=0x000000000055CA6C string=0x000000000055CA70 "?"
 *   insn=0x000000000055CA70 string=0x000000000055CA74 "B"
 *   insn=0x000000000055CA74 string=0x000000000055CA78 "!"
 *   insn=0x000000000055CA8C string=0x000000000055CA90 "?"
 *   insn=0x000000000055CA90 string=0x000000000055CA94 """
 *   insn=0x000000000055CA94 string=0x000000000055CA98 "!"
 *   insn=0x000000000055CA98 string=0x000000000055CA9C "?"
 *   insn=0x000000000055CAB8 string=0x000000000055CABC "_"
 *   insn=0x000000000055CABC string=0x000000000055CAC0 "`"
 *   insn=0x000000000055CAC0 string=0x000000000055CAC4 "?"
 *   insn=0x000000000055CADC string=0x000000000055CAE0 "a"
 *   insn=0x000000000055CAE8 string=0x000000000055CAEC "?"
 *   insn=0x000000000055CAEC string=0x000000000055CAF0 "B"
 *   insn=0x000000000055CAF0 string=0x000000000055CAF4 "3"
 *   insn=0x000000000055CAF8 string=0x000000000055CAFC "@"
 *   insn=0x000000000055CB20 string=0x000000000055CB24 "!"
 *   insn=0x000000000055CB24 string=0x000000000055CB28 " "
 *   insn=0x000000000055CB38 string=0x000000000055CB3C ";"
 *   insn=0x000000000055CB5C string=0x000000000055CB60 "T"
 *   insn=0x000000000055CB64 string=0x000000000055CB68 "6"
 *   insn=0x000000000055CB70 string=0x000000000055CB74 "`"
 *   insn=0x000000000055CB80 string=0x000000000055CB84 "_"
 *   insn=0x000000000055CB90 string=0x000000000055CB94 "?"
 *   insn=0x000000000055CB98 string=0x000000000055CB9C " "
 *   insn=0x000000000055CBA0 string=0x000000000055CBA4 " "
 *   insn=0x000000000055CBBC string=0x000000000055CBC0 "!"
 *   insn=0x000000000055CBC8 string=0x000000000055CBCC ""
 *   insn=0x000000000055CBD0 string=0x000000000055CD84 "3"
 *   insn=0x000000000055CBE4 string=0x000000000055CBE8 "3"
 *   insn=0x000000000055CBF4 string=0x000000000055CBF8 "_"
 *   insn=0x000000000055CC04 string=0x000000000055CC08 " )"
 *   insn=0x000000000055CC18 string=0x000000000055CC1C "A"
 *   insn=0x000000000055CC24 string=0x000000000055CC28 "!"
 *   insn=0x000000000055CC30 string=0x000000000055CC34 "_"
 *   insn=0x000000000055CC34 string=0x000000000055CC38 "@"
 *   insn=0x000000000055CC4C string=0x000000000055CC50 "!(@"
 *   insn=0x000000000055CC50 string=0x000000000055CC54 " "
 *   insn=0x000000000055CC7C string=0x000000000055CC80 "!(@"
 *   insn=0x000000000055CC80 string=0x000000000055CC84 " "
 *   insn=0x000000000055CC94 string=0x000000000055CC98 "|"
 *   insn=0x000000000055CCA4 string=0x000000000055CCA8 "Q"
 *   insn=0x000000000055CCAC string=0x000000000055CCB0 "!$@"
 *   insn=0x000000000055CCB0 string=0x000000000055CCB4 " "
 *   insn=0x000000000055CCBC string=0x000000000055CCC0 "!$@"
 *   insn=0x000000000055CCC0 string=0x000000000055CCC4 " "
 *   insn=0x000000000055CCD8 string=0x000000000055CCDC "!$@"
 *   insn=0x000000000055CCDC string=0x000000000055CCE0 " "
 *   insn=0x000000000055CCE4 string=0x000000000055CCE8 "m"
 *   insn=0x000000000055CCEC string=0x000000000055CCF0 "!$@"
 *   insn=0x000000000055CCF0 string=0x000000000055CCF4 " "
 *   insn=0x000000000055CD00 string=0x000000000055CD04 " "
 *   insn=0x000000000055CD0C string=0x000000000055CD10 "!$@"
 *   insn=0x000000000055CD10 string=0x000000000055CD14 " "
 *   insn=0x000000000055CD20 string=0x000000000055CD24 "!(@"
 *   insn=0x000000000055CD24 string=0x000000000055CD28 " "
 *   insn=0x000000000055CD28 string=0x000000000055CD2C "6"
 *   insn=0x000000000055CD30 string=0x000000000055CD34 "I"
 *   insn=0x000000000055CD38 string=0x000000000055CD3C "!$@"
 *   insn=0x000000000055CD3C string=0x000000000055CD40 " "
 *   insn=0x000000000055CD44 string=0x000000000055CD48 "l"
 *   insn=0x000000000055CD64 string=0x000000000055CD68 ""
 *   insn=0x000000000055CD6C string=0x000000000055CD70 "<"
 *   insn=0x000000000055CD8C string=0x000000000055CD90 ""
 *   insn=0x000000000055CD90 string=0x000000000055CD94 "1"
 *   insn=0x000000000055CD98 string=0x000000000055CD9C "@"
 *   insn=0x000000000055CDAC string=0x000000000055CDB0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_55C444(
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
  char *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x19
  char *v59; // x0
  _BOOL4 v61; // [xsp+6Ch] [xbp+6Ch]
  int v63; // [xsp+80h] [xbp+80h]
  unsigned int v64; // [xsp+84h] [xbp+84h]
  unsigned __int64 v66; // [xsp+88h] [xbp+88h]
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
  v8 = sub_554A24((__int64)v71, (__int64 *)(a6 + 208));
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
  v11 = sub_554B08((__int64)&v69);
  if ( (v11 == -1) == ((unsigned int)sub_554B08((__int64)&v67) == -1) )
  {
    v12 = 0;
    v61 = 0;
  }
  else
  {
    v12 = sub_554B08((__int64)&v69);
    v61 = v12 == *(_DWORD *)(v8 + 224);
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
      v64 = 0;
      while ( 1 )
      {
        if ( v13 && *(_DWORD *)(v8 + 76) == v12 || *(_DWORD *)(v8 + 72) == v12 )
        {
LABEL_168:
          v19 = 0;
          goto LABEL_34;
        }
        if ( *(_DWORD *)(v8 + 240) == v12 )
        {
          if ( (v10 == 10) >= v64 )
          {
            ++v16;
            if ( v10 == 8 || (v64 = 1, !v9) )
            {
              v16 = 0;
              v64 = 1;
              v10 = 8;
            }
            goto LABEL_26;
          }
        }
        else if ( !v64 )
        {
          goto LABEL_168;
        }
        if ( *(_DWORD *)(v8 + 232) != v12 && *(_DWORD *)(v8 + 236) != v12 )
        {
          v64 = 1;
          v19 = 0;
          if ( v10 != 16 )
            goto LABEL_35;
          goto LABEL_98;
        }
        if ( v10 != 16 && v9 )
        {
          v19 = 0;
          v64 = 1;
          goto LABEL_35;
        }
        v16 = 0;
        v64 = 0;
        v10 = 16;
LABEL_26:
        if ( v69 )
        {
          v17 = v69[2];
          if ( v17 >= v69[3] )
            (*(void (__fastcall **)(_QWORD *))(*v69 + 80LL))(v69);
          else
            v69[2] = v17 + 4;
          LODWORD(v70) = -1;
        }
        v18 = sub_554B08((__int64)&v69);
        if ( (v18 == -1) == ((unsigned int)sub_554B08((__int64)&v67) == -1) )
        {
          v13 = *(unsigned __int8 *)(v8 + 32);
          v19 = 1;
          goto LABEL_34;
        }
        v12 = sub_554B08((__int64)&v69);
        if ( !v64 )
        {
          v13 = *(unsigned __int8 *)(v8 + 32);
          v19 = 0;
          goto LABEL_34;
        }
        v13 = *(unsigned __int8 *)(v8 + 32);
      }
    }
    if ( v69 )
    {
      v14 = v69[2];
      if ( v14 >= v69[3] )
        sub_54D8C4((__int64)v69);
      else
        v69[2] = v14 + 4;
      LODWORD(v70) = -1;
    }
    v15 = sub_554B08((__int64)&v69);
    if ( (v15 == -1) != ((unsigned int)sub_554B08((__int64)&v67) == -1) )
    {
      v12 = sub_554B08((__int64)&v69);
      v13 = *(unsigned __int8 *)(v8 + 32);
      goto LABEL_15;
    }
  }
  v13 = *(unsigned __int8 *)(v8 + 32);
  v19 = 1;
  v16 = 0;
  v64 = 0;
LABEL_34:
  if ( v10 == 16 )
  {
LABEL_98:
    v20 = 22;
    v72 = &byte_6FD2F8;
    if ( !v13 )
      goto LABEL_36;
LABEL_99:
    sub_567088(&v72, 32);
    goto LABEL_36;
  }
LABEL_35:
  v20 = v10;
  v72 = &byte_6FD2F8;
  if ( v13 )
    goto LABEL_99;
LABEL_36:
  v63 = *(unsigned __int8 *)(v8 + 328);
  v21 = 0x8000000000000000LL;
  if ( !v61 )
    v21 = 0x7FFFFFFFFFFFFFFFLL;
  v66 = v21;
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
        v34 = v66 - v25 >= v23 * v10;
        v23 = v25 + v23 * v10;
        v35 = !v34;
        v24 |= v35;
        v26 = v69;
        if ( v69 )
          goto LABEL_46;
LABEL_68:
        v30 = v67;
        if ( !v67 )
          goto LABEL_74;
        v31 = 1;
        v32 = 0;
        if ( (_DWORD)v68 != -1 )
          goto LABEL_53;
LABEL_70:
        v36 = (int *)v30[2];
        if ( (unsigned __int64)v36 >= v30[3] )
          v37 = (*(__int64 (__fastcall **)(_QWORD *))(*v30 + 72LL))(v30);
        else
          v37 = *v36;
        if ( v37 == -1 )
        {
          v67 = 0;
          v32 = 1;
          goto LABEL_53;
        }
        LODWORD(v68) = v37;
        if ( !v31 )
          goto LABEL_74;
LABEL_54:
        v12 = -1;
        if ( !v69 )
          continue;
        v12 = v70;
        if ( (_DWORD)v70 != -1 )
          continue;
        v33 = (unsigned int *)v69[2];
        if ( (unsigned __int64)v33 >= v69[3] )
          v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v69 + 72LL))(v69);
        else
          v12 = *v33;
        if ( v12 == -1 )
        {
          v69 = 0;
          continue;
        }
        LODWORD(v70) = v12;
      }
      if ( v12 > 0x2F && (int)v20 + 48 > v12 )
      {
        v25 = v12 - 48;
LABEL_44:
        if ( v22 >= v23 )
          goto LABEL_64;
LABEL_45:
        v26 = v69;
        v24 = 1;
        if ( !v69 )
          goto LABEL_68;
LABEL_46:
        v27 = v26[2];
        if ( v27 >= v26[3] )
        {
          (*(void (__fastcall **)(_QWORD *))(*v26 + 80LL))(v26);
          v26 = v69;
          LODWORD(v70) = -1;
          if ( !v69 )
            goto LABEL_68;
        }
        else
        {
          LODWORD(v70) = -1;
          v26[2] = v27 + 4;
        }
        v28 = (int *)v26[2];
        if ( (unsigned __int64)v28 >= v26[3] )
          v29 = (*(__int64 (__fastcall **)(_QWORD *))(*v26 + 72LL))(v26);
        else
          v29 = *v28;
        if ( v29 == -1 )
        {
          v69 = 0;
          goto LABEL_68;
        }
        v30 = v67;
        v31 = 0;
        LODWORD(v70) = v29;
        if ( !v67 )
          goto LABEL_54;
        v32 = 0;
        if ( (_DWORD)v68 == -1 )
          goto LABEL_70;
LABEL_53:
        if ( v32 != v31 )
          goto LABEL_54;
LABEL_74:
        v38 = v72;
        v39 = 0;
        v19 = 1;
        if ( !*((_QWORD *)v72 - 3) )
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
      v34 = v66 - (int)v44 >= v23 * v10;
      v23 = (int)v44 + v23 * v10;
      v45 = !v34;
      v24 |= v45;
      goto LABEL_113;
    }
    v46 = v69;
    v24 = 1;
    if ( !v69 )
      goto LABEL_138;
LABEL_114:
    v47 = v46[2];
    if ( v47 >= v46[3] )
    {
      (*(void (__fastcall **)(_QWORD *))(*v46 + 80LL))(v46);
      v46 = v69;
      LODWORD(v70) = -1;
      if ( !v69 )
        goto LABEL_138;
    }
    else
    {
      v46[2] = v47 + 4;
      LODWORD(v70) = -1;
    }
    v48 = (int *)v46[2];
    if ( (unsigned __int64)v48 >= v46[3] )
      v49 = (*(__int64 (__fastcall **)(_QWORD *))(*v46 + 72LL))(v46);
    else
      v49 = *v48;
    if ( v49 == -1 )
    {
      v69 = 0;
LABEL_138:
      v50 = v67;
      if ( !v67 )
        goto LABEL_74;
      v52 = 0;
      v51 = v63;
      if ( (_DWORD)v68 != -1 )
        goto LABEL_121;
LABEL_140:
      v54 = (int *)v50[2];
      if ( (unsigned __int64)v54 >= v50[3] )
        v55 = (*(__int64 (__fastcall **)(_QWORD *))(*v50 + 72LL))(v50);
      else
        v55 = *v54;
      if ( v55 == -1 )
      {
        v67 = 0;
        v52 = v63;
      }
      else
      {
        LODWORD(v68) = v55;
        v52 = 0;
      }
      goto LABEL_121;
    }
    v50 = v67;
    v51 = 0;
    LODWORD(v70) = v49;
    if ( !v67 )
      goto LABEL_122;
    v52 = 0;
    if ( (_DWORD)v68 == -1 )
      goto LABEL_140;
LABEL_121:
    if ( v52 == v51 )
      goto LABEL_74;
LABEL_122:
    v12 = -1;
    if ( v69 )
    {
      v12 = v70;
      if ( (_DWORD)v70 == -1 )
      {
        v53 = (unsigned int *)v69[2];
        if ( (unsigned __int64)v53 >= v69[3] )
          v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v69 + 72LL))(v69);
        else
          v12 = *v53;
        if ( v12 == -1 )
          v69 = 0;
        else
          LODWORD(v70) = v12;
      }
    }
  }
  if ( v16 )
  {
    v56 = v72;
    v57 = *((_QWORD *)v72 - 3);
    v58 = v57 + 1;
    if ( (unsigned __int64)(v57 + 1) > *((_QWORD *)v72 - 2) || *((int *)v72 - 2) > 0 )
    {
      sub_567088(&v72, v57 + 1);
      v56 = v72;
      v57 = *((_QWORD *)v72 - 3);
    }
    v56[v57] = v16;
    v16 = 0;
    v59 = v72;
    if ( v72 - 24 != (char *)&qword_6FD2E0 )
    {
      *((_DWORD *)v72 - 2) = 0;
      *((_QWORD *)v59 - 3) = v58;
      v59[v58] = 0;
    }
LABEL_113:
    v46 = v69;
    if ( !v69 )
      goto LABEL_138;
    goto LABEL_114;
  }
  v39 = 1;
LABEL_86:
  v38 = v72;
  if ( *((_QWORD *)v72 - 3) )
  {
LABEL_75:
    sub_567890(&v72, v16);
    if ( !sub_53CA8C(*(_QWORD *)(v8 + 16), *(_QWORD *)(v8 + 24), (unsigned __int8 **)&v72) )
      *a7 = 4;
    v38 = v72;
    if ( (v16 == 0) > v64 && !*((_QWORD *)v72 - 3) )
      goto LABEL_79;
LABEL_88:
    if ( v39 )
      goto LABEL_79;
    if ( v24 )
    {
      v42 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v61 )
        v42 = 0x8000000000000000LL;
      *a8 = v42;
      *a7 = 4;
    }
    else
    {
      if ( v61 )
        v23 = -(__int64)v23;
      *a8 = v23;
    }
    goto LABEL_80;
  }
LABEL_87:
  if ( (v16 == 0) <= v64 )
    goto LABEL_88;
LABEL_79:
  *a8 = 0;
  *a7 = 4;
LABEL_80:
  if ( v19 )
    *a7 |= 2u;
  v40 = v69;
  if ( v38 - 24 != (char *)&qword_6FD2E0 )
    sub_54D8E0((unsigned int *)v38 - 6);
  return v40;
}

