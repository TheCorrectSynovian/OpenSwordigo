/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057ddd0
 * Function: Caver::FWShell::TouchMoved
 * Signature: undefined __thiscall TouchMoved(FWShell * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWShell::TouchMoved(Caver::FWTouch const&) */

undefined8 __thiscall Caver::FWShell::TouchMoved(FWShell *this,FWTouch *param_1)

{
  FWShell *pFVar1;
  FWShell *pFVar2;
  FWShell *pFVar3;
  FWShell *pFVar4;
  
  pFVar4 = *(FWShell **)(this + 0x58);
  pFVar1 = this + 0x50;
  if (pFVar4 != (FWShell *)0x0) {
    pFVar3 = pFVar1;
    do {
      pFVar2 = pFVar4 + 0x18;
      if (*(ulong *)param_1 <= *(ulong *)(pFVar4 + 0x20)) {
        pFVar3 = pFVar4;
        pFVar2 = pFVar4 + 0x10;
      }
      pFVar4 = *(FWShell **)pFVar2;
    } while (pFVar4 != (FWShell *)0x0);
    if (pFVar3 != pFVar1) {
      pFVar4 = pFVar1;
      if (*(ulong *)(pFVar3 + 0x20) <= *(ulong *)param_1) {
        pFVar4 = pFVar3;
      }
      if (pFVar4 != pFVar1) {
        std::
        _Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
        ::erase((_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
                 *)(this + 0x48),param_1);
        std::
        _Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
        ::_M_insert_unique((_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
                            *)(this + 0x48),param_1);
        return 1;
      }
    }
  }
  return 0;
}


