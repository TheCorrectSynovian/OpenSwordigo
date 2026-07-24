/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054d740
 * Function: std::_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>::_M_get_insert_hint_unique_pos
 * Signature: undefined __thiscall _M_get_insert_hint_unique_pos(_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>> * this, _Rb_tree_const_iterator param_1, Model * * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<Caver::Model const*, std::pair<Caver::Model const* const,
   boost::shared_ptr<Caver::PODLoader> >, std::_Select1st<std::pair<Caver::Model const* const,
   boost::shared_ptr<Caver::PODLoader> > >, std::less<Caver::Model const*>,
   std::allocator<std::pair<Caver::Model const* const, boost::shared_ptr<Caver::PODLoader> > >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<Caver::Model const*
   const, boost::shared_ptr<Caver::PODLoader> > >, Caver::Model const* const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
           *this,_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                 *param_2,ulong *param_3)

{
  bool bVar1;
  _Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
  *p_Var2;
  _Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
  *p_Var3;
  _Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
  *p_Var4;
  _Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
  *p_Var5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  p_Var4 = this + 8;
  if (p_Var4 == param_2) {
    if ((*(long *)(this + 0x28) != 0) &&
       (p_Var2 = *(_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                   **)(this + 0x20), *(ulong *)(p_Var2 + 0x20) < *param_3)) goto LAB_0054d86c;
    p_Var2 = p_Var4;
    if (*(_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
          **)(this + 0x10) ==
        (_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
         *)0x0) {
LAB_0054d804:
      p_Var4 = param_2;
      if (p_Var2 == *(_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                      **)(this + 0x18)) {
LAB_0054d928:
        p_Var2 = p_Var4;
        p_Var5 = (_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                  *)0x0;
        goto LAB_0054d92c;
      }
      p_Var3 = (_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                *)FUN_0064c700(p_Var2);
      uVar6 = *param_3;
    }
    else {
      uVar6 = *param_3;
      p_Var2 = *(_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                 **)(this + 0x10);
      do {
        p_Var4 = p_Var2;
                    /* try { // try from 0054d7e8 to 0064d853 has its CatchHandler @ 0054d7e8
                       catch() { ... } // from try @ 0054d7e8 with catch @ 0054d7e8
                       catch() { ... } // from try @ 0054d8e8 with catch @ 0054d7e8
                       catch() { ... } // from try @ 0054dbcc with catch @ 0054d7e8 */
        p_Var3 = p_Var4 + 0x10;
        if (*(ulong *)(p_Var4 + 0x20) <= uVar6) {
          p_Var3 = p_Var4 + 0x18;
        }
        p_Var2 = *(_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                   **)p_Var3;
      } while (*(_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                 **)p_Var3 !=
               (_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                *)0x0);
      param_2 = p_Var4;
      p_Var3 = p_Var4;
      p_Var2 = p_Var4;
      if (uVar6 < *(ulong *)(p_Var4 + 0x20)) goto LAB_0054d804;
    }
    bVar1 = uVar6 <= *(ulong *)(p_Var3 + 0x20);
    p_Var2 = p_Var4;
    p_Var5 = (_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
              *)0x0;
    if (bVar1) {
      p_Var5 = p_Var3;
    }
  }
  else {
    uVar6 = *param_3;
    if (*(ulong *)(param_2 + 0x20) <= uVar6) {
      if (uVar6 <= *(ulong *)(param_2 + 0x20)) {
        p_Var2 = (_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                  *)0x0;
        p_Var5 = param_2;
        goto LAB_0054d92c;
      }
      p_Var2 = *(_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                 **)(this + 0x20);
      if (p_Var2 != param_2) {
        p_Var3 = (_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                  *)FUN_0064c640(param_2);
                    /* try { // try from 0054d854 to 0064d85f has its CatchHandler @ 0054d938 */
        if (uVar6 < *(ulong *)(p_Var3 + 0x20)) {
                    /* try { // try from 0054d860 to 0064d867 has its CatchHandler @ 0054d91c */
          p_Var2 = param_2;
          p_Var5 = (_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                    *)0x0;
          if (*(long *)(param_2 + 0x18) != 0) {
            p_Var2 = p_Var3;
            p_Var5 = p_Var3;
          }
          goto LAB_0054d92c;
        }
        p_Var2 = *(_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                   **)(this + 0x10);
        if (*(_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
              **)(this + 0x10) !=
            (_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
             *)0x0) {
          do {
            p_Var4 = p_Var2;
                    /* try { // try from 0054d8e8 to 0064d95b has its CatchHandler @ 0054d7e8 */
            p_Var3 = p_Var4 + 0x10;
            if (*(ulong *)(p_Var4 + 0x20) <= uVar6) {
              p_Var3 = p_Var4 + 0x18;
            }
            p_Var2 = *(_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                       **)p_Var3;
          } while (*(_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                     **)p_Var3 !=
                   (_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                    *)0x0);
          p_Var2 = p_Var4;
          if (*(ulong *)(p_Var4 + 0x20) <= uVar6) goto LAB_0054d908;
        }
        p_Var2 = p_Var4;
        if (p_Var4 == *(_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                        **)(this + 0x18)) goto LAB_0054d928;
        goto LAB_0054d8c8;
      }
LAB_0054d86c:
      p_Var5 = (_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                *)0x0;
                    /* try { // try from 0054d874 to 0064d8e7 has its CatchHandler @ 0054d938 */
      goto LAB_0054d92c;
    }
    p_Var5 = *(_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
               **)(this + 0x18);
    p_Var2 = p_Var5;
    if (p_Var5 == param_2) goto LAB_0054d92c;
    p_Var2 = (_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
              *)FUN_0064c700(param_2);
    if (*(ulong *)(p_Var2 + 0x20) < uVar6) {
      p_Var5 = (_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                *)0x0;
      if (*(long *)(p_Var2 + 0x18) != 0) {
        p_Var2 = param_2;
        p_Var5 = param_2;
      }
      goto LAB_0054d92c;
    }
    p_Var2 = *(_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
               **)(this + 0x10);
    if (*(_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
          **)(this + 0x10) ==
        (_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
         *)0x0) {
                    /* catch() { ... } // from try @ 0054d860 with catch @ 0054d91c */
      p_Var2 = p_Var4;
      if (p_Var4 != p_Var5) goto LAB_0054d8c8;
      goto LAB_0054d928;
    }
    do {
      p_Var4 = p_Var2;
      p_Var3 = p_Var4 + 0x10;
      if (*(ulong *)(p_Var4 + 0x20) <= uVar6) {
        p_Var3 = p_Var4 + 0x18;
      }
      p_Var2 = *(_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                 **)p_Var3;
    } while (*(_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
               **)p_Var3 !=
             (_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
              *)0x0);
    p_Var2 = p_Var4;
    if (uVar6 < *(ulong *)(p_Var4 + 0x20)) {
      if (p_Var4 == p_Var5) goto LAB_0054d928;
LAB_0054d8c8:
      p_Var4 = (_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
                *)FUN_0064c700(p_Var2);
    }
LAB_0054d908:
    bVar1 = uVar6 <= *(ulong *)(p_Var4 + 0x20);
    p_Var5 = (_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
              *)0x0;
    if (bVar1) {
      p_Var5 = p_Var4;
    }
  }
  if (bVar1) {
    p_Var2 = (_Rb_tree<Caver::Model_const*,std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>,std::_Select1st<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>,std::less<Caver::Model_const*>,std::allocator<std::pair<Caver::Model_const*const,boost::shared_ptr<Caver::PODLoader>>>>
              *)0x0;
  }
LAB_0054d92c:
  auVar7._8_8_ = p_Var2;
  auVar7._0_8_ = p_Var5;
                    /* catch() { ... } // from try @ 0054d854 with catch @ 0054d938
                       catch() { ... } // from try @ 0054d874 with catch @ 0054d938 */
  return auVar7;
}


