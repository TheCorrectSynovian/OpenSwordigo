/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b2358
 * Function: Caver::Rectangle::TransformedRectangle
 * Signature: undefined __cdecl TransformedRectangle(Matrix4 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::TransformedRectangle(Caver::Matrix4 const&) const */

void Caver::Rectangle::TransformedRectangle(Matrix4 *param_1)

{
  Matrix4 *in_x1;
  Rectangle *in_x8;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
                    /* catch() { ... } // from try @ 005b2324 with catch @ 005b235c */
  *(undefined8 *)(in_x8 + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)in_x8 = uVar1;
                    /* try { // try from 005b2364 to 006b236b has its CatchHandler @ 005b2378 */
  Transform(in_x8,in_x1);
  return;
}


