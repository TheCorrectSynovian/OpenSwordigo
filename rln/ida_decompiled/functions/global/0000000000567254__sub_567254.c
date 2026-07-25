/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000567254
 * Mangled: sub_567254
 * Demangled: sub_567254
 *
 * Callers: 5
 *   0x000000000056750C  sub_56750C
 *   0x00000000005675EC  sub_5675EC
 *   0x00000000005677D4  sub_5677D4
 *   0x00000000005677FC  sub_5677FC
 *   0x0000000000567868  sub_567868
 *
 * Callees: 3
 *   0x0000000000201760  .memcpy
 *   0x000000000056554C  sub_56554C
 *   0x0000000000567088  sub_567088
 *
 * Referenced strings: 35
 *   insn=0x000000000056726C string=0x0000000000567270 " "
 *   insn=0x0000000000567270 string=0x0000000000567274 "c"
 *   insn=0x0000000000567274 string=0x0000000000567278 "d`"
 *   insn=0x0000000000567278 string=0x000000000056727C "a"
 *   insn=0x0000000000567284 string=0x0000000000567288 "C"
 *   insn=0x0000000000567288 string=0x000000000056728C "`"
 *   insn=0x000000000056728C string=0x0000000000567290 "U"
 *   insn=0x0000000000567294 string=0x0000000000567298 "I"
 *   insn=0x00000000005672A0 string=0x0000000000567314 "a"
 *   insn=0x00000000005672AC string=0x00000000005672B0 "v"
 *   insn=0x00000000005672B0 string=0x00000000005672B4 "c"
 *   insn=0x00000000005672B8 string=0x00000000005672BC "a"
 *   insn=0x00000000005672BC string=0x00000000005672C0 "_"
 *   insn=0x00000000005672C0 string=0x00000000005672C4 "`"
 *   insn=0x00000000005672C4 string=0x00000000005672C8 "A"
 *   insn=0x00000000005672CC string=0x00000000005672D0 "`h!8"
 *   insn=0x00000000005672D4 string=0x00000000005672DC "a"
 *   insn=0x00000000005672DC string=0x00000000005672E0 ""`"
 *   insn=0x00000000005672E0 string=0x00000000005672E4 "_"
 *   insn=0x00000000005672E4 string=0x00000000005672E8 "A"
 *   insn=0x00000000005672E8 string=0x0000000000567370 "5"
 *   insn=0x0000000000567318 string=0x000000000056731C "H"
 *   insn=0x000000000056732C string=0x0000000000567330 "V"
 *   insn=0x0000000000567330 string=0x0000000000567334 "c"
 *   insn=0x0000000000567338 string=0x000000000056733C "t"
 *   insn=0x000000000056733C string=0x0000000000567340 "a"
 *   insn=0x0000000000567340 string=0x0000000000567344 "_"
 *   insn=0x0000000000567344 string=0x0000000000567348 "`"
 *   insn=0x0000000000567354 string=0x0000000000567358 "a"
 *   insn=0x000000000056735C string=0x0000000000567364 ""`"
 *   insn=0x0000000000567364 string=0x0000000000567368 "_"
 *   insn=0x0000000000567374 string=0x0000000000567378 "?"
 *   insn=0x0000000000567378 string=0x000000000056737C "?h58"
 *   insn=0x0000000000567390 string=0x0000000000567398 "m"
 *   insn=0x0000000000567390 string=0x000000000059F998 "basic_string::append"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_567254(int **a1, int *a2, size_t a3)
{
  int *v5; // x3
  __int64 v6; // x1
  unsigned __int64 v7; // x21
  _BYTE *v8; // x0
  int *v9; // x1
  __int64 result; // x0
  signed __int64 v11; // x20
  size_t v12; // [xsp+38h] [xbp+38h]
  size_t v13; // [xsp+38h] [xbp+38h]

  v5 = *a1;
  v6 = *((_QWORD *)*a1 - 3);
  if ( 0x3FFFFFFFFFFFFFF9LL - v6 < a3 )
    sub_56554C("basic_string::append");
  v7 = a3 + v6;
  if ( a3 + v6 <= *((_QWORD *)v5 - 2) )
  {
    if ( *(*a1 - 2) <= 0 )
    {
LABEL_5:
      v8 = (char *)v5 + v6;
      if ( a3 == 1 )
        goto LABEL_6;
LABEL_12:
      memcpy(v8, a2, a3);
      v9 = *a1;
      if ( *a1 - 6 == (int *)&qword_6FD2E0 )
        return 0;
      goto LABEL_13;
    }
    if ( v5 > a2 )
    {
LABEL_4:
      v12 = a3;
      sub_567088((_BYTE **)a1, v7);
      v5 = *a1;
      a3 = v12;
      v6 = *((_QWORD *)*a1 - 3);
      goto LABEL_5;
    }
  }
  else if ( v5 > a2 )
  {
    goto LABEL_4;
  }
  if ( a2 > (int *)((char *)v5 + v6) )
    goto LABEL_4;
  v11 = (char *)a2 - (char *)v5;
  v13 = a3;
  sub_567088((_BYTE **)a1, v7);
  v5 = *a1;
  a3 = v13;
  a2 = (int *)((char *)*a1 + v11);
  v6 = *((_QWORD *)*a1 - 3);
  v8 = (char *)*a1 + v6;
  if ( v13 != 1 )
    goto LABEL_12;
LABEL_6:
  *((_BYTE *)v5 + v6) = *(_BYTE *)a2;
  v9 = *a1;
  if ( *a1 - 6 == (int *)&qword_6FD2E0 )
    return 0;
LABEL_13:
  *((_QWORD *)v9 - 3) = v7;
  result = 0;
  *(v9 - 2) = 0;
  *((_BYTE *)v9 + v7) = 0;
  return result;
}

