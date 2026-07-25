/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6520
 * Mangled: ._ZN5Caver16SceneObjectGroup10FinishLoadEv
 * Demangled: Caver::SceneObjectGroup::FinishLoad(void)
 *
 * Callers: 2
 *   0x00000000004640C0  Caver::Scene::AddGroup(boost::intrusive_ptr<Caver::SceneObjectGroup> const&)
 *   0x00000000004642A8  Caver::Scene::FinishLoad(void)
 *
 * Callees: 1
 *   0x0000000000475498  Caver::SceneObjectGroup::FinishLoad(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6528 string=0x00000000001F652C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObjectGroup::FinishLoad(Caver::SceneObjectGroup *this)
{
  return _ZN5Caver16SceneObjectGroup10FinishLoadEv(this);
}

