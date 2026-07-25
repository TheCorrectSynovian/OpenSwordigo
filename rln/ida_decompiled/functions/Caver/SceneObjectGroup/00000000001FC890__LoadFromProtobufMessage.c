/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC890
 * Mangled: ._ZN5Caver16SceneObjectGroup23LoadFromProtobufMessageERKNS_5Proto16SceneObjectGroupE
 * Demangled: Caver::SceneObjectGroup::LoadFromProtobufMessage(Caver::Proto::SceneObjectGroup const&)
 *
 * Callers: 1
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x0000000000475190  Caver::SceneObjectGroup::LoadFromProtobufMessage(Caver::Proto::SceneObjectGroup const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC898 string=0x00000000001FC89C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObjectGroup::LoadFromProtobufMessage(
        Caver::SceneObjectGroup *this,
        const Caver::Proto::SceneObjectGroup *a2)
{
  return _ZN5Caver16SceneObjectGroup23LoadFromProtobufMessageERKNS_5Proto16SceneObjectGroupE(this, a2);
}

