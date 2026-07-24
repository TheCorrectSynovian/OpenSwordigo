/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fe23c
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
  SceneObject *pSVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
  *(undefined **)this = PTR_vtable_007e6240 + 0x10;
  SharedDtor(this);
  iVar3 = *(int *)(this + 0x2c);
  pSVar1 = *(SceneObject **)(this + 0x20);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pSVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0x2c);
        pSVar1 = *(SceneObject **)(this + 0x20);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pSVar1 != this + 0x38) && (pSVar1 != (SceneObject *)0x0)) {
    operator_delete__(pSVar1);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


