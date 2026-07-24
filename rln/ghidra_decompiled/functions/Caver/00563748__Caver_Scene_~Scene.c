/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00563748
 * Function: Caver::Scene::~Scene
 * Signature: undefined __thiscall ~Scene(Scene * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Scene::~Scene() */

void __thiscall Caver::Scene::~Scene(Scene *this)

{
  ~Scene(this);
  operator_delete(this);
  return;
}


