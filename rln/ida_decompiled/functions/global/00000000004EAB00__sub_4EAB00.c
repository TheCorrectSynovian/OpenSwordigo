/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EAB00
 * Mangled: sub_4EAB00
 * Demangled: sub_4EAB00
 *
 * Callers: 1
 *   0x00000000004F5064  sub_4F5064
 *
 * Callees: 1
 *   0x00000000004EAB24  sub_4EAB24
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_4EAB00(__int64 a1)
{
  return (unsigned int)sub_4EAB24(a1, *(unsigned int *)(a1 + 80), 255) != 0;
}

