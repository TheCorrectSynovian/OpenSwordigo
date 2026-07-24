/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b82d4
 * Function: Caver::GameState::AllNodesVisited
 * Signature: undefined __thiscall AllNodesVisited(GameState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameState::AllNodesVisited() */

void __thiscall Caver::GameState::AllNodesVisited(GameState *this)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  GameState *pGVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  int iVar13;
  long lVar14;
  byte bVar15;
  ulong uVar16;
  ulong uVar17;
  long local_78 [2];
  long local_68;
  
  puVar7 = PTR_DAT_007e5de8;
  puVar6 = PTR_pthread_create_007e4e78;
                    /* try { // try from 004b82d8 to 005b8307 has its CatchHandler @ 004b8264 */
                    /* catch() { ... } // from try @ 004b82b0 with catch @ 004b82f4 */
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 004b8308 to 005b8333 has its CatchHandler @ 004b8308
                       catch() { ... } // from try @ 004b8308 with catch @ 004b8308
                       catch() { ... } // from try @ 004b8480 with catch @ 004b8308 */
  uVar17 = 0;
  do {
    plVar1 = *(long **)(*(long *)this + 0x48);
    plVar2 = *(long **)(*(long *)this + 0x50);
    if (plVar2 == (long *)0x0) {
                    /* try { // try from 004b8388 to 005b83c3 has its CatchHandler @ 004b8674 */
      uVar16 = plVar1[1] - *plVar1 >> 4;
    }
    else {
                    /* try { // try from 004b8334 to 005b8347 has its CatchHandler @ 004b8744 */
      lVar14 = plVar2[1];
      plVar2[1] = lVar14 + 1;
      lVar10 = *plVar1;
      lVar11 = plVar1[1];
      plVar2[1] = lVar14;
      uVar16 = lVar11 - lVar10 >> 4;
      if (lVar14 == 0) {
                    /* try { // try from 004b8354 to 005b835f has its CatchHandler @ 004b86d8 */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        lVar10 = plVar2[2];
        plVar2[2] = lVar10 + -1;
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
    }
    if (uVar16 <= uVar17) {
      uVar9 = 1;
      goto LAB_004b8534;
    }
    plVar1 = *(long **)(*(long *)this + 0x48);
    plVar2 = *(long **)(*(long *)this + 0x50);
    if (plVar2 != (long *)0x0) {
      plVar2[1] = plVar2[1] + 1;
    }
    plVar1 = (long *)(*plVar1 + uVar17 * 0x10);
    lVar10 = *plVar1;
    plVar1 = (long *)plVar1[1];
    if (plVar1 != (long *)0x0) {
      plVar1[1] = plVar1[1] + 1;
    }
    if ((plVar2 != (long *)0x0) && (lVar11 = plVar2[1], plVar2[1] = lVar11 + -1, lVar11 + -1 == 0))
    {
      (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* try { // try from 004b83ec to 005b83ff has its CatchHandler @ 004b8670 */
      lVar11 = plVar2[2];
      plVar2[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
                    /* try { // try from 004b8410 to 005b841b has its CatchHandler @ 004b8638 */
    FUN_0066a528(local_78,lVar10 + 0x10);
    pGVar8 = (GameState *)
             std::
             _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
             ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
                     *)(this + 200),(string *)local_78);
    if (this + 0xd0 == pGVar8) {
      lVar11 = 0;
    }
    else {
      lVar11 = *(long *)(pGVar8 + 0x28);
    }
                    /* try { // try from 004b8444 to 005b847f has its CatchHandler @ 004b85dc */
    if ((undefined *)(local_78[0] + -0x18) == puVar7) {
LAB_004b8448:
      if (*(char *)(lVar10 + 0x70) == '\0') goto LAB_004b84b8;
LAB_004b8450:
      bVar15 = 4;
    }
    else {
      piVar12 = (int *)(local_78[0] + -8);
      if (puVar6 == (undefined *)0x0) {
        iVar13 = *piVar12;
        *piVar12 = iVar13 + -1;
      }
      else {
        do {
                    /* try { // try from 004b8480 to 005b8747 has its CatchHandler @ 004b8308 */
          iVar13 = *piVar12;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar4) {
            *piVar12 = iVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (0 < iVar13) goto LAB_004b8448;
      operator_delete((undefined *)(local_78[0] + -0x18));
      if (*(char *)(lVar10 + 0x70) != '\0') goto LAB_004b8450;
LAB_004b84b8:
      if (lVar11 == 0) {
        bVar15 = 1;
      }
      else {
        bVar15 = *(byte *)(lVar11 + 8) ^ 1;
      }
    }
    if ((plVar1 != (long *)0x0) && (lVar10 = plVar1[1], plVar1[1] = lVar10 + -1, lVar10 + -1 == 0))
    {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar10 = plVar1[2];
      plVar1[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
    if ((bVar15 & 7 | 4) != 4) {
      uVar9 = 0;
LAB_004b8534:
      if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar9);
      }
      return;
    }
    uVar17 = uVar17 + 1;
  } while( true );
}


