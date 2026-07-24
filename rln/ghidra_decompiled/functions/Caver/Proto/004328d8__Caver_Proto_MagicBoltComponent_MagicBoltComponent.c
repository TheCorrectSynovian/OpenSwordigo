/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004328d8
 * Function: Caver::Proto::MagicBoltComponent::MagicBoltComponent
 * Signature: undefined __thiscall MagicBoltComponent(MagicBoltComponent * this, MagicBoltComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicBoltComponent::MagicBoltComponent(Caver::Proto::MagicBoltComponent const&) */

void __thiscall
Caver::Proto::MagicBoltComponent::MagicBoltComponent
          (MagicBoltComponent *this,MagicBoltComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e4cb0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
                    /* catch() { ... } // from try @ 004328ac with catch @ 004328f8 */
  *(undefined **)this = puVar1 + 0x10;
  MergeFrom(this,param_1);
  return;
}


