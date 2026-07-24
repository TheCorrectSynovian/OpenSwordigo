/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004147fc
 * Function: Caver::Proto::EntityComponent::Clear
 * Signature: undefined __thiscall Clear(EntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityComponent::Clear() */

void __thiscall Caver::Proto::EntityComponent::Clear(EntityComponent *this)

{
                    /* try { // try from 004147fc to 00514823 has its CatchHandler @ 00414880 */
  if (this[0x14] != (EntityComponent)0x0) {
    *(undefined4 *)(this + 0xc) = 1;
    this[0x10] = (EntityComponent)0x1;
  }
  *(undefined4 *)(this + 0x14) = 0;
  return;
}


