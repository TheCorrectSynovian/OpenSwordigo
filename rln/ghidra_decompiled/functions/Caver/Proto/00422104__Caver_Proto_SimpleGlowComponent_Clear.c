/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00422104
 * Function: Caver::Proto::SimpleGlowComponent::Clear
 * Signature: undefined __thiscall Clear(SimpleGlowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SimpleGlowComponent::Clear() */

void __thiscall Caver::Proto::SimpleGlowComponent::Clear(SimpleGlowComponent *this)

{
  SimpleGlowComponent SVar1;
  uint uVar2;
  
                    /* try { // try from 00422108 to 00522143 has its CatchHandler @ 004226dc */
  SVar1 = this[0x38];
  uVar2 = (uint)(byte)SVar1;
  if (SVar1 != (SimpleGlowComponent)0x0) {
    if ((((byte)SVar1 & 1) != 0) && (*(FloatColor **)(this + 0x10) != (FloatColor *)0x0)) {
      FloatColor::Clear(*(FloatColor **)(this + 0x10));
      uVar2 = *(uint *)(this + 0x38);
    }
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined4 *)(this + 0x20) = 0;
    if (((uVar2 >> 4 & 1) != 0) && (*(Vector2 **)(this + 0x28) != (Vector2 *)0x0)) {
      Vector2::Clear(*(Vector2 **)(this + 0x28));
    }
    *(undefined8 *)(this + 0x30) = 0;
  }
  *(undefined4 *)(this + 0x38) = 0;
  return;
}


