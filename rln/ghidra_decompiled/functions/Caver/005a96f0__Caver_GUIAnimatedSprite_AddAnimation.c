/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a96f0
 * Function: Caver::GUIAnimatedSprite::AddAnimation
 * Signature: undefined __thiscall AddAnimation(GUIAnimatedSprite * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAnimatedSprite::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&) */

void __thiscall Caver::GUIAnimatedSprite::AddAnimation(GUIAnimatedSprite *this,shared_ptr *param_1)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = operator_new(0x20);
                    /* try { // try from 005a9710 to 006a9863 has its CatchHandler @ 005a9710
                       catch() { ... } // from try @ 005a9710 with catch @ 005a9710
                       catch() { ... } // from try @ 005a9888 with catch @ 005a9710
                       catch() { ... } // from try @ 005a990c with catch @ 005a9710
                       catch() { ... } // from try @ 005a99f4 with catch @ 005a9710 */
  *(undefined8 *)((long)pvVar1 + 0x10) = *(undefined8 *)param_1;
  lVar2 = *(long *)(param_1 + 8);
  *(long *)((long)pvVar1 + 0x18) = lVar2;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  FUN_0062a9ac(pvVar1,this + 0x20);
  return;
}


