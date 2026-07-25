/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAF60
 * Mangled: ._ZN5Caver5Proto23GuideTarget_LevelObject10SharedDtorEv
 * Demangled: Caver::Proto::GuideTarget_LevelObject::SharedDtor(void)
 *
 * Callers: 2
 *   0x00000000002E3428  Caver::Proto::GuideTarget_LevelObject::GuideTarget_LevelObject(Caver::Proto::GuideTarget_LevelObject const&)
 *   0x00000000002E3774  Caver::Proto::GuideTarget_LevelObject::~GuideTarget_LevelObject()
 *
 * Callees: 1
 *   0x00000000002E3428  Caver::Proto::GuideTarget_LevelObject::GuideTarget_LevelObject(Caver::Proto::GuideTarget_LevelObject const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAF68 string=0x00000000001FAF6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GuideTarget_LevelObject::SharedDtor(Caver::Proto::GuideTarget_LevelObject *this)
{
  JUMPOUT(0x2E3630);
}

