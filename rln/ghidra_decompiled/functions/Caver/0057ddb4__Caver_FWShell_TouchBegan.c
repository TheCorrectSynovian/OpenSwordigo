/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057ddb4
 * Function: Caver::FWShell::TouchBegan
 * Signature: undefined __thiscall TouchBegan(FWShell * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWShell::TouchBegan(Caver::FWTouch const&) */

undefined8 __thiscall Caver::FWShell::TouchBegan(FWShell *this,FWTouch *param_1)

{
  std::
  _Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
  ::_M_insert_unique((_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
                      *)(this + 0x48),param_1);
                    /* try { // try from 0057ddcc to 0067e0ef has its CatchHandler @ 0057dc80 */
  return 1;
}


