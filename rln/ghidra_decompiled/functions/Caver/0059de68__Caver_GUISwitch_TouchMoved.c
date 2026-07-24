/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059de68
 * Function: Caver::GUISwitch::TouchMoved
 * Signature: undefined __thiscall TouchMoved(GUISwitch * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUISwitch::TouchMoved(Caver::FWTouch const&) */

void __thiscall Caver::GUISwitch::TouchMoved(GUISwitch *this,FWTouch *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  Vector2 aVStack_30 [8];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x158) == *(long *)param_1) {
    FWTouch::LocationInView(param_1,(GUIView *)this);
    uStack_38 = *(undefined8 *)(this + 0x8c);
    local_40 = *(undefined8 *)(this + 0x84);
    Rectangle::Outset((Rectangle *)&local_40,DAT_00684320);
    uVar3 = Rectangle::PointInside((Rectangle *)&local_40,aVStack_30);
    if ((uVar3 & 1) == 0) {
      if ((*(uint *)(this + 0x120) & 1) == 0) goto LAB_0059df40;
      GUIControl::SendActionsForControlEvent((GUIControl *)this,0x20,0);
      uVar1 = *(uint *)(this + 0x120);
      uVar4 = uVar1 & 0xfffffffe;
    }
    else {
      if ((*(uint *)(this + 0x120) & 3) != 0) goto LAB_0059df40;
      GUIControl::SendActionsForControlEvent((GUIControl *)this,0x10,0);
      uVar1 = *(uint *)(this + 0x120);
      uVar4 = uVar1 | 1;
    }
    *(uint *)(this + 0x120) = uVar4;
    if (uVar4 != uVar1) {
      (**(code **)(*(long *)this + 0x130))(this);
    }
    GUIControl::SendActionsForControlEvent((GUIControl *)this,0x200000,0);
  }
LAB_0059df40:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


