/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000542A14
 * Mangled: sub_542A14
 * Demangled: sub_542A14
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000005652C8  sub_5652C8
 *
 * Referenced strings: 8
 *   insn=0x0000000000542A34 string=0x0000000000542A38 "`"
 *   insn=0x0000000000542A3C string=0x0000000000542A40 "u"
 *   insn=0x0000000000542A3C string=0x0000000000542A58 "`z@"
 *   insn=0x0000000000542A64 string=0x0000000000542A68 "B(@"
 *   insn=0x0000000000542A68 string=0x0000000000542A6C "@"
 *   insn=0x0000000000542A6C string=0x0000000000542A70 "u"
 *   insn=0x0000000000542A70 string=0x0000000000542A74 " "
 *   insn=0x0000000000542A74 string=0x0000000000542A78 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_542A14(_QWORD *result, int a2)
{
  _QWORD *v2; // x20
  char *v4; // x19
  __int64 v5; // x0

  v2 = result;
  v4 = (char *)result + *(_QWORD *)(*result - 24LL);
  if ( v4[228] )
  {
    *((_DWORD *)v4 + 56) = a2;
  }
  else
  {
    v5 = *((_QWORD *)v4 + 30);
    if ( !v5 )
      sub_5652C8(0);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 80LL))(v5, 32);
    *((_DWORD *)v4 + 56) = a2;
    v4[228] = 1;
    return v2;
  }
  return result;
}

