/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b1fe0
 * Function: Caver::Rectangle::Transform
 * Signature: undefined __thiscall Transform(Rectangle * this, Vector2 * param_1, float param_2, Vector2 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::Transform(Caver::Vector2 const&, float, Caver::Vector2 const&) */

void __thiscall
Caver::Rectangle::Transform(Rectangle *this,Vector2 *param_1,float param_2,Vector2 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)param_3;
  fVar4 = fVar1 * *(float *)this;
  *(float *)this = fVar4;
  fVar1 = fVar1 * *(float *)(this + 8);
  fVar3 = *(float *)(param_3 + 4) * *(float *)(this + 4);
  fVar2 = *(float *)(param_3 + 4) * *(float *)(this + 0xc);
  *(float *)(this + 4) = fVar3;
  *(float *)(this + 8) = fVar1;
  *(float *)(this + 0xc) = fVar2;
  if (fVar1 < 0.0) {
    *(float *)this = fVar4 + fVar1;
    *(float *)(this + 8) = -fVar1;
  }
  if (fVar2 < 0.0) {
    *(float *)(this + 4) = fVar3 + fVar2;
    *(float *)(this + 0xc) = -fVar2;
  }
  Rotate(this,param_2);
  *(ulong *)this =
       CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                (float)((ulong)*(undefined8 *)this >> 0x20),
                (float)*(undefined8 *)param_1 + (float)*(undefined8 *)this);
  return;
}


