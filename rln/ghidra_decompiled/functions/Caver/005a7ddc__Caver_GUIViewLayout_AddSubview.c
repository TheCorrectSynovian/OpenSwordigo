/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a7ddc
 * Function: Caver::GUIViewLayout::AddSubview
 * Signature: undefined __thiscall AddSubview(GUIViewLayout * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIViewLayout::AddSubview(boost::shared_ptr<Caver::GUIViewLayout> const&) */

void __thiscall Caver::GUIViewLayout::AddSubview(GUIViewLayout *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  long local_60;
  long local_58 [2];
  long local_48;
  
                    /* catch() { ... } // from try @ 005a7db4 with catch @ 005a7dec */
  lVar4 = tpidr_el0;
                    /* try { // try from 005a7df8 to 006a7dfb has its CatchHandler @ 005a7dfc */
  local_48 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 005a7df8 with catch @ 005a7dfc */
                    /* try { // try from 005a7e00 to 006a7e03 has its CatchHandler @ 005a7e0c */
                    /* try { // try from 005a7e04 to 006a7e0f has its CatchHandler @ 005a7d94 */
  puVar7 = *(undefined8 **)(this + 0x10);
                    /* catch() { ... } // from try @ 005a7e00 with catch @ 005a7e0c */
  if (puVar7 == *(undefined8 **)(this + 0x18)) {
    std::
    vector<boost::shared_ptr<Caver::GUIViewLayout>,std::allocator<boost::shared_ptr<Caver::GUIViewLayout>>>
    ::_M_insert_aux((vector<boost::shared_ptr<Caver::GUIViewLayout>,std::allocator<boost::shared_ptr<Caver::GUIViewLayout>>>
                     *)(this + 8),puVar7,param_1);
  }
  else {
    *puVar7 = *(undefined8 *)param_1;
    lVar10 = *(long *)(param_1 + 8);
    puVar7[1] = lVar10;
    if (lVar10 != 0) {
      *(long *)(lVar10 + 8) = *(long *)(lVar10 + 8) + 1;
    }
    *(undefined8 **)(this + 0x10) = puVar7 + 2;
  }
  FUN_0066a528(local_58,*(undefined8 *)param_1);
  puVar5 = PTR_DAT_007e5de8;
  plVar6 = (long *)(local_58[0] + -0x18);
  lVar10 = *plVar6;
  if (plVar6 != (long *)PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(plVar6);
    }
  }
  if (lVar10 != 0) {
    FUN_0066a528(&local_60,*(undefined8 *)param_1);
    puVar7 = (undefined8 *)
             std::
             map<std::string,boost::shared_ptr<Caver::GUIViewLayout>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>
             ::operator[]((map<std::string,boost::shared_ptr<Caver::GUIViewLayout>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>
                           *)(this + 0x20),(string *)&local_60);
    uVar1 = *(undefined8 *)param_1;
    lVar10 = *(long *)(param_1 + 8);
    if (lVar10 != 0) {
      *(long *)(lVar10 + 8) = *(long *)(lVar10 + 8) + 1;
    }
    plVar6 = (long *)puVar7[1];
    *puVar7 = uVar1;
    puVar7[1] = lVar10;
    if ((plVar6 != (long *)0x0) && (lVar10 = plVar6[1], plVar6[1] = lVar10 + -1, lVar10 + -1 == 0))
    {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar10 = plVar6[2];
      plVar6[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    if ((undefined *)(local_60 + -0x18) != puVar5) {
      piVar8 = (int *)(local_60 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete((undefined *)(local_60 + -0x18));
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


