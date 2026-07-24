/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00312df0
 * Function: Caver::AnimKeysNode::InitWithAnimation
 * Signature: undefined __thiscall InitWithAnimation(AnimKeysNode * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimKeysNode::InitWithAnimation(boost::shared_ptr<Caver::KeyframeAnimation const> const&)
    */

void __thiscall Caver::AnimKeysNode::InitWithAnimation(AnimKeysNode *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = *(undefined8 *)param_1;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x20);
  *(undefined8 *)(this + 0x18) = uVar1;
  *(long *)(this + 0x20) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
      lVar2 = *(long *)(this + 0x18);
      goto joined_r0x00312e54;
    }
  }
  lVar2 = *(long *)(this + 0x18);
joined_r0x00312e54:
  if (lVar2 != 0) {
    *(float *)(this + 0x28) = *(float *)(lVar2 + 0x20) + DAT_006837a4;
  }
  return;
}


