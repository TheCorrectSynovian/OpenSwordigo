/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E6CC
 * Mangled: __cxa_deleted_virtual
 * Demangled: __cxa_deleted_virtual
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FF100  .write
 *   0x0000000000203770  std::terminate(void)
 *
 * Referenced strings: 4
 *   insn=0x000000000051E6D0 string=0x000000000059D030 "deleted virtual method called\n"
 *   insn=0x000000000051E6D8 string=0x000000000051E6DC "!"
 *   insn=0x000000000051E6DC string=0x000000000051E6E0 "@"
 *   insn=0x000000000051E6E4 string=0x000000000051E6E8 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn _cxa_deleted_virtual(void)
{
  write(2, "deleted virtual method called\n", 0x1Eu);
  std::terminate();
}

