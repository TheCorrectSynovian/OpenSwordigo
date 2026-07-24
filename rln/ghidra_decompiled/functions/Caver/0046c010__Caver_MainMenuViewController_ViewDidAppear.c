/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046c010
 * Function: Caver::MainMenuViewController::ViewDidAppear
 * Signature: undefined __thiscall ViewDidAppear(MainMenuViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuViewController::ViewDidAppear() */

void __thiscall Caver::MainMenuViewController::ViewDidAppear(MainMenuViewController *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ProfileManager *this_00;
  ulong uVar6;
  long *plVar7;
  int *piVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  code *pcVar12;
  long *plVar13;
  undefined1 auStack_60 [8];
  undefined *local_58 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar4 = ProfileManager::sharedManager();
  plVar7 = *(long **)(this + 0x18);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*(long *)this + 0x18))(this);
    plVar7 = *(long **)(this + 0x18);
  }
  plVar11 = *(long **)(this + 0x20);
  if (plVar11 != (long *)0x0) {
    plVar11[1] = plVar11[1] + 1;
  }
  lVar5 = (**(code **)(*plVar7 + 0xf0))(plVar7);
  plVar7 = *(long **)(lVar5 + 0x10);
  if ((plVar7 == (long *)0x0) || (plVar7[1] == 0)) {
    local_58[0] = PTR_vtable_007e6120 + 0x10;
    boost::throw_exception<boost::bad_weak_ptr>((bad_weak_ptr *)local_58);
  }
  else {
    uVar10 = *(undefined8 *)(lVar5 + 8);
    plVar7[1] = plVar7[1] + 3;
    plVar13 = *(long **)(lVar4 + 0x40);
    *(undefined8 *)(lVar4 + 0x38) = uVar10;
    *(long **)(lVar4 + 0x40) = plVar7;
    if ((plVar13 != (long *)0x0) && (lVar4 = plVar13[1], plVar13[1] = lVar4 + -1, lVar4 + -1 == 0))
    {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      lVar4 = plVar13[2];
      plVar13[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
    lVar4 = plVar7[1];
                    /* try { // try from 0046c0f0 to 0056c82b has its CatchHandler @ 0046c0f0
                       catch(type#1 @ 00000000) { ... } // from try @ 0046c0f0 with catch @ 0046c0f0
                       catch(type#1 @ 00000000) { ... } // from try @ 0046c83c with catch @ 0046c0f0
                       catch(type#1 @ 00000000) { ... } // from try @ 0046cad4 with catch @ 0046c0f0
                        */
    plVar7[1] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar4 = plVar7[2];
      plVar7[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    lVar4 = plVar7[1];
    plVar7[1] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar4 = plVar7[2];
      plVar7[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    if ((plVar11 != (long *)0x0) && (lVar4 = plVar11[1], plVar11[1] = lVar4 + -1, lVar4 + -1 == 0))
    {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      lVar4 = plVar11[2];
      plVar11[2] = lVar4 + -1;
      if (lVar4 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    this_00 = (ProfileManager *)ProfileManager::sharedManager();
    ProfileManager::AddDelegate(this_00,(IProfileManagerDelegate *)(this + 0x58));
    *(undefined1 *)(*(long *)(*(long *)(this + 0x70) + 0x168) + 0xe4) = 1;
    plVar7 = (long *)OnlineController::SharedController();
    uVar6 = (**(code **)(*plVar7 + 0xe8))();
    if ((uVar6 & 1) == 0) {
      plVar7 = (long *)ProfileManager::sharedManager();
      pcVar12 = *(code **)(*plVar7 + 0x10);
      FUN_00666bb8(local_58,&DAT_0068fbeb,auStack_60);
      (*pcVar12)(0,plVar7,local_58);
      if (local_58[0] + -0x18 != PTR_DAT_007e5de8) {
        piVar8 = (int *)(local_58[0] + -8);
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
          operator_delete(local_58[0] + -0x18);
        }
      }
    }
    if (*(long *)(lVar3 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


