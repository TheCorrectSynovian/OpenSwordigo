/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00583d48
 * Function: Caver::SoundEffectSource::EnqueueSource
 * Signature: undefined __cdecl EnqueueSource(intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectSource::EnqueueSource(boost::intrusive_ptr<Caver::SoundEffectSource> const&) */

void Caver::SoundEffectSource::EnqueueSource(intrusive_ptr *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  SetEffect(*(SoundEffectSource **)param_1,(intrusive_ptr *)&local_30);
  pvVar2 = operator_new(0x18);
  lVar3 = *(long *)param_1;
  *(long *)((long)pvVar2 + 0x10) = lVar3;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  FUN_0062a9ac(pvVar2,&DAT_007e9da0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


