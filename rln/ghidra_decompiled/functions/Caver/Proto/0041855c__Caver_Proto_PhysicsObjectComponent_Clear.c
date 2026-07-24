/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041855c
 * Function: Caver::Proto::PhysicsObjectComponent::Clear
 * Signature: undefined __thiscall Clear(PhysicsObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PhysicsObjectComponent::Clear() */

void __thiscall Caver::Proto::PhysicsObjectComponent::Clear(PhysicsObjectComponent *this)

{
                    /* try { // try from 00418564 to 0051856f has its CatchHandler @ 004193cc */
  if (this[0x30] != (PhysicsObjectComponent)0x0) {
    this[0xc] = (PhysicsObjectComponent)0x1;
    if ((((byte)this[0x30] >> 1 & 1) != 0) && (*(Vector2 **)(this + 0x10) != (Vector2 *)0x0)) {
      Vector2::Clear(*(Vector2 **)(this + 0x10));
    }
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined8 *)(this + 0x21) = 0;
    *(undefined4 *)(this + 0x18) = 0x3f800000;
                    /* try { // try from 0041859c to 005185d7 has its CatchHandler @ 00419370 */
    *(undefined8 *)(this + 0x1c) = 0;
  }
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


