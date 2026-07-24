/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00329ca0
 * Function: Caver::ObjectLinkControllerComponent::TargetSkeletonInstance
 * Signature: undefined __thiscall TargetSkeletonInstance(ObjectLinkControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLinkControllerComponent::TargetSkeletonInstance() */

undefined8 __thiscall
Caver::ObjectLinkControllerComponent::TargetSkeletonInstance(ObjectLinkControllerComponent *this)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x88);
  if (plVar3 == (long *)0x0) {
LAB_00329d04:
    uVar1 = 0;
  }
  else {
    lVar2 = plVar3[0x11];
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x40))(plVar3);
      if (plVar3[0x11] == 0) goto LAB_00329d04;
      plVar3 = *(long **)(this + 0x88);
      lVar2 = plVar3[0x11];
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x40))(plVar3);
        lVar2 = plVar3[0x11];
      }
    }
    uVar1 = *(undefined8 *)(lVar2 + 0x18);
  }
  return uVar1;
}


