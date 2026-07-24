/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00433378
 * Function: Caver::Proto::MagicExplosionComponent::MagicExplosionComponent
 * Signature: undefined __thiscall MagicExplosionComponent(MagicExplosionComponent * this, MagicExplosionComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicExplosionComponent::MagicExplosionComponent(Caver::Proto::MagicExplosionComponent
   const&) */

void __thiscall
Caver::Proto::MagicExplosionComponent::MagicExplosionComponent
          (MagicExplosionComponent *this,MagicExplosionComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e58b0;
                    /* try { // try from 00433384 to 0053338f has its CatchHandler @ 00433534 */
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  MergeFrom(this,param_1);
  return;
}


