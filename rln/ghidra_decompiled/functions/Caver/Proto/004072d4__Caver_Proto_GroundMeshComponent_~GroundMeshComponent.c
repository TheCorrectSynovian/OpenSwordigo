/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004072d4
 * Function: Caver::Proto::GroundMeshComponent::~GroundMeshComponent
 * Signature: undefined __thiscall ~GroundMeshComponent(GroundMeshComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundMeshComponent::~GroundMeshComponent() */

void __thiscall Caver::Proto::GroundMeshComponent::~GroundMeshComponent(GroundMeshComponent *this)

{
  GroundMeshComponent *pGVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  
  *(undefined **)this = PTR_vtable_007e7300 + 0x10;
  SharedDtor(this);
  iVar3 = *(int *)(this + 0xa4);
  pGVar1 = *(GroundMeshComponent **)(this + 0x98);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pGVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0xa4);
        pGVar1 = *(GroundMeshComponent **)(this + 0x98);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pGVar1 != this + 0xb0) && (pGVar1 != (GroundMeshComponent *)0x0)) {
    operator_delete__(pGVar1);
  }
  iVar3 = *(int *)(this + 0x6c);
  pGVar1 = *(GroundMeshComponent **)(this + 0x60);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pGVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0x6c);
        pGVar1 = *(GroundMeshComponent **)(this + 0x60);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pGVar1 != this + 0x78) && (pGVar1 != (GroundMeshComponent *)0x0)) {
    operator_delete__(pGVar1);
  }
  iVar3 = *(int *)(this + 0x2c);
  pGVar1 = *(GroundMeshComponent **)(this + 0x20);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(pGVar1 + lVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        iVar3 = *(int *)(this + 0x2c);
        pGVar1 = *(GroundMeshComponent **)(this + 0x20);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  if ((pGVar1 != this + 0x38) && (pGVar1 != (GroundMeshComponent *)0x0)) {
    operator_delete__(pGVar1);
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


