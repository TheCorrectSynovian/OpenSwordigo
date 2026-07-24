/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054c0e0
 * Function: Caver::ModelLibrary::AnimationForModel
 * Signature: undefined __cdecl AnimationForModel(Model * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ModelLibrary::AnimationForModel(Caver::Model const*, std::string const&) */

void Caver::ModelLibrary::AnimationForModel(Model *param_1,string *param_2)

{
  Model *pMVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  Model *pMVar5;
  undefined *puVar6;
  Model *pMVar7;
  long *plVar8;
  string *in_x2;
  long *in_x8;
  long lVar9;
  int *piVar10;
  int iVar11;
  Model *pMVar12;
  long *plVar13;
  string *psVar14;
  undefined1 auStack_90 [8];
  long local_88;
  long local_80;
  long local_78;
  long *plStack_70;
  long local_68 [2];
  long local_58;
  
  lVar4 = tpidr_el0;
                    /* try { // try from 0054c104 to 0064c24f has its CatchHandler @ 0054cee0 */
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_0066a528(&local_78);
  FUN_006677d4(&local_78,&DAT_00695253,1);
  FUN_0066a528(local_68,&local_78);
  FUN_00667614(local_68);
  puVar6 = PTR_DAT_007e5de8;
  if ((undefined *)(local_78 + -0x18) != PTR_DAT_007e5de8) {
    piVar10 = (int *)(local_78 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_78 + -0x18));
    }
  }
  pMVar7 = (Model *)std::
                    _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>>
                    ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>>
                            *)(param_1 + 0x60),(string *)local_68);
  if (param_1 + 0x68 == pMVar7) {
    pMVar7 = param_1 + 0x38;
    pMVar12 = *(Model **)(param_1 + 0x40);
    pMVar1 = pMVar7;
    while (pMVar12 != (Model *)0x0) {
      pMVar5 = pMVar12 + 0x18;
      if (param_2 <= *(string **)(pMVar12 + 0x20)) {
        pMVar1 = pMVar12;
        pMVar5 = pMVar12 + 0x10;
      }
      pMVar12 = *(Model **)pMVar5;
    }
    if (pMVar1 != pMVar7) {
      pMVar12 = pMVar7;
      if (*(string **)(pMVar1 + 0x20) <= param_2) {
        pMVar12 = pMVar1;
      }
      if (pMVar12 != pMVar7) {
        psVar14 = *(string **)(pMVar12 + 0x28);
        FUN_00666bb8(&local_88,&DAT_0069524f,auStack_90);
        PathForResourceOfType(in_x2,(string *)&local_88);
        PODLoader::CreateAnimationFromFile(psVar14);
        if ((undefined *)(local_80 + -0x18) != puVar6) {
                    /* try { // try from 0054c3d8 to 0064c3eb has its CatchHandler @ 0054cbd0 */
          piVar10 = (int *)(local_80 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar11 = *piVar10;
            *piVar10 = iVar11 + -1;
          }
          else {
            do {
              iVar11 = *piVar10;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar3) {
                *piVar10 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (iVar11 < 1) {
            operator_delete((undefined *)(local_80 + -0x18));
          }
        }
        if ((undefined *)(local_88 + -0x18) != puVar6) {
          piVar10 = (int *)(local_88 + -8);
          if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
            iVar11 = *piVar10;
            *piVar10 = iVar11 + -1;
          }
          else {
            do {
              iVar11 = *piVar10;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar3) {
                *piVar10 = iVar11 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (iVar11 < 1) {
            operator_delete((undefined *)(local_88 + -0x18));
          }
        }
        if (local_78 != 0) {
                    /* try { // try from 0054c250 to 0064c263 has its CatchHandler @ 0054d030 */
          FUN_0066a6a8();
          plVar8 = (long *)std::
                           map<std::string,boost::shared_ptr<Caver::KeyframeAnimation_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>>
                           ::operator[]((map<std::string,boost::shared_ptr<Caver::KeyframeAnimation_const>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>>
                                         *)(param_1 + 0x60),(string *)local_68);
          if (plStack_70 != (long *)0x0) {
            plStack_70[1] = plStack_70[1] + 1;
          }
          plVar13 = (long *)plVar8[1];
          *plVar8 = local_78;
          plVar8[1] = (long)plStack_70;
                    /* try { // try from 0054c284 to 0064c28b has its CatchHandler @ 0054ce4c */
                    /* try { // try from 0054c28c to 0064c29b has its CatchHandler @ 0054cdec */
          if ((plVar13 != (long *)0x0) &&
             (lVar9 = plVar13[1], plVar13[1] = lVar9 + -1, lVar9 + -1 == 0)) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            lVar9 = plVar13[2];
            plVar13[2] = lVar9 + -1;
            if (lVar9 + -1 == 0) {
              (**(code **)(*plVar13 + 0x18))(plVar13);
            }
          }
        }
        *in_x8 = local_78;
        in_x8[1] = (long)plStack_70;
        if ((plStack_70 != (long *)0x0) && (plStack_70[1] == 0)) {
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          lVar9 = plStack_70[2];
          plStack_70[2] = lVar9 + -1;
          if (lVar9 + -1 == 0) {
                    /* try { // try from 0054c2f8 to 0064c31f has its CatchHandler @ 0054ced8 */
            (**(code **)(*plStack_70 + 0x18))(plStack_70);
          }
        }
        goto LAB_0054c310;
      }
    }
    *in_x8 = 0;
    in_x8[1] = 0;
  }
  else {
    *in_x8 = *(long *)(pMVar7 + 0x28);
    lVar9 = *(long *)(pMVar7 + 0x30);
    in_x8[1] = lVar9;
    if (lVar9 != 0) {
      *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
    }
  }
LAB_0054c310:
  if ((undefined *)(local_68[0] + -0x18) != puVar6) {
    piVar10 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar11 = *piVar10;
      *piVar10 = iVar11 + -1;
    }
    else {
      do {
        iVar11 = *piVar10;
                    /* try { // try from 0054c388 to 0064c3af has its CatchHandler @ 0054cad0 */
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar11 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
                    /* try { // try from 0054c3d0 to 0064c3d7 has its CatchHandler @ 0054cc30 */
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0054c340 to 0064c347 has its CatchHandler @ 0054cda0 */
                    /* try { // try from 0054c348 to 0064c35b has its CatchHandler @ 0054cd40 */
  return;
}


