/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b4688
 * Function: Caver::GameOptions::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(GameOptions * this, GameOptions * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::GameOptions::LoadFromProtobufMessage(Caver::Proto::GameOptions const&) */

void __thiscall Caver::GameOptions::LoadFromProtobufMessage(GameOptions *this,GameOptions *param_1)

{
  GameOptions *pGVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  MusicPlaylist *pMVar6;
  GUIViewLayout *pGVar7;
  long lVar8;
  long lVar9;
  MusicPlaylist *local_58;
  long *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar9 = 0;
    do {
      pMVar6 = operator_new(0x28);
      MusicPlaylist::MusicPlaylist(pMVar6);
      boost::shared_ptr<Caver::MusicPlaylist>::shared_ptr<Caver::MusicPlaylist>
                ((shared_ptr<Caver::MusicPlaylist> *)&local_58,pMVar6);
      MusicPlaylist::LoadFromProtobufMessage
                (local_58,*(MusicPlaylist **)(*(long *)(param_1 + 0x10) + lVar9 * 8));
      puVar2 = *(undefined8 **)(this + 0x10);
      if (puVar2 == *(undefined8 **)(this + 0x18)) {
        std::
        vector<boost::shared_ptr<Caver::MusicPlaylist>,std::allocator<boost::shared_ptr<Caver::MusicPlaylist>>>
        ::_M_insert_aux((vector<boost::shared_ptr<Caver::MusicPlaylist>,std::allocator<boost::shared_ptr<Caver::MusicPlaylist>>>
                         *)(this + 8),puVar2,&local_58);
        plVar3 = local_50;
      }
      else {
        *puVar2 = local_58;
        puVar2[1] = local_50;
        if (local_50 != (long *)0x0) {
          local_50[1] = local_50[1] + 1;
        }
        *(undefined8 **)(this + 0x10) = puVar2 + 2;
        plVar3 = local_50;
      }
      local_50 = plVar3;
      if ((plVar3 != (long *)0x0) && (lVar8 = plVar3[1], plVar3[1] = lVar8 + -1, lVar8 + -1 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        lVar8 = plVar3[2];
        plVar3[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0x18));
  }
  uVar4 = *(uint *)(param_1 + 0x6c);
  if ((uVar4 >> 1 & 1) != 0) {
    this[0x20] = *(GameOptions *)(param_1 + 0x48);
  }
  if ((uVar4 >> 2 & 1) != 0) {
    this[0x21] = *(GameOptions *)(param_1 + 0x49);
  }
  if ((uVar4 >> 3 & 1) != 0) {
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x4c);
  }
  if ((uVar4 >> 4 & 1) != 0) {
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x50);
  }
  if ((uVar4 >> 5 & 1) != 0) {
    pGVar7 = operator_new(0x70);
    GUIViewLayout::GUIViewLayout(pGVar7);
    local_58 = (MusicPlaylist *)pGVar7;
    boost::detail::shared_count::shared_count<Caver::GUIViewLayout>
              ((shared_count *)&local_50,pGVar7);
    boost::detail::sp_enable_shared_from_this(&local_58,pGVar7,pGVar7);
    pMVar6 = *(MusicPlaylist **)(this + 0x30);
    plVar3 = *(long **)(this + 0x38);
    *(MusicPlaylist **)(this + 0x30) = local_58;
    *(long **)(this + 0x38) = local_50;
    local_58 = pMVar6;
    local_50 = plVar3;
    if ((plVar3 != (long *)0x0) && (lVar9 = plVar3[1], plVar3[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar9 = plVar3[2];
      plVar3[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    pGVar1 = *(GameOptions **)PTR_default_instance__007e6d28;
    if (*(long *)(param_1 + 0x58) != 0) {
      pGVar1 = param_1;
    }
    GUIViewLayout::LoadFromProtobufMessage
              (*(GUIViewLayout **)(this + 0x30),*(GUIViewLayout **)(pGVar1 + 0x58));
    uVar4 = *(uint *)(param_1 + 0x6c);
  }
  if ((uVar4 >> 6 & 1) != 0) {
    pGVar7 = operator_new(0x70);
    GUIViewLayout::GUIViewLayout(pGVar7);
    local_58 = (MusicPlaylist *)pGVar7;
    boost::detail::shared_count::shared_count<Caver::GUIViewLayout>
              ((shared_count *)&local_50,pGVar7);
    boost::detail::sp_enable_shared_from_this(&local_58,pGVar7,pGVar7);
    pMVar6 = *(MusicPlaylist **)(this + 0x40);
    plVar3 = *(long **)(this + 0x48);
    *(MusicPlaylist **)(this + 0x40) = local_58;
    *(long **)(this + 0x48) = local_50;
    local_58 = pMVar6;
    local_50 = plVar3;
    if ((plVar3 != (long *)0x0) && (lVar9 = plVar3[1], plVar3[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar9 = plVar3[2];
      plVar3[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    pGVar1 = *(GameOptions **)PTR_default_instance__007e6d28;
    if (*(long *)(param_1 + 0x60) != 0) {
      pGVar1 = param_1;
    }
    GUIViewLayout::LoadFromProtobufMessage
              (*(GUIViewLayout **)(this + 0x40),*(GUIViewLayout **)(pGVar1 + 0x60));
  }
  this[0x50] = *(GameOptions *)(param_1 + 0x68);
  this[0x51] = *(GameOptions *)(param_1 + 0x69);
  this[0x52] = *(GameOptions *)(param_1 + 0x6a);
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


