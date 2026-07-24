/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00576710
 * Function: Caver::SceneObjectGroup::SetScene
 * Signature: undefined __thiscall SetScene(SceneObjectGroup * this, Scene * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObjectGroup::SetScene(Caver::Scene*) */

void __thiscall Caver::SceneObjectGroup::SetScene(SceneObjectGroup *this,Scene *param_1)

{
  *(Scene **)(this + 0x18) = param_1;
  return;
}


