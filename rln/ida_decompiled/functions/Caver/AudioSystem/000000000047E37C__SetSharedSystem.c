/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047E37C
 * Mangled: _ZN5Caver11AudioSystem15SetSharedSystemEPS0_
 * Demangled: Caver::AudioSystem::SetSharedSystem(Caver::AudioSystem*)
 *
 * Callers: 2
 *   0x00000000001FEB60  Caver::AudioSystem::SetSharedSystem(Caver::AudioSystem*)
 *   0x000000000047E32C  Caver::AudioSystem::sharedSystem(void)
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7E00  Caver::AudioSystem::~AudioSystem()
 *   0x000000000047E3D4  Caver::AudioSystem::AudioSystem(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000047E388 string=0x000000000047E38C "U"
 *   insn=0x000000000047E3A0 string=0x00000000001F7E00 "0'"
 *   insn=0x000000000047E3A8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000047E3CC string=0x000000000047E3D0 "="
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::AudioSystem::SetSharedSystem(Caver::AudioSystem *this, Caver::AudioSystem *a2)
{
  void *v2; // x20

  v2 = (void *)qword_6E9D78;
  if ( qword_6E9D78 )
  {
    Caver::AudioSystem::~AudioSystem((Caver::AudioSystem *)qword_6E9D78);
    operator delete(v2);
  }
  qword_6E9D78 = (__int64)this;
}

