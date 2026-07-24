/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c7324
 * Function: Caver::Sprite::InitWithMaxRectangles
 * Signature: undefined __thiscall InitWithMaxRectangles(Sprite * this, intrusive_ptr * param_1, int param_2, bool param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Sprite::InitWithMaxRectangles(boost::intrusive_ptr<Caver::Texture> const&, int, bool) */

void __thiscall
Caver::Sprite::InitWithMaxRectangles(Sprite *this,intrusive_ptr *param_1,int param_2,bool param_3)

{
  Init(this,param_1,param_2 << 1,param_2 << 2,param_3);
  return;
}


