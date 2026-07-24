/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038bd40
 * Function: Caver::MagicSpellCastComponent::HandleMessage
 * Signature: undefined __cdecl HandleMessage(int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicSpellCastComponent::HandleMessage(int, void*) */

undefined8 Caver::MagicSpellCastComponent::HandleMessage(int param_1,void *param_2)

{
  Component *pCVar1;
  SoundEffectComponent *this;
  
  pCVar1 = (Component *)(ulong)(uint)param_1;
  if ((int)param_2 == 2) {
    this = *(SoundEffectComponent **)(pCVar1 + 0x98);
    if (this == (SoundEffectComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar1 + 0x88),pCVar1);
      this = *(SoundEffectComponent **)(pCVar1 + 0x98);
      if (this == (SoundEffectComponent *)0x0) {
        return 0;
      }
    }
    SoundEffectComponent::Stop(this);
  }
  return 0;
}


