/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202170
 * Mangled: ._ZNK5Caver11SceneObject21SaveToProtobufMessageEPNS_5Proto11SceneObjectE
 * Demangled: Caver::SceneObject::SaveToProtobufMessage(Caver::Proto::SceneObject *)
 *
 * Callers: 2
 *   0x00000000004601F8  Caver::ObjectTemplate::SaveToProtobufMessage(Caver::Proto::ObjectTemplate *)
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000004701FC  Caver::SceneObject::Clone(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202178 string=0x000000000020217C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SceneObject::SaveToProtobufMessage(Caver::SceneObject *this, Caver::Proto::SceneObject *a2)
{
  JUMPOUT(0x47070C);
}

