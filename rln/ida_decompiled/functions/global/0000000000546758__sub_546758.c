/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000546758
 * Mangled: sub_546758
 * Demangled: sub_546758
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
 *   insn=0x0000000000546770 string=0x0000000000546774 "b"
 *   insn=0x0000000000546774 string=0x0000000000546778 "B`"
 *   insn=0x000000000054678C string=0x0000000000546790 "?"
 *   insn=0x0000000000546794 string=0x0000000000546798 "?"
 *   insn=0x000000000054679C string=0x00000000005467A0 "`"
 *   insn=0x00000000005467A4 string=0x000000000059E2E8 "basic_string::_S_construct null not valid"
 *   insn=0x00000000005467B0 string=0x00000000005467B4 "`"
 *   insn=0x00000000005467E8 string=0x00000000005467EC "s"
 *   insn=0x00000000005467EC string=0x00000000005467F0 "@`"
 *   insn=0x0000000000546830 string=0x0000000000546834 "s"
 *   insn=0x0000000000546834 string=0x0000000000546838 "@`"
 *   insn=0x0000000000546844 string=0x0000000000546848 "!<G"
 *   insn=0x0000000000546848 string=0x000000000054684C "A"
 *   insn=0x000000000054684C string=0x0000000000546850 "B "
 *   insn=0x000000000054684C string=0x00000000005468D4 "A"
 *   insn=0x0000000000546850 string=0x0000000000546854 "A"
 *   insn=0x0000000000546854 string=0x0000000000546858 "#"
 *   insn=0x0000000000546858 string=0x000000000054685C "C"
 *   insn=0x0000000000546860 string=0x0000000000546864 "?"
 *   insn=0x0000000000546878 string=0x000000000054687C "a`"
 *   insn=0x000000000054688C string=0x0000000000546890 "s"
 *   insn=0x0000000000546898 string=0x000000000054689C "`"
 *   insn=0x00000000005468B0 string=0x00000000005468B4 "!<G"
 *   insn=0x00000000005468B8 string=0x00000000005468BC "B "
 *   insn=0x00000000005468BC string=0x00000000005468C0 "A"
 *   insn=0x00000000005468C0 string=0x00000000005468C4 "#"
 *   insn=0x00000000005468C4 string=0x00000000005468C8 "C"
 *   insn=0x00000000005468D4 string=0x00000000005468D8 "#"
 *   insn=0x00000000005468D8 string=0x00000000005468DC "C"
 *   insn=0x00000000005468E8 string=0x00000000005468EC "a"
 *   insn=0x00000000005468FC string=0x0000000000546900 "t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__usercall sub_546758@<X0>(_QWORD *a1@<X0>, _QWORD *a2@<X8>)
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
  v4 = a1[7];
  if ( !v4 )
  {
    sub_56A6A8(a2);
    return a2;
  }
  v5 = a1[5];
  v6 = (_BYTE *)a1[6];
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

