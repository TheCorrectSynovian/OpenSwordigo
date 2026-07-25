/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F59B0
 * Mangled: ._ZN5Caver5Proto5SceneC2Ev
 * Demangled: Caver::Proto::Scene::Scene(void)
 *
 * Callers: 1
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000003011C8  Caver::Proto::SceneObjectGroup::GetTypeName(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F59B4 string=0x0000000000301220 "("
 *   insn=0x00000000001F59B8 string=0x00000000001F59BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Scene::Scene(Caver::Proto::Scene *this)
{
  JUMPOUT(0x301220);
}

