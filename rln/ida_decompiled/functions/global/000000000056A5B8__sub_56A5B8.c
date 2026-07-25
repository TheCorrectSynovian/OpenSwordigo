/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056A5B8
 * Mangled: sub_56A5B8
 * Demangled: sub_56A5B8
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3F4  sub_56A3F4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 24
 *   insn=0x000000000056A5C8 string=0x000000000056A5CC "3"
 *   insn=0x000000000056A5CC string=0x000000000056A5D0 "_"
 *   insn=0x000000000056A5D4 string=0x000000000056A5D8 "c"
 *   insn=0x000000000056A5D8 string=0x000000000056A5DC "`b"
 *   insn=0x000000000056A5DC string=0x000000000056A5E0 "C"
 *   insn=0x000000000056A5E4 string=0x000000000056A5E8 "$"
 *   insn=0x000000000056A5F0 string=0x000000000056A5F4 "@`"
 *   insn=0x000000000056A5F4 string=0x000000000056A5F8 "!"
 *   insn=0x000000000056A618 string=0x000000000056A61C "!<G"
 *   insn=0x000000000056A620 string=0x000000000056A624 "B "
 *   insn=0x000000000056A620 string=0x000000000056A698 "A"
 *   insn=0x000000000056A624 string=0x000000000056A628 "A"
 *   insn=0x000000000056A628 string=0x000000000056A62C "#"
 *   insn=0x000000000056A62C string=0x000000000056A630 "C"
 *   insn=0x000000000056A634 string=0x000000000056A638 "?"
 *   insn=0x000000000056A638 string=0x000000000056A63C "L"
 *   insn=0x000000000056A640 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000056A64C string=0x000000000056A650 "i"
 *   insn=0x000000000056A66C string=0x000000000056A670 "`""
 *   insn=0x000000000056A66C string=0x000000000056A68C "c"
 *   insn=0x000000000056A674 string=0x000000000056A678 "B"
 *   insn=0x000000000056A68C string=0x000000000056A690 "c"
 *   insn=0x000000000056A698 string=0x000000000056A69C "#"
 *   insn=0x000000000056A69C string=0x000000000056A6A0 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_56A5B8(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // x2
  _DWORD *v4; // x19
  int v5; // w3
  __int64 *v6; // x0
  void *v7; // x0
  unsigned int *v9; // x2
  int v10; // w1
  unsigned int *v11; // x0
  unsigned int v12; // w2
  char v13; // [xsp+28h] [xbp+28h] BYREF

  v2 = *a1;
  v4 = (_DWORD *)*a2;
  if ( *a1 != *a2 )
  {
    v5 = *(v4 - 2);
    v6 = (__int64 *)(v4 - 6);
    if ( v5 < 0 )
    {
      v4 = sub_56A3F4((__int64)v6, (__int64)&v13, 0);
      v2 = *a1;
    }
    else if ( v6 != &qword_6FD2E0 )
    {
      if ( &pthread_create )
      {
        v11 = v4 - 2;
        do
          v12 = __ldaxr(v11);
        while ( __stlxr(v12 + 1, v11) );
        v2 = *a1;
      }
      else
      {
        *(v4 - 2) = v5 + 1;
      }
    }
    v7 = (void *)(v2 - 24);
    if ( (__int64 *)(v2 - 24) != &qword_6FD2E0 )
    {
      if ( &pthread_create )
      {
        v9 = (unsigned int *)(v2 - 8);
        do
          v10 = __ldaxr(v9);
        while ( __stlxr(v10 - 1, v9) );
      }
      else
      {
        v10 = *(_DWORD *)(v2 - 8);
        *(_DWORD *)(v2 - 8) = v10 - 1;
      }
      if ( v10 <= 0 )
        operator delete(v7);
    }
    *a1 = (__int64)v4;
  }
  return a1;
}

