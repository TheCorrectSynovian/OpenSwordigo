/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004328ac
 * Function: Caver::Proto::MagicBoltComponent::MagicBoltComponent
 * Signature: undefined __thiscall MagicBoltComponent(MagicBoltComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicBoltComponent::MagicBoltComponent() */

void __thiscall Caver::Proto::MagicBoltComponent::MagicBoltComponent(MagicBoltComponent *this)

{
  undefined *puVar1;
  
                    /* try { // try from 004328ac to 005328b3 has its CatchHandler @ 004328f8 */
  puVar1 = PTR_vtable_007e4cb0;
                    /* try { // try from 004328b4 to 0053291b has its CatchHandler @ 00432710 */
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  return;
}


