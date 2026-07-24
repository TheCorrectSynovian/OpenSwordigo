/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b199c
 * Function: Caver::BushControllerComponent::Update
 * Signature: undefined __thiscall Update(BushControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BushControllerComponent::Update(float) */

void __thiscall Caver::BushControllerComponent::Update(BushControllerComponent *this,float param_1)

{
  long *plVar1;
  ModelInstance *pMVar2;
  long lVar3;
  Component *pCVar4;
  
  plVar1 = *(long **)(this + 0x80);
  if (plVar1 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    plVar1 = *(long **)(this + 0x80);
    if (plVar1 == (long *)0x0) {
      return;
    }
  }
  if (this[0xb8] != (BushControllerComponent)0x0) {
    return;
  }
  pMVar2 = (ModelInstance *)(**(code **)(*plVar1 + 0x108))();
  pCVar4 = *(Component **)(this + 0x80);
  if (pCVar4 == (Component *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    pCVar4 = *(Component **)(this + 0x80);
    plVar1 = *(long **)(pCVar4 + 0x80);
  }
  else {
    plVar1 = *(long **)(pCVar4 + 0x80);
  }
  if (plVar1 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar4 + 0x70),pCVar4);
    plVar1 = *(long **)(pCVar4 + 0x80);
    lVar3 = plVar1[0x11];
  }
  else {
    lVar3 = plVar1[0x11];
  }
  if (lVar3 == 0) {
    (**(code **)(*plVar1 + 0x40))(plVar1);
  }
  AnimNode::UpdateWithModelInstance(param_1,pMVar2);
  return;
}


