/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058cba4
 * Function: std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>::_M_get_insert_hint_unique_pos
 * Signature: undefined __thiscall _M_get_insert_hint_unique_pos(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>> * this, _Rb_tree_const_iterator param_1, uint * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<unsigned int, std::pair<unsigned int const,
   boost::shared_ptr<Caver::RenderingProgram> >, std::_Select1st<std::pair<unsigned int const,
   boost::shared_ptr<Caver::RenderingProgram> > >, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, boost::shared_ptr<Caver::RenderingProgram> > >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<unsigned int const,
   boost::shared_ptr<Caver::RenderingProgram> > >, unsigned int const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
           *this,_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                 *param_2,uint *param_3)

{
  bool bVar1;
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
  *p_Var2;
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
  *p_Var3;
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
  *p_Var4;
  uint uVar5;
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
  *p_Var6;
  undefined1 auVar7 [16];
  
                    /* catch() { ... } // from try @ 0058c050 with catch @ 0058cbb4 */
                    /* catch() { ... } // from try @ 0058c038 with catch @ 0058cbb8 */
  p_Var4 = this + 8;
  if (p_Var4 == param_2) {
    if ((*(long *)(this + 0x28) != 0) &&
       (p_Var2 = *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                   **)(this + 0x20), *(uint *)(p_Var2 + 0x20) < *param_3)) goto LAB_0058ccd0;
    p_Var2 = p_Var4;
    if (*(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
          **)(this + 0x10) ==
        (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
         *)0x0) {
LAB_0058cc68:
      p_Var4 = param_2;
                    /* catch() { ... } // from try @ 0058c2a0 with catch @ 0058cc70
                       catch() { ... } // from try @ 0058c330 with catch @ 0058cc70 */
      if (p_Var2 == *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                      **)(this + 0x18)) {
LAB_0058cd8c:
        p_Var2 = p_Var4;
        p_Var6 = (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                  *)0x0;
        goto LAB_0058cd90;
      }
      p_Var3 = (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                *)FUN_0064c700(p_Var2);
      uVar5 = *param_3;
    }
    else {
      uVar5 = *param_3;
      p_Var2 = *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                 **)(this + 0x10);
      do {
        p_Var4 = p_Var2;
        p_Var3 = p_Var4 + 0x10;
        if (*(uint *)(p_Var4 + 0x20) <= uVar5) {
          p_Var3 = p_Var4 + 0x18;
        }
        p_Var2 = *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                   **)p_Var3;
      } while (*(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                 **)p_Var3 !=
               (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                *)0x0);
      param_2 = p_Var4;
      p_Var3 = p_Var4;
      p_Var2 = p_Var4;
      if (uVar5 < *(uint *)(p_Var4 + 0x20)) goto LAB_0058cc68;
    }
    bVar1 = uVar5 <= *(uint *)(p_Var3 + 0x20);
    p_Var2 = p_Var4;
    p_Var6 = (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
              *)0x0;
    if (bVar1) {
      p_Var6 = p_Var3;
    }
  }
  else {
                    /* catch() { ... } // from try @ 0058c434 with catch @ 0058cbd0
                       catch() { ... } // from try @ 0058c474 with catch @ 0058cbd0 */
    uVar5 = *param_3;
    if (*(uint *)(param_2 + 0x20) <= uVar5) {
      if (uVar5 <= *(uint *)(param_2 + 0x20)) {
                    /* catch() { ... } // from try @ 0058c1c8 with catch @ 0058cce0
                       catch() { ... } // from try @ 0058c4b8 with catch @ 0058cce0 */
        p_Var2 = (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                  *)0x0;
        p_Var6 = param_2;
        goto LAB_0058cd90;
      }
      p_Var2 = *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                 **)(this + 0x20);
      if (p_Var2 != param_2) {
        p_Var3 = (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                  *)FUN_0064c640(param_2);
        if (uVar5 < *(uint *)(p_Var3 + 0x20)) {
                    /* catch() { ... } // from try @ 0058c1a0 with catch @ 0058ccc0
                       catch() { ... } // from try @ 0058c1b4 with catch @ 0058ccc0
                       catch() { ... } // from try @ 0058c690 with catch @ 0058ccc0 */
          p_Var2 = param_2;
          p_Var6 = (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                    *)0x0;
          if (*(long *)(param_2 + 0x18) != 0) {
            p_Var2 = p_Var3;
            p_Var6 = p_Var3;
          }
          goto LAB_0058cd90;
        }
        p_Var2 = *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                   **)(this + 0x10);
        if (*(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
              **)(this + 0x10) !=
            (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
             *)0x0) {
          do {
            p_Var4 = p_Var2;
            p_Var3 = p_Var4 + 0x10;
            if (*(uint *)(p_Var4 + 0x20) <= uVar5) {
              p_Var3 = p_Var4 + 0x18;
            }
            p_Var2 = *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                       **)p_Var3;
          } while (*(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                     **)p_Var3 !=
                   (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                    *)0x0);
          p_Var2 = p_Var4;
          if (*(uint *)(p_Var4 + 0x20) <= uVar5) goto LAB_0058cd6c;
        }
        p_Var2 = p_Var4;
        if (p_Var4 == *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                        **)(this + 0x18)) goto LAB_0058cd8c;
        goto LAB_0058cd2c;
      }
