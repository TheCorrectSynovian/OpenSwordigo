/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005459D8
 * Mangled: sub_5459D8
 * Demangled: sub_5459D8
 *
 * Callers: 6
 *   0x00000000003C1890  Caver::PlayerProfile::FormattedTimePlayed(double,bool)
 *   0x00000000003CAB34  Caver::DebugInfoOverlay::Toggle(void)
 *   0x00000000003CC348  Caver::DebugInfoOverlay::FormatByteSize(int)
 *   0x0000000000488208  Caver::BindingValue::ParseFromString(std::string const&,Caver::BindingValueType)
 *   0x00000000004D56A4  sub_4D56A4
 *   0x00000000004D5CF4  sub_4D5CF4
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
 * Referenced strings: 35
 *   insn=0x00000000005459F0 string=0x00000000005459F4 "b"
 *   insn=0x00000000005459F4 string=0x00000000005459F8 "B`"
 *   insn=0x0000000000545A0C string=0x0000000000545A10 "?"
 *   insn=0x0000000000545A14 string=0x0000000000545A18 "?"
 *   insn=0x0000000000545A1C string=0x0000000000545A20 "`"
 *   insn=0x0000000000545A24 string=0x0000000000545A2C "A~"
 *   insn=0x0000000000545A24 string=0x000000000059E2E8 "basic_string::_S_construct null not valid"
 *   insn=0x0000000000545A30 string=0x0000000000545A34 "`"
 *   insn=0x0000000000545A40 string=0x0000000000545A48 ":~"
 *   insn=0x0000000000545A68 string=0x0000000000545A6C "s"
 *   insn=0x0000000000545A6C string=0x0000000000545A70 "@`"
 *   insn=0x0000000000545A94 string=0x0000000000545A98 ""
 *   insn=0x0000000000545AB0 string=0x0000000000545AB4 "s"
 *   insn=0x0000000000545AB4 string=0x0000000000545AB8 "@`"
 *   insn=0x0000000000545AC4 string=0x0000000000545AC8 "!<G"
 *   insn=0x0000000000545AC8 string=0x0000000000545ACC "A"
 *   insn=0x0000000000545ACC string=0x0000000000545AD0 "B "
 *   insn=0x0000000000545ACC string=0x0000000000545B54 "A"
 *   insn=0x0000000000545AD0 string=0x0000000000545AD4 "A"
 *   insn=0x0000000000545AD4 string=0x0000000000545AD8 "#"
 *   insn=0x0000000000545AD8 string=0x0000000000545ADC "C"
 *   insn=0x0000000000545AE0 string=0x0000000000545AE4 "?"
 *   insn=0x0000000000545AEC string=0x0000000000545AF0 "-"
 *   insn=0x0000000000545AF8 string=0x0000000000545AFC "a "
 *   insn=0x0000000000545B0C string=0x0000000000545B10 "s"
 *   insn=0x0000000000545B18 string=0x0000000000545B1C "`"
 *   insn=0x0000000000545B28 string=0x0000000000545B2C "f"
 *   insn=0x0000000000545B30 string=0x0000000000545B34 "!<G"
 *   insn=0x0000000000545B38 string=0x0000000000545B3C "B "
 *   insn=0x0000000000545B3C string=0x0000000000545B40 "A"
 *   insn=0x0000000000545B40 string=0x0000000000545B44 "#"
 *   insn=0x0000000000545B44 string=0x0000000000545B48 "C"
 *   insn=0x0000000000545B54 string=0x0000000000545B58 "#"
 *   insn=0x0000000000545B58 string=0x0000000000545B5C "C"
 *   insn=0x0000000000545B68 string=0x0000000000545B6C "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__usercall sub_5459D8@<X0>(_QWORD *a1@<X0>, _QWORD *a2@<X8>)
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
  v4 = a1[5];
  if ( !v4 )
  {
    sub_56A6A8(a2);
    return a2;
  }
  v5 = a1[3];
  v6 = (_BYTE *)a1[4];
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

