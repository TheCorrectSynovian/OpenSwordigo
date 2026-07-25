/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201F50
 * Mangled: ._ZN5Caver16SceneObjectGroup16RemoveAllObjectsEv
 * Demangled: Caver::SceneObjectGroup::RemoveAllObjects(void)
 *
 * Callers: 1
 *   0x000000000046888C  Caver::Scene::RemoveGroup(boost::intrusive_ptr<Caver::SceneObjectGroup> const&)
 *
 * Callees: 1
 *   0x0000000000474EF0  Caver::SceneObjectGroup::~SceneObjectGroup()
 *
 * Referenced strings: 1
 *   insn=0x0000000000201F58 string=0x0000000000201F5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SceneObjectGroup::RemoveAllObjects(Caver::SceneObjectGroup *this)
{
  JUMPOUT(0x475108);
}

