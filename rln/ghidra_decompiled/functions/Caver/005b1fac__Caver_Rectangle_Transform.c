/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b1fac
 * Function: Caver::Rectangle::Transform
 * Signature: undefined __thiscall Transform(Rectangle * this, Vector2 * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::Transform(Caver::Vector2 const&, float) */

void __thiscall Caver::Rectangle::Transform(Rectangle *this,Vector2 *param_1,float param_2)

{
  Rotate(this,param_2);
  *(ulong *)this =
       CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                (float)((ulong)*(undefined8 *)this >> 0x20),
                (float)*(undefined8 *)param_1 + (float)*(undefined8 *)this);
  return;
}


