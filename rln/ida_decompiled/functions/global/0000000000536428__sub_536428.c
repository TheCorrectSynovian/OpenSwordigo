/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000536428
 * Mangled: sub_536428
 * Demangled: sub_536428
 *
 * Callers: 1
 *   0x0000000000536300  sub_536300
 *
 * Callees: 12
 *   0x0000000000201760  .memcpy
 *   0x000000000051FEA0  sub_51FEA0
 *   0x000000000052B45C  sub_52B45C
 *   0x000000000052D354  sub_52D354
 *   0x00000000005347F0  sub_5347F0
 *   0x000000000053557C  sub_53557C
 *   0x0000000000536618  sub_536618
 *   0x0000000000568EA8  sub_568EA8
 *   0x0000000000569650  sub_569650
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 30
 *   insn=0x0000000000536434 string=0x0000000000536438 "s"
 *   insn=0x0000000000536468 string=0x000000000053646C "`"
 *   insn=0x0000000000536494 string=0x00000000005364EC "$"
 *   insn=0x00000000005364AC string=0x00000000005364B0 "U"
 *   insn=0x00000000005364B8 string=0x00000000005364BC "s"
 *   insn=0x00000000005364BC string=0x00000000005364C0 "@`"
 *   insn=0x00000000005364C8 string=0x0000000000536588 "a"
 *   insn=0x0000000000536500 string=0x0000000000536504 "U"
 *   insn=0x0000000000536518 string=0x000000000053651C "M"
 *   insn=0x0000000000536528 string=0x000000000053652C ":"
 *   insn=0x0000000000536538 string=0x000000000053653C "["
 *   insn=0x000000000053654C string=0x0000000000536550 "@"
 *   insn=0x0000000000536550 string=0x0000000000536554 "@"
 *   insn=0x0000000000536574 string=0x0000000000536578 "s"
 *   insn=0x0000000000536578 string=0x000000000053657C "@`"
 *   insn=0x0000000000536580 string=0x0000000000536584 "@"
 *   insn=0x0000000000536588 string=0x000000000053658C "!<G"
 *   insn=0x0000000000536590 string=0x0000000000536594 "B "
 *   insn=0x0000000000536590 string=0x00000000005365C8 "A"
 *   insn=0x0000000000536594 string=0x0000000000536598 "A"
 *   insn=0x0000000000536598 string=0x000000000053659C "#"
 *   insn=0x000000000053659C string=0x00000000005365A0 "C"
 *   insn=0x00000000005365A4 string=0x00000000005365A8 "?"
 *   insn=0x00000000005365B0 string=0x00000000005365B4 "|"
 *   insn=0x00000000005365BC string=0x00000000005365C0 "8"
 *   insn=0x00000000005365C8 string=0x00000000005365CC "#"
 *   insn=0x00000000005365CC string=0x00000000005365D0 "C"
 *   insn=0x00000000005365E0 string=0x00000000005365E4 "_,"
 *   insn=0x00000000005365F4 string=0x00000000005365F8 "s"
 *   insn=0x0000000000536600 string=0x0000000000536604 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_536428(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        _DWORD *a8,
        void **a9)
{
  int v12; // w24
  _BYTE *v13; // x23
  _QWORD *v14; // x0
  _DWORD *v15; // x2
  _QWORD *v16; // x22
  size_t v17; // x21
  char *v18; // x0
  _QWORD *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  char *v28; // x25
  void *v29; // x24
  unsigned int *v30; // x2
  int v31; // w1
  char v32; // [xsp+0h] [xbp+0h]
  void *v37; // [xsp+88h] [xbp+88h] BYREF

  v12 = a6;
  v13 = sub_52D354(a7 + 208);
  v37 = &byte_6FD2F8;
  if ( v12 )
  {
    v14 = sub_5347F0(a1, a2, a3, a4, a5, a7, a8, (__int64)&v37);
    v15 = v37;
    v16 = v14;
    v17 = *((_QWORD *)v37 - 3);
    if ( !v17 )
      goto LABEL_3;
  }
  else
  {
    v20 = sub_53557C(a1, a2, a3, a4, a5, a7, a8, (__int64)&v37);
    v15 = v37;
    v16 = v20;
    v17 = *((_QWORD *)v37 - 3);
    if ( !v17 )
      goto LABEL_3;
  }
  sub_569650(a9, v17, 0);
  v28 = (char *)v37;
  v29 = *a9;
  if ( (*((_DWORD *)*a9 - 2) & 0x80000000) == 0 )
  {
    sub_568EA8(a9);
    v29 = *a9;
  }
  if ( v13[56] == 1 )
  {
    memcpy(v29, v28, v17);
    v15 = v37;
LABEL_3:
    v18 = (char *)(v15 - 6);
    if ( v15 - 6 == (_DWORD *)&qword_6FD2E0 )
      return v16;
    goto LABEL_12;
  }
  if ( !v13[56] )
    sub_51FEA0(v13, v21, v22, v23, v24, v25, v26, v27, v32);
  (*(void (__fastcall **)(_BYTE *, char *, char *, void *))(*(_QWORD *)v13 + 56LL))(v13, v28, &v28[v17], v29);
  v15 = v37;
  v18 = (char *)v37 - 24;
  if ( (char *)v37 - 24 != (char *)&qword_6FD2E0 )
  {
LABEL_12:
    if ( &pthread_create )
    {
      v30 = v15 - 2;
      do
        v31 = __ldaxr(v30);
      while ( __stlxr(v31 - 1, v30) );
    }
    else
    {
      v31 = *(v15 - 2);
      *(v15 - 2) = v31 - 1;
    }
    if ( v31 <= 0 )
      operator delete(v18);
  }
  return v16;
}

