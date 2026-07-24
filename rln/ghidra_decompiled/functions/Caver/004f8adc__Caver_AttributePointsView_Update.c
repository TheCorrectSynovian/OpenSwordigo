/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f8adc
 * Function: Caver::AttributePointsView::Update
 * Signature: undefined __thiscall Update(AttributePointsView * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AttributePointsView::Update(float) */

void __thiscall Caver::AttributePointsView::Update(AttributePointsView *this,float param_1)

{
  AttributePointsView *this_00;
  long lVar1;
  
  if (0 < *(int *)(this + 0x180)) {
    lVar1 = 0;
    this_00 = this + 0x188;
    do {
      GUIAnimatedSprite::Update((GUIAnimatedSprite *)this_00,param_1);
      if (*(GUIAnimatedSprite *)(this_00 + 0x31) != (GUIAnimatedSprite)0x0) {
        this[0x540] = (AttributePointsView)0x1;
      }
      lVar1 = lVar1 + 1;
      this_00 = this_00 + 0x48;
    } while (lVar1 < *(int *)(this + 0x180));
  }
  GUIView::Update((GUIView *)this,param_1);
  return;
}


