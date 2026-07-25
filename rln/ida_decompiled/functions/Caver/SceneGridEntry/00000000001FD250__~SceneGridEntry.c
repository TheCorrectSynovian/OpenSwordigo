/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD250
 * Mangled: ._ZN5Caver14SceneGridEntryD2Ev
 * Demangled: Caver::SceneGridEntry::~SceneGridEntry()
 *
 * Callers: 2
 *   0x000000000021394C  Caver::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent(void)
 *   0x000000000046EE1C  Caver::SceneObject::~SceneObject()
 *
 * Callees: 1
 *   0x000000000046D71C  Caver::SceneGridEntry::~SceneGridEntry()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD258 string=0x00000000001FD25C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SceneGridEntry::~SceneGridEntry(Caver::SceneGridEntry *this)
{
  _ZN5Caver14SceneGridEntryD2Ev(this);
}

