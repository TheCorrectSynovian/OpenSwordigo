/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056d71c
 * Function: Caver::SceneGridEntry::~SceneGridEntry
 * Signature: undefined __thiscall ~SceneGridEntry(SceneGridEntry * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGridEntry::~SceneGridEntry() */

void __thiscall Caver::SceneGridEntry::~SceneGridEntry(SceneGridEntry *this)

{
  if (*(SceneGridLayer **)this != (SceneGridLayer *)0x0) {
    SceneGridLayer::RemoveObject(*(SceneGridLayer **)this,this);
    return;
  }
  return;
}


