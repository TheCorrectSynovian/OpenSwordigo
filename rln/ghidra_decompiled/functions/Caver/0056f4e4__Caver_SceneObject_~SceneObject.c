/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056f4e4
 * Function: Caver::SceneObject::~SceneObject
 * Signature: undefined __thiscall ~SceneObject(SceneObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::~SceneObject() */

void __thiscall Caver::SceneObject::~SceneObject(SceneObject *this)

{
  ~SceneObject(this);
  operator_delete(this);
  return;
}


