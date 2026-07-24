/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00389f98
 * Function: Caver::MagicHookshotComponent::Cast
 * Signature: undefined __thiscall Cast(MagicHookshotComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicHookshotComponent::Cast() */

void __thiscall Caver::MagicHookshotComponent::Cast(MagicHookshotComponent *this)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  SoundEffectComponent *this_00;
  long lVar4;
  long *local_50;
  float local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FindGrabbableObject();
  if (local_50 != (long *)0x0) {
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
  }
  plVar3 = *(long **)(this + 0x148);
  *(long **)(this + 0x148) = local_50;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))();
  }
  if ((local_50 != (long *)0x0) &&
     (iVar1 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*local_50 + 8))(local_50);
  }
  SpellComponent::Cast((SpellComponent *)this);
  this_00 = *(SoundEffectComponent **)(this + 0xe8);
  if (this_00 == (SoundEffectComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd8),(Component *)this);
    this_00 = *(SoundEffectComponent **)(this + 0xe8);
    if (this_00 == (SoundEffectComponent *)0x0) goto LAB_0038a04c;
  }
  SoundEffectComponent::Play(this_00);
LAB_0038a04c:
  lVar4 = *(long *)(this + 0x28);
  local_50 = (long *)CONCAT44((float)((ulong)*(undefined8 *)(this + 0x84) >> 0x20) * 1000.0,
                              (float)*(undefined8 *)(this + 0x84) * 1000.0);
  local_48 = *(float *)(this + 0x8c) * DAT_00687978;
  *(undefined4 *)(this + 0x16c) = 0x447a0000;
  Vector2::Vector2((Vector2 *)&local_40,(Vector3 *)&local_50);
  *(undefined8 *)(lVar4 + 0x68) = local_40;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


