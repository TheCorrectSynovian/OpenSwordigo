/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00416f84
 * Function: Caver::Proto::ProgramComponent::SetCachedSize
 * Signature: undefined __thiscall SetCachedSize(ProgramComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ProgramComponent::SetCachedSize(int) const */

void __thiscall Caver::Proto::ProgramComponent::SetCachedSize(ProgramComponent *this,int param_1)

{
  *(int *)(this + 8) = param_1;
                    /* try { // try from 00416f88 to 00516f93 has its CatchHandler @ 00416ed0 */
  return;
}


