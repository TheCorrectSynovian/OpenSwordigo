/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059d874
 * Function: Caver::GUISwitch::GUISwitch
 * Signature: undefined __thiscall GUISwitch(GUISwitch * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUISwitch::GUISwitch() */

void __thiscall Caver::GUISwitch::GUISwitch(GUISwitch *this)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  GUIFrameView *this_00;
  long lVar5;
  code *pcVar6;
  GUISwitch *pGVar7;
  undefined8 local_60;
  long *local_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  GUIView::GUIView((GUIView *)this);
  *(undefined8 *)(this + 0x118) = 0;
  puVar4 = PTR_vtable_007e6b20;
  pGVar7 = this + 0xf8;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)pGVar7 = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(GUISwitch **)(this + 0x108) = pGVar7;
  *(GUISwitch **)(this + 0x110) = pGVar7;
  *(undefined **)this = puVar4 + 0x10;
  puVar4 = PTR_DAT_007e5de8;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  this[0x148] = (GUISwitch)0x0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined **)(this + 0x150) = puVar4 + 0x18;
  *(undefined8 *)(this + 0x158) = 0;
  this_00 = operator_new(0x110);
  GUIFrameView::GUIFrameView(this_00);
  boost::shared_ptr<Caver::GUIFrameView>::shared_ptr<Caver::GUIFrameView>
            ((shared_ptr<Caver::GUIFrameView> *)&local_60,this_00);
  uVar1 = *(undefined8 *)(this + 0x138);
  plVar2 = *(long **)(this + 0x140);
  *(undefined8 *)(this + 0x138) = local_60;
  *(long **)(this + 0x140) = local_58;
  if ((plVar2 != (long *)0x0) && (lVar5 = plVar2[1], plVar2[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    local_60 = uVar1;
    local_58 = plVar2;
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar5 = plVar2[2];
    plVar2[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  local_60 = *(undefined8 *)(this + 0x138);
  pcVar6 = *(code **)(*(long *)this + 0x60);
  local_58 = *(long **)(this + 0x140);
  if (local_58 != (long *)0x0) {
    local_58[1] = local_58[1] + 1;
  }
  (*pcVar6)(this,&local_60);
  plVar2 = local_58;
  if ((local_58 != (long *)0x0) && (lVar5 = local_58[1], local_58[1] = lVar5 + -1, lVar5 + -1 == 0))
  {
    (**(code **)(*local_58 + 0x10))(local_58);
    lVar5 = plVar2[2];
    plVar2[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


