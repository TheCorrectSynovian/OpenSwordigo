/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040170c
 * Function: Caver::Proto::Scene::~Scene
 * Signature: undefined __thiscall ~Scene(Scene * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Scene::~Scene() */

void __thiscall Caver::Proto::Scene::~Scene(Scene *this)

{
  Scene *pSVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
  *(undefined **)this = PTR_vtable_007e5680 + 0x10;
  if (*(Scene **)PTR_default_instance__007e7a20 != this) {
    if (*(long **)(this + 0x80) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x80) + 8))();
    }
    if (*(long **)(this + 0x88) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x88) + 8))();
    }
    if (*(long **)(this + 0x90) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x90) + 8))();
    }
  }
  iVar3 = *(int *)(this + 0x54);
  pSVar1 = *(Scene **)(this + 0x48);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pSVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0x54);
        pSVar1 = *(Scene **)(this + 0x48);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pSVar1 != this + 0x60) && (pSVar1 != (Scene *)0x0)) {
    operator_delete__(pSVar1);
  }
  iVar3 = *(int *)(this + 0x1c);
  pSVar1 = *(Scene **)(this + 0x10);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pSVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0x1c);
        pSVar1 = *(Scene **)(this + 0x10);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pSVar1 != this + 0x28) && (pSVar1 != (Scene *)0x0)) {
    operator_delete__(pSVar1);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


