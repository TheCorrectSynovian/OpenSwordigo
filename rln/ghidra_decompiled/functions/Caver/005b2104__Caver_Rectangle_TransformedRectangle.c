/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b2104
 * Function: Caver::Rectangle::TransformedRectangle
 * Signature: undefined __cdecl TransformedRectangle(Vector2 * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::TransformedRectangle(Caver::Vector2 const&, float) const */

void Caver::Rectangle::TransformedRectangle(Vector2 *param_1,float param_2)

{
  undefined8 *in_x1;
  Rectangle *in_x8;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b20c8 with catch @ 005b211c
                        */
  *(undefined8 *)(in_x8 + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)in_x8 = uVar1;
  Rotate(in_x8,param_2);
  *(ulong *)in_x8 =
       CONCAT44((float)((ulong)*in_x1 >> 0x20) + (float)((ulong)*(undefined8 *)in_x8 >> 0x20),
                (float)*in_x1 + (float)*(undefined8 *)in_x8);
  return;
}


