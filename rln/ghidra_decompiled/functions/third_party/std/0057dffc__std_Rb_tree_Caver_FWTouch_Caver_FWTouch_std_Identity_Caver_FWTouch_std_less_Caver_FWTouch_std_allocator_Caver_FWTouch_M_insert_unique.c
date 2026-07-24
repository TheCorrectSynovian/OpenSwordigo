/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057dffc
 * Function: std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::_M_insert_unique
 * Signature: undefined __thiscall _M_insert_unique(_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>> * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<Caver::FWTouch, Caver::FWTouch, std::_Identity<Caver::FWTouch>,
   std::less<Caver::FWTouch>, std::allocator<Caver::FWTouch> >::_M_insert_unique(Caver::FWTouch
   const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
::_M_insert_unique(_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
                   *this,FWTouch *param_1)

{
  _Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
  *p_Var1;
  _Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
  *p_Var2;
  bool bVar3;
  _Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
  *p_Var4;
  undefined8 uVar5;
  ulong uVar6;
  _Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
  *p_Var7;
  undefined1 auVar8 [16];
  
  p_Var1 = this + 8;
  p_Var7 = p_Var1;
  if (*(_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
        **)(this + 0x10) ==
      (_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
       *)0x0) {
LAB_0057e05c:
    if (p_Var7 != *(_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
                    **)(this + 0x18)) {
      p_Var4 = (_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
                *)FUN_0064c700(p_Var7);
      uVar6 = *(ulong *)param_1;
      goto LAB_0057e078;
    }
  }
  else {
    uVar6 = *(ulong *)param_1;
    p_Var4 = *(_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
               **)(this + 0x10);
    do {
      p_Var7 = p_Var4;
      p_Var2 = p_Var7 + 0x10;
      if (*(ulong *)(p_Var7 + 0x20) <= uVar6) {
        p_Var2 = p_Var7 + 0x18;
      }
      p_Var4 = *(_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
                 **)p_Var2;
    } while (*(_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
               **)p_Var2 !=
             (_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
              *)0x0);
    p_Var4 = p_Var7;
    if (uVar6 < *(ulong *)(p_Var7 + 0x20)) goto LAB_0057e05c;
LAB_0057e078:
                    /* catch() { ... } // from try @ 0057dcc4 with catch @ 0057e080 */
    if (uVar6 <= *(ulong *)(p_Var4 + 0x20)) {
      uVar5 = 0;
      goto LAB_0057e0f0;
    }
  }
  if (p_Var7 == (_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
                 *)0x0) {
    p_Var4 = (_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
              *)0x0;
    uVar5 = 0;
  }
  else {
    if (p_Var1 == p_Var7) {
      bVar3 = true;
    }
    else {
      bVar3 = *(ulong *)param_1 < *(ulong *)(p_Var7 + 0x20);
    }
    p_Var4 = (_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
              *)_M_create_node(this,param_1);
    FUN_0064c8a0(bVar3,p_Var4,p_Var7,p_Var1);
    uVar5 = 1;
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
LAB_0057e0f0:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = p_Var4;
  return auVar8;
}


