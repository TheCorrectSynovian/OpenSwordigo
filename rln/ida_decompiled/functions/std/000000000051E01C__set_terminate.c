/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E01C
 * Mangled: _ZSt13set_terminatePFvvE
 * Demangled: std::set_terminate(void (*)(void))
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000005701B8  __gnu_cxx::__verbose_terminate_handler(void)
 *
 * Referenced strings: 4
 *   insn=0x000000000051E020 string=0x000000000051E024 "!(D"
 *   insn=0x000000000051E024 string=0x000000000051E028 " "
 *   insn=0x000000000051E028 string=0x000000000051E02C """
 *   insn=0x000000000051E028 string=0x00000000005701B8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall std::set_terminate(void (*a1)(void))
{
  unsigned __int64 result; // x0

  do
    result = __ldaxr((unsigned __int64 *)&__cxxabiv1::__terminate_handler);
  while ( __stlxr((unsigned __int64)a1, (unsigned __int64 *)&__cxxabiv1::__terminate_handler) );
  return result;
}

