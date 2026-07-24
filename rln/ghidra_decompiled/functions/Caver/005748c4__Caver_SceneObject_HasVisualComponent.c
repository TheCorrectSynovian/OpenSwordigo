/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005748c4
 * Function: Caver::SceneObject::HasVisualComponent
 * Signature: undefined __thiscall HasVisualComponent(SceneObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::HasVisualComponent() const */

undefined8 __thiscall Caver::SceneObject::HasVisualComponent(SceneObject *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  puVar1 = *(undefined8 **)(this + 200);
  puVar2 = *(undefined8 **)(this + 0xc0);
  do {
    if (puVar2 == puVar1) {
      return 0;
    }
    uVar3 = (**(code **)(*(long *)*puVar2 + 0xf8))();
    puVar2 = puVar2 + 1;
  } while ((uVar3 & 1) == 0);
  return 1;
}


