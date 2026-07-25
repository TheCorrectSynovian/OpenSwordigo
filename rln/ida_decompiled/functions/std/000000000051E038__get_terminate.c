/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E038
 * Mangled: _ZSt13get_terminatev
 * Demangled: std::get_terminate(void)
 *
 * Callers: 1
 *   0x0000000000201950  std::get_terminate(void)
 *
 * Callees: 1
 *   0x00000000005701B8  __gnu_cxx::__verbose_terminate_handler(void)
 *
 * Referenced strings: 1
 *   insn=0x000000000051E040 string=0x00000000005701B8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 std::get_terminate(void)
{
  return atomic_load((unsigned __int64 *)&__cxxabiv1::__terminate_handler);
}

