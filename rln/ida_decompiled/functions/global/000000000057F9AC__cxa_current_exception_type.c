/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057F9AC
 * Mangled: __cxa_current_exception_type
 * Demangled: __cxa_current_exception_type
 *
 * Callers: 1
 *   0x00000000001F7A90  .__cxa_current_exception_type
 *
 * Callees: 1
 *   0x00000000001FE3A0  .__cxa_get_globals
 *
 * Referenced strings: 2
 *   insn=0x000000000057F9B0 string=0x000000000057F9B4 "{"
 *   insn=0x000000000057F9B8 string=0x000000000057F9BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

struct type_info *_cxa_current_exception_type(void)
{
  __int64 v0; // x0

  v0 = *(_QWORD *)__cxa_get_globals();
  if ( !v0 )
    return 0;
  if ( (*(_QWORD *)(v0 + 80) & 1) != 0 )
    v0 = *(_QWORD *)v0 - 112LL;
  return *(struct type_info **)v0;
}

