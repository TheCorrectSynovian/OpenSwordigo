/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053BB48
 * Mangled: sub_53BB48
 * Demangled: sub_53BB48
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x00000000001FA120  .strcmp
 *   0x000000000053B81C  sub_53B81C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 44
 *   insn=0x000000000053BB50 string=0x000000000053BB54 "#"
 *   insn=0x000000000053BB60 string=0x000000000053BB64 "_"
 *   insn=0x000000000053BB68 string=0x000000000053BB6C "U"
 *   insn=0x000000000053BB68 string=0x000000000053BC3C "4"
 *   insn=0x000000000053BB70 string=0x000000000053BB74 """
 *   insn=0x000000000053BB74 string=0x000000000053BB78 "v"
 *   insn=0x000000000053BB90 string=0x000000000053BB94 "c"
 *   insn=0x000000000053BB94 string=0x00000000001FA120 "0'"
 *   insn=0x000000000053BBD0 string=0x000000000053BBD4 "_"
 *   insn=0x000000000053BBD8 string=0x000000000053BBDC "S"
 *   insn=0x000000000053BBE0 string=0x000000000053BBE4 "a"
 *   insn=0x000000000053BBEC string=0x000000000053BBF0 "s"
 *   insn=0x000000000053BBEC string=0x000000000053BCA4 "A"
 *   insn=0x000000000053BBFC string=0x000000000053BC70 "A"
 *   insn=0x000000000053BC34 string=0x000000000053BC38 "`"
 *   insn=0x000000000053BC5C string=0x000000000053BC60 "L"
 *   insn=0x000000000053BC60 string=0x00000000001F5190 "P'"
 *   insn=0x000000000053BC70 string=0x000000000053BC74 "!<G"
 *   insn=0x000000000053BC80 string=0x000000000053BC84 """
 *   insn=0x000000000053BC8C string=0x000000000053BC90 "?"
 *   insn=0x000000000053BC90 string=0x000000000053BC94 "l"
 *   insn=0x000000000053BCA4 string=0x000000000053BCA8 "!<G"
 *   insn=0x000000000053BCB4 string=0x000000000053BCB8 """
 *   insn=0x000000000053BCC0 string=0x000000000053BCC4 "?"
 *   insn=0x000000000053BCC4 string=0x000000000053BCC8 "m"
 *   insn=0x000000000053BCE4 string=0x000000000053BCE8 """
 *   insn=0x000000000053BCF4 string=0x000000000053BCF8 """
 *   insn=0x000000000053BD08 string=0x000000000053BD3C "Q"
 *   insn=0x000000000053BD10 string=0x000000000053BD14 "A"
 *   insn=0x000000000053BD1C string=0x000000000053BD20 "!"
 *   insn=0x000000000053BD20 string=0x000000000053BD24 "@`"
 *   insn=0x000000000053BD2C string=0x000000000053BD40 "A"
 *   insn=0x000000000053BD38 string=0x000000000053BD04 "?"
 *   insn=0x000000000053BD3C string=0x00000000001F8280 "0'"
 *   insn=0x000000000053BD44 string=0x000000000053BD48 "!<G"
 *   insn=0x000000000053BD48 string=0x000000000053BD4C "A"
 *   insn=0x000000000053BD4C string=0x000000000053BD50 "a"
 *   insn=0x000000000053BD4C string=0x000000000053BD74 "A"
 *   insn=0x000000000053BD50 string=0x000000000053BD54 """
 *   insn=0x000000000053BD54 string=0x000000000053BD58 "b"
 *   insn=0x000000000053BD5C string=0x000000000053BD60 "?"
 *   insn=0x000000000053BD60 string=0x000000000053BD64 "l"
 *   insn=0x000000000053BD74 string=0x000000000053BD78 "#"
 *   insn=0x000000000053BD78 string=0x000000000053BD7C "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53BB48(__int64 a1, __int64 a2)
{
  __int64 v2; // x21
  __int64 v3; // x22
  _DWORD *v6; // x21
  _BOOL4 v7; // w20
  _DWORD *v8; // x22
  size_t v9; // x2
  char *v10; // x0
  char *v11; // x0
  unsigned int *v13; // x21
  int v14; // w1
  unsigned int *v15; // x22
  int v16; // w1
  void *v17; // [xsp+50h] [xbp+50h] BYREF
  void *v18; // [xsp+58h] [xbp+58h] BYREF

  if ( *(_QWORD *)a1 == *(_QWORD *)a2 )
    return 1;
  v2 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  if ( !*(_QWORD *)v2 )
    return 0;
  v3 = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
  if ( !*(_QWORD *)v3 || strcmp(*(const char **)v2, *(const char **)v3) )
    return 0;
  if ( !*(_QWORD *)(v2 + 8) && !*(_QWORD *)(v3 + 8) )
    return 1;
  sub_53B81C(a1, (__int64 *)&v17);
  sub_53B81C(a2, (__int64 *)&v18);
  v6 = v17;
  v7 = 0;
  v8 = v18;
  v9 = *((_QWORD *)v17 - 3);
  if ( v9 == *((_QWORD *)v18 - 3) )
    v7 = memcmp(v17, v18, v9) == 0;
  v10 = (char *)(v8 - 6);
  if ( v8 - 6 != (_DWORD *)&qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v15 = v8 - 2;
      do
        v16 = __ldaxr(v15);
      while ( __stlxr(v16 - 1, v15) );
    }
    else
    {
      v16 = *(v8 - 2);
      *(v8 - 2) = v16 - 1;
    }
    if ( v16 <= 0 )
      operator delete(v10);
    v6 = v17;
  }
  v11 = (char *)(v6 - 6);
  if ( v6 - 6 != (_DWORD *)&qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v13 = v6 - 2;
      do
        v14 = __ldaxr(v13);
      while ( __stlxr(v14 - 1, v13) );
    }
    else
    {
      v14 = *(v6 - 2);
      *(v6 - 2) = v14 - 1;
    }
    if ( v14 <= 0 )
      operator delete(v11);
  }
  return v7;
}

