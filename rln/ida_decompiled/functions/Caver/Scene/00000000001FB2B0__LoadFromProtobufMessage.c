/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB2B0
 * Mangled: ._ZN5Caver5Scene23LoadFromProtobufMessageERKNS_5Proto5SceneE
 * Demangled: Caver::Scene::LoadFromProtobufMessage(Caver::Proto::Scene const&)
 *
 * Callers: 1
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB2B8 string=0x00000000001FB2BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Scene::LoadFromProtobufMessage(Caver::Scene *this, const Caver::Proto::Scene *a2)
{
  JUMPOUT(0x463824);
}

