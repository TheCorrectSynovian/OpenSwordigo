/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000540294
 * Mangled: sub_540294
 * Demangled: sub_540294
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x000000000051FEA0  sub_51FEA0
 *   0x000000000053F778  sub_53F778
 *   0x000000000053FF24  sub_53FF24
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 8
 *   insn=0x00000000005402B4 string=0x00000000005402B8 "`"
 *   insn=0x00000000005402BC string=0x00000000005402C0 "a"
 *   insn=0x00000000005402D0 string=0x00000000005402D4 ")"
 *   insn=0x00000000005402DC string=0x00000000005402E0 "b"
 *   insn=0x00000000005402E4 string=0x00000000005402E8 "A"
 *   insn=0x00000000005402E8 string=0x00000000005402EC "B"
 *   insn=0x00000000005402EC string=0x00000000005402F0 "@"
 *   insn=0x00000000005402F8 string=0x00000000005402FC "\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall sub_540294(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  char *v9; // x0
  _BYTE *v10; // x19
  char *v11; // x0
  unsigned __int8 v12; // w0
  char vars0; // [xsp+0h] [xbp+0h]

  v9 = (char *)a1 + *(_QWORD *)(*a1 - 24LL);
  v10 = (_BYTE *)*((_QWORD *)v9 + 30);
  if ( !v10 )
    sub_5652C8(v9);
  if ( v10[56] )
  {
    v11 = (char *)sub_53FF24(a1, v10[67]);
  }
  else
  {
    sub_51FEA0(v10, a2, a3, a4, a5, a6, a7, a8, vars0);
    v12 = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v10 + 48LL))(v10, 10);
    v11 = (char *)sub_53FF24(a1, v12);
  }
  return sub_53F778(v11);
}

