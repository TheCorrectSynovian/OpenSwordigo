/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043334c
 * Function: Caver::Proto::MagicExplosionComponent::MagicExplosionComponent
 * Signature: undefined __thiscall MagicExplosionComponent(MagicExplosionComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicExplosionComponent::MagicExplosionComponent() */

void __thiscall
Caver::Proto::MagicExplosionComponent::MagicExplosionComponent(MagicExplosionComponent *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e58b0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
                    /* try { // try from 00433364 to 00533377 has its CatchHandler @ 004335a0 */
  return;
}


