/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b1cdc
 * Function: Caver::Rectangle::Outset
 * Signature: undefined __thiscall Outset(Rectangle * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::Outset(float) */

void __thiscall Caver::Rectangle::Outset(Rectangle *this,float param_1)

{
  *(ulong *)this =
       CONCAT44((float)((ulong)*(undefined8 *)this >> 0x20) - param_1,
                (float)*(undefined8 *)this - param_1);
  *(ulong *)(this + 8) =
       CONCAT44(param_1 + param_1 + (float)((ulong)*(undefined8 *)(this + 8) >> 0x20),
                param_1 + param_1 + (float)*(undefined8 *)(this + 8));
  return;
}


