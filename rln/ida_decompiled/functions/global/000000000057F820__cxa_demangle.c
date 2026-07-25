/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057F820
 * Mangled: __cxa_demangle
 * Demangled: __cxa_demangle
 *
 * Callers: 1
 *   0x00000000001FC0D0  .__cxa_demangle
 *
 * Callees: 5
 *   0x00000000001F89E0  .free
 *   0x0000000000201760  .memcpy
 *   0x0000000000203230  .strlen
 *   0x0000000000572750  sub_572750
 *   0x000000000057F3DC  sub_57F3DC
 *
 * Referenced strings: 19
 *   insn=0x000000000057F830 string=0x000000000057F834 "`"
 *   insn=0x000000000057F834 string=0x000000000057F838 "a"
 *   insn=0x000000000057F838 string=0x000000000057F83C "B"
 *   insn=0x000000000057F840 string=0x000000000057F844 "A"
 *   insn=0x000000000057F848 string=0x000000000057F84C "a"
 *   insn=0x000000000057F870 string=0x000000000057F874 "!@"
 *   insn=0x000000000057F898 string=0x000000000057F89C "7"
 *   insn=0x000000000057F8A0 string=0x000000000057F900 "w\n@"
 *   insn=0x000000000057F8A8 string=0x000000000057F948 "t"
 *   insn=0x000000000057F8AC string=0x000000000057F93C "6"
 *   insn=0x000000000057F8B0 string=0x000000000057F8B4 "_"
 *   insn=0x000000000057F8BC string=0x000000000057F8C0 "b"
 *   insn=0x000000000057F8D8 string=0x000000000057F8DC "A"
 *   insn=0x000000000057F8DC string=0x000000000057F8E0 "4"
 *   insn=0x000000000057F8DC string=0x00000000001F89E0 "0'"
 *   insn=0x000000000057F908 string=0x000000000057F90C "5"
 *   insn=0x000000000057F90C string=0x000000000057F910 "4"
 *   insn=0x000000000057F910 string=0x000000000057F954 "!"
 *   insn=0x000000000057F92C string=0x000000000057F930 ","
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *_cxa_demangle(const char *lpmangled, char *lpout, size_t *lpoutlen, int *lpstatus)
{
  char *result; // x0
  size_t v8; // x23
  char *v9; // x19
  size_t v10; // x0
  char *v11; // x0
  char *v12[2]; // [xsp+40h] [xbp+40h] BYREF
  size_t v13; // [xsp+50h] [xbp+50h]
  int v14; // [xsp+58h] [xbp+58h]

  if ( !lpmangled || lpout && !lpoutlen )
  {
    if ( lpstatus )
    {
      result = 0;
      *lpstatus = -3;
      return result;
    }
    return 0;
  }
  v12[0] = 0;
  v12[1] = 0;
  v13 = 0;
  v14 = 0;
  if ( !sub_57F3DC((char *)lpmangled, (void (__fastcall *)(_BYTE *))sub_572750, (__int64)v12) )
  {
    free(v12[0]);
    if ( lpstatus )
      goto LABEL_23;
    return 0;
  }
  v8 = 1;
  if ( !v14 )
    v8 = v13;
  v9 = v12[0];
  if ( !v12[0] )
  {
    if ( lpstatus )
    {
      if ( v8 == 1 )
      {
        result = 0;
        *lpstatus = -1;
        return result;
      }
LABEL_23:
      result = 0;
      *lpstatus = -2;
      return result;
    }
    return 0;
  }
  if ( lpout )
  {
    v10 = strlen(v12[0]);
    if ( v10 >= *lpoutlen )
    {
      free(lpout);
      *lpoutlen = v8;
    }
    else
    {
      memcpy(lpout, v9, v10 + 1);
      v11 = v9;
      v9 = lpout;
      free(v11);
    }
  }
  else if ( lpoutlen )
  {
    *lpoutlen = v8;
  }
  if ( lpstatus )
    *lpstatus = 0;
  return v9;
}

