/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036cb50
 * Function: Caver::EntityControllerComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(EntityControllerComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityControllerComponent::HandleMessage(int, void*) */

undefined8 __thiscall
Caver::EntityControllerComponent::HandleMessage
          (EntityControllerComponent *this,int param_1,void *param_2)

{
  int iVar1;
  EntityComponent *this_00;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  
  if (param_1 == 0x15) {
    if ((((*(long *)(*(long *)param_2 + 0x28) == *(long *)(this + 0x28)) &&
         (*(int *)(this + 0x108) != 0)) && (*(float *)((long)param_2 + 0x2c) <= DAT_00684430)) &&
       (DAT_00687f44 < *(float *)((long)param_2 + 0x2c))) {
      fVar5 = *(float *)((long)param_2 + 0x28);
      this_00 = *(EntityComponent **)(this + 0x80);
      *(undefined4 *)(this + 0x130) = 0;
      iVar2 = -1;
      if (0.0 <= fVar5) {
        iVar2 = 1;
      }
      *(int *)(this + 0x128) = iVar2;
      if (this_00 == (EntityComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        this_00 = *(EntityComponent **)(this + 0x80);
      }
      EntityComponent::SetFacingDirection(this_00,iVar2);
      lVar4 = *(long *)(this + 0x100);
      if (lVar4 == 0) {
        lVar3 = *(long *)(this + 0x80);
      }
      else {
        lVar3 = *(long *)(this + 0x80);
        iVar1 = *(int *)(this + 0x108);
        if (lVar3 == 0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
          lVar3 = *(long *)(this + 0x80);
        }
        *(bool *)(lVar4 + 0x39) = iVar1 != *(int *)(lVar3 + 0x70);
      }
      *(undefined4 *)(this + 0x134) = 0;
      *(int *)(this + 300) = iVar2;
      *(int *)(this + 0x108) = iVar2;
      if (lVar3 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        lVar3 = *(long *)(this + 0x80);
        iVar2 = *(int *)(this + 0x108);
      }
      *(float *)(lVar3 + 0xb0) = *(float *)(this + 0x10c) * (float)iVar2;
      lVar4 = *(long *)(this + 0x100);
      if (lVar4 != 0) {
        if (lVar3 == 0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
          lVar3 = *(long *)(this + 0x80);
        }
        *(bool *)(lVar4 + 0x39) = iVar2 != *(int *)(lVar3 + 0x70);
      }
    }
  }
  else if ((param_1 == 5) && (*(SceneObject **)(this + 0xf0) != (SceneObject *)0x0)) {
    SceneObject::HandleMessage(*(SceneObject **)(this + 0xf0),0xf,*(void **)(this + 0x28));
  }
  return 0;
}


