/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059cbb8
 * Function: Caver::GUISlider::SetFrameTexture
 * Signature: undefined __thiscall SetFrameTexture(GUISlider * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUISlider::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&) */

void __thiscall Caver::GUISlider::SetFrameTexture(GUISlider *this,intrusive_ptr *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
                    /* try { // try from 0059cbbc to 0069cbc3 has its CatchHandler @ 0059cd34 */
  lVar3 = *(long *)param_1;
  if (lVar3 != 0) {
                    /* try { // try from 0059cbd8 to 0069cbeb has its CatchHandler @ 0059cd30 */
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  plVar2 = *(long **)(this + 0x140);
  *(long *)(this + 0x140) = lVar3;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
                    /* try { // try from 0059cbf8 to 0069cc03 has its CatchHandler @ 0059cd54 */
    (**(code **)(*plVar2 + 8))();
  }
  this[0x160] = (GUISlider)0x1;
  return;
}


