/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b1d44
 * Function: Caver::Rectangle::RectangleByInsetting
 * Signature: undefined __thiscall RectangleByInsetting(Rectangle * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::RectangleByInsetting(float) const */

void __thiscall Caver::Rectangle::RectangleByInsetting(Rectangle *this,float param_1)

{
  undefined8 *in_x8;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 8);
  *in_x8 = CONCAT44(param_1 + (float)((ulong)*(undefined8 *)this >> 0x20),
                    param_1 + (float)*(undefined8 *)this);
  in_x8[1] = CONCAT44((float)((ulong)uVar1 >> 0x20) - (param_1 + param_1),
                      (float)uVar1 - (param_1 + param_1));
  return;
}


