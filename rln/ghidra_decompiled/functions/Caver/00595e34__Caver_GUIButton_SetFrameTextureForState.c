/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00595e34
 * Function: Caver::GUIButton::SetFrameTextureForState
 * Signature: undefined __thiscall SetFrameTextureForState(GUIButton * this, State param_1, intrusive_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIButton::SetFrameTextureForState(Caver::GUIControl::State,
   boost::intrusive_ptr<Caver::Texture> const&) */

void __thiscall
Caver::GUIButton::SetFrameTextureForState(GUIButton *this,ulong param_2,intrusive_ptr *param_3)

{
  long lVar1;
  GUIRoundedRect *pGVar2;
  undefined8 local_40;
  long local_38;
  
                    /* try { // try from 00595e34 to 00695e5b has its CatchHandler @ 00595e64 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00595e5c to 00695e77 has its CatchHandler @ 00595dac */
  if ((param_2 & 1) == 0) {
    local_40 = *(undefined8 *)(this + 0x128);
                    /* catch() { ... } // from try @ 00595e34 with catch @ 00595e64 */
                    /* catch() { ... } // from try @ 00595dc4 with catch @ 00595e68 */
    *(undefined8 *)(this + 0x128) = 0;
    boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr
              ((scoped_ptr<Caver::GUIRoundedRect> *)&local_40);
                    /* try { // try from 00595e78 to 00695e83 has its CatchHandler @ 00595e84 */
    if (*(long *)param_3 == 0) goto LAB_00595ef4;
    pGVar2 = operator_new(0xa8);
                    /* catch() { ... } // from try @ 00595e78 with catch @ 00595e84 */
                    /* try { // try from 00595e88 to 00695e8b has its CatchHandler @ 00595e90 */
    GUIRoundedRect::GUIRoundedRect(pGVar2);
    local_40 = *(undefined8 *)(this + 0x128);
                    /* catch() { ... } // from try @ 00595e88 with catch @ 00595e90 */
    *(GUIRoundedRect **)(this + 0x128) = pGVar2;
    boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr
              ((scoped_ptr<Caver::GUIRoundedRect> *)&local_40);
    pGVar2 = *(GUIRoundedRect **)(this + 0x128);
  }
  else {
    local_40 = *(undefined8 *)(this + 0x130);
    *(undefined8 *)(this + 0x130) = 0;
                    /* catch() { ... } // from try @ 00595f28 with catch @ 00595eb8
                       catch() { ... } // from try @ 00595fcc with catch @ 00595eb8 */
    boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr
              ((scoped_ptr<Caver::GUIRoundedRect> *)&local_40);
    if (*(long *)param_3 == 0) goto LAB_00595ef4;
    pGVar2 = operator_new(0xa8);
    GUIRoundedRect::GUIRoundedRect(pGVar2);
    local_40 = *(undefined8 *)(this + 0x130);
    *(GUIRoundedRect **)(this + 0x130) = pGVar2;
    boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr
              ((scoped_ptr<Caver::GUIRoundedRect> *)&local_40);
    pGVar2 = *(GUIRoundedRect **)(this + 0x130);
  }
  GUIRoundedRect::InitWithTexture(pGVar2,param_3);
LAB_00595ef4:
  if (DAT_00683944 < *(float *)(this + 0x8c)) {
    (**(code **)(*(long *)this + 0x58))(this);
  }
                    /* try { // try from 00595f24 to 00695f27 has its CatchHandler @ 00595f84 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00595f28 to 00695fa3 has its CatchHandler @ 00595eb8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


