/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBEA0
 * Mangled: ._ZN5Caver11SceneObject19RemoveAllComponentsEv
 * Demangled: Caver::SceneObject::RemoveAllComponents(void)
 *
 * Callers: 1
 *   0x00000000004653C4  Caver::Scene::RemoveObject(boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *
 * Callees: 1
 *   0x000000000047016C  Caver::SceneObject::RemoveAllComponents(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBEA8 string=0x00000000001FBEAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::RemoveAllComponents(Caver::SceneObject *this)
{
  return _ZN5Caver11SceneObject19RemoveAllComponentsEv(this);
}

