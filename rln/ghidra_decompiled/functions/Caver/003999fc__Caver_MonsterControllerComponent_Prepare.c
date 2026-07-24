/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003999fc
 * Function: Caver::MonsterControllerComponent::Prepare
 * Signature: undefined __thiscall Prepare(MonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterControllerComponent::Prepare() */

void __thiscall Caver::MonsterControllerComponent::Prepare(MonsterControllerComponent *this)

{
  long lVar1;
  Vector2 aVStack_58 [16];
  Vector2 aVStack_48 [16];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*(long *)(this + 0xb0) != 0) ||
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xa0),(Component *)this),
     *(long *)(this + 0xb0) != 0)) {
    Shape::Bounds();
    local_38 = *(undefined4 *)(*(long *)(this + 0x28) + 0x8c);
    uStack_34 = local_38;
    Rectangle::ScaledRectangle(aVStack_48);
    Rectangle::TranslatedRectangle(aVStack_58);
    *(undefined8 *)(this + 0xc0) = uStack_30;
    *(ulong *)(this + 0xb8) = CONCAT44(uStack_34,local_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


