/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9BC0
 * Mangled: .alcMakeContextCurrent
 * Demangled: .alcMakeContextCurrent
 *
 * Callers: 4
 *   0x000000000047E774  Caver::AudioSystem::Shutdown(void)
 *   0x000000000047EB04  Caver::AudioSystem::AudioInterruptionDidBegin(void)
 *   0x000000000047ED50  Caver::AudioSystem::EndAudioInterruptionIfNecessary(void)
 *   0x000000000047EFBC  Caver::AudioSystem::CreateDevice(void)
 *
 * Callees: 1
 *   0x00000000006FE858  alcMakeContextCurrent
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9BC8 string=0x00000000001F9BCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 alcMakeContextCurrent()
{
  return alcMakeContextCurrent();
}

