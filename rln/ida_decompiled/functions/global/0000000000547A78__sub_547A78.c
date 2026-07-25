/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000547A78
 * Mangled: sub_547A78
 * Demangled: sub_547A78
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x0000000000203ED0  sub_203ED0
 *   0x0000000000544AB8  sub_544AB8
 *   0x0000000000565330  sub_565330
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 31
 *   insn=0x0000000000547A90 string=0x0000000000547A94 "b"
 *   insn=0x0000000000547A94 string=0x0000000000547A98 "B`"
 *   insn=0x0000000000547AAC string=0x0000000000547AB0 "?"
 *   insn=0x0000000000547AB4 string=0x0000000000547AB8 "?"
 *   insn=0x0000000000547ABC string=0x0000000000547AC0 "`"
 *   insn=0x0000000000547AC4 string=0x000000000059E2E8 "basic_string::_S_construct null not valid"
 *   insn=0x0000000000547AD0 string=0x0000000000547AD4 "`"
 *   insn=0x0000000000547B08 string=0x0000000000547B0C "s"
 *   insn=0x0000000000547B0C string=0x0000000000547B10 "@`"
 *   insn=0x0000000000547B50 string=0x0000000000547B54 "s"
 *   insn=0x0000000000547B54 string=0x0000000000547B58 "@`"
 *   insn=0x0000000000547B64 string=0x0000000000547B68 "!<G"
 *   insn=0x0000000000547B68 string=0x0000000000547B6C "A"
 *   insn=0x0000000000547B6C string=0x0000000000547B70 "B "
 *   insn=0x0000000000547B6C string=0x0000000000547BF4 "A"
 *   insn=0x0000000000547B70 string=0x0000000000547B74 "A"
 *   insn=0x0000000000547B74 string=0x0000000000547B78 "#"
 *   insn=0x0000000000547B78 string=0x0000000000547B7C "C"
 *   insn=0x0000000000547B80 string=0x0000000000547B84 "?"
 *   insn=0x0000000000547B98 string=0x0000000000547B9C "a"
 *   insn=0x0000000000547BAC string=0x0000000000547BB0 "s"
 *   insn=0x0000000000547BB8 string=0x0000000000547BBC "`"
 *   insn=0x0000000000547BC8 string=0x0000000000547BCC ">"
 *   insn=0x0000000000547BD0 string=0x0000000000547BD4 "!<G"
 *   insn=0x0000000000547BD8 string=0x0000000000547BDC "B "
 *   insn=0x0000000000547BDC string=0x0000000000547BE0 "A"
 *   insn=0x0000000000547BE0 string=0x0000000000547BE4 "#"
 *   insn=0x0000000000547BE4 string=0x0000000000547BE8 "C"
 *   insn=0x0000000000547BF4 string=0x0000000000547BF8 "#"
 *   insn=0x0000000000547BF8 string=0x0000000000547BFC "C"
 *   insn=0x0000000000547C08 string=0x0000000000547C0C "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__usercall sub_547A78@<X0>(_QWORD *a1@<X0>, _QWORD *a2@<X8>)
{
  char *v3; // x2
  unsigned __int64 v4; // x1
  unsigned __int64 v5; // x4
  _BYTE *v6; // x0
  char *v7; // x2
  char *v8; // x0
  unsigned int *v10; // x2
  int v11; // w1
  unsigned int *v12; // x2
  char v13[8]; // [xsp+38h] [xbp+38h] BYREF
  char *v14; // [xsp+48h] [xbp+48h]

  v3 = &byte_6FD2F8;
  *a2 = &byte_6FD2F8;
  v4 = a1[8];
  if ( !v4 )
  {
    sub_56A6A8(a2);
    return a2;
  }
  v5 = a1[6];
  v6 = (_BYTE *)a1[7];
  if ( v4 > v5 )
  {
    if ( (_BYTE *)v4 != v6 )
    {
      if ( !v6 )
        sub_565330("basic_string::_S_construct null not valid");
      v3 = (char *)sub_544AB8(v6, v4, (__int64)v13);
    }
    v14 = v3;
    sub_56A6A8(a2);
    v7 = v14;
    v8 = v14 - 24;
    if ( v14 - 24 == (char *)&qword_6FD2E0 )
      return a2;
    if ( &pthread_create )
    {
      v12 = (unsigned int *)(v14 - 8);
      do
        v11 = __ldaxr(v12);
      while ( __stlxr(v11 - 1, v12) );
      goto LABEL_18;
    }
    goto LABEL_25;
  }
  if ( (_BYTE *)v5 != v6 )
  {
    if ( !v6 && v5 )
      sub_565330("basic_string::_S_construct null not valid");
    v3 = (char *)sub_544AB8(v6, v5, (__int64)v13);
  }
  v14 = v3;
  sub_56A6A8(a2);
  v7 = v14;
  v8 = v14 - 24;
  if ( v14 - 24 != (char *)&qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v10 = (unsigned int *)(v14 - 8);
      do
        v11 = __ldaxr(v10);
      while ( __stlxr(v11 - 1, v10) );
LABEL_18:
      if ( v11 <= 0 )
        operator delete(v8);
      return a2;
    }
LABEL_25:
    v11 = *((_DWORD *)v7 - 2);
    *((_DWORD *)v7 - 2) = v11 - 1;
    goto LABEL_18;
  }
  return a2;
}

