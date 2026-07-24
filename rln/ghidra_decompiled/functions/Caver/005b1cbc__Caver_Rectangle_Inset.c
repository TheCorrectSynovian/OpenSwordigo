/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b1cbc
 * Function: Caver::Rectangle::Inset
 * Signature: undefined __thiscall Inset(Rectangle * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::Inset(float) */

void __thiscall Caver::Rectangle::Inset(Rectangle *this,float param_1)

{
  *(ulong *)this =
       CONCAT44(param_1 + (float)((ulong)*(undefined8 *)this >> 0x20),
                param_1 + (float)*(undefined8 *)this);
  *(ulong *)(this + 8) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 8) >> 0x20) - (param_1 + param_1),
                (float)*(undefined8 *)(this + 8) - (param_1 + param_1));
  return;
}


