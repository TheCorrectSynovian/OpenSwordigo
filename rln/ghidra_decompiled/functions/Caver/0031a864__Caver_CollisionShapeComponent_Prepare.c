/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031a864
 * Function: Caver::CollisionShapeComponent::Prepare
 * Signature: undefined __thiscall Prepare(CollisionShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::Prepare() */

void __thiscall Caver::CollisionShapeComponent::Prepare(CollisionShapeComponent *this)

{
  long lVar1;
  
  RegisterLibrary(this);
  if (this[0x17a] != (CollisionShapeComponent)0x0) {
    lVar1 = SceneObject::ComponentWithInterface
                      (*(SceneObject **)(this + 0x28),(long)PTR_Interface_007e7528);
    this[0x1cc] = (CollisionShapeComponent)(lVar1 != 0);
  }
  return;
}


