/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bae14
 * Function: Caver::OnlineController_Android::HandleGoogleSignInCompleted
 * Signature: undefined __thiscall HandleGoogleSignInCompleted(OnlineController_Android * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OnlineController_Android::HandleGoogleSignInCompleted(bool) */

void __thiscall
Caver::OnlineController_Android::HandleGoogleSignInCompleted
          (OnlineController_Android *this,bool param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int *piVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  list<Caver::TargetAction<void(bool,std::string_const&)>,std::allocator<Caver::TargetAction<void(bool,std::string_const&)>>>
  *plVar9;
  list<Caver::TargetAction<void(bool,std::string_const&)>,std::allocator<Caver::TargetAction<void(bool,std::string_const&)>>>
  *plVar10;
  ulong local_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  undefined1 auStack_e0 [8];
  long local_d8;
  ulong local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long local_b0;
  long *local_a8;
  ulong local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  bad_function_call abStack_80 [24];
  long local_68;
  
  puVar4 = PTR_DAT_007e5de8;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar9 = (list<Caver::TargetAction<void(bool,std::string_const&)>,std::allocator<Caver::TargetAction<void(bool,std::string_const&)>>>
            *)(this + 0x10);
  plVar10 = *(list<Caver::TargetAction<void(bool,std::string_const&)>,std::allocator<Caver::TargetAction<void(bool,std::string_const&)>>>
              **)plVar9;
  if (plVar9 != plVar10) {
    do {
      local_b0 = *(long *)(plVar10 + 0x10);
      local_a8 = *(long **)(plVar10 + 0x18);
      if (local_a8 != (long *)0x0) {
        local_a8[2] = local_a8[2] + 1;
      }
      local_a0 = 0;
      uVar8 = *(ulong *)(plVar10 + 0x20);
      if (uVar8 == 0) {
LAB_005bb0b0:
        if (local_a8 == (long *)0x0) goto LAB_005bb114;
LAB_005bb0b4:
        if ((local_a8[1] == 0) || (local_b0 == 0)) goto LAB_005bb114;
        if (param_1) {
          this[0x20] = (OnlineController_Android)0x1;
          local_d0 = 0;
          if (local_a0 != 0) {
            local_d0 = local_a0;
            if ((local_a0 & 1) == 0) {
              (**(code **)(local_a0 & 0xfffffffffffffffe))(&local_98,&local_c8,0);
            }
            else {
              local_b8 = local_88;
              lStack_c0 = lStack_90;
              local_c8 = local_98;
              local_d0 = local_a0;
            }
          }
          FUN_00666bb8(&local_d8,&DAT_0068fbeb,auStack_e0);
          if (local_d0 == 0) {
LAB_005bb1bc:
            boost::bad_function_call::bad_function_call(abStack_80);
            boost::throw_exception<boost::bad_function_call>(abStack_80);
            goto LAB_005bb1cc;
          }
          (**(code **)((local_d0 & 0xfffffffffffffffe) + 8))(&local_c8,1,&local_d8);
          if ((undefined *)(local_d8 + -0x18) != puVar4) {
            piVar5 = (int *)(local_d8 + -8);
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar7 = *piVar5;
              *piVar5 = iVar7 + -1;
            }
            else {
              do {
                iVar7 = *piVar5;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                if (bVar2) {
                  *piVar5 = iVar7 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
                    /* try { // try from 005bafe4 to 006bb11b has its CatchHandler @ 005bad18 */
              } while (cVar1 != '\0');
            }
            if (iVar7 < 1) {
              operator_delete((undefined *)(local_d8 + -0x18));
            }
          }
          if (local_d0 != 0) {
            if (((local_d0 & 1) == 0) && (*(code **)(local_d0 & 0xfffffffffffffffe) != (code *)0x0))
            {
              (**(code **)(local_d0 & 0xfffffffffffffffe))(&local_c8,&local_c8,2);
            }
            local_d0 = 0;
          }
        }
        else {
          this[0x20] = (OnlineController_Android)0x0;
          local_100 = 0;
          if (local_a0 != 0) {
            local_100 = local_a0;
            if ((local_a0 & 1) == 0) {
              (**(code **)(local_a0 & 0xfffffffffffffffe))(&local_98,&local_f8,0);
            }
            else {
                    /* try { // try from 005baf44 to 006baf4b has its CatchHandler @ 005bb5a4 */
              local_e8 = local_88;
              lStack_f0 = lStack_90;
              local_f8 = local_98;
            }
          }
                    /* try { // try from 005baf4c to 006baf57 has its CatchHandler @ 005bb548 */
          FUN_00666bb8(&local_d8,
                       "An error occured while signing in with Google. Please make you are connected to the internet and try again later."
                       ,auStack_e0);
          if (local_100 == 0) {
            boost::bad_function_call::bad_function_call(abStack_80);
            boost::throw_exception<boost::bad_function_call>(abStack_80);
            goto LAB_005bb1bc;
          }
                    /* try { // try from 005baf78 to 006baf7f has its CatchHandler @ 005bb5a8 */
          (**(code **)((local_100 & 0xfffffffffffffffe) + 8))(&local_f8,0,&local_d8);
          if ((undefined *)(local_d8 + -0x18) != puVar4) {
            piVar5 = (int *)(local_d8 + -8);
            if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
              iVar7 = *piVar5;
              *piVar5 = iVar7 + -1;
            }
            else {
              do {
                iVar7 = *piVar5;
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
                if (bVar2) {
                  *piVar5 = iVar7 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            if (iVar7 < 1) {
              operator_delete((undefined *)(local_d8 + -0x18));
            }
          }
                    /* try { // try from 005baf98 to 006baf9f has its CatchHandler @ 005bb474 */
          if (((local_100 != 0) && ((local_100 & 1) == 0)) &&
             (*(code **)(local_100 & 0xfffffffffffffffe) != (code *)0x0)) {
            (**(code **)(local_100 & 0xfffffffffffffffe))(&local_f8,&local_f8,2);
          }
        }
        plVar10 = *(list<Caver::TargetAction<void(bool,std::string_const&)>,std::allocator<Caver::TargetAction<void(bool,std::string_const&)>>>
                    **)plVar10;
                    /* try { // try from 005bafbc to 006bafe3 has its CatchHandler @ 005bb5a8 */
      }
      else {
        local_a0 = uVar8;
        if ((uVar8 & 1) == 0) {
          (**(code **)(uVar8 & 0xfffffffffffffffe))(plVar10 + 0x28,&local_98,0);
          goto LAB_005bb0b0;
        }
        local_88 = *(long *)(plVar10 + 0x38);
        lStack_90 = *(long *)(plVar10 + 0x30);
        local_98 = *(long *)(plVar10 + 0x28);
        if (local_a8 != (long *)0x0) goto LAB_005bb0b4;
LAB_005bb114:
                    /* try { // try from 005bb11c to 006bb11f has its CatchHandler @ 005bb4c8 */
        plVar10 = (list<Caver::TargetAction<void(bool,std::string_const&)>,std::allocator<Caver::TargetAction<void(bool,std::string_const&)>>>
                   *)std::
                     list<Caver::TargetAction<void(bool,std::string_const&)>,std::allocator<Caver::TargetAction<void(bool,std::string_const&)>>>
                     ::erase(plVar9,plVar10);
                    /* try { // try from 005bb120 to 006bb143 has its CatchHandler @ 005bad18 */
      }
      if (local_a0 != 0) {
        if (((local_a0 & 1) == 0) && (*(code **)(local_a0 & 0xfffffffffffffffe) != (code *)0x0)) {
                    /* try { // try from 005bb144 to 006bb14b has its CatchHandler @ 005bb4c4 */
          (**(code **)(local_a0 & 0xfffffffffffffffe))(&local_98,&local_98,2);
        }
        local_a0 = 0;
      }
                    /* try { // try from 005bb150 to 006bb157 has its CatchHandler @ 005bb4c0 */
                    /* try { // try from 005bb158 to 006bb1c3 has its CatchHandler @ 005bb4dc */
      if ((local_a8 != (long *)0x0) &&
         (lVar6 = local_a8[2], local_a8[2] = lVar6 + -1, lVar6 + -1 == 0)) {
        (**(code **)(*local_a8 + 0x18))();
      }
    } while (plVar9 != plVar10);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_005bb1cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


