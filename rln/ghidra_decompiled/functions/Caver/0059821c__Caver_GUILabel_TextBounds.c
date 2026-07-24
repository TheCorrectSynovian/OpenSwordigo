/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059821c
 * Function: Caver::GUILabel::TextBounds
 * Signature: undefined __cdecl TextBounds(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUILabel::TextBounds() const */

void Caver::GUILabel::TextBounds(void)

{
  long in_x0;
  undefined8 *in_x8;
  undefined8 uVar1;
  
  if (*(long *)(in_x0 + 0x120) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(long *)(in_x0 + 0x120) + 0x48);
  }
  *in_x8 = 0;
  in_x8[1] = uVar1;
  return;
}


