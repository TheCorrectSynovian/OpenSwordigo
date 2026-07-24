/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00400850
 * Function: Caver::Proto::SceneObjectGroup::~SceneObjectGroup
 * Signature: undefined __thiscall ~SceneObjectGroup(SceneObjectGroup * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SceneObjectGroup::~SceneObjectGroup() */

void __thiscall Caver::Proto::SceneObjectGroup::~SceneObjectGroup(SceneObjectGroup *this)

{
  ~SceneObjectGroup(this);
  operator_delete(this);
  return;
}


