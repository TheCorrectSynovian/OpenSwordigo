/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047E32C
 * Mangled: _ZN5Caver11AudioSystem12sharedSystemEv
 * Demangled: Caver::AudioSystem::sharedSystem(void)
 *
 * Callers: 1
 *   0x00000000001FDF30  Caver::AudioSystem::sharedSystem(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FAC00  Caver::AudioSystem::AudioSystem(void)
 *   0x000000000047E37C  Caver::AudioSystem::SetSharedSystem(Caver::AudioSystem*)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x000000000047E334 string=0x000000000047E338 "T"
 *   insn=0x000000000047E348 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000047E34C string=0x000000000047E350 ","
 *   insn=0x000000000047E350 string=0x00000000001FAC00 "0'"
 *   insn=0x000000000047E370 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000047E374 string=0x000000000047E378 "S"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::AudioSystem *__fastcall Caver::AudioSystem::sharedSystem(Caver::AudioSystem *this)
{
  Caver::AudioSystem *v1; // x19

  v1 = (Caver::AudioSystem *)qword_6E9D78;
  if ( !qword_6E9D78 )
  {
    v1 = (Caver::AudioSystem *)operator new(0x88u);
    Caver::AudioSystem::AudioSystem(v1);
    qword_6E9D78 = (__int64)v1;
  }
  return v1;
}

