/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002039D0
 * Mangled: ._ZNK5Caver5Scene21SaveToProtobufMessageEPNS_5Proto5SceneE
 * Demangled: Caver::Scene::SaveToProtobufMessage(Caver::Proto::Scene *)
 *
 * Callers: 1
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002039D8 string=0x00000000002039DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Scene::SaveToProtobufMessage(Caver::Scene *this, Caver::Proto::Scene *a2)
{
  JUMPOUT(0x463D0C);
}

