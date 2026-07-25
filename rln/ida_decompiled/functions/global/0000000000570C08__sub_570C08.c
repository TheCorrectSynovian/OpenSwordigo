/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000570C08
 * Mangled: sub_570C08
 * Demangled: sub_570C08
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB980  .mbrtowc
 *
 * Referenced strings: 15
 *   insn=0x0000000000570C08 string=0x0000000000570C0C "_"
 *   insn=0x0000000000570C28 string=0x0000000000570C2C "!"
 *   insn=0x0000000000570C48 string=0x0000000000570C4C "`"
 *   insn=0x0000000000570C50 string=0x0000000000570C54 """
 *   insn=0x0000000000570C68 string=0x0000000000570C6C "`"
 *   insn=0x0000000000570C6C string=0x0000000000570C78 "s"
 *   insn=0x0000000000570C70 string=0x0000000000570C74 " "
 *   insn=0x0000000000570C8C string=0x0000000000570C90 "@"
 *   insn=0x0000000000570C90 string=0x0000000000570C94 ")"
 *   insn=0x0000000000570CA4 string=0x0000000000570CA8 "6+"
 *   insn=0x0000000000570CA8 string=0x00000000001FB980 "0'"
 *   insn=0x0000000000570CB0 string=0x0000000000570CB4 "@"
 *   insn=0x0000000000570CB8 string=0x0000000000570CBC "4"
 *   insn=0x0000000000570CD8 string=0x0000000000570CDC " "
 *   insn=0x0000000000570CDC string=0x0000000000570CE0 "4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_570C08(
        int a1,
        mbstate_t *a2,
        char *s,
        unsigned __int64 a4,
        const char **a5,
        wchar_t *pwc,
        unsigned __int64 a7,
        wchar_t **a8)
{
  __int64 result; // x0
  const char *v10; // x19
  wchar_t *v13; // x20
  mbstate_t v16; // x1
  size_t v17; // x0
  mbstate_t p; // [xsp+58h] [xbp+58h] BYREF

  result = (unsigned __int64)s < a4;
  v10 = s;
  p = *a2;
  v13 = pwc;
  if ( (unsigned __int64)s >= a4 || (unsigned __int64)pwc >= a7 )
  {
LABEL_11:
    *a5 = v10;
    *a8 = v13;
  }
  else
  {
    while ( 1 )
    {
      v17 = mbrtowc(v13, v10, a4 - (_QWORD)v10, &p);
      if ( v17 == -1 )
      {
        result = 2;
        goto LABEL_11;
      }
      if ( v17 == -2 )
        break;
      v16 = p;
      if ( !v17 )
      {
        *v13 = 0;
        v17 = 1;
      }
      v10 += v17;
      *a2 = v16;
      ++v13;
      result = a4 > (unsigned __int64)v10;
      if ( a4 <= (unsigned __int64)v10 || a7 <= (unsigned __int64)v13 )
        goto LABEL_11;
    }
    *a5 = v10;
    result = 1;
    *a8 = v13;
  }
  return result;
}

