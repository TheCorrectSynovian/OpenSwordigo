/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00347974
 * Function: std::_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>::_M_get_insert_hint_unique_pos
 * Signature: undefined __thiscall _M_get_insert_hint_unique_pos(_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>> * this, _Rb_tree_const_iterator param_1, long * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<long, std::pair<long const, boost::shared_ptr<Caver::ComponentCollection> >,
   std::_Select1st<std::pair<long const, boost::shared_ptr<Caver::ComponentCollection> > >,
   std::less<long>, std::allocator<std::pair<long const,
   boost::shared_ptr<Caver::ComponentCollection> > >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<long const,
   boost::shared_ptr<Caver::ComponentCollection> > >, long const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
           *this,_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                 *param_2,long *param_3)

{
  long lVar1;
  bool bVar2;
  _Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
  *p_Var3;
  _Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
  *p_Var4;
  _Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
  *p_Var5;
  long lVar6;
  _Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
  *p_Var7;
  long lVar8;
  undefined1 auVar9 [16];
  
  p_Var5 = this + 8;
  if (p_Var5 == param_2) {
    if ((*(long *)(this + 0x28) != 0) &&
       (p_Var3 = *(_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                   **)(this + 0x20), *(long *)(p_Var3 + 0x20) < *param_3)) goto LAB_00347aa0;
    p_Var3 = p_Var5;
    if (*(_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
          **)(this + 0x10) ==
        (_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
         *)0x0) {
LAB_00347a38:
      p_Var5 = param_2;
      if (p_Var3 == *(_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                      **)(this + 0x18)) {
LAB_00347b5c:
        p_Var3 = p_Var5;
        p_Var7 = (_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                  *)0x0;
        goto LAB_00347b60;
      }
      p_Var4 = (_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                *)FUN_0064c700(p_Var3);
      lVar8 = *param_3;
    }
    else {
      lVar8 = *param_3;
      p_Var3 = *(_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                 **)(this + 0x10);
      do {
        p_Var5 = p_Var3;
        p_Var4 = p_Var5 + 0x10;
        if (*(long *)(p_Var5 + 0x20) <= lVar8) {
          p_Var4 = p_Var5 + 0x18;
        }
        p_Var3 = *(_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                   **)p_Var4;
      } while (*(_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                 **)p_Var4 !=
               (_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                *)0x0);
      param_2 = p_Var5;
      p_Var4 = p_Var5;
      p_Var3 = p_Var5;
      if (lVar8 < *(long *)(p_Var5 + 0x20)) goto LAB_00347a38;
    }
    lVar6 = *(long *)(p_Var4 + 0x20);
    bVar2 = SBORROW8(lVar6,lVar8);
    lVar1 = lVar6 - lVar8;
    p_Var3 = p_Var5;
    p_Var7 = (_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
              *)0x0;
    if (lVar8 <= lVar6) {
      p_Var7 = p_Var4;
    }
  }
  else {
    lVar8 = *param_3;
    if (*(long *)(param_2 + 0x20) <= lVar8) {
      if (lVar8 <= *(long *)(param_2 + 0x20)) {
        p_Var3 = (_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                  *)0x0;
        p_Var7 = param_2;
        goto LAB_00347b60;
      }
      p_Var3 = *(_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                 **)(this + 0x20);
      if (p_Var3 != param_2) {
        p_Var4 = (_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                  *)FUN_0064c640(param_2);
        if (lVar8 < *(long *)(p_Var4 + 0x20)) {
          p_Var3 = param_2;
          p_Var7 = (_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                    *)0x0;
          if (*(long *)(param_2 + 0x18) != 0) {
            p_Var3 = p_Var4;
            p_Var7 = p_Var4;
          }
          goto LAB_00347b60;
        }
        p_Var3 = *(_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                   **)(this + 0x10);
        if (*(_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
              **)(this + 0x10) !=
            (_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
             *)0x0) {
          do {
            p_Var5 = p_Var3;
            p_Var4 = p_Var5 + 0x10;
            if (*(long *)(p_Var5 + 0x20) <= lVar8) {
              p_Var4 = p_Var5 + 0x18;
            }
            p_Var3 = *(_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                       **)p_Var4;
          } while (*(_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                     **)p_Var4 !=
                   (_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                    *)0x0);
          p_Var3 = p_Var5;
          if (*(long *)(p_Var5 + 0x20) <= lVar8) goto LAB_00347b3c;
        }
        p_Var3 = p_Var5;
        if (p_Var5 == *(_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                        **)(this + 0x18)) goto LAB_00347b5c;
        goto LAB_00347afc;
      }
LAB_00347aa0:
      p_Var7 = (_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                *)0x0;
      goto LAB_00347b60;
    }
    p_Var7 = *(_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
               **)(this + 0x18);
    p_Var3 = p_Var7;
    if (p_Var7 == param_2) goto LAB_00347b60;
    p_Var3 = (_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
              *)FUN_0064c700(param_2);
    if (*(long *)(p_Var3 + 0x20) < lVar8) {
      p_Var7 = (_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                *)0x0;
      if (*(long *)(p_Var3 + 0x18) != 0) {
        p_Var3 = param_2;
        p_Var7 = param_2;
      }
      goto LAB_00347b60;
    }
    p_Var3 = *(_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
               **)(this + 0x10);
    if (*(_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
          **)(this + 0x10) ==
        (_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
         *)0x0) {
      p_Var3 = p_Var5;
      if (p_Var5 != p_Var7) goto LAB_00347afc;
      goto LAB_00347b5c;
    }
    do {
      p_Var5 = p_Var3;
      p_Var4 = p_Var5 + 0x10;
      if (*(long *)(p_Var5 + 0x20) <= lVar8) {
        p_Var4 = p_Var5 + 0x18;
      }
      p_Var3 = *(_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                 **)p_Var4;
    } while (*(_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
               **)p_Var4 !=
             (_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
              *)0x0);
    p_Var3 = p_Var5;
    if (lVar8 < *(long *)(p_Var5 + 0x20)) {
      if (p_Var5 == p_Var7) goto LAB_00347b5c;
LAB_00347afc:
      p_Var5 = (_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
                *)FUN_0064c700(p_Var3);
    }
LAB_00347b3c:
    lVar6 = *(long *)(p_Var5 + 0x20);
    bVar2 = SBORROW8(lVar6,lVar8);
    lVar1 = lVar6 - lVar8;
    p_Var7 = (_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
              *)0x0;
    if (lVar8 <= lVar6) {
      p_Var7 = p_Var5;
    }
  }
  if (lVar1 < 0 == bVar2) {
    p_Var3 = (_Rb_tree<long,std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>,std::_Select1st<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>,std::less<long>,std::allocator<std::pair<long_const,boost::shared_ptr<Caver::ComponentCollection>>>>
              *)0x0;
  }
LAB_00347b60:
  auVar9._8_8_ = p_Var3;
  auVar9._0_8_ = p_Var7;
  return auVar9;
}


