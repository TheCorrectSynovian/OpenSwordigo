/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3FF0
 * Mangled: ._ZSt10unexpectedv
 * Demangled: std::unexpected(void)
 *
 * Callers: 1
 *   0x000000000051D9B4  __gxx_personality_v0
 *
 * Callees: 1
 *   0x000000000051E094  std::unexpected(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3FF8 string=0x00000000001F3FFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __noreturn std::unexpected(void)
{
  _ZSt10unexpectedv();
}

