/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055C3D8
 * Mangled: sub_55C3D8
 * Demangled: sub_55C3D8
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000055BABC  sub_55BABC
 *
 * Referenced strings: 4
 *   insn=0x000000000055C3D8 string=0x000000000055C3DC "H\t"
 *   insn=0x000000000055C3FC string=0x000000000055C400 ""
 *   insn=0x000000000055C410 string=0x000000000055C414 "u"
 *   insn=0x000000000055C420 string=0x000000000055C424 "4|@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_55C3D8(
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
  result = sub_55BABC(a1, a2, a3, a4, a5, a6, a7, &v12);
  *(_DWORD *)(a6 + 24) = v8;
  *a8 = v12;
  return result;
}

