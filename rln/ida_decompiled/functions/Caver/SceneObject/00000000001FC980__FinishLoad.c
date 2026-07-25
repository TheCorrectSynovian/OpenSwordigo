/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC980
 * Mangled: ._ZN5Caver11SceneObject10FinishLoadEv
 * Demangled: Caver::SceneObject::FinishLoad(void)
 *
 * Callers: 2
 *   0x00000000004642A8  Caver::Scene::FinishLoad(void)
 *   0x0000000000464574  Caver::Scene::AddObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callees: 1
 *   0x0000000000470EC4  Caver::SceneObject::FinishLoad(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC988 string=0x00000000001FC98C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::FinishLoad(Caver::SceneObject *this)
{
  return _ZN5Caver11SceneObject10FinishLoadEv(this);
}

