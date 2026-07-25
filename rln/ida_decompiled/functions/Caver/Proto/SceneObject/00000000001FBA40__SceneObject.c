/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBA40
 * Mangled: ._ZN5Caver5Proto11SceneObjectC2Ev
 * Demangled: Caver::Proto::SceneObject::SceneObject(void)
 *
 * Callers: 2
 *   0x00000000004601F8  Caver::ObjectTemplate::SaveToProtobufMessage(Caver::Proto::ObjectTemplate *)
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000002FE04C  Caver::Proto::ObjectLibrary::GetTypeName(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FBA44 string=0x00000000002FE0A4 ""
 *   insn=0x00000000001FBA48 string=0x00000000001FBA4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SceneObject::SceneObject(Caver::Proto::SceneObject *this)
{
  JUMPOUT(0x2FE0A4);
}

