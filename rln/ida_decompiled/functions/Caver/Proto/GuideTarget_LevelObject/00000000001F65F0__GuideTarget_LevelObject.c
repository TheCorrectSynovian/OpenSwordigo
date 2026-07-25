/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F65F0
 * Mangled: ._ZN5Caver5Proto23GuideTarget_LevelObjectC2ERKS1_
 * Demangled: Caver::Proto::GuideTarget_LevelObject::GuideTarget_LevelObject(Caver::Proto::GuideTarget_LevelObject const&)
 *
 * Callers: 1
 *   0x00000000003BA46C  Caver::GuideTarget::LoadFromProtobufMessage(Caver::Proto::GuideTarget const&)
 *
 * Callees: 1
 *   0x00000000002E3428  Caver::Proto::GuideTarget_LevelObject::GuideTarget_LevelObject(Caver::Proto::GuideTarget_LevelObject const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F65F8 string=0x00000000001F65FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::GuideTarget_LevelObject::GuideTarget_LevelObject(
        Caver::Proto::GuideTarget_LevelObject *this,
        const Caver::Proto::GuideTarget_LevelObject *a2)
{
  return _ZN5Caver5Proto23GuideTarget_LevelObjectC2ERKS1_(this, a2);
}

