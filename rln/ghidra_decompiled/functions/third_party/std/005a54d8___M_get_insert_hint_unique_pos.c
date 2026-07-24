/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a54d8
 * Function: std::_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>::_M_get_insert_hint_unique_pos
 * Signature: undefined __thiscall _M_get_insert_hint_unique_pos(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>> * this, _Rb_tree_const_iterator param_1, ulong * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<unsigned long, std::pair<unsigned long const, Caver::FWTouch>,
   std::_Select1st<std::pair<unsigned long const, Caver::FWTouch> >, std::less<unsigned long>,
   std::allocator<std::pair<unsigned long const, Caver::FWTouch> >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<unsigned long const,
   Caver::FWTouch> >, unsigned long const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
           *this,_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                 *param_2,ulong *param_3)

{
  bool bVar1;
  _Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
  *p_Var2;
  _Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
  *p_Var3;
  _Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
  *p_Var4;
  _Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
  *p_Var5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  p_Var4 = this + 8;
  if (p_Var4 == param_2) {
    if ((*(long *)(this + 0x28) != 0) &&
       (p_Var2 = *(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                   **)(this + 0x20), *(ulong *)(p_Var2 + 0x20) < *param_3)) goto LAB_005a5604;
    p_Var2 = p_Var4;
    if (*(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
          **)(this + 0x10) ==
        (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
         *)0x0) {
LAB_005a559c:
      p_Var4 = param_2;
      if (p_Var2 == *(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                      **)(this + 0x18)) {
LAB_005a56c0:
        p_Var2 = p_Var4;
        p_Var5 = (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                  *)0x0;
        goto LAB_005a56c4;
      }
      p_Var3 = (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                *)FUN_0064c700(p_Var2);
      uVar6 = *param_3;
    }
    else {
      uVar6 = *param_3;
      p_Var2 = *(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                 **)(this + 0x10);
      do {
        p_Var4 = p_Var2;
        p_Var3 = p_Var4 + 0x10;
        if (*(ulong *)(p_Var4 + 0x20) <= uVar6) {
          p_Var3 = p_Var4 + 0x18;
        }
        p_Var2 = *(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                   **)p_Var3;
      } while (*(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                 **)p_Var3 !=
               (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                *)0x0);
      param_2 = p_Var4;
      p_Var3 = p_Var4;
      p_Var2 = p_Var4;
      if (uVar6 < *(ulong *)(p_Var4 + 0x20)) goto LAB_005a559c;
    }
    bVar1 = uVar6 <= *(ulong *)(p_Var3 + 0x20);
    p_Var2 = p_Var4;
    p_Var5 = (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
              *)0x0;
    if (bVar1) {
      p_Var5 = p_Var3;
    }
  }
  else {
    uVar6 = *param_3;
    if (*(ulong *)(param_2 + 0x20) <= uVar6) {
      if (uVar6 <= *(ulong *)(param_2 + 0x20)) {
        p_Var2 = (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                  *)0x0;
        p_Var5 = param_2;
        goto LAB_005a56c4;
      }
      p_Var2 = *(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                 **)(this + 0x20);
                    /* catch() { ... } // from try @ 005a5330 with catch @ 005a55d8 */
      if (p_Var2 != param_2) {
                    /* catch() { ... } // from try @ 005a52f8 with catch @ 005a55dc */
                    /* catch() { ... } // from try @ 005a5458 with catch @ 005a55e0 */
        p_Var3 = (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                  *)FUN_0064c640(param_2);
                    /* catch() { ... } // from try @ 005a51ec with catch @ 005a55e4 */
        if (uVar6 < *(ulong *)(p_Var3 + 0x20)) {
          p_Var2 = param_2;
          p_Var5 = (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                    *)0x0;
          if (*(long *)(param_2 + 0x18) != 0) {
            p_Var2 = p_Var3;
            p_Var5 = p_Var3;
          }
          goto LAB_005a56c4;
        }
        p_Var2 = *(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                   **)(this + 0x10);
        if (*(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
              **)(this + 0x10) !=
            (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
             *)0x0) {
          do {
            p_Var4 = p_Var2;
            p_Var3 = p_Var4 + 0x10;
                    /* catch() { ... } // from try @ 005a548c with catch @ 005a5688 */
            if (*(ulong *)(p_Var4 + 0x20) <= uVar6) {
              p_Var3 = p_Var4 + 0x18;
            }
                    /* catch() { ... } // from try @ 005a542c with catch @ 005a568c */
            p_Var2 = *(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                       **)p_Var3;
          } while (*(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                     **)p_Var3 !=
                   (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                    *)0x0);
          p_Var2 = p_Var4;
          if (*(ulong *)(p_Var4 + 0x20) <= uVar6) goto LAB_005a56a0;
        }
        p_Var2 = p_Var4;
        if (p_Var4 == *(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                        **)(this + 0x18)) goto LAB_005a56c0;
        goto LAB_005a5660;
      }
LAB_005a5604:
      p_Var5 = (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                *)0x0;
                    /* try { // try from 005a5608 to 006a5a2f has its CatchHandler @ 005a5a50 */
      goto LAB_005a56c4;
    }
    p_Var5 = *(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
               **)(this + 0x18);
    p_Var2 = p_Var5;
    if (p_Var5 == param_2) goto LAB_005a56c4;
    p_Var2 = (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
              *)FUN_0064c700(param_2);
    if (*(ulong *)(p_Var2 + 0x20) < uVar6) {
      p_Var5 = (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                *)0x0;
      if (*(long *)(p_Var2 + 0x18) != 0) {
        p_Var2 = param_2;
        p_Var5 = param_2;
      }
      goto LAB_005a56c4;
    }
    p_Var2 = *(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
               **)(this + 0x10);
    if (*(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
          **)(this + 0x10) ==
        (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
         *)0x0) {
      p_Var2 = p_Var4;
      if (p_Var4 != p_Var5) goto LAB_005a5660;
      goto LAB_005a56c0;
    }
    do {
      p_Var4 = p_Var2;
                    /* catch() { ... } // from try @ 005a511c with catch @ 005a5634 */
                    /* catch() { ... } // from try @ 005a5048 with catch @ 005a5638 */
      p_Var3 = p_Var4 + 0x10;
      if (*(ulong *)(p_Var4 + 0x20) <= uVar6) {
        p_Var3 = p_Var4 + 0x18;
      }
      p_Var2 = *(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                 **)p_Var3;
    } while (*(_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
               **)p_Var3 !=
             (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
              *)0x0);
    p_Var2 = p_Var4;
    if (uVar6 < *(ulong *)(p_Var4 + 0x20)) {
      if (p_Var4 == p_Var5) goto LAB_005a56c0;
LAB_005a5660:
      p_Var4 = (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
                *)FUN_0064c700(p_Var2);
    }
LAB_005a56a0:
    bVar1 = uVar6 <= *(ulong *)(p_Var4 + 0x20);
    p_Var5 = (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
              *)0x0;
    if (bVar1) {
      p_Var5 = p_Var4;
    }
  }
  if (bVar1) {
    p_Var2 = (_Rb_tree<unsigned_long,std::pair<unsigned_long_const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned_long_const,Caver::FWTouch>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,Caver::FWTouch>>>
              *)0x0;
  }
LAB_005a56c4:
  auVar7._8_8_ = p_Var2;
  auVar7._0_8_ = p_Var5;
                    /* catch() { ... } // from try @ 005a5344 with catch @ 005a56dc */
  return auVar7;
}


