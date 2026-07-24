/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00541904
 * Function: Caver::TabbedMenuView::UpdateContentLayout
 * Signature: undefined __thiscall UpdateContentLayout(TabbedMenuView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TabbedMenuView::UpdateContentLayout() */

void __thiscall Caver::TabbedMenuView::UpdateContentLayout(TabbedMenuView *this)

{
  long lVar1;
  GUIView *this_00;
  float local_58;
  float local_50;
  float local_48;
  int local_44;
  undefined8 local_40;
  long local_38;
  
                    /* try { // try from 00541914 to 00641927 has its CatchHandler @ 00541b80 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(GUIView **)(this + 0x138) != (GUIView *)0x0) {
    local_44 = *(int *)(this + 0x88);
                    /* try { // try from 00541938 to 00641943 has its CatchHandler @ 00541cc4 */
                    /* try { // try from 00541944 to 0064194b has its CatchHandler @ 00541b64 */
                    /* try { // try from 0054194c to 00641957 has its CatchHandler @ 00541cc4 */
                    /* try { // try from 0054195c to 0064196f has its CatchHandler @ 00541c74 */
    local_48 = *(float *)(*(long *)(this + 0x100) + 0x74) +
               *(float *)(*(long *)(this + 0x100) + 0x7c);
    local_40 = CONCAT44(*(undefined4 *)(this + 0x90),
                        (*(float *)(this + 0x84) + *(float *)(this + 0x8c)) - local_48);
    GUIView::SetFrame(*(GUIView **)(this + 0x138),(Rectangle *)&local_48);
  }
  this_00 = *(GUIView **)(this + 0x178);
                    /* try { // try from 00541974 to 00641987 has its CatchHandler @ 00541b54 */
  if (this_00 != (GUIView *)0x0) {
    GUIView::safeBounds();
                    /* try { // try from 0054198c to 00641993 has its CatchHandler @ 00541ae8 */
    local_40 = *(undefined8 *)(this_00 + 0x7c);
    local_48 = (float)(int)((local_58 + local_50) - *(float *)(*(long *)(this + 0x178) + 0x7c));
                    /* try { // try from 005419c4 to 006419c7 has its CatchHandler @ 00541c64 */
                    /* try { // try from 005419c8 to 00641c97 has its CatchHandler @ 0054188c */
    local_44 = (int)((*(float *)(*(long *)(this + 0x148) + 0x88) +
                     *(float *)(*(long *)(this + 0x148) + 0x90) * 0.5) -
                    *(float *)(*(long *)(this + 0x178) + 0x80) * 0.5);
    GUIView::SetFrame(this_00,(Rectangle *)&local_48);
    GUIView::SetTouchBoundsToIncludeSubviewTouchBounds(*(GUIView **)(this + 0x148));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


