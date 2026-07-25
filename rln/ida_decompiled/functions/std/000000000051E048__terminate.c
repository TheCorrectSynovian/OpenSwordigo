/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E048
 * Mangled: _ZSt9terminatev
 * Demangled: std::terminate(void)
 *
 * Callers: 3
 *   0x0000000000203770  std::terminate(void)
 *   0x000000000051E068  std::set_unexpected(void (*)(void))
 *   0x000000000051E084  std::get_unexpected(void)
 *
 * Callees: 2
 *   0x00000000001FE1D0  __cxxabiv1::__terminate(void (*)(void))
 *   0x0000000000201950  std::get_terminate(void)
 *
 * Referenced strings: 2
 *   insn=0x000000000051E04C string=0x000000000051E050 "@"
 *   insn=0x000000000051E050 string=0x000000000051E054 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn std::terminate(void)
{
  void (*terminate)(void); // x0

  terminate = (void (*)(void))std::get_terminate();
  __cxxabiv1::__terminate(terminate);
}

