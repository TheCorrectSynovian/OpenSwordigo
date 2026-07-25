/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9170
 * Mangled: ._ZN5Caver5Proto23GuideTarget_LevelObjectD2Ev
 * Demangled: Caver::Proto::GuideTarget_LevelObject::~GuideTarget_LevelObject()
 *
 * Callers: 1
 *   0x00000000003BA46C  Caver::GuideTarget::LoadFromProtobufMessage(Caver::Proto::GuideTarget const&)
 *
 * Callees: 1
 *   0x00000000002E3428  Caver::Proto::GuideTarget_LevelObject::GuideTarget_LevelObject(Caver::Proto::GuideTarget_LevelObject const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9178 string=0x00000000001F917C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GuideTarget_LevelObject::~GuideTarget_LevelObject(
        Caver::Proto::GuideTarget_LevelObject *this)
{
  JUMPOUT(0x2E35E4);
}

