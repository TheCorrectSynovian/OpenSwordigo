/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004362c4
 * Function: Caver::Proto::MagicHookshotComponent::MagicHookshotComponent
 * Signature: undefined __thiscall MagicHookshotComponent(MagicHookshotComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicHookshotComponent::MagicHookshotComponent() */

void __thiscall
Caver::Proto::MagicHookshotComponent::MagicHookshotComponent(MagicHookshotComponent *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e7cf0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x18) = 0;
                    /* try { // try from 004362e4 to 005362f3 has its CatchHandler @ 004362f8 */
  return;
}


