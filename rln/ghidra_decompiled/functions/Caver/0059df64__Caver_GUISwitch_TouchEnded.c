/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059df64
 * Function: Caver::GUISwitch::TouchEnded
 * Signature: undefined __thiscall TouchEnded(GUISwitch * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUISwitch::TouchEnded(Caver::FWTouch const&) */

void __thiscall Caver::GUISwitch::TouchEnded(GUISwitch *this,FWTouch *param_1)

{
  uint uVar1;
  GUISwitch GVar2;
  GUISwitch *pGVar3;
  
  if (*(long *)(this + 0x158) == *(long *)param_1) {
    uVar1 = *(uint *)(this + 0x120);
    if ((uVar1 & 3) == 1) {
      GVar2 = this[0x148];
      this[0x148] = (GUISwitch)((byte)GVar2 ^ 1);
      if (GVar2 == (GUISwitch)0x0) {
        pGVar3 = this + 0x128;
      }
      else {
        pGVar3 = this + 0x130;
      }
      GUIFrameView::SetFrameTexture(*(GUIFrameView **)(this + 0x138),(intrusive_ptr *)pGVar3,true);
      GUIControl::SendActionsForControlEvent((GUIControl *)this,0x40,0);
      uVar1 = *(uint *)(this + 0x120);
    }
    if ((uVar1 & 1) != 0) {
      *(uint *)(this + 0x120) = uVar1 & 0xfffffffe;
      if ((uVar1 & 0xfffffffe) != uVar1) {
        (**(code **)(*(long *)this + 0x130))(this);
      }
      GUIControl::SendActionsForControlEvent((GUIControl *)this,0x200000,0);
    }
    *(undefined8 *)(this + 0x158) = 0;
  }
  return;
}


