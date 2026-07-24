/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a5758
 * Function: std::_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>::erase
 * Signature: undefined __thiscall erase(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>> * this, ulong * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<unsigned long, std::pair<unsigned long const, Caver::FWTouch>,
   std::_Select1st<std::pair<unsigned long const, Caver::FWTouch> >, std::less<unsigned long>,
   std::allocator<std::pair<unsigned long const, Caver::FWTouch> > >::erase(unsigned long const&) */

long __thiscall
std::
_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
::erase(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
        *this,ulong *param_1)

{
  _Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
  *p_Var1;
  _Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
  *p_Var2;
  void *pvVar3;
  _Rb_tree_node *p_Var4;
  ulong uVar5;
  long lVar6;
  _Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
  *p_Var7;
  _Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
  *p_Var8;
  _Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
  *p_Var9;
  _Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
  *p_Var10;
  long lVar11;
  
                    /* catch() { ... } // from try @ 005a5144 with catch @ 005a5758 */
                    /* catch() { ... } // from try @ 005a50f0 with catch @ 005a575c */
  p_Var4 = *(_Rb_tree_node **)(this + 0x10);
  p_Var1 = this + 8;
  p_Var9 = p_Var1;
  p_Var10 = p_Var1;
  if (p_Var4 != (_Rb_tree_node *)0x0) {
    uVar5 = *param_1;
    p_Var2 = (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
              *)p_Var4;
    do {
      while (p_Var8 = p_Var2, p_Var10 = p_Var9, uVar5 <= *(ulong *)(p_Var8 + 0x20)) {
        p_Var2 = *(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                   **)(p_Var8 + 0x10);
                    /* catch() { ... } // from try @ 005a4fdc with catch @ 005a57ac */
                    /* catch() { ... } // from try @ 005a4fd0 with catch @ 005a57b0 */
        if (*(ulong *)(p_Var8 + 0x20) <= uVar5) {
          p_Var7 = *(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                     **)(p_Var8 + 0x18);
          while (p_Var2 != (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                            *)0x0) {
                    /* catch() { ... } // from try @ 005a4f50 with catch @ 005a57e4 */
                    /* catch() { ... } // from try @ 005a4f48 with catch @ 005a57e8 */
            p_Var9 = p_Var2 + 0x18;
            if (uVar5 <= *(ulong *)(p_Var2 + 0x20)) {
              p_Var8 = p_Var2;
              p_Var9 = p_Var2 + 0x10;
            }
            p_Var2 = *(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                       **)p_Var9;
                    /* catch() { ... } // from try @ 005a5190 with catch @ 005a57f8
                       catch() { ... } // from try @ 005a527c with catch @ 005a57f8 */
          }
          while (p_Var9 = p_Var8,
                p_Var7 != (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                           *)0x0) {
                    /* catch() { ... } // from try @ 005a5160 with catch @ 005a5800
                       catch() { ... } // from try @ 005a52b0 with catch @ 005a5800 */
                    /* catch() { ... } // from try @ 005a4f64 with catch @ 005a5808
                       catch() { ... } // from try @ 005a4fa8 with catch @ 005a5808 */
            p_Var9 = p_Var7;
            p_Var2 = p_Var7 + 0x10;
            if (*(ulong *)(p_Var7 + 0x20) <= uVar5) {
              p_Var9 = p_Var10;
              p_Var2 = p_Var7 + 0x18;
            }
            p_Var10 = p_Var9;
            p_Var7 = *(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                       **)p_Var2;
          }
          goto LAB_005a5820;
        }
                    /* catch() { ... } // from try @ 005a4f78 with catch @ 005a57b4 */
        p_Var9 = p_Var8;
        p_Var10 = p_Var8;
        if (p_Var2 == (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                       *)0x0) goto LAB_005a5820;
      }
      p_Var2 = *(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                 **)(p_Var8 + 0x18);
    } while (*(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
               **)(p_Var8 + 0x18) !=
             (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
              *)0x0);
  }
LAB_005a5820:
  lVar11 = *(long *)(this + 0x28);
  lVar6 = lVar11;
  if ((p_Var1 == p_Var10) &&
     (*(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
        **)(this + 0x18) == p_Var9)) {
    _M_erase(this,p_Var4);
    lVar6 = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
      **)(this + 0x18) = p_Var1;
                    /* catch() { ... } // from try @ 005a51a4 with catch @ 005a5848
                       catch() { ... } // from try @ 005a5234 with catch @ 005a5848 */
    *(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
      **)(this + 0x20) = p_Var1;
    *(undefined8 *)(this + 0x28) = 0;
  }
  else {
    while (p_Var9 != p_Var10) {
      p_Var2 = (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                *)FUN_0064c6a0(p_Var9);
      pvVar3 = (void *)FUN_0064ca60(p_Var9,p_Var1);
      operator_delete(pvVar3);
      lVar6 = *(long *)(this + 0x28);
      *(long *)(this + 0x28) = lVar6 + -1;
      lVar6 = lVar6 + -1;
      p_Var9 = p_Var2;
    }
  }
  return lVar11 - lVar6;
}


