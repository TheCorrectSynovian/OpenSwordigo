/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000524E8C
 * Mangled: sub_524E8C
 * Demangled: sub_524E8C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x000000000051FEA0  sub_51FEA0
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 9
 *   insn=0x0000000000524EAC string=0x0000000000524EB0 "`"
 *   insn=0x0000000000524EB4 string=0x0000000000524EB8 "u"
 *   insn=0x0000000000524EB4 string=0x0000000000524ED0 "vz@"
 *   insn=0x0000000000524ED0 string=0x0000000000524ED4 "V"
 *   insn=0x0000000000524EDC string=0x0000000000524EFC "u"
 *   insn=0x0000000000524EF0 string=0x0000000000524EF4 "B"
 *   insn=0x0000000000524EF4 string=0x0000000000524EF8 "@"
 *   insn=0x0000000000524EFC string=0x0000000000524F00 " "
 *   insn=0x0000000000524F00 string=0x0000000000524F04 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_524E8C(
        _QWORD *result,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _QWORD *v8; // x20
  char v9; // w21
  char *v10; // x19
  _BYTE *v11; // x22
  char vars0; // [xsp+0h] [xbp+0h]

  v8 = result;
  v9 = a2;
  v10 = (char *)result + *(_QWORD *)(*result - 24LL);
  if ( v10[225] )
  {
    v10[224] = a2;
  }
  else
  {
    v11 = (_BYTE *)*((_QWORD *)v10 + 30);
    if ( !v11 )
      sub_5652C8((unsigned __int8)v10[225]);
    if ( !v11[56] )
    {
      sub_51FEA0(*((_BYTE **)v10 + 30), a2, a3, a4, a5, a6, a7, a8, vars0);
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v11 + 48LL))(v11, 32);
    }
    v10[224] = v9;
    v10[225] = 1;
    return v8;
  }
  return result;
}

