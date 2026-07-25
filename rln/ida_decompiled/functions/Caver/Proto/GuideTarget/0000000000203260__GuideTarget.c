/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203260
 * Mangled: ._ZN5Caver5Proto11GuideTargetC2Ev
 * Demangled: Caver::Proto::GuideTarget::GuideTarget(void)
 *
 * Callers: 1
 *   0x00000000003B040C  Caver::GameData::SaveToProtobufMessage(Caver::Proto::GameData *)
 *
 * Callees: 1
 *   0x00000000002E3C40  Caver::Proto::GuideTarget_LevelObject::GetTypeName(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203264 string=0x00000000002E3C98 "@"
 *   insn=0x0000000000203268 string=0x000000000020326C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GuideTarget::GuideTarget(Caver::Proto::GuideTarget *this)
{
  JUMPOUT(0x2E3C98);
}

