/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00368bb8
 * Function: Caver::EntityComponent::SetFacingDirection
 * Signature: undefined __thiscall SetFacingDirection(EntityComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityComponent::SetFacingDirection(int) */

void __thiscall Caver::EntityComponent::SetFacingDirection(EntityComponent *this,int param_1)

{
  if (*(int *)(this + 0x70) != param_1) {
    *(int *)(this + 0x70) = param_1;
    *(byte *)(*(long *)(this + 0x28) + 0x90) = (byte)((uint)param_1 >> 0x1f);
  }
  return;
}


