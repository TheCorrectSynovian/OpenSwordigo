/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a9b68
 * Function: Caver::GUIRoundedRect::CreateWithInnerBounds
 * Signature: undefined __thiscall CreateWithInnerBounds(GUIRoundedRect * this, Rectangle * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIRoundedRect::CreateWithInnerBounds(Caver::Rectangle const&, float) */

void __thiscall
Caver::GUIRoundedRect::CreateWithInnerBounds(GUIRoundedRect *this,Rectangle *param_1,float param_2)

{
  undefined8 uVar1;
  
  if (*(long *)this != 0) {
    uVar1 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x24) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x1c) = uVar1;
    Rectangle::Inset((Rectangle *)(this + 0x1c),param_2);
    *(ulong *)(this + 0xc) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0x1c) >> 0x20) - *(float *)(this + 0x44),
                  (float)*(undefined8 *)(this + 0x1c) - *(float *)(this + 0x3c));
    *(float *)(this + 0x14) =
         *(float *)(this + 0x3c) + *(float *)(this + 0x24) + *(float *)(this + 0x40);
    *(float *)(this + 0x18) =
         *(float *)(this + 0x44) + *(float *)(this + 0x28) + *(float *)(this + 0x48);
                    /* try { // try from 005a9bcc to 006a9bdf has its CatchHandler @ 005a9dd4 */
    CreateSprite(this);
    return;
  }
  return;
}


