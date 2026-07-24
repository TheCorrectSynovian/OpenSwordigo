/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00583e78
 * Function: Caver::SoundEffectSource::~SoundEffectSource
 * Signature: undefined __thiscall ~SoundEffectSource(SoundEffectSource * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundEffectSource::~SoundEffectSource() */

void __thiscall Caver::SoundEffectSource::~SoundEffectSource(SoundEffectSource *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_40 [8];
  long local_38 [2];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  *(undefined **)this = PTR_vtable_007e7e90 + 0x10;
                    /* try { // try from 00583eb0 to 00683ec3 has its CatchHandler @ 00584260 */
  if (*(int *)(this + 0x30) != 0) {
    alDeleteSources(1);
                    /* try { // try from 00583ec4 to 00683f63 has its CatchHandler @ 00583dd0 */
    FUN_00666bb8(local_38,"alDeleteSources",auStack_40);
    alGetError();
    if ((undefined *)(local_38[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar5 = (int *)(local_38[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar6 = *piVar5;
        *piVar5 = iVar6 + -1;
      }
      else {
        do {
          iVar6 = *piVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar2) {
            *piVar5 = iVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
                    /* try { // try from 00583f64 to 00683f77 has its CatchHandler @ 00584210 */
      if (iVar6 < 1) {
        operator_delete((undefined *)(local_38[0] + -0x18));
        plVar4 = *(long **)(this + 0x28);
        goto joined_r0x00583ef0;
      }
    }
  }
  plVar4 = *(long **)(this + 0x28);
joined_r0x00583ef0:
  if ((plVar4 != (long *)0x0) &&
     (iVar6 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar6, iVar6 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


