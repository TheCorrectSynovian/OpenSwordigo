/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d722c
 * Function: Caver::GUIView::controlBounds
 * Signature: undefined __cdecl controlBounds(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::controlBounds() const */

void Caver::GUIView::controlBounds(void)

{
  long lVar1;
  Rectangle *in_x0;
  Rectangle *in_x8;
  undefined8 uVar2;
  GUIView aGStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = *(undefined8 *)(in_x0 + 0x84);
  *(undefined8 *)(in_x8 + 8) = *(undefined8 *)(in_x0 + 0x8c);
  *(undefined8 *)in_x8 = uVar2;
  if (*(long *)(in_x0 + 0x58) != 0) {
    controlBounds();
    ConvertRectFromView(in_x0,aGStack_68);
    Rectangle::Intersection(in_x8);
    *(undefined8 *)(in_x8 + 8) = uStack_40;
    *(undefined8 *)in_x8 = local_48;
  }
  if (0.0 < *(float *)(in_x0 + 0x48)) {
    Rectangle::Intersection(in_x8);
    *(undefined8 *)(in_x8 + 8) = uStack_40;
    *(undefined8 *)in_x8 = local_48;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


