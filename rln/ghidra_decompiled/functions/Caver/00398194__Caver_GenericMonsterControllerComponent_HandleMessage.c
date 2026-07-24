/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00398194
 * Function: Caver::GenericMonsterControllerComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(GenericMonsterControllerComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GenericMonsterControllerComponent::HandleMessage(int, void*) */

undefined8 __thiscall
Caver::GenericMonsterControllerComponent::HandleMessage
          (GenericMonsterControllerComponent *this,int param_1,void *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  
  if (((param_1 == 0x15) && (*(float *)((long)param_2 + 0x2c) <= DAT_00684430)) &&
     (DAT_00687f44 < *(float *)((long)param_2 + 0x2c))) {
    iVar4 = -1;
    if (0.0 <= *(float *)((long)param_2 + 0x28)) {
      iVar4 = 1;
    }
    if (*(int *)(this + 0x108) != iVar4) {
      lVar3 = *(long *)(this + 0x80);
      *(int *)(this + 0x108) = iVar4;
      *(undefined4 *)(this + 0x10c) = 0;
      if (lVar3 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        lVar3 = *(long *)(this + 0x80);
      }
      plVar2 = *(long **)(this + 0xe0);
      iVar1 = *(int *)(lVar3 + 0x70);
      if (plVar2 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
        plVar2 = *(long **)(this + 0xe0);
      }
      lVar3 = (**(code **)(*plVar2 + 0x108))();
      *(bool *)(lVar3 + 0x39) = iVar1 != iVar4;
    }
  }
  return 0;
}


