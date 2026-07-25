/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000581AB8
 * Mangled: sub_581AB8
 * Demangled: sub_581AB8
 *
 * Callers: 2
 *   0x000000000051D2E4  __cxa_end_catch
 *   0x000000000051D484  sub_51D484
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x0000000000581AC8 string=0x0000000000581ACC " "
 *   insn=0x0000000000581ACC string=0x0000000000581AD0 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_581AB8(__int64 result)
{
  __int64 (__fastcall *v1)(__int64, __int64); // x2

  v1 = *(__int64 (__fastcall **)(__int64, __int64))(result + 8);
  if ( v1 )
    return v1(1, result);
  return result;
}

