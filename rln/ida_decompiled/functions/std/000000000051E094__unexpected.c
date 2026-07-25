/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E094
 * Mangled: _ZSt10unexpectedv
 * Demangled: std::unexpected(void)
 *
 * Callers: 1
 *   0x00000000001F3FF0  std::unexpected(void)
 *
 * Callees: 2
 *   0x00000000001F6540  __cxxabiv1::__unexpected(void (*)(void))
 *   0x0000000000203170  std::get_unexpected(void)
 *
 * Referenced strings: 3
 *   insn=0x000000000051E098 string=0x000000000051E09C "5"
 *   insn=0x000000000051E09C string=0x000000000051E0A0 "(a"
 *   insn=0x000000000051E0A0 string=0x00000000001F6540 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn std::unexpected(void)
{
  void (*unexpected)(void); // x0

  unexpected = (void (*)(void))std::get_unexpected();
  __cxxabiv1::__unexpected(unexpected);
}

