/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202AE0
 * Mangled: ._ZN5Caver11SceneObject8SetSceneEPNS_5SceneE
 * Demangled: Caver::SceneObject::SetScene(Caver::Scene *)
 *
 * Callers: 3
 *   0x0000000000464574  Caver::Scene::AddObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000004653C4  Caver::Scene::RemoveObject(boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *   0x000000000046FE44  Caver::SceneObject::Templatize(std::string const&)
 *
 * Callees: 1
 *   0x000000000046FE44  Caver::SceneObject::Templatize(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202AE8 string=0x0000000000202AEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SceneObject::SetScene(Caver::SceneObject *this, Caver::Scene *a2)
{
  JUMPOUT(0x46FFE0);
}

