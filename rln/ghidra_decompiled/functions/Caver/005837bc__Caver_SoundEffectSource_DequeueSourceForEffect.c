/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005837bc
 * Function: Caver::SoundEffectSource::DequeueSourceForEffect
 * Signature: undefined __thiscall DequeueSourceForEffect(SoundEffectSource * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::SoundEffectSource::DequeueSourceForEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
    */

void __thiscall
Caver::SoundEffectSource::DequeueSourceForEffect(SoundEffectSource *this,intrusive_ptr *param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long *plVar6;
  undefined8 *in_x8;
  SoundEffectSource *pSVar7;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  puVar4 = DAT_007e9da0;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *in_x8 = 0;
  pvVar5 = DAT_007e9da8;
  if ((undefined8 **)puVar4 == &DAT_007e9da0) {
    pSVar7 = operator_new(0x50);
    puVar3 = PTR_vtable_007e7e90;
    *(undefined4 *)(pSVar7 + 8) = 1;
    *(undefined8 *)(pSVar7 + 0x10) = 0;
    pSVar7[0x18] = (SoundEffectSource)0x0;
    *(undefined8 *)(pSVar7 + 0x20) = 0;
    *(undefined8 *)(pSVar7 + 0x28) = 0;
    *(undefined4 *)(pSVar7 + 0x48) = 0;
    *(undefined8 *)(pSVar7 + 0x38) = 0;
    *(undefined8 *)(pSVar7 + 0x40) = 0;
    *(undefined8 *)(pSVar7 + 0x30) = 0x3f80000000000000;
    *(undefined **)pSVar7 = puVar3 + 0x10;
    *in_x8 = pSVar7;
    InitWithEffect(pSVar7,(intrusive_ptr *)this);
  }
  else {
    pSVar7 = *(SoundEffectSource **)((long)DAT_007e9da8 + 0x10);
    if (pSVar7 != (SoundEffectSource *)0x0) {
      *(int *)(pSVar7 + 8) = *(int *)(pSVar7 + 8) + 1;
    }
                    /* try { // try from 0058381c to 00683843 has its CatchHandler @ 005839a0 */
    *in_x8 = pSVar7;
    FUN_0062a9c8(pvVar5);
    plVar6 = *(long **)((long)pvVar5 + 0x10);
    if ((plVar6 != (long *)0x0) &&
       (iVar1 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar6 + 8))();
    }
    operator_delete(pvVar5);
    *(undefined8 *)(pSVar7 + 0x20) = 0;
    *(undefined8 *)(pSVar7 + 0x10) = 0;
    pSVar7[0x18] = (SoundEffectSource)0x0;
    *(undefined4 *)(pSVar7 + 0x48) = 0;
    SetEffect(pSVar7,(intrusive_ptr *)this);
    setReferenceDistance(_DAT_006967cc);
                    /* try { // try from 00583884 to 0068398b has its CatchHandler @ 00583994 */
    setRolloffFactor(0.0);
    setGain(pSVar7,1.0);
    local_58 = 0;
    local_50 = 0;
    setPosition(pSVar7,(Vector3 *)&local_58);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


