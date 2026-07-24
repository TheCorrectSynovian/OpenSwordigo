/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051a96c
 * Function: Caver::ItemInfoView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(ItemInfoView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemInfoView::LayoutSubviews() */

void __thiscall Caver::ItemInfoView::LayoutSubviews(ItemInfoView *this)

{
  long lVar1;
  GUIView *pGVar2;
  long lVar3;
  undefined8 uVar4;
  float local_48;
  float local_44;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 0051a988 to 0061a98b has its CatchHandler @ 0051a998 */
  local_38 = *(long *)(lVar1 + 0x28);
  pGVar2 = *(GUIView **)(this + 0xf0);
                    /* catch() { ... } // from try @ 0051a988 with catch @ 0051a998 */
  if (pGVar2 != (GUIView *)0x0) {
                    /* try { // try from 0051a99c to 0061a9a3 has its CatchHandler @ 0051a9ac */
    local_40 = *(undefined8 *)(pGVar2 + 0x7c);
                    /* try { // try from 0051a9a4 to 0061a9af has its CatchHandler @ 0051a964 */
                    /* catch() { ... } // from try @ 0051a99c with catch @ 0051a9ac */
                    /* try { // try from 0051a9b0 to 0061a9f7 has its CatchHandler @ 0051a9b0
                       catch(type#1 @ 00000000) { ... } // from try @ 0051a9b0 with catch @ 0051a9b0
                       catch(type#1 @ 00000000) { ... } // from try @ 0051aa14 with catch @ 0051a9b0
                       catch(type#1 @ 00000000) { ... } // from try @ 0051aad0 with catch @ 0051a9b0
                        */
    local_44 = *(float *)(this + 0x88) + 6.0;
    local_48 = (-6.0 - (float)local_40) + *(float *)(this + 0x84) + *(float *)(this + 0x8c);
    GUIView::SetFrame(pGVar2,(Rectangle *)&local_48);
  }
  pGVar2 = *(GUIView **)(this + 0x110);
  if (pGVar2 != (GUIView *)0x0) {
    local_40 = *(undefined8 *)(pGVar2 + 0x7c);
                    /* try { // try from 0051a9f8 to 0061aa13 has its CatchHandler @ 0051aac4 */
    local_48 = (float)(int)((*(float *)(this + 0x84) + *(float *)(this + 0x8c) * 0.5) -
                           (float)local_40 * 0.5);
    local_44 = 202.0;
                    /* try { // try from 0051aa14 to 0061aac7 has its CatchHandler @ 0051a9b0 */
    GUIView::SetFrame(pGVar2,(Rectangle *)&local_48);
  }
  pGVar2 = *(GUIView **)(this + 0x120);
  if (pGVar2 != (GUIView *)0x0) {
    local_40 = *(undefined8 *)(pGVar2 + 0x7c);
    local_48 = (float)(int)((*(float *)(this + 0x84) + *(float *)(this + 0x8c) * 0.5) -
                           (float)local_40 * 0.5);
    local_44 = 110.0;
    GUIView::SetFrame(pGVar2,(Rectangle *)&local_48);
  }
  pGVar2 = *(GUIView **)(this + 0x150);
  if (pGVar2 != (GUIView *)0x0) {
    lVar3 = *(long *)(this + 0x120);
    local_40 = *(undefined8 *)(pGVar2 + 0x7c);
    local_44 = (*(float *)(lVar3 + 0x78) + -20.0) - *(float *)(pGVar2 + 0x80);
    local_48 = (float)(int)((*(float *)(lVar3 + 0x74) + *(float *)(lVar3 + 0x7c) * 0.5) -
                           *(float *)(pGVar2 + 0x7c) * 0.5);
    GUIView::SetFrame(pGVar2,(Rectangle *)&local_48);
  }
  if (*(long *)(this + 0x160) != 0) {
    uVar4 = *(undefined8 *)(*(long *)(this + 0x160) + 0x7c);
    pGVar2 = *(GUIView **)(this + 0x150);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0051a9f8 with catch @ 0051aac4
                        */
                    /* try { // try from 0051aac8 to 0061aacf has its CatchHandler @ 0051aad8 */
                    /* try { // try from 0051aad0 to 0061aadb has its CatchHandler @ 0051a9b0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0051aac8 with catch @ 0051aad8
                        */
    Rectangle::TranslatedRectangle((Vector2 *)(pGVar2 + 0x74));
                    /* catch() { ... } // from try @ 0051ab18 with catch @ 0051aaf4 */
    GUIView::SetFrame(pGVar2,(Rectangle *)&local_48);
    lVar3 = *(long *)(this + 0x150);
    local_44 = *(float *)(lVar3 + 0x78);
                    /* try { // try from 0051ab14 to 0061ab17 has its CatchHandler @ 0051ab28 */
    local_48 = *(float *)(lVar3 + 0x74) + *(float *)(lVar3 + 0x7c) + 20.0;
    local_40 = uVar4;
                    /* try { // try from 0051ab18 to 0061ab3b has its CatchHandler @ 0051aaf4 */
                    /* catch() { ... } // from try @ 0051ab14 with catch @ 0051ab28 */
    GUIView::SetFrame(*(GUIView **)(this + 0x160),(Rectangle *)&local_48);
  }
  AddAnimations(this,false);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


