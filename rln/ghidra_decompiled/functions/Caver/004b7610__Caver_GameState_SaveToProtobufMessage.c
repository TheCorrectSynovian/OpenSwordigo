/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b7610
 * Function: Caver::GameState::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(GameState * this, GameState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameState::SaveToProtobufMessage(Caver::Proto::GameState*) const */

void __thiscall Caver::GameState::SaveToProtobufMessage(GameState *this,GameState *param_1)

{
  undefined8 *puVar1;
  GameState GVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  CharacterState *this_00;
  GameState *pGVar11;
  StateProperties *this_01;
  QuestText *this_02;
  LevelState *this_03;
  QuestState *this_04;
  QuestText *this_05;
  LevelState *this_06;
  QuestState *this_07;
  undefined8 *puVar12;
  long local_68 [2];
  long local_58;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004b75a0 with catch @ 004b7614
                        */
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 004b7638 to 005b765f has its CatchHandler @ 004b7668 */
  this_00 = *(CharacterState **)(param_1 + 0x10);
  *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x11c) | 1;
  if (this_00 == (CharacterState *)0x0) {
    this_00 = operator_new(0xd0);
                    /* try { // try from 004b7660 to 005b766b has its CatchHandler @ 004b7520 */
    Proto::CharacterState::CharacterState(this_00);
    *(CharacterState **)(param_1 + 0x10) = this_00;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004b7638 with catch @ 004b7668
                        */
                    /* try { // try from 004b766c to 005b772b has its CatchHandler @ 004b766c
                       catch() { ... } // from try @ 004b766c with catch @ 004b766c
                       catch() { ... } // from try @ 004b7730 with catch @ 004b766c
                       catch() { ... } // from try @ 004b77cc with catch @ 004b766c
                       catch() { ... } // from try @ 004b781c with catch @ 004b766c
                       catch() { ... } // from try @ 004b7860 with catch @ 004b766c */
  CharacterState::SaveToProtobufMessage((CharacterState *)(this + 0x10),this_00);
  pGVar11 = *(GameState **)(this + 0xe0);
  if (this + 0xd0 != pGVar11) {
    do {
      iVar10 = *(int *)(param_1 + 0x20);
      iVar8 = *(int *)(param_1 + 0x24);
      this_03 = *(LevelState **)(pGVar11 + 0x28);
      if (iVar10 < iVar8) {
        *(int *)(param_1 + 0x20) = iVar10 + 1;
        this_06 = *(LevelState **)(*(long *)(param_1 + 0x18) + (long)iVar10 * 8);
      }
      else {
        if (iVar8 == *(int *)(param_1 + 0x28)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(param_1 + 0x18),iVar8 + 1);
          iVar8 = *(int *)(param_1 + 0x24);
        }
        *(int *)(param_1 + 0x24) = iVar8 + 1;
        this_06 = operator_new(0x38);
        Proto::LevelState::LevelState(this_06);
        iVar10 = *(int *)(param_1 + 0x20);
        *(int *)(param_1 + 0x20) = iVar10 + 1;
        *(LevelState **)(*(long *)(param_1 + 0x18) + (long)iVar10 * 8) = this_06;
      }
      LevelState::SaveToProtobufMessage(this_03,this_06);
      pGVar11 = (GameState *)FUN_0064c6a0(pGVar11);
    } while (this + 0xd0 != pGVar11);
  }
  pGVar11 = *(GameState **)(this + 0x110);
  if (this + 0x100 != pGVar11) {
    do {
                    /* try { // try from 004b772c to 005b772f has its CatchHandler @ 004b78b8 */
      iVar10 = *(int *)(param_1 + 0x88);
      iVar8 = *(int *)(param_1 + 0x8c);
                    /* try { // try from 004b7730 to 005b77c7 has its CatchHandler @ 004b766c */
      this_04 = *(QuestState **)(pGVar11 + 0x28);
      if (iVar10 < iVar8) {
        *(int *)(param_1 + 0x88) = iVar10 + 1;
        this_07 = *(QuestState **)(*(long *)(param_1 + 0x80) + (long)iVar10 * 8);
      }
      else {
        if (iVar8 == *(int *)(param_1 + 0x90)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(param_1 + 0x80),iVar8 + 1);
          iVar8 = *(int *)(param_1 + 0x8c);
        }
        *(int *)(param_1 + 0x8c) = iVar8 + 1;
        this_07 = operator_new(0x20);
        Proto::QuestState::QuestState(this_07);
        iVar10 = *(int *)(param_1 + 0x88);
        *(int *)(param_1 + 0x88) = iVar10 + 1;
        *(QuestState **)(*(long *)(param_1 + 0x80) + (long)iVar10 * 8) = this_07;
      }
      QuestState::SaveToProtobufMessage(this_04,this_07);
      pGVar11 = (GameState *)FUN_0064c6a0(pGVar11);
    } while (this + 0x100 != pGVar11);
  }
  this_01 = *(StateProperties **)(param_1 + 0xb8);
                    /* try { // try from 004b77c8 to 005b77cb has its CatchHandler @ 004b78b4 */
  *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x11c) | 0x200;
                    /* try { // try from 004b77cc to 005b7817 has its CatchHandler @ 004b766c */
  if (this_01 == (StateProperties *)0x0) {
    this_01 = operator_new(0x50);
    Proto::StateProperties::StateProperties(this_01);
    *(StateProperties **)(param_1 + 0xb8) = this_01;
  }
  StateProperties::SaveToProtobufMessage((StateProperties *)(this + 0x128),this_01);
  puVar6 = PTR__default_current_level__007e5760;
  plVar7 = *(long **)(param_1 + 0x50);
  *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x11c) | 4;
  if (plVar7 == (long *)puVar6) {
                    /* try { // try from 004b7818 to 005b781b has its CatchHandler @ 004b78a8 */
    plVar7 = operator_new(8);
                    /* try { // try from 004b781c to 005b785b has its CatchHandler @ 004b766c */
    *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x50) = plVar7;
  }
  FUN_0066a6a8(plVar7,this + 0x158);
  puVar6 = PTR__default_current_spawn_point__007e6dd0;
  plVar7 = *(long **)(param_1 + 0x58);
  *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x11c) | 8;
  if (plVar7 == (long *)puVar6) {
                    /* try { // try from 004b785c to 005b785f has its CatchHandler @ 004b78a4 */
                    /* try { // try from 004b7860 to 005b78cb has its CatchHandler @ 004b766c */
    plVar7 = operator_new(8);
    *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x58) = plVar7;
  }
  FUN_0066a6a8(plVar7,this + 0x160);
  puVar6 = PTR__default_previous_portal_level__007e7670;
  plVar7 = *(long **)(param_1 + 0x60);
  *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x11c) | 0x10;
  if (plVar7 == (long *)puVar6) {
                    /* catch() { ... } // from try @ 004b785c with catch @ 004b78a4 */
                    /* catch() { ... } // from try @ 004b7818 with catch @ 004b78a8 */
    plVar7 = operator_new(8);
                    /* catch() { ... } // from try @ 004b77c8 with catch @ 004b78b4 */
                    /* catch() { ... } // from try @ 004b772c with catch @ 004b78b8 */
    *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x60) = plVar7;
  }
  FUN_0066a6a8(plVar7,this + 0x168);
                    /* try { // try from 004b78cc to 005b79a7 has its CatchHandler @ 004b78cc
                       catch() { ... } // from try @ 004b78cc with catch @ 004b78cc
                       catch() { ... } // from try @ 004b7d58 with catch @ 004b78cc
                       catch() { ... } // from try @ 004b7db0 with catch @ 004b78cc */
  if (*(long *)(this + 0x170) != 0) {
    FUN_0066a528(local_68,*(long *)(this + 0x170) + 0x10);
    puVar6 = PTR__default_current_map_node_name__007e49b8;
    plVar7 = *(long **)(param_1 + 0x68);
    *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x11c) | 0x20;
    if (plVar7 == (long *)puVar6) {
      plVar7 = operator_new(8);
      *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(param_1 + 0x68) = plVar7;
    }
    FUN_0066a6a8(plVar7,local_68);
    if ((undefined *)(local_68[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar9 = (int *)(local_68[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar10 = *piVar9;
        *piVar9 = iVar10 + -1;
      }
      else {
        do {
          iVar10 = *piVar9;
                    /* try { // try from 004b7bb4 to 005b7bbb has its CatchHandler @ 004b7dd0 */
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar4) {
            *piVar9 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar10 < 1) {
        operator_delete((undefined *)(local_68[0] + -0x18));
      }
    }
  }
  puVar6 = PTR__default_carried_object_template__007e66a8;
  plVar7 = *(long **)(param_1 + 0x70);
  *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x11c) | 0x40;
  if (plVar7 == (long *)puVar6) {
    plVar7 = operator_new(8);
    *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x70) = plVar7;
  }
  FUN_0066a6a8(plVar7,this + 0x180);
  puVar6 = PTR__default_carried_object_identifier__007e6520;
  plVar7 = *(long **)(param_1 + 0x78);
  *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x11c) | 0x80;
  if (plVar7 == (long *)puVar6) {
                    /* try { // try from 004b79a8 to 005b79af has its CatchHandler @ 004b7db4 */
    plVar7 = operator_new(8);
    *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x78) = plVar7;
  }
  FUN_0066a6a8(plVar7,this + 0x188);
  puVar6 = PTR__default_selected_menu_tab__007e6ec0;
  plVar7 = *(long **)(param_1 + 0xc0);
  *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x11c) | 0x400;
  if (plVar7 == (long *)puVar6) {
    plVar7 = operator_new(8);
    *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0xc0) = plVar7;
  }
  FUN_0066a6a8(plVar7,this + 400);
  plVar7 = *(long **)(param_1 + 0xd0);
  *(GameState *)(param_1 + 200) = this[0x198];
  puVar6 = PTR__default_flashing_item_name__007e5158;
                    /* try { // try from 004b7a24 to 005b7a2b has its CatchHandler @ 004b7dbc */
  *(GameState *)(param_1 + 0xc9) = this[0x199];
  *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x11c) | 0x3800;
  if (plVar7 == (long *)puVar6) {
                    /* try { // try from 004b7a44 to 005b7a4f has its CatchHandler @ 004b7e3c */
    plVar7 = operator_new(8);
                    /* try { // try from 004b7a50 to 005b7a57 has its CatchHandler @ 004b7e24 */
    *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0xd0) = plVar7;
  }
                    /* try { // try from 004b7a64 to 005b7a6f has its CatchHandler @ 004b7e1c */
  FUN_0066a6a8(plVar7,this + 0x1a0);
  puVar6 = PTR__default_flashing_skill_name__007e63c0;
  plVar7 = *(long **)(param_1 + 0xd8);
  *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x11c) | 0x4000;
  if (plVar7 == (long *)puVar6) {
                    /* try { // try from 004b7a8c to 005b7a93 has its CatchHandler @ 004b7e18 */
    plVar7 = operator_new(8);
    *plVar7 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0xd8) = plVar7;
  }
  FUN_0066a6a8(plVar7,this + 0x1a8);
  puVar12 = *(undefined8 **)(this + 0x1b0);
  puVar1 = *(undefined8 **)(this + 0x1b8);
  if (puVar12 != puVar1) {
    do {
      iVar10 = *(int *)(param_1 + 0xe8);
      iVar8 = *(int *)(param_1 + 0xec);
      this_02 = (QuestText *)*puVar12;
                    /* try { // try from 004b7acc to 005b7ad7 has its CatchHandler @ 004b7e74 */
      if (iVar10 < iVar8) {
                    /* try { // try from 004b7ad8 to 005b7adf has its CatchHandler @ 004b7e44 */
        *(int *)(param_1 + 0xe8) = iVar10 + 1;
        this_05 = *(QuestText **)(*(long *)(param_1 + 0xe0) + (long)iVar10 * 8);
      }
      else {
        if (iVar8 == *(int *)(param_1 + 0xf0)) {
                    /* try { // try from 004b7af8 to 005b7b17 has its CatchHandler @ 004b7e7c */
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(param_1 + 0xe0),iVar8 + 1);
          iVar8 = *(int *)(param_1 + 0xec);
        }
        *(int *)(param_1 + 0xec) = iVar8 + 1;
        this_05 = operator_new(0x58);
                    /* try { // try from 004b7b18 to 005b7b1f has its CatchHandler @ 004b7e74 */
        Proto::QuestText::QuestText(this_05);
        iVar10 = *(int *)(param_1 + 0xe8);
        *(int *)(param_1 + 0xe8) = iVar10 + 1;
        *(QuestText **)(*(long *)(param_1 + 0xe0) + (long)iVar10 * 8) = this_05;
      }
      QuestText::SaveToProtobufMessage(this_02,this_05);
      puVar12 = puVar12 + 2;
                    /* try { // try from 004b7b44 to 005b7b4b has its CatchHandler @ 004b7e3c */
    } while (puVar1 != puVar12);
  }
  *(GameState *)(param_1 + 0x118) = this[0x1c8];
  *(GameState *)(param_1 + 0x119) = this[0x1c9];
  *(GameState *)(param_1 + 0x11a) = this[0x1ca];
  GVar2 = this[0x1cb];
                    /* try { // try from 004b7b6c to 005b7b77 has its CatchHandler @ 004b7e04 */
  *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 0x11c) | 0xf0000;
  *(GameState *)(param_1 + 0x11b) = GVar2;
                    /* try { // try from 004b7b78 to 005b7b7f has its CatchHandler @ 004b7ddc */
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 004b7b8c to 005b7b97 has its CatchHandler @ 004b7dd4 */
  return;
}


