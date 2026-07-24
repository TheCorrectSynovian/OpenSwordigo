/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b2074
 * Function: Caver::Rectangle::TranslatedRectangle
 * Signature: undefined __cdecl TranslatedRectangle(Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&) const */

void Caver::Rectangle::TranslatedRectangle(Vector2 *param_1)

{
  undefined8 *in_x1;
  undefined8 *in_x8;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *in_x8 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) + (float)((ulong)*in_x1 >> 0x20),
                    (float)*(undefined8 *)param_1 + (float)*in_x1);
  in_x8[1] = uVar1;
  return;
}


