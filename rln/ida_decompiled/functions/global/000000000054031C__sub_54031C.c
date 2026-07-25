/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054031C
 * Mangled: sub_54031C
 * Demangled: sub_54031C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x000000000051FEA0  sub_51FEA0
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 9
 *   insn=0x000000000054033C string=0x0000000000540340 "`"
 *   insn=0x0000000000540344 string=0x0000000000540348 "u"
 *   insn=0x0000000000540344 string=0x0000000000540360 "vz@"
 *   insn=0x0000000000540360 string=0x0000000000540364 "V"
 *   insn=0x000000000054036C string=0x000000000054038C "u"
 *   insn=0x0000000000540380 string=0x0000000000540384 "B"
 *   insn=0x0000000000540384 string=0x0000000000540388 "@"
 *   insn=0x000000000054038C string=0x0000000000540390 " "
 *   insn=0x0000000000540390 string=0x0000000000540394 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_54031C(
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

