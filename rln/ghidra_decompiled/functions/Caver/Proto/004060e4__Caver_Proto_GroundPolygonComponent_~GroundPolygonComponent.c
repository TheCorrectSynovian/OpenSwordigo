/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004060e4
 * Function: Caver::Proto::GroundPolygonComponent::~GroundPolygonComponent
 * Signature: undefined __thiscall ~GroundPolygonComponent(GroundPolygonComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundPolygonComponent::~GroundPolygonComponent() */

void __thiscall
Caver::Proto::GroundPolygonComponent::~GroundPolygonComponent(GroundPolygonComponent *this)

{
  GroundPolygonComponent *pGVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
  *(undefined **)this = PTR_vtable_007e7d70 + 0x10;
  if (*(GroundPolygonComponent **)PTR_default_instance__007e5920 != this) {
    if (*(long **)(this + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
    if (*(long **)(this + 0x50) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x50) + 8))();
    }
  }
  iVar3 = *(int *)(this + 0x24);
  pGVar1 = *(GroundPolygonComponent **)(this + 0x18);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pGVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0x24);
        pGVar1 = *(GroundPolygonComponent **)(this + 0x18);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pGVar1 != this + 0x30) && (pGVar1 != (GroundPolygonComponent *)0x0)) {
    operator_delete__(pGVar1);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


