/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8230
 * Mangled: ._ZNK5Caver11GuideTarget21SaveToProtobufMessageEPNS_5Proto11GuideTargetE
 * Demangled: Caver::GuideTarget::SaveToProtobufMessage(Caver::Proto::GuideTarget *)
 *
 * Callers: 1
 *   0x00000000003B040C  Caver::GameData::SaveToProtobufMessage(Caver::Proto::GameData *)
 *
 * Callees: 1
 *   0x00000000003BA46C  Caver::GuideTarget::LoadFromProtobufMessage(Caver::Proto::GuideTarget const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8238 string=0x00000000001F823C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GuideTarget::SaveToProtobufMessage()
{
  JUMPOUT(0x3BA578);
}

