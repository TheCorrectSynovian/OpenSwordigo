/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00314b20
 * Function: Caver::BoneControlledCollisionShapeComponent::BoneForName
 * Signature: undefined __thiscall BoneForName(BoneControlledCollisionShapeComponent * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BoneControlledCollisionShapeComponent::BoneForName(std::string const&) */

long __thiscall
Caver::BoneControlledCollisionShapeComponent::BoneForName
          (BoneControlledCollisionShapeComponent *this,string *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0x1e0);
  if (plVar4 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x1d0),(Component *)this);
    plVar4 = *(long **)(this + 0x1e0);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
  }
  if (plVar4[0x11] == 0) {
    (**(code **)(*plVar4 + 0x40))(plVar4);
    if (plVar4[0x11] == 0) {
      return 0;
    }
    plVar4 = *(long **)(this + 0x1e0);
    if (plVar4 != (long *)0x0) goto LAB_00314b5c;
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x1d0),(Component *)this);
    plVar4 = *(long **)(this + 0x1e0);
    lVar2 = plVar4[0x11];
  }
  else {
LAB_00314b5c:
    lVar2 = plVar4[0x11];
  }
  if (lVar2 == 0) {
    (**(code **)(*plVar4 + 0x40))(plVar4);
    lVar2 = *(long *)(plVar4[0x11] + 0x18);
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x18);
  }
  if (lVar2 == 0) {
    return 0;
  }
  plVar4 = *(long **)(this + 0x1e0);
  if (plVar4 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x1d0),(Component *)this);
    plVar4 = *(long **)(this + 0x1e0);
    if (plVar4 != (long *)0x0) goto LAB_00314b88;
LAB_00314c48:
    puVar3 = (undefined8 *)0x0;
  }
  else {
LAB_00314b88:
    if (plVar4[0x11] == 0) {
      (**(code **)(*plVar4 + 0x40))(plVar4);
      if (plVar4[0x11] == 0) goto LAB_00314c48;
      plVar4 = *(long **)(this + 0x1e0);
      if (plVar4 != (long *)0x0) goto LAB_00314b90;
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x1d0),(Component *)this);
      plVar4 = *(long **)(this + 0x1e0);
      lVar2 = plVar4[0x11];
    }
    else {
LAB_00314b90:
      lVar2 = plVar4[0x11];
    }
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x40))(plVar4);
      lVar2 = plVar4[0x11];
    }
    puVar3 = *(undefined8 **)(lVar2 + 0x18);
  }
  iVar1 = Skeleton::BoneIndexForName((Skeleton *)*puVar3,param_1);
  if (iVar1 < 0) {
    return 0;
  }
  return puVar3[2] + (long)iVar1 * 0xdc;
}


