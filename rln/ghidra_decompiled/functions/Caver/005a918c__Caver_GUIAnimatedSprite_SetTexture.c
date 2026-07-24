/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a918c
 * Function: Caver::GUIAnimatedSprite::SetTexture
 * Signature: undefined __thiscall SetTexture(GUIAnimatedSprite * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAnimatedSprite::SetTexture(boost::intrusive_ptr<Caver::Texture> const&) */

void __thiscall Caver::GUIAnimatedSprite::SetTexture(GUIAnimatedSprite *this,intrusive_ptr *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)param_1;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
                    /* try { // try from 005a91b0 to 006a91bb has its CatchHandler @ 005a9064 */
  plVar2 = *(long **)this;
  *(long *)this = lVar3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005a9188 with catch @ 005a91b8
                        */
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
                    /* catch() { ... } // from try @ 005a9234 with catch @ 005a91cc
                       catch() { ... } // from try @ 005a9250 with catch @ 005a91cc */
    (**(code **)(*plVar2 + 8))();
  }
  this[0x30] = (GUIAnimatedSprite)0x1;
  return;
}


