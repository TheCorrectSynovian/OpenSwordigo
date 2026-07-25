/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAA20
 * Mangled: ._ZN5Caver11SceneObjectD2Ev
 * Demangled: Caver::SceneObject::~SceneObject()
 *
 * Callers: 2
 *   0x0000000000461208  Caver::ObjectTemplate::~ObjectTemplate()
 *   0x000000000046F1E4  Caver::SceneObject::RemoveFromAllGroups(bool)
 *
 * Callees: 1
 *   0x000000000046EE1C  Caver::SceneObject::~SceneObject()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAA28 string=0x00000000001FAA2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SceneObject::~SceneObject(Caver::SceneObject *this)
{
  _ZN5Caver11SceneObjectD2Ev(this);
}

