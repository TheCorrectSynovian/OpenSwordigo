/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051D468
 * Mangled: sub_51D468
 * Demangled: sub_51D468
 *
 * Callers: 1
 *   0x000000000020DEE0  sub_20DEE0
 *
 * Callees: 2
 *   0x0000000000200F30  .pthread_key_delete
 *   0x000000000051D484  sub_51D484
 *
 * Referenced strings: 1
 *   insn=0x000000000051D46C string=0x000000000051D470 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_51D468(__int64 result)
{
  if ( result )
  {
    if ( *(_BYTE *)(result + 4) )
      return pthread_key_delete(*(_DWORD *)result);
  }
  else
  {
    __break(0x3E8u);
    return sub_51D484(0);
  }
  return result;
}

