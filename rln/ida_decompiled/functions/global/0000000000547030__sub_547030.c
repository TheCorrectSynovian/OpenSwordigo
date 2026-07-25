/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000547030
 * Mangled: sub_547030
 * Demangled: sub_547030
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
 * Referenced strings: 36
 *   insn=0x0000000000547048 string=0x000000000054704C "b"
 *   insn=0x000000000054704C string=0x0000000000547050 "B`"
 *   insn=0x0000000000547064 string=0x0000000000547068 "?"
 *   insn=0x000000000054706C string=0x0000000000547070 "?"
 *   insn=0x0000000000547074 string=0x0000000000547078 "`"
 *   insn=0x000000000054707C string=0x000000000059E2E8 "basic_string::_S_construct null not valid"
 *   insn=0x0000000000547088 string=0x000000000054708C "`"
 *   insn=0x00000000005470B8 string=0x00000000005470BC "{"
 *   insn=0x00000000005470C0 string=0x00000000005470C4 "s"
 *   insn=0x00000000005470C4 string=0x00000000005470C8 "@`"
 *   insn=0x00000000005470EC string=0x00000000005470F0 "r"
 *   insn=0x0000000000547100 string=0x0000000000547104 "i"
 *   insn=0x0000000000547108 string=0x000000000054710C "s"
 *   insn=0x000000000054710C string=0x0000000000547110 "@`"
 *   insn=0x000000000054711C string=0x0000000000547120 "!<G"
 *   insn=0x0000000000547120 string=0x0000000000547124 "A"
 *   insn=0x0000000000547124 string=0x0000000000547128 "B "
 *   insn=0x0000000000547124 string=0x00000000005471AC "A"
 *   insn=0x0000000000547128 string=0x000000000054712C "A"
 *   insn=0x000000000054712C string=0x0000000000547130 "#"
 *   insn=0x0000000000547130 string=0x0000000000547134 "C"
 *   insn=0x0000000000547138 string=0x000000000054713C "?"
 *   insn=0x0000000000547150 string=0x0000000000547154 "a@"
 *   insn=0x0000000000547154 string=0x0000000000547158 "T"
 *   insn=0x0000000000547164 string=0x0000000000547168 "s"
 *   insn=0x0000000000547170 string=0x0000000000547174 "`"
 *   insn=0x0000000000547178 string=0x000000000054717C "U"
 *   insn=0x0000000000547188 string=0x000000000054718C "!<G"
 *   insn=0x0000000000547190 string=0x0000000000547194 "B "
 *   insn=0x0000000000547194 string=0x0000000000547198 "A"
 *   insn=0x0000000000547198 string=0x000000000054719C "#"
 *   insn=0x000000000054719C string=0x00000000005471A0 "C"
 *   insn=0x00000000005471AC string=0x00000000005471B0 "#"
 *   insn=0x00000000005471B0 string=0x00000000005471B4 "C"
 *   insn=0x00000000005471C0 string=0x00000000005471C4 "a"
 *   insn=0x00000000005471D4 string=0x00000000005471D8 ">"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__usercall sub_547030@<X0>(_QWORD *a1@<X0>, _QWORD *a2@<X8>)
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
  v4 = a1[6];
  if ( !v4 )
  {
    sub_56A6A8(a2);
    return a2;
  }
  v5 = a1[4];
  v6 = (_BYTE *)a1[5];
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

