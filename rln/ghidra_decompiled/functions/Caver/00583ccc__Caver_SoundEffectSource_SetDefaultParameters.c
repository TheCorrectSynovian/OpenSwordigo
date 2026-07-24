/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00583ccc
 * Function: Caver::SoundEffectSource::SetDefaultParameters
 * Signature: undefined __thiscall SetDefaultParameters(SoundEffectSource * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::SoundEffectSource::SetDefaultParameters() */

void __thiscall Caver::SoundEffectSource::SetDefaultParameters(SoundEffectSource *this)

{
  long lVar1;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  setReferenceDistance(_DAT_006967cc);
  setRolloffFactor(0.0);
  setGain(this,1.0);
  local_38 = 0;
  local_30 = 0;
  setPosition(this,(Vector3 *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


