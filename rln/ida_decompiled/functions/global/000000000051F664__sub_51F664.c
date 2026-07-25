/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051F664
 * Mangled: sub_51F664
 * Demangled: sub_51F664
 *
 * Callers: 4
 *   0x000000000051F7D8  sub_51F7D8
 *   0x000000000051F904  sub_51F904
 *   0x000000000057121C  sub_57121C
 *   0x0000000000571470  sub_571470
 *
 * Callees: 1
 *   0x0000000000202CF0  .fileno
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_51F664(FILE **a1)
{
  return fileno(*a1);
}

