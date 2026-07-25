/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052A988
 * Mangled: sub_52A988
 * Demangled: sub_52A988
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x000000000052A988 string=0x000000000052A98C """
 *   insn=0x000000000052A98C string=0x000000000052A990 "#"
 *   insn=0x000000000052A990 string=0x000000000052A994 "#"
 *   insn=0x000000000052A998 string=0x000000000052A99C """
 *   insn=0x000000000052A9A0 string=0x000000000052A9A4 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_52A988(_QWORD *result)
{
  _QWORD *v1; // x1
  _QWORD *v2; // x2

  v1 = result;
  do
  {
    v2 = (_QWORD *)*v1;
    *v1 = v1[1];
    v1[1] = v2;
    v1 = v2;
  }
  while ( result != v2 );
  return result;
}

