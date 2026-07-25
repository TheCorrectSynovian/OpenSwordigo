/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E6AC
 * Mangled: __cxa_pure_virtual
 * Demangled: __cxa_pure_virtual
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FF100  .write
 *   0x0000000000203770  std::terminate(void)
 *
 * Referenced strings: 5
 *   insn=0x000000000051E6B0 string=0x000000000051E6B4 "b"
 *   insn=0x000000000051E6B0 string=0x000000000059D010 "pure virtual method called\n"
 *   insn=0x000000000051E6B8 string=0x000000000051E6BC "!@"
 *   insn=0x000000000051E6BC string=0x000000000051E6C0 "@"
 *   insn=0x000000000051E6C4 string=0x000000000051E6C8 "*"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn _cxa_pure_virtual(void)
{
  write(2, "pure virtual method called\n", 0x1Bu);
  std::terminate();
}

