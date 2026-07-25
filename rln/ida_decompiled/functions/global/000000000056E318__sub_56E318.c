/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056E318
 * Mangled: sub_56E318
 * Demangled: sub_56E318
 *
 * Callers: 13
 *   0x0000000000528E58  sub_528E58
 *   0x00000000005480EC  sub_5480EC
 *   0x000000000054DC04  sub_54DC04
 *   0x000000000055201C  sub_55201C
 *   0x0000000000552738  sub_552738
 *   0x000000000056E434  sub_56E434
 *   0x000000000056E474  sub_56E474
 *   0x000000000056E538  sub_56E538
 *   0x000000000056E634  sub_56E634
 *   0x000000000056E86C  sub_56E86C
 *   0x000000000056E9F8  sub_56E9F8
 *   0x000000000056EA8C  sub_56EA8C
 *   0x000000000056EFD4  sub_56EFD4
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000203AC0  .wmemcpy
 *   0x000000000056C5B8  sub_56C5B8
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 26
 *   insn=0x000000000056E328 string=0x000000000056E32C "b"
 *   insn=0x000000000056E32C string=0x000000000056E330 "?"
 *   insn=0x000000000056E330 string=0x000000000056E334 "`"
 *   insn=0x000000000056E334 string=0x000000000056E3C0 "c"
 *   insn=0x000000000056E338 string=0x000000000056E33C "`"
 *   insn=0x000000000056E34C string=0x000000000056E350 "` "
 *   insn=0x000000000056E358 string=0x000000000056E35C "b"
 *   insn=0x000000000056E364 string=0x000000000056E368 "a"
 *   insn=0x000000000056E364 string=0x000000000056E3A0 "_"
 *   insn=0x000000000056E368 string=0x000000000056E36C " "
 *   insn=0x000000000056E378 string=0x000000000056E37C "!"
 *   insn=0x000000000056E37C string=0x000000000056E380 "@`"
 *   insn=0x000000000056E3A4 string=0x000000000056E3A8 "@"
 *   insn=0x000000000056E3A8 string=0x000000000056E3D0 "a"
 *   insn=0x000000000056E3B4 string=0x000000000056E3B8 "b"
 *   insn=0x000000000056E3E0 string=0x000000000056E3E4 "!<G"
 *   insn=0x000000000056E3E8 string=0x000000000056E3EC "B "
 *   insn=0x000000000056E3E8 string=0x000000000056E424 "A"
 *   insn=0x000000000056E3EC string=0x000000000056E3F0 "A"
 *   insn=0x000000000056E3F0 string=0x000000000056E3F4 "#"
 *   insn=0x000000000056E3F4 string=0x000000000056E3F8 "C"
 *   insn=0x000000000056E3FC string=0x000000000056E400 "?"
 *   insn=0x000000000056E400 string=0x000000000056E404 "L"
 *   insn=0x000000000056E408 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000056E424 string=0x000000000056E428 "#"
 *   insn=0x000000000056E428 string=0x000000000056E42C "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_56E318(const wchar_t **a1, unsigned __int64 a2)
{
  const wchar_t *v2; // x19
  unsigned __int64 v3; // x2
  unsigned __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x21
  size_t v8; // x2
  const wchar_t *v9; // x22
  const wchar_t *v10; // x2
  wchar_t *v11; // x0
  wchar_t *v12; // x0
  unsigned int *v13; // x2
  int v14; // w1

  v2 = *a1;
  v3 = *((_QWORD *)*a1 - 2);
  if ( a2 != v3 || *(v2 - 2) > 0 )
  {
    v5 = *((_QWORD *)v2 - 3);
    if ( a2 >= v5 )
      v5 = a2;
    v6 = sub_56C5B8(v5, v3);
    v7 = v6;
    v8 = *((_QWORD *)v2 - 3);
    v9 = (const wchar_t *)(v6 + 24);
    if ( v8 )
    {
      v12 = (wchar_t *)(v6 + 24);
      v9 = (const wchar_t *)(v7 + 24);
      if ( v8 == 1 )
      {
        *(_DWORD *)(v7 + 24) = *v2;
      }
      else
      {
        wmemcpy(v12, v2, v8);
        v8 = *((_QWORD *)v2 - 3);
      }
    }
    if ( (__int64 *)v7 != &qword_6FD300 )
    {
      *(_DWORD *)(v7 + 16) = 0;
      *(_QWORD *)v7 = v8;
      *(_DWORD *)(v7 + 4 * v8 + 24) = 0;
    }
    v10 = *a1;
    v11 = (wchar_t *)(*a1 - 6);
    if ( v11 != (wchar_t *)&qword_6FD300 )
    {
      if ( &pthread_create )
      {
        v13 = (unsigned int *)(v10 - 2);
        do
          v14 = __ldaxr(v13);
        while ( __stlxr(v14 - 1, v13) );
      }
      else
      {
        v14 = *(v10 - 2);
        *((_DWORD *)v10 - 2) = v14 - 1;
      }
      if ( v14 <= 0 )
        operator delete(v11);
    }
    *a1 = v9;
  }
}

