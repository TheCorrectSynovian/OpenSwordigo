/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E068
 * Mangled: _ZSt14set_unexpectedPFvvE
 * Demangled: std::set_unexpected(void (*)(void))
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000051E048  std::terminate(void)
 *
 * Referenced strings: 3
 *   insn=0x000000000051E06C string=0x000000000051E070 "!"
 *   insn=0x000000000051E070 string=0x000000000051E074 " "
 *   insn=0x000000000051E074 string=0x000000000051E078 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall std::set_unexpected(void (*a1)(void))
{
  unsigned __int64 result; // x0

  do
    result = __ldaxr((unsigned __int64 *)&__cxxabiv1::__unexpected_handler);
  while ( __stlxr((unsigned __int64)a1, (unsigned __int64 *)&__cxxabiv1::__unexpected_handler) );
  return result;
}

