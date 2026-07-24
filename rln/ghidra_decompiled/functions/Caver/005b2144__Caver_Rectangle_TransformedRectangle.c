/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b2144
 * Function: Caver::Rectangle::TransformedRectangle
 * Signature: undefined __cdecl TransformedRectangle(Vector2 * param_1, float param_2, Vector2 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::TransformedRectangle(Caver::Vector2 const&, float, Caver::Vector2 const&) const
    */

void Caver::Rectangle::TransformedRectangle(Vector2 *param_1,float param_2,Vector2 *param_3)

{
  float *in_x2;
  Rectangle *in_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *in_x2 * *(float *)(param_1 + 8);
  fVar2 = *in_x2 * *(float *)param_1;
  fVar3 = in_x2[1] * *(float *)(param_1 + 4);
  fVar1 = in_x2[1] * *(float *)(param_1 + 0xc);
  *(float *)in_x8 = fVar2;
  *(float *)(in_x8 + 4) = fVar3;
  *(float *)(in_x8 + 8) = fVar4;
  *(float *)(in_x8 + 0xc) = fVar1;
  if (fVar4 < 0.0) {
                    /* try { // try from 005b2184 to 006b2187 has its CatchHandler @ 005b21e4 */
    *(float *)in_x8 = fVar2 + fVar4;
    *(float *)(in_x8 + 8) = -fVar4;
  }
  if (fVar1 < 0.0) {
    *(float *)(in_x8 + 4) = fVar3 + fVar1;
    *(float *)(in_x8 + 0xc) = -fVar1;
  }
  Rotate(in_x8,param_2);
  *(ulong *)in_x8 =
       CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) +
                (float)((ulong)*(undefined8 *)in_x8 >> 0x20),
                (float)*(undefined8 *)param_3 + (float)*(undefined8 *)in_x8);
  return;
}


