/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fe4e0
 * Function: Caver::Proto::SceneObject::~SceneObject
 * Signature: undefined __thiscall ~SceneObject(SceneObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SceneObject::~SceneObject() */

void __thiscall Caver::Proto::SceneObject::~SceneObject(SceneObject *this)

{
  ~SceneObject(this);
  operator_delete(this);
  return;
}


