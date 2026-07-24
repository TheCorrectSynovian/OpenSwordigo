/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b2090
 * Function: Caver::Rectangle::RotatedRectangle
 * Signature: undefined __cdecl RotatedRectangle(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::RotatedRectangle(float) const */

void Caver::Rectangle::RotatedRectangle(float param_1)

{
  undefined8 *in_x0;
  Rectangle *in_x8;
  undefined8 uVar1;
  
  uVar1 = *in_x0;
  *(undefined8 *)(in_x8 + 8) = in_x0[1];
  *(undefined8 *)in_x8 = uVar1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b20d0 with catch @ 005b209c
                       catch(type#1 @ 00000000) { ... } // from try @ 005b21ec with catch @ 005b209c
                        */
  Rotate(in_x8,param_1);
  return;
}


