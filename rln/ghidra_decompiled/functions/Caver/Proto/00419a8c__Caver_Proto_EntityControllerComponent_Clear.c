/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00419a8c
 * Function: Caver::Proto::EntityControllerComponent::Clear
 * Signature: undefined __thiscall Clear(EntityControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityControllerComponent::Clear() */

void __thiscall Caver::Proto::EntityControllerComponent::Clear(EntityControllerComponent *this)

{
                    /* try { // try from 00419a90 to 00519ab7 has its CatchHandler @ 00419abc */
  if (this[0x2c] != (EntityControllerComponent)0x0) {
    *(undefined8 *)(this + 0x14) = 0;
    *(undefined8 *)(this + 0xc) = 0;
    *(undefined8 *)(this + 0x1c) = 0;
    *(undefined8 *)(this + 0x24) = 0x100000000;
  }
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}


