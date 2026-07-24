/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00321048
 * Function: Caver::KeyframeAnimationComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(KeyframeAnimationComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::KeyframeAnimationComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::KeyframeAnimationComponent::SetValueForBindedProperty
          (KeyframeAnimationComponent *this,int param_1,BindingValue *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  Model *pMVar4;
  ulong uVar5;
  string *psVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  ModelComponent *this_00;
  long local_50;
  long *local_48;
  long local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  switch(param_1) {
  case 0x65:
    FUN_0066a528(&local_40,*(undefined8 *)(param_2 + 8));
    if (((*(long *)(this + 0x80) != 0) ||
        (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this),
        *(long *)(this + 0x80) != 0)) && (*(long *)(local_40 + -0x18) != 0)) {
      pMVar4 = (Model *)ModelLibrary::sharedLibrary();
      this_00 = *(ModelComponent **)(this + 0x80);
      if (this_00 == (ModelComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        this_00 = *(ModelComponent **)(this + 0x80);
      }
      psVar6 = *(string **)(this_00 + 0x78);
      if (psVar6 == (string *)0x0) {
        ModelComponent::LoadModel(this_00);
        psVar6 = *(string **)(this_00 + 0x78);
      }
      ModelLibrary::AnimationForModel(pMVar4,psVar6);
      if (local_50 != 0) {
        FUN_0066a6a8(this + 0x88);
        AnimKeysNode::InitWithAnimation(*(AnimKeysNode **)(this + 0x90),(shared_ptr *)&local_50);
        uVar5 = Component::ShouldPrepare((Component *)this);
        if ((uVar5 & 1) != 0) {
          (**(code **)(*(long *)this + 0x40))(this);
        }
      }
      if ((local_48 != (long *)0x0) &&
         (lVar7 = local_48[1], local_48[1] = lVar7 + -1, lVar7 + -1 == 0)) {
        (**(code **)(*local_48 + 0x10))(local_48);
        lVar7 = local_48[2];
        local_48[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*local_48 + 0x18))(local_48);
        }
      }
    }
    if ((undefined *)(local_40 + -0x18) != PTR_DAT_007e5de8) {
      piVar8 = (int *)(local_40 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = iVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete((undefined *)(local_40 + -0x18));
      }
    }
    break;
  default:
    Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
    break;
  case 0x68:
    *(undefined1 *)(*(long *)(this + 0x90) + 0x2c) = **(undefined1 **)(param_2 + 8);
    break;
  case 0x69:
    *(undefined1 *)(*(long *)(this + 0x90) + 0x38) = **(undefined1 **)(param_2 + 8);
    break;
  case 0x6a:
    *(undefined4 *)(*(long *)(this + 0x90) + 0x30) = **(undefined4 **)(param_2 + 8);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


