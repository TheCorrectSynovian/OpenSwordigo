/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00598200
 * Function: Caver::GUILabel::TextSize
 * Signature: undefined __cdecl TextSize(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUILabel::TextSize() const */

void Caver::GUILabel::TextSize(void)

{
  long in_x0;
  undefined8 *in_x8;
  
  if (*(long *)(in_x0 + 0x120) != 0) {
    *in_x8 = *(undefined8 *)(*(long *)(in_x0 + 0x120) + 0x48);
    return;
  }
  *in_x8 = 0;
  return;
}


