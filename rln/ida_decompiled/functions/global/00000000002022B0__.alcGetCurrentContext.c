/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002022B0
 * Mangled: .alcGetCurrentContext
 * Demangled: .alcGetCurrentContext
 *
 * Callers: 1
 *   0x000000000047E774  Caver::AudioSystem::Shutdown(void)
 *
 * Callees: 1
 *   0x00000000006FEC18  alcGetCurrentContext
 *
 * Referenced strings: 1
 *   insn=0x00000000002022B8 string=0x00000000002022BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 alcGetCurrentContext()
{
  return alcGetCurrentContext();
}

