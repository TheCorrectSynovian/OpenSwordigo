/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004210f4
 * Function: Caver::Proto::FireEmitterComponent::Clear
 * Signature: undefined __thiscall Clear(FireEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FireEmitterComponent::Clear() */

void __thiscall Caver::Proto::FireEmitterComponent::Clear(FireEmitterComponent *this)

{
  FireEmitterComponent FVar1;
  uint uVar2;
  
  FVar1 = this[0x40];
  uVar2 = (uint)(byte)FVar1;
  if (FVar1 != (FireEmitterComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
                    /* try { // try from 00421110 to 0052113b has its CatchHandler @ 00421250 */
    if ((((byte)FVar1 >> 2 & 1) != 0) && (*(Vector2 **)(this + 0x18) != (Vector2 *)0x0)) {
      Vector2::Clear(*(Vector2 **)(this + 0x18));
      uVar2 = *(uint *)(this + 0x40);
    }
    if (((uVar2 >> 3 & 1) != 0) && (*(Vector3 **)(this + 0x20) != (Vector3 *)0x0)) {
      Vector3::Clear(*(Vector3 **)(this + 0x20));
      uVar2 = *(uint *)(this + 0x40);
    }
    if (((uVar2 >> 4 & 1) != 0) && (*(FloatColor **)(this + 0x28) != (FloatColor *)0x0)) {
      FloatColor::Clear(*(FloatColor **)(this + 0x28));
      uVar2 = *(uint *)(this + 0x40);
    }
    *(undefined8 *)(this + 0x30) = 0;
    if (((uVar2 >> 7 & 1) != 0) && (*(Vector3 **)(this + 0x38) != (Vector3 *)0x0)) {
                    /* try { // try from 0042115c to 00521183 has its CatchHandler @ 004212a4 */
      Vector3::Clear(*(Vector3 **)(this + 0x38));
    }
  }
  *(undefined4 *)(this + 0x40) = 0;
  return;
}


