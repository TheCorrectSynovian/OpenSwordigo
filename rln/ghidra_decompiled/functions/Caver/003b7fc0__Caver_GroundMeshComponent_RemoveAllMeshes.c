/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b7fc0
 * Function: Caver::GroundMeshComponent::RemoveAllMeshes
 * Signature: undefined __thiscall RemoveAllMeshes(GroundMeshComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshComponent::RemoveAllMeshes() */

void __thiscall Caver::GroundMeshComponent::RemoveAllMeshes(GroundMeshComponent *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar2 = *(long *)(this + 0x78);
  lVar4 = *(long *)(this + 0x70);
  for (lVar1 = lVar4; lVar2 != lVar1; lVar1 = lVar1 + 0x10) {
    plVar5 = *(long **)(lVar1 + 8);
    if ((plVar5 != (long *)0x0) && (lVar3 = plVar5[1], plVar5[1] = lVar3 + -1, lVar3 + -1 == 0)) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar3 = plVar5[2];
      plVar5[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
  }
  lVar2 = *(long *)(this + 0x88);
  lVar3 = *(long *)(this + 0x90);
  *(long *)(this + 0x78) = lVar4;
  for (lVar1 = lVar2; lVar3 != lVar1; lVar1 = lVar1 + 0x10) {
    plVar5 = *(long **)(lVar1 + 8);
    if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      lVar4 = plVar5[2];
      plVar5[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
  }
  *(long *)(this + 0x90) = lVar2;
  return;
}


