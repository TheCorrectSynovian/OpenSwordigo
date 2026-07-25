/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203080
 * Mangled: .alcDestroyContext
 * Demangled: .alcDestroyContext
 *
 * Callers: 1
 *   0x000000000047E774  Caver::AudioSystem::Shutdown(void)
 *
 * Callees: 1
 *   0x00000000006FEC88  alcDestroyContext
 *
 * Referenced strings: 1
 *   insn=0x0000000000203088 string=0x000000000020308C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 alcDestroyContext()
{
  return alcDestroyContext();
}

