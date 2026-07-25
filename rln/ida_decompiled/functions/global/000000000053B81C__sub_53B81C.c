/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053B81C
 * Mangled: sub_53B81C
 * Demangled: sub_53B81C
 *
 * Callers: 2
 *   0x000000000053BB48  sub_53BB48
 *   0x000000000053D830  sub_53D830
 *
 * Callees: 9
 *   0x00000000001FA120  .strcmp
 *   0x0000000000203230  .strlen
 *   0x0000000000567088  sub_567088
 *   0x00000000005677D4  sub_5677D4
 *   0x0000000000569074  sub_569074
 *   0x000000000056918C  sub_56918C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 47
 *   insn=0x000000000053B824 string=0x000000000053B828 "V"
 *   insn=0x000000000053B838 string=0x000000000053B83C "5"
 *   insn=0x000000000053B870 string=0x000000000053B874 "s"
 *   insn=0x000000000053B878 string=0x000000000053B87C ")"
 *   insn=0x000000000053B87C string=0x00000000001FA120 "0'"
 *   insn=0x000000000053B888 string=0x000000000053B88C "\t"
 *   insn=0x000000000053B894 string=0x000000000053B898 "f"
 *   insn=0x000000000053B8A4 string=0x000000000053B8A8 "9"
 *   insn=0x000000000053B8D0 string=0x000000000053B8D4 "@"
 *   insn=0x000000000053B8E0 string=0x000000000059FCE8 "LC_CTYPE"
 *   insn=0x000000000053B8E8 string=0x000000000053B8EC "Q"
 *   insn=0x000000000053B908 string=0x000000000053B90C "3"
 *   insn=0x000000000053B918 string=0x000000000053B91C "_"
 *   insn=0x000000000053B948 string=0x000000000053B94C "_"
 *   insn=0x000000000053B94C string=0x000000000053B950 "!"
 *   insn=0x000000000053B964 string=0x000000000053B968 "2"
 *   insn=0x000000000053B97C string=0x000000000053B980 "x"
 *   insn=0x000000000053B990 string=0x000000000053B994 ":"
 *   insn=0x000000000053B994 string=0x000000000053B998 "_"
 *   insn=0x000000000053B9A0 string=0x000000000053B9A4 "_"
 *   insn=0x000000000053B9CC string=0x000000000053B9D0 "_"
 *   insn=0x000000000053B9D0 string=0x000000000053B9D4 "!"
 *   insn=0x000000000053B9F0 string=0x000000000053B9F4 "x"
 *   insn=0x000000000053BA00 string=0x000000000053BA04 ":"
 *   insn=0x000000000053BA04 string=0x000000000053BA08 "_"
 *   insn=0x000000000053BA10 string=0x000000000053BA14 "_"
 *   insn=0x000000000053BA3C string=0x000000000053BA40 "_"
 *   insn=0x000000000053BA40 string=0x000000000053BA44 "!"
 *   insn=0x000000000053BA68 string=0x000000000053BA6C "Z"
 *   insn=0x000000000053BA6C string=0x000000000053BA70 "s""
 *   insn=0x000000000053BAC0 string=0x000000000053BAC4 "#"
 *   insn=0x000000000053BAC4 string=0x000000000053BAC8 "D"
 *   insn=0x000000000053BAC8 string=0x000000000053BACC "j"
 *   insn=0x000000000053BACC string=0x000000000053BAD0 "w"
 *   insn=0x000000000053BAEC string=0x000000000053BAF0 "`b"
 *   insn=0x000000000053BAF4 string=0x000000000053BAF8 "a"
 *   insn=0x000000000053BAF8 string=0x000000000053BB04 "A"
 *   insn=0x000000000053BAFC string=0x000000000053BB00 "q"
 *   insn=0x000000000053BB08 string=0x000000000053BB0C "!<G"
 *   insn=0x000000000053BB0C string=0x000000000053BB10 "A"
 *   insn=0x000000000053BB10 string=0x000000000053BB14 "A"
 *   insn=0x000000000053BB10 string=0x000000000053BB38 "a"
 *   insn=0x000000000053BB14 string=0x000000000053BB18 "#"
 *   insn=0x000000000053BB18 string=0x000000000053BB1C "C"
 *   insn=0x000000000053BB20 string=0x000000000053BB24 "?"
 *   insn=0x000000000053BB38 string=0x000000000053BB3C """
 *   insn=0x000000000053BB3C string=0x000000000053BB40 "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__usercall sub_53B81C@<X0>(__int64 a1@<X0>, __int64 *a2@<X8>)
{
  __int64 v3; // x21
  const char *v5; // x24
  unsigned __int64 v6; // x19
  const char *v7; // x0
  _BOOL4 v8; // w0
  size_t v9; // x0
  size_t v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x19
  __int64 v15; // x0
  size_t v16; // x0
  __int64 i; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x26
  __int64 v21; // x0
  size_t v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x26
  __int64 v26; // x0
  size_t v27; // x0
  const char *v28; // [xsp+58h] [xbp+58h]
  const char *v29; // [xsp+58h] [xbp+58h]
  const char *v30; // [xsp+58h] [xbp+58h]

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  *a2 = (__int64)&byte_6FD2F8;
  v5 = *(const char **)v3;
  if ( !*(_QWORD *)v3 )
  {
    sub_569074(a2, 0, qword_6FD2E0, 1, 42);
    return a2;
  }
  if ( !*(_QWORD *)(v3 + 8) )
  {
LABEL_7:
    v9 = strlen(v5);
    sub_56918C(a2, v5, v9);
    return a2;
  }
  v6 = 0;
  while ( 1 )
  {
    v7 = *(const char **)(v3 + 8 * v6++);
    v8 = strcmp(v7, *(const char **)(v3 + 8 * v6)) == 0;
    if ( v6 > 4 )
      break;
    if ( !v8 )
      goto LABEL_9;
  }
  if ( v8 )
    goto LABEL_7;
LABEL_9:
  sub_567088(a2, 128);
  v11 = strlen("LC_CTYPE");
  sub_5677D4(a2, "LC_CTYPE", v11);
  v12 = *a2;
  v13 = *(_QWORD *)(*a2 - 24);
  v14 = v13 + 1;
  if ( (unsigned __int64)(v13 + 1) > *(_QWORD *)(*a2 - 16) || *(int *)(v12 - 8) > 0 )
  {
    sub_567088(a2, v13 + 1);
    v12 = *a2;
    v13 = *(_QWORD *)(*a2 - 24);
  }
  *(_BYTE *)(v12 + v13) = 61;
  v15 = *a2;
  if ( (__int64 *)(*a2 - 24) != &qword_6FD2E0 )
  {
    *(_DWORD *)(v15 - 8) = 0;
    *(_QWORD *)(v15 - 24) = v14;
    *(_BYTE *)(v15 + v14) = 0;
  }
  v28 = **(const char ***)(*(_QWORD *)a1 + 32LL);
  v16 = strlen(v28);
  sub_5677D4(a2, v28, v16);
  for ( i = 1; i != 6; ++i )
  {
    v18 = *a2;
    v19 = *(_QWORD *)(*a2 - 24);
    v20 = v19 + 1;
    if ( (unsigned __int64)(v19 + 1) > *(_QWORD *)(*a2 - 16) || *(int *)(v18 - 8) > 0 )
    {
      sub_567088(a2, v19 + 1);
      v18 = *a2;
      v19 = *(_QWORD *)(*a2 - 24);
    }
    *(_BYTE *)(v18 + v19) = 59;
    v21 = *a2;
    if ( (__int64 *)(*a2 - 24) != &qword_6FD2E0 )
    {
      *(_DWORD *)(v21 - 8) = 0;
      *(_QWORD *)(v21 - 24) = v20;
      *(_BYTE *)(v21 + v20) = 0;
    }
    v29 = off_6B80F0[i];
    v22 = strlen(v29);
    sub_5677D4(a2, v29, v22);
    v23 = *a2;
    v24 = *(_QWORD *)(*a2 - 24);
    v25 = v24 + 1;
    if ( (unsigned __int64)(v24 + 1) > *(_QWORD *)(*a2 - 16) || *(int *)(v23 - 8) > 0 )
    {
      sub_567088(a2, v24 + 1);
      v23 = *a2;
      v24 = *(_QWORD *)(*a2 - 24);
    }
    *(_BYTE *)(v23 + v24) = 61;
    v26 = *a2;
    if ( (__int64 *)(*a2 - 24) != &qword_6FD2E0 )
    {
      *(_DWORD *)(v26 - 8) = 0;
      *(_QWORD *)(v26 - 24) = v25;
      *(_BYTE *)(v26 + v25) = 0;
    }
    v30 = *(const char **)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + i * 8);
    v27 = strlen(v30);
    sub_5677D4(a2, v30, v27);
  }
  return a2;
}

