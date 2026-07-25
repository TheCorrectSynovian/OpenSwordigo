/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B27A4
 * Mangled: _ZN5Caver7Vector2C2ERKNS_7Vector3E
 * Demangled: Caver::Vector2::Vector2(Caver::Vector3 const&)
 *
 * Callers: 1
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000004B27A4 string=0x00000000004B27A8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Vector2::Vector2(_QWORD *result, _QWORD *a2)
{
  *result = *a2;
  return result;
}

