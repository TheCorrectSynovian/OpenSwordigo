/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005960ec
 * Function: Caver::GUIButton::StateDidChange
 * Signature: undefined __thiscall StateDidChange(GUIButton * this, State param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIButton::StateDidChange(Caver::GUIControl::State) */

void __thiscall Caver::GUIButton::StateDidChange(GUIButton *this,ulong param_2)

{
  long lVar1;
  GUIRoundedRect *pGVar2;
  GUIButton *pGVar3;
  GUIButton local_38;
  GUIButton local_37;
  GUIButton local_36;
  GUIButton local_35;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((param_2 & 1) == 0) {
    if (((*(uint *)(this + 0x120) & 1) == 0) ||
       (pGVar2 = *(GUIRoundedRect **)(this + 0x138), pGVar2 == (GUIRoundedRect *)0x0))
    goto LAB_00596164;
    local_30[0] = 0xffff7850;
    pGVar3 = (GUIButton *)local_30;
  }
  else {
    if (((*(uint *)(this + 0x120) & 1) != 0) ||
       (pGVar2 = *(GUIRoundedRect **)(this + 0x138), pGVar2 == (GUIRoundedRect *)0x0))
    goto LAB_00596164;
    local_38 = this[0x1b8];
    pGVar3 = &local_38;
    local_37 = this[0x1b9];
    local_36 = this[0x1ba];
    local_35 = this[0x1bb];
                    /* try { // try from 0059615c to 0069616f has its CatchHandler @ 00596d0c */
  }
  GUIRoundedRect::SetColor(pGVar2,pGVar3);
LAB_00596164:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


