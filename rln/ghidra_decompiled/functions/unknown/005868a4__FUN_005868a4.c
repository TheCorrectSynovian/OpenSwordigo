/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005868a4
 * Function: FUN_005868a4
 * Signature: undefined FUN_005868a4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005868a4(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  string *psVar6;
  intrusive_ptr *piVar7;
  int *piVar8;
  int iVar9;
  long *local_58;
  long *local_50;
  undefined1 auStack_48 [8];
  long local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar5 = Caver::ProgramState::FromLuaState(param_1);
                    /* try { // try from 005868cc to 006868f3 has its CatchHandler @ 00586fe0 */
  FUN_00666bb8(&local_40,"soundLibrary",auStack_48);
  psVar6 = (string *)
           Caver::ProgramTable::PointerForKey((ProgramTable *)(lVar5 + 0x28),(string *)&local_40);
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_40 + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 005869c8 to 006869db has its CatchHandler @ 0058717c */
    piVar8 = (int *)(local_40 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_40 + -0x18));
    }
  }
                    /* try { // try from 00586914 to 0068693b has its CatchHandler @ 00587304 */
  Caver::ProgramState::StringAtStackIndex((int)lVar5);
  piVar7 = (intrusive_ptr *)Caver::AudioSystem::sharedSystem();
  Caver::SoundLibrary::EffectForName(psVar6);
  Caver::AudioSystem::PlaySoundEffect(piVar7,1.0);
  if ((local_50 != (long *)0x0) &&
     (iVar9 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*local_50 + 8))();
  }
                    /* try { // try from 00586978 to 0068697f has its CatchHandler @ 00587180 */
  if ((local_58 != (long *)0x0) &&
     (iVar9 = (int)local_58[1] + -1, *(int *)(local_58 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*local_58 + 8))();
  }
  if ((undefined *)(local_40 + -0x18) != puVar4) {
                    /* try { // try from 005869e8 to 006869fb has its CatchHandler @ 005872cc */
    piVar8 = (int *)(local_40 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
                    /* try { // try from 00586a34 to 00686a5b has its CatchHandler @ 00586f8c */
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_40 + -0x18));
    }
  }
                    /* try { // try from 005869a0 to 006869c7 has its CatchHandler @ 00586fdc */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


