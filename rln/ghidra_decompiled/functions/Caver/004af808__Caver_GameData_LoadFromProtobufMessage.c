/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004af808
 * Function: Caver::GameData::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(GameData * this, GameData * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameData::LoadFromProtobufMessage(Caver::Proto::GameData const&) */

void __thiscall Caver::GameData::LoadFromProtobufMessage(GameData *this,GameData *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  Item *this_00;
  Skill *pSVar5;
  Quest *this_01;
  EntityClass *this_02;
  GuideTarget *pGVar6;
  long lVar7;
  GuideTarget *pGVar8;
  long lVar9;
  Item *local_68;
  long *local_60;
  long local_58;
  
                    /* try { // try from 004af810 to 005af87b has its CatchHandler @ 004af810
                       catch() { ... } // from try @ 004af810 with catch @ 004af810
                       catch() { ... } // from try @ 004af880 with catch @ 004af810
                       catch() { ... } // from try @ 004af8cc with catch @ 004af810 */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar9 = 0;
    do {
      this_00 = operator_new(0x38);
      Item::Item(this_00);
      local_68 = this_00;
      boost::detail::shared_count::shared_count<Caver::Item>((shared_count *)&local_60,this_00);
                    /* try { // try from 004af87c to 005af87f has its CatchHandler @ 004af90c */
      boost::detail::sp_enable_shared_from_this(&local_68,this_00,this_00);
                    /* try { // try from 004af880 to 005af8c7 has its CatchHandler @ 004af810 */
      Item::LoadFromProtobufMessage(local_68,*(Item **)(*(long *)(param_1 + 0x10) + lVar9 * 8));
      AddItem(this,(shared_ptr *)&local_68);
      plVar4 = local_60;
      if ((local_60 != (long *)0x0) &&
         (lVar7 = local_60[1], local_60[1] = lVar7 + -1, lVar7 + -1 == 0)) {
        (**(code **)(*local_60 + 0x10))(local_60);
        lVar7 = plVar4[2];
                    /* try { // try from 004af8c8 to 005af8cb has its CatchHandler @ 004af908 */
                    /* try { // try from 004af8cc to 005af91f has its CatchHandler @ 004af810 */
        plVar4[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0x18));
  }
  if (0 < *(int *)(param_1 + 0x50)) {
                    /* catch() { ... } // from try @ 004af8c8 with catch @ 004af908 */
                    /* catch() { ... } // from try @ 004af87c with catch @ 004af90c */
    lVar9 = 0;
    puVar1 = PTR_DAT_007e5de8 + 0x18;
                    /* try { // try from 004af920 to 005af94f has its CatchHandler @ 004af920
                       catch() { ... } // from try @ 004af920 with catch @ 004af920
                       catch() { ... } // from try @ 004afeb0 with catch @ 004af920 */
    do {
      pSVar5 = operator_new(0x28);
      *(undefined **)(pSVar5 + 8) = puVar1;
      *(undefined **)pSVar5 = puVar1;
      *(undefined **)(pSVar5 + 0x10) = puVar1;
      local_68 = (Item *)pSVar5;
      boost::detail::shared_count::shared_count<Caver::Skill>((shared_count *)&local_60,pSVar5);
                    /* try { // try from 004af950 to 005af963 has its CatchHandler @ 004b0838 */
      boost::detail::sp_enable_shared_from_this(&local_68,pSVar5,pSVar5);
      Skill::LoadFromProtobufMessage
                ((Skill *)local_68,*(Skill **)(*(long *)(param_1 + 0x48) + lVar9 * 8));
      puVar2 = *(undefined8 **)(this + 0x38);
                    /* try { // try from 004af974 to 005af97f has its CatchHandler @ 004b07cc */
      if (puVar2 == *(undefined8 **)(this + 0x40)) {
        std::vector<boost::shared_ptr<Caver::Skill>,std::allocator<boost::shared_ptr<Caver::Skill>>>
        ::_M_insert_aux((vector<boost::shared_ptr<Caver::Skill>,std::allocator<boost::shared_ptr<Caver::Skill>>>
                         *)(this + 0x30),puVar2,&local_68);
        plVar4 = local_60;
      }
      else {
        *puVar2 = local_68;
        puVar2[1] = local_60;
        if (local_60 != (long *)0x0) {
          local_60[1] = local_60[1] + 1;
        }
        *(undefined8 **)(this + 0x38) = puVar2 + 2;
        plVar4 = local_60;
      }
      local_60 = plVar4;
      if ((plVar4 != (long *)0x0) && (lVar7 = plVar4[1], plVar4[1] = lVar7 + -1, lVar7 + -1 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar7 = plVar4[2];
        plVar4[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      lVar9 = lVar9 + 1;
                    /* try { // try from 004afa0c to 005afa1f has its CatchHandler @ 004b0764 */
    } while (lVar9 < *(int *)(param_1 + 0x50));
  }
  if (0 < *(int *)(param_1 + 0x88)) {
    lVar9 = 0;
    do {
      this_01 = operator_new(0x28);
                    /* try { // try from 004afa30 to 005afa3b has its CatchHandler @ 004b072c */
      Quest::Quest(this_01);
      local_68 = (Item *)this_01;
      boost::detail::shared_count::shared_count<Caver::Quest>((shared_count *)&local_60,this_01);
      boost::detail::sp_enable_shared_from_this(&local_68,this_01,this_01);
                    /* try { // try from 004afa64 to 005afa9f has its CatchHandler @ 004b06d0 */
      Quest::LoadFromProtobufMessage
                ((Quest *)local_68,*(Quest **)(*(long *)(param_1 + 0x80) + lVar9 * 8));
      AddQuest(this,(shared_ptr *)&local_68);
      plVar4 = local_60;
      if ((local_60 != (long *)0x0) &&
         (lVar7 = local_60[1], local_60[1] = lVar7 + -1, lVar7 + -1 == 0)) {
        (**(code **)(*local_60 + 0x10))(local_60);
        lVar7 = plVar4[2];
        plVar4[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
                    /* try { // try from 004afac0 to 005afad3 has its CatchHandler @ 004b06cc */
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0x88));
  }
  if (0 < *(int *)(param_1 + 0xc0)) {
    lVar9 = 0;
    do {
                    /* try { // try from 004afae4 to 005afaef has its CatchHandler @ 004b0694 */
      this_02 = operator_new(0x20);
      EntityClass::EntityClass(this_02);
      local_68 = (Item *)this_02;
      boost::detail::shared_count::shared_count<Caver::EntityClass>
                ((shared_count *)&local_60,this_02);
      boost::detail::sp_enable_shared_from_this(&local_68,this_02,this_02);
                    /* try { // try from 004afb18 to 005afb53 has its CatchHandler @ 004b0638 */
      EntityClass::LoadFromProtobufMessage
                ((EntityClass *)local_68,*(EntityClass **)(*(long *)(param_1 + 0xb8) + lVar9 * 8));
      AddEntityClass(this,(shared_ptr *)&local_68);
      plVar4 = local_60;
      if ((local_60 != (long *)0x0) &&
         (lVar7 = local_60[1], local_60[1] = lVar7 + -1, lVar7 + -1 == 0)) {
        (**(code **)(*local_60 + 0x10))(local_60);
        lVar7 = plVar4[2];
        plVar4[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
                    /* try { // try from 004afb74 to 005afb87 has its CatchHandler @ 004b0634 */
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0xc0));
  }
  if (0 < *(int *)(param_1 + 0xf8)) {
                    /* try { // try from 004afb98 to 005afba3 has its CatchHandler @ 004b05fc */
    lVar9 = 0;
    puVar1 = PTR_DAT_007e5de8 + 0x18;
    do {
      pGVar6 = operator_new(0x60);
                    /* try { // try from 004afbc4 to 005afbff has its CatchHandler @ 004b05a0 */
      *(undefined4 *)pGVar6 = 0;
      *(undefined **)(pGVar6 + 0x10) = puVar1;
      *(undefined **)(pGVar6 + 8) = puVar1;
      *(undefined **)(pGVar6 + 0x20) = puVar1;
      *(undefined **)(pGVar6 + 0x18) = puVar1;
      pGVar6[0x28] = (GuideTarget)0x0;
      pGVar8 = pGVar6 + 0x38;
      *(undefined8 *)pGVar8 = 0;
      *(undefined8 *)(pGVar6 + 0x40) = 0;
      *(GuideTarget **)(pGVar6 + 0x48) = pGVar8;
      *(GuideTarget **)(pGVar6 + 0x50) = pGVar8;
      *(undefined8 *)(pGVar6 + 0x58) = 0;
      local_68 = (Item *)pGVar6;
      boost::detail::shared_count::shared_count<Caver::GuideTarget>
                ((shared_count *)&local_60,pGVar6);
      boost::detail::sp_enable_shared_from_this(&local_68,pGVar6,pGVar6);
      GuideTarget::LoadFromProtobufMessage
                ((GuideTarget *)local_68,*(GuideTarget **)(*(long *)(param_1 + 0xf0) + lVar9 * 8));
      puVar2 = *(undefined8 **)(this + 0xd8);
                    /* try { // try from 004afc20 to 005afc33 has its CatchHandler @ 004b059c */
      if (puVar2 == *(undefined8 **)(this + 0xe0)) {
        std::
        vector<boost::shared_ptr<Caver::GuideTarget>,std::allocator<boost::shared_ptr<Caver::GuideTarget>>>
        ::_M_insert_aux((vector<boost::shared_ptr<Caver::GuideTarget>,std::allocator<boost::shared_ptr<Caver::GuideTarget>>>
                         *)(this + 0xd0),puVar2,&local_68);
        plVar4 = local_60;
      }
      else {
        *puVar2 = local_68;
        puVar2[1] = local_60;
        if (local_60 != (long *)0x0) {
          local_60[1] = local_60[1] + 1;
        }
                    /* try { // try from 004afc44 to 005afc4f has its CatchHandler @ 004b0564 */
        *(undefined8 **)(this + 0xd8) = puVar2 + 2;
        plVar4 = local_60;
      }
      local_60 = plVar4;
                    /* try { // try from 004afc70 to 005afcab has its CatchHandler @ 004b0508 */
      if ((plVar4 != (long *)0x0) && (lVar7 = plVar4[1], plVar4[1] = lVar7 + -1, lVar7 + -1 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar7 = plVar4[2];
        plVar4[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0xf8));
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 004afccc to 005afcdf has its CatchHandler @ 004b0504 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


