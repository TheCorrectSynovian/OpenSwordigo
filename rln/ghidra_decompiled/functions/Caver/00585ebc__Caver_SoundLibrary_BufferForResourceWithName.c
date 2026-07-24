/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00585ebc
 * Function: Caver::SoundLibrary::BufferForResourceWithName
 * Signature: undefined __cdecl BufferForResourceWithName(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SoundLibrary::BufferForResourceWithName(std::string const&) */

void Caver::SoundLibrary::BufferForResourceWithName(string *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  AudioBuffer *pAVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  AudioBuffer *pAVar9;
  undefined8 *puVar10;
  string *in_x1;
  long *in_x8;
  long lVar11;
  int *piVar12;
  int iVar13;
  undefined1 auStack_80 [8];
  long local_78;
  AudioBuffer *local_70;
  long *aplStack_68 [2];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar7 = (long *)std::
                   map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
                   ::operator[]((map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
                                 *)(param_1 + 0x30),in_x1);
  lVar11 = plVar7[1];
  *in_x8 = 0;
  in_x8[1] = lVar11;
  if (lVar11 != 0) {
    if (*(long *)(lVar11 + 8) == 0) {
      in_x8[1] = 0;
    }
    else {
      *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 1;
      lVar11 = *plVar7;
      *in_x8 = lVar11;
      if (lVar11 != 0) goto LAB_005860bc;
    }
  }
  FUN_00666bb8(&local_70,&DAT_0069687c,auStack_80);
  PathForResourceOfType(in_x1,(string *)&local_70);
  puVar4 = PTR_DAT_007e5de8;
  if (local_70 + -0x18 != (AudioBuffer *)PTR_DAT_007e5de8) {
    pAVar9 = local_70 + -8;
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = *(int *)pAVar9;
      *(int *)pAVar9 = iVar13 + -1;
    }
    else {
      do {
                    /* try { // try from 005860f8 to 006860ff has its CatchHandler @ 0058619c */
        iVar13 = *(int *)pAVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pAVar9,0x10);
        if (bVar2) {
          *(int *)pAVar9 = iVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar13 < 1) {
                    /* catch() { ... } // from try @ 0058612c with catch @ 00586144 */
      operator_delete(local_70 + -0x18);
    }
  }
                    /* catch() { ... } // from try @ 00585e7c with catch @ 00585f64 */
  uVar8 = FileExistsAtPath((string *)&local_78);
  if ((uVar8 & 1) != 0) {
    pAVar9 = operator_new(0x20);
    AudioBuffer::AudioBuffer(pAVar9);
                    /* try { // try from 00585f88 to 00685f8f has its CatchHandler @ 00585f94 */
    local_70 = pAVar9;
                    /* try { // try from 00585f90 to 00685fc3 has its CatchHandler @ 00585748 */
                    /* catch() { ... } // from try @ 00585f88 with catch @ 00585f94 */
    boost::detail::shared_count::shared_count<Caver::AudioBuffer>
              ((shared_count *)aplStack_68,pAVar9);
                    /* catch() { ... } // from try @ 005858ac with catch @ 00585f98 */
    boost::detail::sp_enable_shared_from_this(&local_70,pAVar9,pAVar9);
    plVar6 = aplStack_68[0];
    pAVar5 = local_70;
    pAVar9 = (AudioBuffer *)*in_x8;
    plVar7 = (long *)in_x8[1];
    *in_x8 = (long)local_70;
    in_x8[1] = (long)aplStack_68[0];
    local_70 = pAVar9;
    aplStack_68[0] = plVar7;
                    /* try { // try from 00585fc4 to 00685fcf has its CatchHandler @ 00585fdc */
    if ((plVar7 != (long *)0x0) && (lVar11 = plVar7[1], plVar7[1] = lVar11 + -1, lVar11 + -1 == 0))
    {
                    /* try { // try from 00585fd0 to 00685ffb has its CatchHandler @ 00585748 */
      (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* catch() { ... } // from try @ 00585db8 with catch @ 00585fdc
                       catch() { ... } // from try @ 00585df4 with catch @ 00585fdc
                       catch() { ... } // from try @ 00585e2c with catch @ 00585fdc
                       catch() { ... } // from try @ 00585eac with catch @ 00585fdc
                       catch() { ... } // from try @ 00585fc4 with catch @ 00585fdc */
      lVar11 = plVar7[2];
      plVar7[2] = lVar11 + -1;
                    /* catch() { ... } // from try @ 005857a8 with catch @ 00585fe8 */
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    uVar8 = AudioBuffer::LoadFromFile((string *)pAVar5);
    if ((uVar8 & 1) == 0) {
      *in_x8 = 0;
      in_x8[1] = 0;
      if ((plVar6 != (long *)0x0) && (lVar11 = plVar6[1], plVar6[1] = lVar11 + -1, lVar11 + -1 == 0)
         ) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        lVar11 = plVar6[2];
        plVar6[2] = lVar11 + -1;
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))(plVar6);
        }
      }
    }
    else {
      puVar10 = (undefined8 *)
                std::
                map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
                ::operator[]((map<std::string,boost::weak_ptr<Caver::AudioBuffer>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
                              *)(param_1 + 0x30),in_x1);
      plVar7 = (long *)puVar10[1];
      *puVar10 = pAVar5;
      if (plVar7 != plVar6) {
        if (plVar6 != (long *)0x0) {
          plVar6[2] = plVar6[2] + 1;
        }
        if ((plVar7 != (long *)0x0) &&
           (lVar11 = plVar7[2], plVar7[2] = lVar11 + -1, lVar11 + -1 == 0)) {
          (**(code **)(*plVar7 + 0x18))();
        }
        puVar10[1] = plVar6;
      }
    }
  }
  if ((undefined *)(local_78 + -0x18) != puVar4) {
    piVar12 = (int *)(local_78 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar13 = *piVar12;
      *piVar12 = iVar13 + -1;
    }
    else {
      do {
        iVar13 = *piVar12;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar2) {
          *piVar12 = iVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar13 < 1) {
                    /* try { // try from 00586168 to 0068618f has its CatchHandler @ 00586198 */
      operator_delete((undefined *)(local_78 + -0x18));
    }
  }
LAB_005860bc:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00586190 with catch @ 005860e0 */
  return;
}


