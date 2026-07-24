/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a99ac
 * Function: Caver::GUIRoundedRect::CreateWithOuterBounds
 * Signature: undefined __thiscall CreateWithOuterBounds(GUIRoundedRect * this, Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIRoundedRect::CreateWithOuterBounds(Caver::Rectangle const&) */

void __thiscall
Caver::GUIRoundedRect::CreateWithOuterBounds(GUIRoundedRect *this,Rectangle *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)this != 0) {
    uVar1 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0xc) = uVar1;
                    /* try { // try from 005a99cc to 006a99f3 has its CatchHandler @ 005a99f8 */
    *(ulong *)(this + 0x1c) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0xc) >> 0x20) + *(float *)(this + 0x44),
                  (float)*(undefined8 *)(this + 0xc) + *(float *)(this + 0x3c));
    *(float *)(this + 0x24) =
         (*(float *)(this + 0x14) - *(float *)(this + 0x40)) - *(float *)(this + 0x3c);
    *(float *)(this + 0x28) =
         (*(float *)(this + 0x18) - *(float *)(this + 0x48)) - *(float *)(this + 0x44);
    CreateSprite(this);
    return;
  }
  return;
}


