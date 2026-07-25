/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056739C
 * Mangled: sub_56739C
 * Demangled: sub_56739C
 *
 * Callers: 3
 *   0x000000000056783C  sub_56783C
 *   0x0000000000569650  sub_569650
 *   0x000000000056A798  sub_56A798
 *
 * Callees: 3
 *   0x00000000001FBC40  .memset
 *   0x000000000056554C  sub_56554C
 *   0x0000000000567088  sub_567088
 *
 * Referenced strings: 25
 *   insn=0x00000000005673B0 string=0x00000000005673B8 "a"
 *   insn=0x00000000005673BC string=0x00000000005673C0 "V"
 *   insn=0x00000000005673C0 string=0x00000000005673C4 ""`"
 *   insn=0x00000000005673C4 string=0x00000000005673C8 "#"
 *   insn=0x00000000005673D4 string=0x00000000005673D8 " "
 *   insn=0x00000000005673E4 string=0x0000000000567440 "@"
 *   insn=0x00000000005673EC string=0x00000000005673F0 "&"
 *   insn=0x00000000005673F0 string=0x00000000005673F4 "a"
 *   insn=0x00000000005673F8 string=0x00000000005673FC "#"
 *   insn=0x00000000005673FC string=0x0000000000567400 " "
 *   insn=0x0000000000567404 string=0x0000000000567458 "6h#8"
 *   insn=0x0000000000567410 string=0x0000000000567414 "a"
 *   insn=0x0000000000567410 string=0x00000000001FBC40 "0'"
 *   insn=0x0000000000567418 string=0x0000000000567420 ""`"
 *   insn=0x0000000000567420 string=0x0000000000567424 "_"
 *   insn=0x0000000000567424 string=0x0000000000567428 "a"
 *   insn=0x0000000000567428 string=0x0000000000567474 "5"
 *   insn=0x000000000056744C string=0x0000000000567450 " "
 *   insn=0x000000000056745C string=0x0000000000567464 "a"
 *   insn=0x0000000000567464 string=0x0000000000567468 ""`"
 *   insn=0x0000000000567468 string=0x000000000056746C "_"
 *   insn=0x0000000000567478 string=0x000000000056747C "?"
 *   insn=0x000000000056747C string=0x0000000000567480 "?h58"
 *   insn=0x0000000000567494 string=0x000000000056749C ","
 *   insn=0x0000000000567494 string=0x000000000059F998 "basic_string::append"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56739C(int **a1, size_t a2, unsigned __int8 a3)
{
  int *v5; // x1
  int v6; // w22
  __int64 v7; // x3
  size_t v8; // x21
  _BYTE *v9; // x0
  int *v10; // x1
  __int64 result; // x0

  v5 = *a1;
  v6 = a3;
  v7 = *((_QWORD *)*a1 - 3);
  if ( 0x3FFFFFFFFFFFFFF9LL - v7 < a2 )
    sub_56554C("basic_string::append");
  v8 = a2 + v7;
  if ( a2 + v7 > *((_QWORD *)v5 - 2) || *(*a1 - 2) > 0 )
  {
    sub_567088((_BYTE **)a1, a2 + v7);
    v5 = *a1;
    v7 = *((_QWORD *)*a1 - 3);
    v9 = (char *)*a1 + v7;
    if ( a2 == 1 )
      goto LABEL_8;
  }
  else
  {
    v9 = (char *)v5 + v7;
    if ( a2 == 1 )
    {
LABEL_8:
      *((_BYTE *)v5 + v7) = v6;
      v10 = *a1;
      if ( *a1 - 6 != (int *)&qword_6FD2E0 )
        goto LABEL_9;
      return 0;
    }
  }
  memset(v9, v6, a2);
  v10 = *a1;
  if ( *a1 - 6 == (int *)&qword_6FD2E0 )
    return 0;
LABEL_9:
  *((_QWORD *)v10 - 3) = v8;
  result = 0;
  *(v10 - 2) = 0;
  *((_BYTE *)v10 + v8) = 0;
  return result;
}

