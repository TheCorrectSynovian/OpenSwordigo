/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00565778
 * Function: Caver::Scene::RegisterObject
 * Signature: undefined __thiscall RegisterObject(Scene * this, SceneObject * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::RegisterObject(Caver::SceneObject*) */

void __thiscall Caver::Scene::RegisterObject(Scene *this,SceneObject *param_1)

{
  SceneObject::RegisterComponentInterfaces(param_1,(ComponentManager *)(this + 0x180));
  if (param_1[0xf0] != (SceneObject)0x0) {
    SceneObject::RegisterComponentInterfaces(param_1,(ComponentManager *)(this + 0x1e0));
    return;
  }
  return;
}


