/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201AC0
 * Mangled: ._ZNK5Caver16SceneObjectGroup21SaveToProtobufMessageEPNS_5Proto16SceneObjectGroupE
 * Demangled: Caver::SceneObjectGroup::SaveToProtobufMessage(Caver::Proto::SceneObjectGroup *)
 *
 * Callers: 1
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000004752D4  Caver::SceneObjectGroup::SaveToProtobufMessage(Caver::Proto::SceneObjectGroup *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201AC8 string=0x0000000000201ACC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObjectGroup::SaveToProtobufMessage(
        Caver::SceneObjectGroup *this,
        Caver::Proto::SceneObjectGroup *a2)
{
  return _ZNK5Caver16SceneObjectGroup21SaveToProtobufMessageEPNS_5Proto16SceneObjectGroupE(this, a2);
}

