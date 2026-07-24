/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044ec74
 * Function: Caver::GUIView::safeBounds
 * Signature: undefined __cdecl safeBounds(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::safeBounds() const */

void Caver::GUIView::safeBounds(void)

{
  long lVar1;
  Rectangle *in_x0;
  Rectangle *in_x8;
  undefined8 uVar2;
  GUIView aGStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
                    /* try { // try from 0044ec78 to 0054eccf has its CatchHandler @ 00447cc4 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = *(undefined8 *)(in_x0 + 0x84);
  *(undefined8 *)(in_x8 + 8) = *(undefined8 *)(in_x0 + 0x8c);
  *(undefined8 *)in_x8 = uVar2;
  if (*(long *)(in_x0 + 0x58) != 0) {
                    /* catch() { ... } // from try @ 004488e4 with catch @ 0044ecb0 */
    safeBounds();
                    /* catch() { ... } // from try @ 00448898 with catch @ 0044ecb4 */
    ConvertRectFromView(in_x0,aGStack_68);
                    /* try { // try from 0044ecd0 to 0054ecdf has its CatchHandler @ 0044f4b4 */
    Rectangle::Intersection(in_x8);
    *(undefined8 *)(in_x8 + 8) = uStack_40;
    *(undefined8 *)in_x8 = local_48;
  }
                    /* try { // try from 0044ece0 to 0054ed37 has its CatchHandler @ 00447cc4 */
  if (0.0 < *(float *)(in_x0 + 0x38)) {
    Rectangle::Intersection(in_x8);
    *(undefined8 *)(in_x8 + 8) = uStack_40;
    *(undefined8 *)in_x8 = local_48;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00448844 with catch @ 0044ed18 */
                    /* catch() { ... } // from try @ 004487f8 with catch @ 0044ed1c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


