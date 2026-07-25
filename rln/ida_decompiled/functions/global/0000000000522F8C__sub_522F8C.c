/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000522F8C
 * Mangled: sub_522F8C
 * Demangled: sub_522F8C
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x000000000051FEA0  sub_51FEA0
 *   0x0000000000528E58  sub_528E58
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 7
 *   insn=0x0000000000522FB0 string=0x0000000000522FB4 "S"
 *   insn=0x0000000000522FB4 string=0x0000000000522FB8 "`"
 *   insn=0x0000000000522FBC string=0x0000000000522FC0 "c"
 *   insn=0x0000000000522FE4 string=0x0000000000522FE8 "c"
 *   insn=0x0000000000522FEC string=0x0000000000522FF0 "A"
 *   insn=0x0000000000522FF0 string=0x0000000000522FF4 "c"
 *   insn=0x0000000000522FF4 string=0x0000000000522FF8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_522F8C(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  char *v10; // x0
  _BYTE *v11; // x19
  __int64 v12; // x3
  char v14; // [xsp+0h] [xbp+0h]

  v10 = (char *)a1 + *(_QWORD *)(*a1 - 24LL);
  v11 = (_BYTE *)*((_QWORD *)v10 + 30);
  if ( !v11 )
    sub_5652C8(v10);
  if ( v11[56] )
    return sub_528E58(a1, a2, a3, (unsigned __int8)v11[67]);
  sub_51FEA0(v11, a2, a3, a4, a5, a6, a7, a8, v14);
  v12 = (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v11 + 48LL))(v11, 10);
  return sub_528E58(a1, a2, a3, v12);
}

