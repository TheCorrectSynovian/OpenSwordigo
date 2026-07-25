/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD330
 * Mangled: ._ZN5Caver11SceneObject19RemoveFromAllGroupsEb
 * Demangled: Caver::SceneObject::RemoveFromAllGroups(bool)
 *
 * Callers: 3
 *   0x000000000046EE1C  Caver::SceneObject::~SceneObject()
 *   0x000000000046FE44  Caver::SceneObject::Templatize(std::string const&)
 *   0x0000000000473558  Caver::SceneObject::RemoveChildObject(Caver::SceneObject*,bool)
 *
 * Callees: 1
 *   0x000000000046F1E4  Caver::SceneObject::RemoveFromAllGroups(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD338 string=0x00000000001FD33C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::RemoveFromAllGroups(Caver::SceneObject *this, bool a2)
{
  return _ZN5Caver11SceneObject19RemoveFromAllGroupsEb(this, a2);
}

