/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b62b4
 * Function: Caver::GameState::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(GameState * this, GameState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameState::LoadFromProtobufMessage(Caver::Proto::GameState const&) */

void __thiscall Caver::GameState::LoadFromProtobufMessage(GameState *this,GameState *param_1)

{
  undefined *puVar1;
  GameState *pGVar2;
  string *psVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  LevelState *this_00;
  undefined8 *puVar10;
  QuestState *this_01;
  QuestText *pQVar11;
  long lVar12;
  int *piVar13;
  int iVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long local_88;
  LevelState *local_80;
  long *local_78 [2];
  long local_68;
  
  puVar1 = PTR_default_instance__007e5ff0;
                    /* try { // try from 004b62bc to 005b632f has its CatchHandler @ 004b60b8 */
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  pGVar2 = *(GameState **)PTR_default_instance__007e5ff0;
  if (*(long *)(param_1 + 0x10) != 0) {
    pGVar2 = param_1;
  }
  CharacterState::LoadFromProtobufMessage
            ((CharacterState *)(this + 0x10),*(CharacterState **)(pGVar2 + 0x10));
  puVar9 = PTR_DAT_007e5de8;
  puVar8 = PTR_pthread_create_007e4e78;
                    /* catch() { ... } // from try @ 004b615c with catch @ 004b630c */
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar17 = 0;
                    /* try { // try from 004b6330 to 005b63a7 has its CatchHandler @ 004b63b0 */
    do {
      this_00 = operator_new(0x48);
      LevelState::LevelState(this_00);
      boost::shared_ptr<Caver::LevelState>::shared_ptr<Caver::LevelState>
                ((shared_ptr<Caver::LevelState> *)&local_80,this_00);
      LevelState::LoadFromProtobufMessage
                (local_80,*(LevelState **)(*(long *)(param_1 + 0x18) + lVar17 * 8));
                    /* try { // try from 004b63a8 to 005b63b3 has its CatchHandler @ 004b60b8 */
      FUN_0066a528(&local_88,local_80);
                    /* catch() { ... } // from try @ 004b6330 with catch @ 004b63b0 */
      puVar10 = (undefined8 *)
                std::
                map<std::string,boost::shared_ptr<Caver::LevelState>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
                ::operator[]((map<std::string,boost::shared_ptr<Caver::LevelState>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
                              *)(this + 200),(string *)&local_88);
      if (local_78[0] != (long *)0x0) {
        local_78[0][1] = local_78[0][1] + 1;
      }
      plVar15 = (long *)puVar10[1];
      *puVar10 = local_80;
      puVar10[1] = local_78[0];
      if ((plVar15 != (long *)0x0) &&
         (lVar12 = plVar15[1], plVar15[1] = lVar12 + -1, lVar12 + -1 == 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004b6434 with catch @ 004b63f0
                       catch(type#1 @ 00000000) { ... } // from try @ 004b6460 with catch @ 004b63f0
                        */
        (**(code **)(*plVar15 + 0x10))(plVar15);
        lVar12 = plVar15[2];
        plVar15[2] = lVar12 + -1;
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar15 + 0x18))(plVar15);
        }
      }
      plVar15 = local_78[0];
                    /* try { // try from 004b6428 to 005b642b has its CatchHandler @ 004b644c */
      if ((undefined *)(local_88 + -0x18) != puVar9) {
        piVar13 = (int *)(local_88 + -8);
        if (puVar8 == (undefined *)0x0) {
          iVar14 = *piVar13;
          *piVar13 = iVar14 + -1;
        }
        else {
          do {
            iVar14 = *piVar13;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar6) {
              *piVar13 = iVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
                    /* catch() { ... } // from try @ 004b62ac with catch @ 004b635c */
        if (iVar14 < 1) {
          operator_delete((undefined *)(local_88 + -0x18));
          plVar15 = local_78[0];
        }
      }
      local_78[0] = plVar15;
                    /* try { // try from 004b6434 to 005b6453 has its CatchHandler @ 004b63f0 */
      if ((plVar15 != (long *)0x0) &&
         (lVar12 = plVar15[1], plVar15[1] = lVar12 + -1, lVar12 + -1 == 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004b6430 with catch @ 004b6444
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004b6428 with catch @ 004b644c
                        */
        (**(code **)(*plVar15 + 0x10))(plVar15);
                    /* try { // try from 004b6454 to 005b645f has its CatchHandler @ 004b6468 */
        lVar12 = plVar15[2];
        plVar15[2] = lVar12 + -1;
                    /* try { // try from 004b6460 to 005b646b has its CatchHandler @ 004b63f0 */
        if (lVar12 + -1 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004b6454 with catch @ 004b6468
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004b64ec with catch @ 004b646c
                        */
          (**(code **)(*plVar15 + 0x18))(plVar15);
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(param_1 + 0x20));
  }
  puVar9 = PTR_DAT_007e5de8;
  puVar8 = PTR_pthread_create_007e4e78;
  if (0 < *(int *)(param_1 + 0x88)) {
                    /* try { // try from 004b64a4 to 005b64a7 has its CatchHandler @ 004b64d8 */
    lVar17 = 0;
                    /* try { // try from 004b64ac to 005b64af has its CatchHandler @ 004b64d0 */
                    /* try { // try from 004b64b0 to 005b64b7 has its CatchHandler @ 004b64c8 */
    do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004b64e0 with catch @ 004b64fc
                        */
      this_01 = operator_new(0x10);
      QuestState::QuestState(this_01);
      local_80 = (LevelState *)this_01;
      boost::detail::shared_count::shared_count<Caver::QuestState>((shared_count *)local_78,this_01)
      ;
      boost::detail::sp_enable_shared_from_this(&local_80,this_01,this_01);
      QuestState::LoadFromProtobufMessage
                ((QuestState *)local_80,*(QuestState **)(*(long *)(param_1 + 0x80) + lVar17 * 8));
      FUN_0066a528(&local_88,local_80);
      puVar10 = (undefined8 *)
                std::
                map<std::string,boost::shared_ptr<Caver::QuestState>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>>
                ::operator[]((map<std::string,boost::shared_ptr<Caver::QuestState>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::QuestState>>>>
                              *)(this + 0xf8),(string *)&local_88);
      if (local_78[0] != (long *)0x0) {
        local_78[0][1] = local_78[0][1] + 1;
      }
      plVar15 = (long *)puVar10[1];
      *puVar10 = local_80;
      puVar10[1] = local_78[0];
      if ((plVar15 != (long *)0x0) &&
         (lVar12 = plVar15[1], plVar15[1] = lVar12 + -1, lVar12 + -1 == 0)) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        lVar12 = plVar15[2];
        plVar15[2] = lVar12 + -1;
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar15 + 0x18))(plVar15);
        }
      }
      plVar15 = local_78[0];
      if ((undefined *)(local_88 + -0x18) != puVar9) {
        piVar13 = (int *)(local_88 + -8);
        if (puVar8 == (undefined *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004b64ac with catch @ 004b64d0
                        */
          iVar14 = *piVar13;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004b64a4 with catch @ 004b64d8
                        */
          *piVar13 = iVar14 + -1;
        }
        else {
          do {
            iVar14 = *piVar13;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar6) {
              *piVar13 = iVar14 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004b64b0 with catch @ 004b64c8
                        */
          } while (cVar5 != '\0');
        }
                    /* try { // try from 004b64e0 to 005b64eb has its CatchHandler @ 004b64fc */
        if (iVar14 < 1) {
          operator_delete((undefined *)(local_88 + -0x18));
          plVar15 = local_78[0];
                    /* try { // try from 004b64ec to 005b64ff has its CatchHandler @ 004b646c */
        }
      }
      local_78[0] = plVar15;
      if ((plVar15 != (long *)0x0) &&
         (lVar12 = plVar15[1], plVar15[1] = lVar12 + -1, lVar12 + -1 == 0)) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        lVar12 = plVar15[2];
        plVar15[2] = lVar12 + -1;
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar15 + 0x18))(plVar15);
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(param_1 + 0x88));
  }
                    /* catch() { ... } // from try @ 004b664c with catch @ 004b661c */
  pGVar2 = *(GameState **)puVar1;
  if (*(long *)(param_1 + 0xb8) != 0) {
    pGVar2 = param_1;
  }
  StateProperties::LoadFromProtobufMessage
            ((StateProperties *)(this + 0x128),*(StateProperties **)(pGVar2 + 0xb8));
                    /* try { // try from 004b6638 to 005b664b has its CatchHandler @ 004b6670 */
  FUN_0066a6a8(this + 0x158,*(undefined8 *)(param_1 + 0x50));
  FUN_0066a6a8(this + 0x160,*(undefined8 *)(param_1 + 0x58));
                    /* try { // try from 004b664c to 005b6673 has its CatchHandler @ 004b661c */
  FUN_0066a6a8(this + 0x168,*(undefined8 *)(param_1 + 0x60));
  lVar17 = *(long *)(*(long *)this + 0x48);
  plVar15 = *(long **)(*(long *)this + 0x50);
  if (plVar15 != (long *)0x0) {
    plVar15[1] = plVar15[1] + 1;
  }
                    /* catch() { ... } // from try @ 004b6638 with catch @ 004b6670 */
  if (lVar17 != 0) {
    uVar4 = *(uint *)(param_1 + 0x11c);
    if ((plVar15 != (long *)0x0) &&
       (lVar17 = plVar15[1], plVar15[1] = lVar17 + -1, lVar17 + -1 == 0)) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      lVar17 = plVar15[2];
      plVar15[2] = lVar17 + -1;
      if (lVar17 + -1 == 0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
    }
    if ((uVar4 >> 5 & 1) == 0) goto LAB_004b67d0;
    psVar3 = *(string **)(*(long *)this + 0x48);
    plVar15 = *(long **)(*(long *)this + 0x50);
    if (plVar15 != (long *)0x0) {
      plVar15[1] = plVar15[1] + 1;
    }
    Map::NodeForName(psVar3);
    if (local_78[0] != (long *)0x0) {
      local_78[0][1] = local_78[0][1] + 1;
    }
    plVar16 = *(long **)(this + 0x178);
    *(LevelState **)(this + 0x170) = local_80;
    *(long **)(this + 0x178) = local_78[0];
    if ((plVar16 != (long *)0x0) &&
       (lVar17 = plVar16[1], plVar16[1] = lVar17 + -1, lVar17 + -1 == 0)) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      lVar17 = plVar16[2];
      plVar16[2] = lVar17 + -1;
      if (lVar17 + -1 == 0) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
    plVar16 = local_78[0];
    if ((local_78[0] != (long *)0x0) &&
       (lVar17 = local_78[0][1], local_78[0][1] = lVar17 + -1, lVar17 + -1 == 0)) {
      (**(code **)(*local_78[0] + 0x10))(local_78[0]);
      lVar17 = plVar16[2];
      plVar16[2] = lVar17 + -1;
      if (lVar17 + -1 == 0) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
  }
  if ((plVar15 != (long *)0x0) && (lVar17 = plVar15[1], plVar15[1] = lVar17 + -1, lVar17 + -1 == 0))
  {
    (**(code **)(*plVar15 + 0x10))(plVar15);
    lVar17 = plVar15[2];
    plVar15[2] = lVar17 + -1;
    if (lVar17 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
LAB_004b67d0:
  FUN_0066a6a8(this + 0x180,*(undefined8 *)(param_1 + 0x70));
  FUN_0066a6a8(this + 0x188,*(undefined8 *)(param_1 + 0x78));
  FUN_0066a6a8(this + 400,*(undefined8 *)(param_1 + 0xc0));
  this[0x198] = *(GameState *)(param_1 + 200);
  this[0x199] = *(GameState *)(param_1 + 0xc9);
  FUN_0066a6a8(this + 0x1a0,*(undefined8 *)(param_1 + 0xd0));
  FUN_0066a6a8(this + 0x1a8,*(undefined8 *)(param_1 + 0xd8));
  if (0 < *(int *)(param_1 + 0xe8)) {
    lVar17 = 0;
    puVar1 = PTR_DAT_007e5de8 + 0x18;
    do {
      pQVar11 = operator_new(0x20);
      *(undefined8 *)(pQVar11 + 0x10) = 0;
      *(undefined8 *)(pQVar11 + 0x18) = 0;
      *(undefined **)pQVar11 = puVar1;
      *(undefined8 *)(pQVar11 + 8) = 0;
      boost::shared_ptr<Caver::QuestText>::shared_ptr<Caver::QuestText>
                ((shared_ptr<Caver::QuestText> *)&local_80,pQVar11);
      QuestText::LoadFromProtobufMessage
                ((QuestText *)local_80,*(QuestText **)(*(long *)(param_1 + 0xe0) + lVar17 * 8));
      puVar10 = *(undefined8 **)(this + 0x1b8);
      if (puVar10 == *(undefined8 **)(this + 0x1c0)) {
        std::
        vector<boost::shared_ptr<Caver::QuestText>,std::allocator<boost::shared_ptr<Caver::QuestText>>>
        ::_M_insert_aux((vector<boost::shared_ptr<Caver::QuestText>,std::allocator<boost::shared_ptr<Caver::QuestText>>>
                         *)(this + 0x1b0),puVar10,&local_80);
        plVar15 = local_78[0];
      }
      else {
        *puVar10 = local_80;
        puVar10[1] = local_78[0];
        if (local_78[0] != (long *)0x0) {
          local_78[0][1] = local_78[0][1] + 1;
        }
        *(undefined8 **)(this + 0x1b8) = puVar10 + 2;
        plVar15 = local_78[0];
      }
      local_78[0] = plVar15;
      if ((plVar15 != (long *)0x0) &&
         (lVar12 = plVar15[1], plVar15[1] = lVar12 + -1, lVar12 + -1 == 0)) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        lVar12 = plVar15[2];
        plVar15[2] = lVar12 + -1;
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar15 + 0x18))(plVar15);
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(param_1 + 0xe8));
  }
  this[0x1c8] = *(GameState *)(param_1 + 0x118);
  this[0x1c9] = *(GameState *)(param_1 + 0x119);
  this[0x1ca] = *(GameState *)(param_1 + 0x11a);
  this[0x1cb] = *(GameState *)(param_1 + 0x11b);
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


