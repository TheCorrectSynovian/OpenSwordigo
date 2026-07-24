/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b4a9c
 * Function: Caver::GameOptions::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(GameOptions * this, GameOptions * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOptions::SaveToProtobufMessage(Caver::Proto::GameOptions*) const */

void __thiscall Caver::GameOptions::SaveToProtobufMessage(GameOptions *this,GameOptions *param_1)

{
  uint uVar1;
  GameOptions GVar2;
  undefined8 uVar3;
  GUIViewLayout *pGVar4;
  GUIViewLayout *pGVar5;
  
  *(GameOptions *)(param_1 + 0x48) = this[0x20];
  uVar1 = *(uint *)(param_1 + 0x6c);
  *(GameOptions *)(param_1 + 0x49) = this[0x21];
  uVar3 = *(undefined8 *)(this + 0x24);
  *(uint *)(param_1 + 0x6c) = uVar1 | 0x1e;
  *(undefined8 *)(param_1 + 0x4c) = uVar3;
  pGVar4 = *(GUIViewLayout **)(this + 0x30);
  if (pGVar4 != (GUIViewLayout *)0x0) {
    pGVar5 = *(GUIViewLayout **)(param_1 + 0x58);
    *(uint *)(param_1 + 0x6c) = uVar1 | 0x3e;
    if (pGVar5 == (GUIViewLayout *)0x0) {
      pGVar5 = operator_new(0x60);
      Proto::GUIViewLayout::GUIViewLayout(pGVar5);
      *(GUIViewLayout **)(param_1 + 0x58) = pGVar5;
    }
    GUIViewLayout::SaveToProtobufMessage(pGVar4,pGVar5);
  }
  pGVar4 = *(GUIViewLayout **)(this + 0x40);
  if (pGVar4 != (GUIViewLayout *)0x0) {
    pGVar5 = *(GUIViewLayout **)(param_1 + 0x60);
    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x40;
    if (pGVar5 == (GUIViewLayout *)0x0) {
      pGVar5 = operator_new(0x60);
      Proto::GUIViewLayout::GUIViewLayout(pGVar5);
      *(GUIViewLayout **)(param_1 + 0x60) = pGVar5;
    }
    GUIViewLayout::SaveToProtobufMessage(pGVar4,pGVar5);
  }
  *(GameOptions *)(param_1 + 0x68) = this[0x50];
  *(GameOptions *)(param_1 + 0x69) = this[0x51];
  GVar2 = this[0x52];
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 0x380;
                    /* try { // try from 004b4b6c to 005b4bb3 has its CatchHandler @ 004b4b6c
                       catch() { ... } // from try @ 004b4b6c with catch @ 004b4b6c
                       catch() { ... } // from try @ 004b4bfc with catch @ 004b4b6c */
  *(GameOptions *)(param_1 + 0x6a) = GVar2;
  return;
}


