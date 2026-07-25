/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005480EC
 * Mangled: sub_5480EC
 * Demangled: sub_5480EC
 *
 * Callers: 1
 *   0x0000000000548020  sub_548020
 *
 * Callees: 8
 *   0x0000000000203E90  start
 *   0x0000000000547EA4  sub_547EA4
 *   0x000000000056B694  sub_56B694
 *   0x000000000056CB34  sub_56CB34
 *   0x000000000056E318  sub_56E318
 *   0x000000000056EC5C  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 50
 *   insn=0x0000000000548100 string=0x0000000000548104 "B 6?"
 *   insn=0x0000000000548104 string=0x0000000000548108 "?"
 *   insn=0x000000000054811C string=0x0000000000548120 "c"
 *   insn=0x0000000000548120 string=0x0000000000548124 "_"
 *   insn=0x0000000000548140 string=0x0000000000548144 "E"
 *   insn=0x0000000000548144 string=0x0000000000548148 "A"
 *   insn=0x0000000000548144 string=0x000000000054816C "c"
 *   insn=0x0000000000548148 string=0x000000000054814C "B"
 *   insn=0x0000000000548150 string=0x0000000000548154 "b"
 *   insn=0x0000000000548170 string=0x0000000000548174 "H"
 *   insn=0x000000000054818C string=0x0000000000548190 "B`"
 *   insn=0x0000000000548194 string=0x0000000000548198 "`"
 *   insn=0x0000000000548198 string=0x000000000054819C "b"
 *   insn=0x00000000005481A0 string=0x00000000005481A4 "c"
 *   insn=0x00000000005481AC string=0x00000000005481B0 "b"
 *   insn=0x00000000005481B0 string=0x00000000005481B4 "B"
 *   insn=0x00000000005481B4 string=0x00000000005481B8 "_"
 *   insn=0x00000000005481C4 string=0x00000000005481C8 "7"
 *   insn=0x00000000005481D4 string=0x00000000005481D8 "_"
 *   insn=0x00000000005481E4 string=0x00000000005481E8 "L"
 *   insn=0x00000000005481FC string=0x0000000000548200 "?"
 *   insn=0x0000000000548204 string=0x0000000000548208 "`""
 *   insn=0x000000000054820C string=0x0000000000548210 "!"
 *   insn=0x0000000000548210 string=0x0000000000548214 "a\n@"
 *   insn=0x0000000000548218 string=0x000000000054821C "b"
 *   insn=0x000000000054821C string=0x0000000000548220 "c"
 *   insn=0x0000000000548220 string=0x0000000000548224 "d"
 *   insn=0x0000000000548224 string=0x0000000000548228 """
 *   insn=0x0000000000548228 string=0x000000000054822C "a&@"
 *   insn=0x000000000054822C string=0x0000000000548230 "B"
 *   insn=0x0000000000548230 string=0x0000000000548234 "c"
 *   insn=0x0000000000548234 string=0x0000000000548238 "c"
 *   insn=0x0000000000548244 string=0x0000000000548248 " `"
 *   insn=0x0000000000548250 string=0x0000000000548254 "b"
 *   insn=0x000000000054828C string=0x0000000000548290 "B<G"
 *   insn=0x0000000000548294 string=0x0000000000548298 "! "
 *   insn=0x0000000000548294 string=0x00000000005482D4 """
 *   insn=0x0000000000548298 string=0x000000000054829C """
 *   insn=0x000000000054829C string=0x00000000005482A0 "C"
 *   insn=0x00000000005482A0 string=0x00000000005482A4 "#"
 *   insn=0x00000000005482A8 string=0x00000000005482AC "_"
 *   insn=0x00000000005482AC string=0x00000000005482B0 ","
 *   insn=0x00000000005482B4 string=0x00000000005482B8 "i"
 *   insn=0x00000000005482B8 string=0x00000000005482BC "b"
 *   insn=0x00000000005482D4 string=0x00000000005482D8 "C"
 *   insn=0x00000000005482D8 string=0x00000000005482DC "#"
 *   insn=0x00000000005482F4 string=0x00000000005482F8 "`"
 *   insn=0x0000000000548304 string=0x0000000000548308 "o"
 *   insn=0x0000000000548318 string=0x000000000054831C "?"
 *   insn=0x0000000000548320 string=0x0000000000548324 "c"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5480EC(__int64 a1, unsigned int a2)
{
  unsigned int *v2; // x2
  __int64 v3; // x3
  __int64 result; // x0
  unsigned __int64 v7; // x3
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x23
  char *v13; // x0
  unsigned int *v14; // x1
  int v15; // w2
  _QWORD *v16; // [xsp+48h] [xbp+48h] BYREF

  if ( (*(_DWORD *)(a1 + 64) & 0x10) == 0 )
    return 0xFFFFFFFFLL;
  if ( a2 != -1 )
  {
    v2 = *(unsigned int **)(a1 + 40);
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 72) - 16LL);
    if ( (v3 == 0xFFFFFFFFFFFFFFELL) <= (unsigned int)((unsigned __int64)v2 < *(_QWORD *)(a1 + 48)) )
    {
      if ( (unsigned __int64)v2 < *(_QWORD *)(a1 + 48) )
      {
        *v2 = a2;
LABEL_6:
        result = a2;
        *(_QWORD *)(a1 + 40) = v2 + 1;
        return result;
      }
      v7 = 2 * v3;
      if ( v7 > 0x1FF )
      {
        v8 = 0xFFFFFFFFFFFFFFELL;
        if ( v7 > 0xFFFFFFFFFFFFFFELL )
          goto LABEL_10;
      }
      else
      {
        v7 = 512;
      }
      v8 = v7;
LABEL_10:
      v16 = &unk_6FD318;
      sub_56E318(&v16, v8);
      v9 = *(_QWORD *)(a1 + 32);
      if ( v9 )
        sub_56CB34(&v16, *(_QWORD *)(a1 + 32), (*(_QWORD *)(a1 + 48) - v9) >> 2);
      v10 = v16;
      v11 = *(v16 - 3);
      v12 = v11 + 1;
      if ( (unsigned __int64)(v11 + 1) > *(v16 - 2) || *((int *)v16 - 2) > 0 )
      {
        sub_56E318(&v16, v11 + 1);
        v10 = v16;
        v11 = *(v16 - 3);
      }
      *((_DWORD *)v10 + v11) = a2;
      if ( v10 - 3 != &qword_6FD300 )
      {
        *((_DWORD *)v10 - 2) = 0;
        *(v10 - 3) = v12;
        *((_DWORD *)v10 + v12) = 0;
      }
      sub_56B694(a1 + 72, &v16);
      sub_547EA4(
        a1,
        *(_QWORD *)(a1 + 72),
        (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8)) >> 2,
        (__int64)(*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32)) >> 2);
      v13 = (char *)(v16 - 3);
      if ( v16 - 3 == &qword_6FD300 )
        goto LABEL_18;
      if ( &pthread_create )
      {
        v14 = (unsigned int *)(v16 - 1);
        do
          v15 = __ldaxr(v14);
        while ( __stlxr(v15 - 1, v14) );
      }
      else
      {
        v15 = *((_DWORD *)v16 - 2);
        *((_DWORD *)v16 - 2) = v15 - 1;
      }
      if ( v15 > 0 )
      {
LABEL_18:
        v2 = *(unsigned int **)(a1 + 40);
      }
      else
      {
        operator delete(v13);
        v2 = *(unsigned int **)(a1 + 40);
      }
      goto LABEL_6;
    }
    return 0xFFFFFFFFLL;
  }
  return 0;
}

