/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c2f98
 * Function: Caver::GameState::~GameState
 * Signature: undefined __thiscall ~GameState(GameState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameState::~GameState() */

void __thiscall Caver::GameState::~GameState(GameState *this)

{
  void *pvVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  void *pvVar11;
  long *plVar12;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  pvVar11 = *(void **)(this + 0x1b0);
  pvVar1 = *(void **)(this + 0x1b8);
  if (pvVar11 != pvVar1) {
    do {
      plVar12 = *(long **)((long)pvVar11 + 8);
      if ((plVar12 != (long *)0x0) && (lVar8 = plVar12[1], plVar12[1] = lVar8 + -1, lVar8 + -1 == 0)
         ) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        lVar8 = plVar12[2];
        plVar12[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
      }
      pvVar11 = (void *)((long)pvVar11 + 0x10);
    } while (pvVar1 != pvVar11);
    pvVar11 = *(void **)(this + 0x1b0);
  }
  if (pvVar11 != (void *)0x0) {
    operator_delete(pvVar11);
  }
  puVar5 = PTR_DAT_007e5de8;
  puVar6 = (undefined *)(*(long *)(this + 0x1a8) + -0x18);
  if (puVar6 != PTR_DAT_007e5de8) {
    piVar9 = (int *)(*(long *)(this + 0x1a8) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
                    /* try { // try from 004c32c8 to 005c32d3 has its CatchHandler @ 004c3190 */
    if (iVar10 < 1) {
                    /* catch() { ... } // from try @ 004c3288 with catch @ 004c32d0 */
                    /* catch() { ... } // from try @ 004c32e8 with catch @ 004c32d4 */
      operator_delete(puVar6);
    }
  }
  puVar6 = (undefined *)(*(long *)(this + 0x1a0) + -0x18);
  if (puVar6 != puVar5) {
                    /* try { // try from 004c31c8 to 005c31cb has its CatchHandler @ 004c3254 */
    piVar9 = (int *)(*(long *)(this + 0x1a0) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
                    /* try { // try from 004c32e4 to 005c32e7 has its CatchHandler @ 004c32f8 */
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
                    /* try { // try from 004c32e8 to 005c330b has its CatchHandler @ 004c32d4 */
    if (iVar10 < 1) {
      operator_delete(puVar6);
                    /* catch() { ... } // from try @ 004c32e4 with catch @ 004c32f8 */
    }
  }
  puVar6 = (undefined *)(*(long *)(this + 400) + -0x18);
  if (puVar6 != puVar5) {
    piVar9 = (int *)(*(long *)(this + 400) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
                    /* try { // try from 004c31fc to 005c31ff has its CatchHandler @ 004c324c */
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
                    /* try { // try from 004c330c to 005c3327 has its CatchHandler @ 004c330c
                       catch() { ... } // from try @ 004c330c with catch @ 004c330c
                       catch() { ... } // from try @ 004c332c with catch @ 004c330c */
    if (iVar10 < 1) {
      operator_delete(puVar6);
    }
  }
  puVar6 = (undefined *)(*(long *)(this + 0x188) + -0x18);
  if (puVar6 != puVar5) {
    piVar9 = (int *)(*(long *)(this + 0x188) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
                    /* try { // try from 004c3328 to 005c332b has its CatchHandler @ 004c3370 */
                    /* try { // try from 004c332c to 005c3383 has its CatchHandler @ 004c330c */
    if (iVar10 < 1) {
      operator_delete(puVar6);
    }
  }
  puVar6 = (undefined *)(*(long *)(this + 0x180) + -0x18);
  if (puVar6 != puVar5) {
                    /* try { // try from 004c3230 to 005c3233 has its CatchHandler @ 004c3244 */
                    /* try { // try from 004c3234 to 005c3287 has its CatchHandler @ 004c3190 */
    piVar9 = (int *)(*(long *)(this + 0x180) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
                    /* catch() { ... } // from try @ 004c3230 with catch @ 004c3244 */
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(puVar6);
      plVar12 = *(long **)(this + 0x178);
      goto joined_r0x004c335c;
    }
  }
  plVar12 = *(long **)(this + 0x178);
joined_r0x004c335c:
  if ((plVar12 != (long *)0x0) && (lVar8 = plVar12[1], plVar12[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar8 = plVar12[2];
    plVar12[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  puVar6 = (undefined *)(*(long *)(this + 0x168) + -0x18);
  if (puVar6 != puVar5) {
                    /* catch() { ... } // from try @ 004c31c8 with catch @ 004c3254 */
    piVar9 = (int *)(*(long *)(this + 0x168) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
                    /* catch() { ... } // from try @ 004c3328 with catch @ 004c3370 */
    if (iVar10 < 1) {
      operator_delete(puVar6);
    }
  }
  puVar6 = (undefined *)(*(long *)(this + 0x160) + -0x18);
  if (puVar6 != puVar5) {
    piVar9 = (int *)(*(long *)(this + 0x160) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
                    /* try { // try from 004c3288 to 005c32c7 has its CatchHandler @ 004c32d0 */
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(puVar6);
    }
  }
  puVar6 = (undefined *)(*(long *)(this + 0x158) + -0x18);
  if (puVar6 != puVar5) {
    piVar9 = (int *)(*(long *)(this + 0x158) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(puVar6);
    }
  }
  std::
  _Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
  ::_M_erase((_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
              *)(this + 0x128),*(_Rb_tree_node **)(this + 0x138));
  std::
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>>
              *)(this + 0xf8),*(_Rb_tree_node **)(this + 0x108));
  std::
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
              *)(this + 200),*(_Rb_tree_node **)(this + 0xd8));
  CharacterState::~CharacterState((CharacterState *)(this + 0x10));
  plVar12 = *(long **)(this + 8);
  if ((plVar12 != (long *)0x0) && (lVar8 = plVar12[1], plVar12[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar8 = plVar12[2];
    plVar12[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  if (*(long *)(lVar4 + 0x28) == lVar7) {
                    /* catch() { ... } // from try @ 004c3234 with catch @ 004c3190
                       catch() { ... } // from try @ 004c32c8 with catch @ 004c3190 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


