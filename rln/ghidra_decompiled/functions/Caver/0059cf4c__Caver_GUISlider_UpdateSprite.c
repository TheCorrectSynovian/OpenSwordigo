/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059cf4c
 * Function: Caver::GUISlider::UpdateSprite
 * Signature: undefined __thiscall UpdateSprite(GUISlider * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUISlider::UpdateSprite() */

void __thiscall Caver::GUISlider::UpdateSprite(GUISlider *this)

{
  int iVar1;
  long lVar2;
  Sprite *pSVar3;
  undefined8 uVar4;
  undefined4 local_70 [2];
  long *local_68;
  undefined8 local_60;
  long local_58;
  
                    /* try { // try from 0059cf54 to 0069cf7b has its CatchHandler @ 0059d058 */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 0059cf7c to 0069d0e7 has its CatchHandler @ 0059ce68 */
  if (*(long *)(this + 0x140) != 0) {
    pSVar3 = *(Sprite **)(this + 0x158);
    if (pSVar3 == (Sprite *)0x0) {
      pSVar3 = operator_new(0x58);
      *(undefined4 *)(pSVar3 + 0x30) = 0;
      *(undefined8 *)(pSVar3 + 0x20) = 0;
      *(undefined8 *)(pSVar3 + 0x28) = 0;
      *(undefined8 *)(pSVar3 + 0x10) = 0;
      *(undefined8 *)(pSVar3 + 0x18) = 0;
      *(undefined8 *)pSVar3 = 0;
      *(undefined8 *)(pSVar3 + 8) = 0;
      pSVar3[0x50] = (Sprite)0x0;
      *(undefined8 *)(pSVar3 + 0x40) = 0;
      *(undefined8 *)(pSVar3 + 0x48) = 0;
      *(undefined8 *)(pSVar3 + 0x38) = 0;
      *(Sprite **)(this + 0x158) = pSVar3;
      Texture::SharedPtr();
      Sprite::Init(pSVar3,(intrusive_ptr *)&local_68,2,4,true);
      if ((local_68 != (long *)0x0) &&
         (iVar1 = (int)local_68[1] + -1, *(int *)(local_68 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*local_68 + 8))();
      }
      pSVar3 = *(Sprite **)(this + 0x158);
    }
    Sprite::Clear(pSVar3);
    if (*(long *)(this + 0x140) != 0) {
      AddCappedRectToSprite
                (*(Sprite **)(this + 0x158),(intrusive_ptr *)(this + 0x140),
                 (Rectangle *)(this + 0x84),1.0);
    }
                    /* catch() { ... } // from try @ 0059ceec with catch @ 0059d044 */
                    /* catch() { ... } // from try @ 0059ced0 with catch @ 0059d048 */
                    /* catch() { ... } // from try @ 0059cebc with catch @ 0059d058
                       catch() { ... } // from try @ 0059cf54 with catch @ 0059d058 */
    if ((*(long *)(this + 0x148) != 0) && (this[0x16d] == (GUISlider)0x0)) {
                    /* catch() { ... } // from try @ 0059cf0c with catch @ 0059d068 */
      AddCappedRectToSprite
                (*(Sprite **)(this + 0x158),(intrusive_ptr *)(this + 0x148),
                 (Rectangle *)(this + 0x84),
                 (*(float *)(this + 0x128) - *(float *)(this + 0x134)) /
                 (*(float *)(this + 0x138) - *(float *)(this + 0x134)));
    }
    if (*(long *)(this + 0x150) != 0) {
      uVar4 = *(undefined8 *)(*(long *)(this + 0x150) + 0x54);
      Vector2::Rounded();
      local_70[0] = 0xffffffff;
      local_60 = uVar4;
      Sprite::AddRectangle
                (*(Sprite **)(this + 0x158),(Rectangle *)&local_68,
                 (Rectangle *)(*(long *)(this + 0x150) + 0x5c),(Color *)local_70);
    }
  }
                    /* try { // try from 0059d0e8 to 0069d157 has its CatchHandler @ 0059d178 */
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