LAB_0058ccd0:
                    /* catch() { ... } // from try @ 0058c02c with catch @ 0058ccd0
                       catch() { ... } // from try @ 0058c040 with catch @ 0058ccd0
                       catch() { ... } // from try @ 0058c6d8 with catch @ 0058ccd0 */
      p_Var6 = (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                *)0x0;
      goto LAB_0058cd90;
    }
    p_Var6 = *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
               **)(this + 0x18);
    p_Var2 = p_Var6;
    if (p_Var6 == param_2) goto LAB_0058cd90;
    p_Var2 = (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
              *)FUN_0064c700(param_2);
    if (*(uint *)(p_Var2 + 0x20) < uVar5) {
                    /* catch() { ... } // from try @ 0058c3c0 with catch @ 0058cc08
                       catch() { ... } // from try @ 0058c400 with catch @ 0058cc08 */
      p_Var6 = (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                *)0x0;
      if (*(long *)(p_Var2 + 0x18) != 0) {
        p_Var2 = param_2;
        p_Var6 = param_2;
      }
      goto LAB_0058cd90;
    }
    p_Var2 = *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
               **)(this + 0x10);
    if (*(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
          **)(this + 0x10) ==
        (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
         *)0x0) {
      p_Var2 = p_Var4;
      if (p_Var4 != p_Var6) goto LAB_0058cd2c;
      goto LAB_0058cd8c;
    }
    do {
      p_Var4 = p_Var2;
      p_Var3 = p_Var4 + 0x10;
      if (*(uint *)(p_Var4 + 0x20) <= uVar5) {
        p_Var3 = p_Var4 + 0x18;
      }
      p_Var2 = *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                 **)p_Var3;
    } while (*(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
               **)p_Var3 !=
             (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
              *)0x0);
    p_Var2 = p_Var4;
    if (uVar5 < *(uint *)(p_Var4 + 0x20)) {
      if (p_Var4 == p_Var6) goto LAB_0058cd8c;
LAB_0058cd2c:
                    /* catch() { ... } // from try @ 0058c0cc with catch @ 0058cd30
                       catch() { ... } // from try @ 0058c0e0 with catch @ 0058cd30 */
      p_Var4 = (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                *)FUN_0064c700(p_Var2);
    }
LAB_0058cd6c:
    bVar1 = uVar5 <= *(uint *)(p_Var4 + 0x20);
    p_Var6 = (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
              *)0x0;
    if (bVar1) {
      p_Var6 = p_Var4;
    }
  }
  if (bVar1) {
    p_Var2 = (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
              *)0x0;
  }
LAB_0058cd90:
  auVar7._8_8_ = p_Var2;
  auVar7._0_8_ = p_Var6;
  return auVar7;
}


