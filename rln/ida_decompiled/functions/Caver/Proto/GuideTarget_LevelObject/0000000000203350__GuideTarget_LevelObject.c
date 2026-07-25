/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203350
 * Mangled: ._ZN5Caver5Proto23GuideTarget_LevelObjectC2Ev
 * Demangled: Caver::Proto::GuideTarget_LevelObject::GuideTarget_LevelObject(void)
 *
 * Callers: 1
 *   0x00000000003BA46C  Caver::GuideTarget::LoadFromProtobufMessage(Caver::Proto::GuideTarget const&)
 *
 * Callees: 1
 *   0x00000000002E33C8  Caver::Proto::GuideTarget_LevelObject::GuideTarget_LevelObject(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203354 string=0x00000000002E33C8 " "
 *   insn=0x0000000000203358 string=0x000000000020335C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::GuideTarget_LevelObject::GuideTarget_LevelObject(
        Caver::Proto::GuideTarget_LevelObject *this)
{
  return _ZN5Caver5Proto23GuideTarget_LevelObjectC2Ev(this);
}

