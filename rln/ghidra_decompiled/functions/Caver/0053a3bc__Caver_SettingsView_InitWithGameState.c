/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053a3bc
 * Function: Caver::SettingsView::InitWithGameState
 * Signature: undefined __thiscall InitWithGameState(SettingsView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SettingsView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&) */

void __thiscall Caver::SettingsView::InitWithGameState(SettingsView *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = *(undefined8 *)param_1;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x108);
  *(undefined8 *)(this + 0x100) = uVar1;
  *(long *)(this + 0x108) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  UpdateAudioControls(this);
  return;
}


