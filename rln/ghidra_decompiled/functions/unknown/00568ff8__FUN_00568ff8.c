/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00568ff8
 * Function: FUN_00568ff8
 * Signature: undefined FUN_00568ff8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined4 FUN_00568ff8(lua_State *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  ProgramState *pPVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  SceneObject *pSVar11;
  undefined1 auStack_50 [8];
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  pPVar5 = (ProgramState *)Caver::ProgramState::FromLuaState(param_1);
  FUN_00666bb8(local_48,"scene",auStack_50);
  lVar6 = Caver::ProgramTable::PointerForKey((ProgramTable *)(pPVar5 + 0x28),(string *)local_48);
  puVar4 = PTR_DAT_007e5de8;
                    /* try { // try from 00569054 to 00669057 has its CatchHandler @ 005690c4 */
                    /* try { // try from 00569058 to 00669153 has its CatchHandler @ 00568de8 */
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
                    /* try { // try from 00569154 to 006691e7 has its CatchHandler @ 005691f0 */
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
                    /* catch() { ... } // from try @ 00568f58 with catch @ 00569160 */
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  Caver::ProgramState::StringAtStackIndex((int)pPVar5);
  lVar7 = std::
          _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
          ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObject>>>>
                  *)(lVar6 + 0xb0),(string *)local_48);
  if ((lVar6 + 0xb8 == lVar7) ||
     (pSVar11 = *(SceneObject **)(lVar7 + 0x28), pSVar11 == (SceneObject *)0x0)) {
                    /* catch() { ... } // from try @ 00568f6c with catch @ 005690cc */
    uVar10 = 0;
  }
  else {
    *(int *)(pSVar11 + 8) = *(int *)(pSVar11 + 8) + 1;
    Caver::SceneObjectLib::PushSceneObject(pPVar5,pSVar11);
    iVar9 = *(int *)(pSVar11 + 8);
    *(int *)(pSVar11 + 8) = iVar9 + -1;
    if (iVar9 + -1 == 0) {
      (**(code **)(*(long *)pSVar11 + 8))(pSVar11);
    }
                    /* catch() { ... } // from try @ 00569054 with catch @ 005690c4 */
    uVar10 = 1;
                    /* catch() { ... } // from try @ 00568f94 with catch @ 005690c8 */
  }
  if ((undefined *)(local_48[0] + -0x18) != puVar4) {
                    /* catch() { ... } // from try @ 00568fec with catch @ 00569130 */
    piVar8 = (int *)(local_48[0] + -8);
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
      operator_delete((undefined *)(local_48[0] + -0x18));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}


