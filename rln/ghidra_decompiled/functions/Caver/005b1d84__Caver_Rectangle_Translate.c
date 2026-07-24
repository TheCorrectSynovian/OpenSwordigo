/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b1d84
 * Function: Caver::Rectangle::Translate
 * Signature: undefined __thiscall Translate(Rectangle * this, Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::Translate(Caver::Vector2 const&) */

void __thiscall Caver::Rectangle::Translate(Rectangle *this,Vector2 *param_1)

{
  *(ulong *)this =
       CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                (float)((ulong)*(undefined8 *)this >> 0x20),
                (float)*(undefined8 *)param_1 + (float)*(undefined8 *)this);
  return;
}


