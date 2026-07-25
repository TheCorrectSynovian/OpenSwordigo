/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9550
 * Mangled: ._ZN5Caver11AudioSystem31EndAudioInterruptionIfNecessaryEv
 * Demangled: Caver::AudioSystem::EndAudioInterruptionIfNecessary(void)
 *
 * Callers: 2
 *   0x000000000047ED10  Caver::AudioSystem::AudioInterruptionDidEnd(void)
 *   0x000000000047EF74  Caver::AudioSystem::SetCanEndAudioInterruption(bool)
 *
 * Callees: 1
 *   0x000000000047ED50  Caver::AudioSystem::EndAudioInterruptionIfNecessary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9558 string=0x00000000001F955C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AudioSystem::EndAudioInterruptionIfNecessary(Caver::AudioSystem *this)
{
  return _ZN5Caver11AudioSystem31EndAudioInterruptionIfNecessaryEv(this);
}

