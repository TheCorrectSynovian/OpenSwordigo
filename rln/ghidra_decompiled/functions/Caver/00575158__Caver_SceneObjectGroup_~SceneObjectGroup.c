/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00575158
 * Function: Caver::SceneObjectGroup::~SceneObjectGroup
 * Signature: undefined __thiscall ~SceneObjectGroup(SceneObjectGroup * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObjectGroup::~SceneObjectGroup() */

void __thiscall Caver::SceneObjectGroup::~SceneObjectGroup(SceneObjectGroup *this)

{
                    /* try { // try from 00575164 to 0067516f has its CatchHandler @ 0057524c */
  ~SceneObjectGroup(this);
  operator_delete(this);
  return;
}


