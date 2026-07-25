/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C3E28
 * Mangled: _ZN5Caver15StatePropertiesC2Ev
 * Demangled: Caver::StateProperties::StateProperties(void)
 *
 * Callers: 1
 *   0x00000000001FFFD0  Caver::StateProperties::StateProperties(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::StateProperties::StateProperties(Caver::StateProperties *this)
{
  _QWORD *result; // x0

  *((_QWORD *)this + 1) = 0;
  result = (_QWORD *)((char *)this + 8);
  result[1] = 0;
  result[2] = result;
  result[3] = result;
  result[4] = 0;
  return result;
}

