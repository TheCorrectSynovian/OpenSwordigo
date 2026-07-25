/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047EF74
 * Mangled: _ZN5Caver11AudioSystem26SetCanEndAudioInterruptionEb
 * Demangled: Caver::AudioSystem::SetCanEndAudioInterruption(bool)
 *
 * Callers: 1
 *   0x000000000047ED50  Caver::AudioSystem::EndAudioInterruptionIfNecessary(void)
 *
 * Callees: 2
 *   0x00000000001F4EC0  Caver::AudioSystem::CreateDevice(void)
 *   0x00000000001F9550  Caver::AudioSystem::EndAudioInterruptionIfNecessary(void)
 *
 * Referenced strings: 8
 *   insn=0x000000000047EF80 string=0x000000000047EF84 "("
 *   insn=0x000000000047EF84 string=0x000000000047EF88 "h"
 *   insn=0x000000000047EF88 string=0x000000000047EF8C "!"
 *   insn=0x000000000047EF8C string=0x000000000047EF90 "h"
 *   insn=0x000000000047EF90 string=0x000000000047EF94 "h"
 *   insn=0x000000000047EF9C string=0x00000000001F4EC0 "P'"
 *   insn=0x000000000047EFA8 string=0x000000000047EFAC "i"
 *   insn=0x000000000047EFAC string=0x00000000001F9550 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AudioSystem::SetCanEndAudioInterruption(__int64 this, char a2)
{
  Caver::AudioSystem *v2; // x19

  v2 = (Caver::AudioSystem *)this;
  *(_BYTE *)(this + 129) = a2 & 1;
  if ( (a2 & 1) != 0 )
  {
    if ( !*(_QWORD *)(this + 8) )
      Caver::AudioSystem::CreateDevice((Caver::AudioSystem *)this);
    return Caver::AudioSystem::EndAudioInterruptionIfNecessary(v2);
  }
  return this;
}

