/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057e164
 * Function: std::_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>::erase
 * Signature: undefined __thiscall erase(_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>> * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<Caver::FWTouch, Caver::FWTouch, std::_Identity<Caver::FWTouch>,
   std::less<Caver::FWTouch>, std::allocator<Caver::FWTouch> >::erase(Caver::FWTouch const&) */

long __thiscall
std::
_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
::erase(_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
        *this,FWTouch *param_1)

{
  _Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
  *p_Var1;
  _Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
  *p_Var2;
  void *pvVar3;
  _Rb_tree_node *p_Var4;
  ulong uVar5;
  long lVar6;
  _Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
  *p_Var7;
  _Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
  *p_Var8;
  _Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
  *p_Var9;
  _Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
  *p_Var10;
  long lVar11;
  
  p_Var4 = *(_Rb_tree_node **)(this + 0x10);
  p_Var1 = this + 8;
  p_Var9 = p_Var1;
  p_Var10 = p_Var1;
  if (p_Var4 != (_Rb_tree_node *)0x0) {
    uVar5 = *(ulong *)param_1;
    p_Var2 = (_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
              *)p_Var4;
    do {
      while (p_Var8 = p_Var2, p_Var10 = p_Var9, uVar5 <= *(ulong *)(p_Var8 + 0x20)) {
        p_Var2 = *(_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
                   **)(p_Var8 + 0x10);
        if (*(ulong *)(p_Var8 + 0x20) <= uVar5) {
          p_Var7 = *(_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
                     **)(p_Var8 + 0x18);
          while (p_Var2 != (_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
                            *)0x0) {
            p_Var9 = p_Var2 + 0x18;
            if (uVar5 <= *(ulong *)(p_Var2 + 0x20)) {
              p_Var8 = p_Var2;
              p_Var9 = p_Var2 + 0x10;
            }
            p_Var2 = *(_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
                       **)p_Var9;
          }
          while (p_Var9 = p_Var8,
                p_Var7 != (_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
                           *)0x0) {
            p_Var9 = p_Var7;
            p_Var2 = p_Var7 + 0x10;
            if (*(ulong *)(p_Var7 + 0x20) <= uVar5) {
              p_Var9 = p_Var10;
              p_Var2 = p_Var7 + 0x18;
            }
            p_Var10 = p_Var9;
            p_Var7 = *(_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
                       **)p_Var2;
          }
          goto LAB_0057e22c;
        }
        p_Var9 = p_Var8;
        p_Var10 = p_Var8;
        if (p_Var2 == (_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
                       *)0x0) goto LAB_0057e22c;
      }
      p_Var2 = *(_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
                 **)(p_Var8 + 0x18);
    } while (*(_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
               **)(p_Var8 + 0x18) !=
             (_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
              *)0x0);
  }
LAB_0057e22c:
  lVar11 = *(long *)(this + 0x28);
  lVar6 = lVar11;
                    /* try { // try from 0057e234 to 0067e27b has its CatchHandler @ 0057e234
                       catch() { ... } // from try @ 0057e234 with catch @ 0057e234
                       catch() { ... } // from try @ 0057e288 with catch @ 0057e234
                       catch() { ... } // from try @ 0057e2e4 with catch @ 0057e234
                       catch() { ... } // from try @ 0057e34c with catch @ 0057e234 */
  if ((p_Var1 == p_Var10) &&
     (*(_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
        **)(this + 0x18) == p_Var9)) {
    _M_erase(this,p_Var4);
    lVar6 = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
      **)(this + 0x18) = p_Var1;
    *(_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
      **)(this + 0x20) = p_Var1;
    *(undefined8 *)(this + 0x28) = 0;
  }
  else {
    while (p_Var9 != p_Var10) {
      p_Var2 = (_Rb_tree<Caver::FWTouch,Caver::FWTouch,std::_Identity<Caver::FWTouch>,std::less<Caver::FWTouch>,std::allocator<Caver::FWTouch>>
                *)FUN_0064c6a0(p_Var9);
      pvVar3 = (void *)FUN_0064ca60(p_Var9,p_Var1);
                    /* try { // try from 0057e27c to 0067e287 has its CatchHandler @ 0057e490 */
      operator_delete(pvVar3);
      lVar6 = *(long *)(this + 0x28);
                    /* try { // try from 0057e288 to 0067e2d7 has its CatchHandler @ 0057e234 */
      *(long *)(this + 0x28) = lVar6 + -1;
      lVar6 = lVar6 + -1;
      p_Var9 = p_Var2;
    }
  }
  return lVar11 - lVar6;
}


