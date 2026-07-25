/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053A410
 * Mangled: sub_53A410
 * Demangled: sub_53A410
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000539A80  sub_539A80
 *
 * Referenced strings: 4
 *   insn=0x000000000053A410 string=0x000000000053A414 "H\t"
 *   insn=0x000000000053A434 string=0x000000000053A438 ""
 *   insn=0x000000000053A448 string=0x000000000053A44C "u"
 *   insn=0x000000000053A458 string=0x000000000053A45C "4|@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_53A410(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        _QWORD *a8)
{
  int v8; // w21
  _QWORD *result; // x0
  __int64 v12; // [xsp+48h] [xbp+48h] BYREF

  v8 = *(_DWORD *)(a6 + 24);
  *(_DWORD *)(a6 + 24) = v8 & 0xFFFFFFB5 | 8;
  result = sub_539A80(a1, a2, a3, a4, a5, a6, a7, &v12);
  *(_DWORD *)(a6 + 24) = v8;
  *a8 = v12;
  return result;
}

