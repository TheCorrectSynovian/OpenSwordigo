/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057EC88
 * Mangled: sub_57EC88
 * Demangled: sub_57EC88
 *
 * Callers: 2
 *   0x000000000057A6E8  sub_57A6E8
 *   0x000000000057E974  sub_57E974
 *
 * Callees: 2
 *   0x000000000057A6E8  sub_57A6E8
 *   0x000000000057E974  sub_57E974
 *
 * Referenced strings: 86
 *   insn=0x000000000057ECA4 string=0x000000000057ECA8 "C"
 *   insn=0x000000000057ECA8 string=0x000000000057ECD0 "`"
 *   insn=0x000000000057ECC8 string=0x000000000057ECCC "*"
 *   insn=0x000000000057ECD8 string=0x000000000057EEB4 "b"
 *   insn=0x000000000057ECDC string=0x000000000057ECE0 "a"
 *   insn=0x000000000057ECE4 string=0x000000000057ECE8 "bj 8?"
 *   insn=0x000000000057ECE8 string=0x000000000057ECEC "?"
 *   insn=0x000000000057ECEC string=0x000000000057ECF0 "b""
 *   insn=0x000000000057ECF4 string=0x000000000057ECF8 " "
 *   insn=0x000000000057ECF4 string=0x000000000057EDF4 "b"
 *   insn=0x000000000057ECF8 string=0x000000000057ECFC "`"
 *   insn=0x000000000057ECFC string=0x000000000057ED00 "b"
 *   insn=0x000000000057ED00 string=0x000000000057ED04 "bj!8b""
 *   insn=0x000000000057ED04 string=0x000000000057ED08 "b""
 *   insn=0x000000000057ED18 string=0x000000000057ED1C "s"
 *   insn=0x000000000057ED1C string=0x000000000057ED20 "`"
 *   insn=0x000000000057ED24 string=0x000000000057ED28 "`"
 *   insn=0x000000000057ED28 string=0x000000000057EE34 "c"
 *   insn=0x000000000057ED2C string=0x000000000057ED30 "a"
 *   insn=0x000000000057ED34 string=0x000000000057ED38 "aj 8a""
 *   insn=0x000000000057ED38 string=0x000000000057ED3C "a""
 *   insn=0x000000000057ED5C string=0x000000000057ED60 "d"
 *   insn=0x000000000057ED68 string=0x000000000057EEE4 "b"
 *   insn=0x000000000057ED6C string=0x000000000057ED70 "a"
 *   insn=0x000000000057ED74 string=0x000000000057ED78 "`j$8`""
 *   insn=0x000000000057ED78 string=0x000000000057ED7C "`""
 *   insn=0x000000000057ED7C string=0x000000000057ED80 "?"
 *   insn=0x000000000057ED88 string=0x000000000057ED8C " "
 *   insn=0x000000000057ED88 string=0x000000000057EE80 "b"
 *   insn=0x000000000057ED8C string=0x000000000057ED90 "`"
 *   insn=0x000000000057ED94 string=0x000000000057ED98 "vj!8"
 *   insn=0x000000000057EDA0 string=0x000000000057EDA4 "v""
 *   insn=0x000000000057EDAC string=0x000000000057EDB0 "a"
 *   insn=0x000000000057EDB0 string=0x000000000057EDB4 "?"
 *   insn=0x000000000057EDB4 string=0x000000000057EDB8 " "
 *   insn=0x000000000057EDB8 string=0x000000000057EDBC "@"
 *   insn=0x000000000057EDBC string=0x000000000057EDC0 "`"
 *   insn=0x000000000057EDBC string=0x000000000057EF24 "b"
 *   insn=0x000000000057EDC0 string=0x000000000057EDC4 """
 *   insn=0x000000000057EDC4 string=0x000000000057EDC8 "bj!8b""
 *   insn=0x000000000057EDC8 string=0x000000000057EDCC "b""
 *   insn=0x000000000057EDE4 string=0x000000000057EDE8 "a"
 *   insn=0x000000000057EDE8 string=0x000000000057EDEC "?"
 *   insn=0x000000000057EDEC string=0x000000000057EDF0 "A"
 *   insn=0x000000000057EDF8 string=0x000000000057EDFC "c"
 *   insn=0x000000000057EE00 string=0x000000000057EE04 "`"
 *   insn=0x000000000057EE04 string=0x000000000057EE08 "a"
 *   insn=0x000000000057EE08 string=0x000000000057EE0C "a"
 *   insn=0x000000000057EE0C string=0x000000000057EE10 "a""
 *   insn=0x000000000057EE10 string=0x000000000057EE14 " "
 *   insn=0x000000000057EE14 string=0x000000000057EE18 "a"
 *   insn=0x000000000057EE1C string=0x000000000057EE20 "!"
 *   insn=0x000000000057EE20 string=0x000000000057EE24 "`"
 *   insn=0x000000000057EE24 string=0x000000000057EE28 "a"
 *   insn=0x000000000057EE28 string=0x000000000057EE2C "B"
 *   insn=0x000000000057EE38 string=0x000000000057EE3C "b"
 *   insn=0x000000000057EE44 string=0x000000000057EE48 "`"
 *   insn=0x000000000057EE48 string=0x000000000057EE4C "b"
 *   insn=0x000000000057EE50 string=0x000000000057EE54 "!"
 *   insn=0x000000000057EE54 string=0x000000000057EE58 "a"
 *   insn=0x000000000057EE58 string=0x000000000057EE5C "B"
 *   insn=0x000000000057EE5C string=0x000000000057EE60 "b"
 *   insn=0x000000000057EE64 string=0x000000000057EE68 "aj 8a""
 *   insn=0x000000000057EE68 string=0x000000000057EE6C "a""
 *   insn=0x000000000057EE84 string=0x000000000057EE88 "d"
 *   insn=0x000000000057EE94 string=0x000000000057EE98 "b"
 *   insn=0x000000000057EE98 string=0x000000000057EE9C " "
 *   insn=0x000000000057EEA4 string=0x000000000057EEA8 "B"
 *   insn=0x000000000057EEA8 string=0x000000000057EEAC "b"
 *   insn=0x000000000057EEB8 string=0x000000000057EEBC "c"
 *   insn=0x000000000057EEC4 string=0x000000000057EEC8 "`"
 *   insn=0x000000000057EEC8 string=0x000000000057EECC "b"
 *   insn=0x000000000057EECC string=0x000000000057EED0 "!"
 *   insn=0x000000000057EED4 string=0x000000000057EED8 "B"
 *   insn=0x000000000057EED8 string=0x000000000057EEDC "b"
 *   insn=0x000000000057EEE8 string=0x000000000057EEEC "e"
 *   insn=0x000000000057EF00 string=0x000000000057EF04 "`"
 *   insn=0x000000000057EF04 string=0x000000000057EF08 "!"
 *   insn=0x000000000057EF14 string=0x000000000057EF18 "b"
 *   insn=0x000000000057EF18 string=0x000000000057EF1C "`"
 *   insn=0x000000000057EF28 string=0x000000000057EF2C "c"
 *   insn=0x000000000057EF30 string=0x000000000057EF34 "`"
 *   insn=0x000000000057EF34 string=0x000000000057EF38 "b"
 *   insn=0x000000000057EF38 string=0x000000000057EF3C " "
 *   insn=0x000000000057EF40 string=0x000000000057EF44 "B"
 *   insn=0x000000000057EF44 string=0x000000000057EF48 "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_57EC88(__int64 a1, unsigned int a2, unsigned int **a3, _QWORD *a4)
{
  _QWORD *v7; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 result; // x0
  unsigned int *v11; // x2
  __int64 v12; // x4
  __int64 v13; // x1
  __int64 v14; // x0
  __int64 v15; // x1
  void (__fastcall *v16)(__int64); // x3
  __int64 v17; // x1
  void (__fastcall *v18)(__int64, __int64, __int64); // x3
  __int64 v19; // x2
  __int64 v20; // x2
  void (__fastcall *v21)(__int64); // x4
  __int64 v22; // x2
  void (__fastcall *v23)(__int64, __int64, __int64); // x3
  __int64 v24; // x2
  void (__fastcall *v25)(__int64, __int64, __int64); // x5
  __int64 v26; // x0
  __int64 v27; // x2
  void (__fastcall *v28)(__int64, __int64, __int64); // x3
  _QWORD *v29; // [xsp+38h] [xbp+38h]
  _QWORD *v30; // [xsp+38h] [xbp+38h]

  v7 = a4;
  if ( !a4 )
  {
LABEL_5:
    v8 = *(_QWORD *)(a1 + 256);
    goto LABEL_6;
  }
  while ( *((_DWORD *)v7 + 4) )
  {
    v7 = (_QWORD *)*v7;
    if ( !v7 )
    {
      sub_57E974(a1, a2, a4, 0);
      goto LABEL_5;
    }
  }
  if ( *(_DWORD *)v7[1] == 42 )
  {
    sub_57E974(a1, a2, a4, 0);
    v9 = *(_QWORD *)(a1 + 256);
    if ( v9 != 255 )
      goto LABEL_9;
    goto LABEL_21;
  }
  v12 = *(_QWORD *)(a1 + 256);
  if ( v12 == 255 )
  {
    v24 = *(_QWORD *)(a1 + 280);
    v25 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
    *(_BYTE *)(a1 + 255) = 0;
    v30 = a4;
    v25(a1, 255, v24);
    v13 = 1;
    a4 = v30;
    v26 = *(_QWORD *)(a1 + 312) + 1LL;
    *(_BYTE *)a1 = 32;
    *(_QWORD *)(a1 + 312) = v26;
  }
  else
  {
    v13 = v12 + 1;
    *(_QWORD *)(a1 + 256) = v12 + 1;
    *(_BYTE *)(a1 + v12) = 32;
    *(_BYTE *)(a1 + 264) = 32;
    if ( v12 == 254 )
    {
      v21 = *(void (__fastcall **)(__int64))(a1 + 272);
      *(_BYTE *)(a1 + 255) = 0;
      v29 = a4;
      v21(a1);
      v14 = 1;
      v13 = 0;
      a4 = v29;
      ++*(_QWORD *)(a1 + 312);
      goto LABEL_17;
    }
  }
  v14 = v13 + 1;
LABEL_17:
  *(_QWORD *)(a1 + 256) = v14;
  *(_BYTE *)(a1 + v13) = 40;
  *(_BYTE *)(a1 + 264) = 40;
  sub_57E974(a1, a2, a4, 0);
  v15 = *(_QWORD *)(a1 + 256);
  v8 = v15 + 1;
  if ( v15 == 255 )
  {
    v27 = *(_QWORD *)(a1 + 280);
    v28 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
    *(_BYTE *)(a1 + 255) = 0;
    v28(a1, 255, v27);
    v8 = 1;
    v15 = 0;
    ++*(_QWORD *)(a1 + 312);
  }
  *(_QWORD *)(a1 + 256) = v8;
  *(_BYTE *)(a1 + v15) = 41;
  *(_BYTE *)(a1 + 264) = 41;
LABEL_6:
  if ( v8 == 255 )
  {
    v22 = *(_QWORD *)(a1 + 280);
    v23 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
    *(_BYTE *)(a1 + 255) = 0;
    v23(a1, 255, v22);
    v9 = 1;
    v8 = 0;
    ++*(_QWORD *)(a1 + 312);
  }
  else
  {
    v9 = v8 + 1;
  }
  *(_QWORD *)(a1 + 256) = v9;
  *(_BYTE *)(a1 + v8) = 32;
  *(_BYTE *)(a1 + 264) = 32;
  if ( v9 != 255 )
  {
LABEL_9:
    result = v9 + 1;
    *(_QWORD *)(a1 + 256) = v9 + 1;
    *(_BYTE *)(a1 + v9) = 91;
    *(_BYTE *)(a1 + 264) = 91;
    v11 = *a3;
    if ( !*a3 )
      goto LABEL_11;
    goto LABEL_10;
  }
LABEL_21:
  v16 = *(void (__fastcall **)(__int64))(a1 + 272);
  *(_BYTE *)(a1 + 255) = 0;
  v16(a1);
  *(_BYTE *)a1 = 91;
  *(_BYTE *)(a1 + 264) = 91;
  result = 1;
  v11 = *a3;
  v17 = *(_QWORD *)(a1 + 312) + 1LL;
  *(_QWORD *)(a1 + 256) = 1;
  *(_QWORD *)(a1 + 312) = v17;
  if ( !v11 )
    goto LABEL_12;
LABEL_10:
  sub_57A6E8(a1, a2, v11);
  result = *(_QWORD *)(a1 + 256);
LABEL_11:
  if ( result != 255 )
  {
LABEL_12:
    *(_QWORD *)(a1 + 256) = result + 1;
    *(_BYTE *)(a1 + result) = 93;
    *(_BYTE *)(a1 + 264) = 93;
    return result;
  }
  v18 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
  v19 = *(_QWORD *)(a1 + 280);
  *(_BYTE *)(a1 + 255) = 0;
  v18(a1, 255, v19);
  v20 = *(_QWORD *)(a1 + 312);
  result = 0;
  *(_QWORD *)(a1 + 256) = 1;
  *(_QWORD *)(a1 + 312) = v20 + 1;
  *(_BYTE *)a1 = 93;
  *(_BYTE *)(a1 + 264) = 93;
  return result;
}

