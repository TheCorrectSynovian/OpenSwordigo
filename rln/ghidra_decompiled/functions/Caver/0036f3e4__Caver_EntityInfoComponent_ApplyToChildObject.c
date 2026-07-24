/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036f3e4
 * Function: Caver::EntityInfoComponent::ApplyToChildObject
 * Signature: undefined __thiscall ApplyToChildObject(EntityInfoComponent * this, SceneObject * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityInfoComponent::ApplyToChildObject(Caver::SceneObject*) */

void __thiscall
Caver::EntityInfoComponent::ApplyToChildObject(EntityInfoComponent *this,SceneObject *param_1)

{
  long lVar1;
  
  lVar1 = SceneObject::ComponentWithInterface(param_1,(long)PTR_Interface_007e4ff0);
  if (lVar1 != 0) {
    return;
  }
  ApplyToObject(this,param_1);
  return;
}


