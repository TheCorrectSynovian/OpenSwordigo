/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047ED10
 * Mangled: _ZN5Caver11AudioSystem23AudioInterruptionDidEndEv
 * Demangled: Caver::AudioSystem::AudioInterruptionDidEnd(void)
 *
 * Callers: 3
 *   0x00000000001F87C0  Caver::AudioSystem::AudioInterruptionDidEnd(void)
 *   0x000000000047EB04  Caver::AudioSystem::AudioInterruptionDidBegin(void)
 *   0x000000000047F338  Caver::AudioSystem::Setup(void)
 *
 * Callees: 2
 *   0x00000000001F9550  Caver::AudioSystem::EndAudioInterruptionIfNecessary(void)
 *   0x0000000000202600  .alcResume
 *
 * Referenced strings: 4
 *   insn=0x000000000047ED1C string=0x000000000047ED20 "8"
 *   insn=0x000000000047ED20 string=0x000000000047ED24 "h"
 *   insn=0x000000000047ED28 string=0x000000000047ED2C "i"
 *   insn=0x000000000047ED40 string=0x00000000001F9550 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AudioSystem::AudioInterruptionDidEnd(Caver::AudioSystem *this)
{
  __int64 result; // x0
  int v3; // w8

  result = alcResume();
  v3 = *((unsigned __int8 *)this + 129);
  *((_BYTE *)this + 128) = 1;
  if ( v3 )
    return Caver::AudioSystem::EndAudioInterruptionIfNecessary(this);
  return result;
}

