/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043e338
 * Function: Caver::GameOptions::SetControlsLayout
 * Signature: undefined __thiscall SetControlsLayout(GameOptions * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOptions::SetControlsLayout(boost::shared_ptr<Caver::GUIViewLayout> const&) */

void __thiscall Caver::GameOptions::SetControlsLayout(GameOptions *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  iVar2 = CurrentDeviceType();
  if (iVar2 == 1) {
    uVar1 = *(undefined8 *)param_1;
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
    }
    plVar4 = *(long **)(this + 0x48);
    *(undefined8 *)(this + 0x40) = uVar1;
    *(long *)(this + 0x48) = lVar3;
  }
  else {
    uVar1 = *(undefined8 *)param_1;
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
    }
                    /* try { // try from 0043e390 to 0053e393 has its CatchHandler @ 0043e3bc */
    plVar4 = *(long **)(this + 0x38);
                    /* try { // try from 0043e394 to 0053e3cf has its CatchHandler @ 0043e2d4 */
    *(undefined8 *)(this + 0x30) = uVar1;
    *(long *)(this + 0x38) = lVar3;
  }
  if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* catch() { ... } // from try @ 0043e390 with catch @ 0043e3bc */
    lVar3 = plVar4[2];
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0043e3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x18))(plVar4);
      return;
    }
  }
                    /* try { // try from 0043e3d0 to 0053e44f has its CatchHandler @ 0043e3d0
                       catch(type#1 @ 00000000) { ... } // from try @ 0043e3d0 with catch @ 0043e3d0
                       catch(type#1 @ 00000000) { ... } // from try @ 0043e458 with catch @ 0043e3d0
                       catch(type#1 @ 00000000) { ... } // from try @ 0043e4d0 with catch @ 0043e3d0
                        */
  return;
}


