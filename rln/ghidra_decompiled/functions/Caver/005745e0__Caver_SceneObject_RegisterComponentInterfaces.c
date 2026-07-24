/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005745e0
 * Function: Caver::SceneObject::RegisterComponentInterfaces
 * Signature: undefined __thiscall RegisterComponentInterfaces(SceneObject * this, ComponentManager * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::RegisterComponentInterfaces(Caver::ComponentManager*) */

void __thiscall
Caver::SceneObject::RegisterComponentInterfaces(SceneObject *this,ComponentManager *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 200);
                    /* catch() { ... } // from try @ 00574350 with catch @ 005745fc */
  for (puVar2 = *(undefined8 **)(this + 0xc0); puVar2 != puVar1; puVar2 = puVar2 + 1) {
                    /* catch() { ... } // from try @ 00574150 with catch @ 00574604 */
    (**(code **)(*(long *)*puVar2 + 0xa8))((long *)*puVar2,param_1);
  }
  return;
}


