/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042bd6c
 * Function: Caver::Proto::WeaponGlowComponent::~WeaponGlowComponent
 * Signature: undefined __thiscall ~WeaponGlowComponent(WeaponGlowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WeaponGlowComponent::~WeaponGlowComponent() */

void __thiscall Caver::Proto::WeaponGlowComponent::~WeaponGlowComponent(WeaponGlowComponent *this)

{
                    /* catch() { ... } // from try @ 0042bb38 with catch @ 0042bd78 */
                    /* catch() { ... } // from try @ 0042bb80 with catch @ 0042bd7c
                       catch() { ... } // from try @ 0042bbf8 with catch @ 0042bd7c */
  *(undefined **)this = PTR_vtable_007e6f60 + 0x10;
  if (*(WeaponGlowComponent **)PTR_default_instance__007e5698 != this) {
                    /* try { // try from 0042bda0 to 0052bda3 has its CatchHandler @ 0042bdac */
                    /* try { // try from 0042bda4 to 0052bdaf has its CatchHandler @ 0042bafc */
    if (*(long **)(this + 0x10) != (long *)0x0) {
                    /* catch() { ... } // from try @ 0042bda0 with catch @ 0042bdac */
                    /* try { // try from 0042bdb0 to 0052be4b has its CatchHandler @ 0042bdb0
                       catch() { ... } // from try @ 0042bdb0 with catch @ 0042bdb0
                       catch() { ... } // from try @ 0042be50 with catch @ 0042bdb0 */
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 8))();
    }
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


