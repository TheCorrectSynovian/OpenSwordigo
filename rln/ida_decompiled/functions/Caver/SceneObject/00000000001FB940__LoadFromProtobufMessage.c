/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB940
 * Mangled: ._ZN5Caver11SceneObject23LoadFromProtobufMessageERKNS_5Proto11SceneObjectE
 * Demangled: Caver::SceneObject::LoadFromProtobufMessage(Caver::Proto::SceneObject const&)
 *
 * Callers: 2
 *   0x00000000004601B0  Caver::ObjectTemplate::LoadFromProtobufMessage(Caver::Proto::ObjectTemplate const&)
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000004701FC  Caver::SceneObject::Clone(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB948 string=0x00000000001FB94C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::SceneObject::LoadFromProtobufMessage()
{
  JUMPOUT(0x47049C);
}

