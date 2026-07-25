/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000570AB4
 * Mangled: sub_570AB4
 * Demangled: sub_570AB4
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F77C0  .__ctype_get_mb_cur_max
 *   0x0000000000201760  .memcpy
 *   0x00000000002033E0  .wcrtomb
 *
 * Referenced strings: 19
 *   insn=0x0000000000570AD4 string=0x0000000000570AD8 " "
 *   insn=0x0000000000570AF0 string=0x0000000000570AF4 "3"
 *   insn=0x0000000000570AF4 string=0x00000000001F77C0 "0'"
 *   insn=0x0000000000570AFC string=0x0000000000570B00 "!"
 *   insn=0x0000000000570B0C string=0x0000000000570BAC "\t"
 *   insn=0x0000000000570B14 string=0x0000000000570B88 "s"
 *   insn=0x0000000000570B24 string=0x0000000000570B58 "a"
 *   insn=0x0000000000570B2C string=0x0000000000570B30 "("
 *   insn=0x0000000000570B30 string=0x0000000000570B34 "C"
 *   insn=0x0000000000570B30 string=0x0000000000570BF4 " "
 *   insn=0x0000000000570B44 string=0x0000000000570B48 "s"
 *   insn=0x0000000000570B50 string=0x0000000000570B54 "I"
 *   insn=0x0000000000570B7C string=0x0000000000570B80 "a"
 *   insn=0x0000000000570B80 string=0x0000000000570B84 "@"
 *   insn=0x0000000000570B88 string=0x0000000000570B8C "T"
 *   insn=0x0000000000570BB0 string=0x0000000000570BB4 ""
 *   insn=0x0000000000570BB4 string=0x0000000000570BD0 "a"
 *   insn=0x0000000000570BC8 string=0x0000000000570BCC "\t"
 *   insn=0x0000000000570BE4 string=0x0000000000570BB8 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_570AB4(
        __int64 a1,
        mbstate_t *a2,
        wchar_t *a3,
        unsigned __int64 a4,
        wchar_t **a5,
        char *a6,
        unsigned __int64 a7,
        char **a8)
{
  wchar_t *v8; // x19
  char *v11; // x20
  __int64 result; // x0
  size_t v16; // x21
  size_t v17; // x0
  char s[8]; // [xsp+60h] [xbp+60h] BYREF
  mbstate_t ps; // [xsp+68h] [xbp+68h] BYREF

  v8 = a3;
  v11 = a6;
  ps = *a2;
  if ( !&a6[__ctype_get_mb_cur_max() * ((__int64)(a4 - (_QWORD)a3) >> 2) - a7] )
  {
    if ( a4 <= (unsigned __int64)v8 )
    {
LABEL_16:
      result = 0;
      goto LABEL_10;
    }
    while ( 1 )
    {
      v17 = wcrtomb(v11, *v8, &ps);
      if ( v17 == -1 )
        goto LABEL_9;
      ++v8;
      *a2 = ps;
      v11 += v17;
      if ( a4 <= (unsigned __int64)v8 )
        goto LABEL_16;
    }
  }
  result = a4 > (unsigned __int64)v8;
  if ( a4 > (unsigned __int64)v8 && (unsigned __int64)v11 < a7 )
  {
    while ( 1 )
    {
      v16 = wcrtomb(s, *v8, &ps);
      if ( v16 == -1 )
        break;
      if ( v16 > a7 - (unsigned __int64)v11 )
      {
        result = 1;
        goto LABEL_10;
      }
      memcpy(v11, s, v16);
      v11 += v16;
      *a2 = ps;
      ++v8;
      if ( a7 <= (unsigned __int64)v11 || a4 <= (unsigned __int64)v8 )
      {
        result = a4 > (unsigned __int64)v8;
        goto LABEL_10;
      }
    }
LABEL_9:
    result = 2;
  }
LABEL_10:
  *a5 = v8;
  *a8 = v11;
  return result;
}

