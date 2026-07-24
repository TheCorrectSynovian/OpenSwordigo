/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b3264
 * Function: Caver::DoorControllerComponent::Close
 * Signature: undefined __thiscall Close(DoorControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DoorControllerComponent::Close() */

void __thiscall Caver::DoorControllerComponent::Close(DoorControllerComponent *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  SoundEffectComponent *this_00;
  ulong uVar7;
  long lVar8;
  Component *pCVar9;
  
  plVar5 = *(long **)(this + 0x98);
  if (plVar5 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    plVar5 = *(long **)(this + 0x98);
    if (plVar5 != (long *)0x0) goto LAB_003b3294;
  }
  else {
LAB_003b3294:
    lVar6 = (**(code **)(*plVar5 + 0x108))();
    *(undefined4 *)(lVar6 + 0x34) = 0x3f800000;
    if (*(long *)(this + 0x98) == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      lVar8 = *(long *)(this + 0x98);
      lVar6 = *(long *)(lVar8 + 0x90);
      *(undefined1 *)(lVar6 + 0x39) = 1;
      if (lVar8 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
        lVar6 = *(long *)(*(long *)(this + 0x98) + 0x90);
      }
    }
    else {
      lVar6 = *(long *)(*(long *)(this + 0x98) + 0x90);
      *(undefined1 *)(lVar6 + 0x39) = 1;
    }
    *(undefined1 *)(lVar6 + 0x38) = 1;
  }
  if ((*(long *)(this + 0xb0) == 0) &&
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xa0),(Component *)this),
     *(long *)(this + 0xb0) == 0)) goto LAB_003b3350;
  pCVar9 = *(Component **)(this + 0x80);
  if (pCVar9 == (Component *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    pCVar9 = *(Component **)(this + 0x80);
    lVar6 = *(long *)(pCVar9 + 0x80);
    if (lVar6 == 0) goto LAB_003b33c4;
LAB_003b332c:
    cVar3 = *(char *)(lVar6 + 0x13e);
  }
  else {
    lVar6 = *(long *)(pCVar9 + 0x80);
    if (lVar6 != 0) goto LAB_003b332c;
LAB_003b33c4:
    ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar9 + 0x70),pCVar9);
    cVar3 = *(char *)(*(long *)(pCVar9 + 0x80) + 0x13e);
  }
  if (cVar3 != '\0') {
    this_00 = *(SoundEffectComponent **)(this + 0xb0);
    if (this_00 == (SoundEffectComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xa0),(Component *)this);
      this_00 = *(SoundEffectComponent **)(this + 0xb0);
    }
    SoundEffectComponent::Play(this_00);
  }
LAB_003b3350:
  this[0xd0] = (DoorControllerComponent)0x0;
  puVar4 = PTR_Interface_007e5b08;
  puVar2 = *(undefined8 **)(*(long *)(this + 0x28) + 200);
  for (puVar1 = *(undefined8 **)(*(long *)(this + 0x28) + 0xc0); puVar1 != puVar2;
      puVar1 = puVar1 + 1) {
    uVar7 = (**(code **)(*(long *)*puVar1 + 0xa0))((long *)*puVar1,puVar4);
    if ((uVar7 & 1) != 0) {
      CollisionShapeComponent::SetEnabled((CollisionShapeComponent *)*puVar1,true);
    }
  }
  return;
}


