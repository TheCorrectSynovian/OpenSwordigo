/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000583014
 * Mangled: sub_583014
 * Demangled: sub_583014
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F5E70  .malloc
 *   0x0000000000583008  sub_583008
 *
 * Referenced strings: 2
 *   insn=0x0000000000583020 string=0x0000000000583024 "!"
 *   insn=0x0000000000583030 string=0x00000000001F5E70 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_583014(__int64 *result)
{
  __int64 *v1; // x19
  _QWORD *v2; // x0

  if ( *(_DWORD *)result )
  {
    v1 = result;
    v2 = malloc(0x30u);
    return sub_583008(v1, v2);
  }
  return result;
}

