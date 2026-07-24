/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004147b4
 * Function: Caver::Proto::EntityComponent::SetCachedSize
 * Signature: undefined __thiscall SetCachedSize(EntityComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityComponent::SetCachedSize(int) const */

void __thiscall Caver::Proto::EntityComponent::SetCachedSize(EntityComponent *this,int param_1)

{
                    /* catch() { ... } // from try @ 00414784 with catch @ 004147b4 */
  *(int *)(this + 8) = param_1;
                    /* catch() { ... } // from try @ 00414658 with catch @ 004147b8 */
  return;
}


