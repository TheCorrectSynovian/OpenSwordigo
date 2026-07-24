/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005505d0
 * Function: std::_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>::_M_get_insert_hint_unique_pos
 * Signature: undefined __thiscall _M_get_insert_hint_unique_pos(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>> * this, _Rb_tree_const_iterator param_1, int * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<int, std::pair<int const, int>, std::_Select1st<std::pair<int const, int> >,
   std::less<int>, std::allocator<std::pair<int const, int> >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<int const, int> >, int
   const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
           *this,_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
  *p_Var4;
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
  *p_Var5;
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
  *p_Var6;
  int iVar7;
  _Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
  *p_Var8;
  undefined1 auVar9 [16];
  
  p_Var6 = this + 8;
  if (p_Var6 == param_2) {
    if ((*(long *)(this + 0x28) != 0) &&
       (p_Var4 = *(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                   **)(this + 0x20), *(int *)(p_Var4 + 0x20) < *param_3)) goto LAB_005506fc;
    p_Var4 = p_Var6;
    if (*(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
          **)(this + 0x10) ==
        (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
         *)0x0) {
LAB_00550694:
      p_Var6 = param_2;
      if (p_Var4 == *(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                      **)(this + 0x18)) {
LAB_005507b8:
        p_Var4 = p_Var6;
        p_Var8 = (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                  *)0x0;
        goto LAB_005507bc;
      }
      p_Var5 = (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                *)FUN_0064c700(p_Var4);
                    /* catch() { ... } // from try @ 005506c8 with catch @ 005506a8
                       catch() { ... } // from try @ 005507b4 with catch @ 005506a8 */
      iVar7 = *param_3;
    }
    else {
      iVar7 = *param_3;
      p_Var4 = *(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                 **)(this + 0x10);
      do {
        p_Var6 = p_Var4;
        p_Var5 = p_Var6 + 0x10;
        if (*(int *)(p_Var6 + 0x20) <= iVar7) {
          p_Var5 = p_Var6 + 0x18;
        }
        p_Var4 = *(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                   **)p_Var5;
      } while (*(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                 **)p_Var5 !=
               (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                *)0x0);
      param_2 = p_Var6;
      p_Var5 = p_Var6;
      p_Var4 = p_Var6;
      if (iVar7 < *(int *)(p_Var6 + 0x20)) goto LAB_00550694;
    }
    iVar2 = *(int *)(p_Var5 + 0x20);
    bVar3 = SBORROW4(iVar2,iVar7);
    iVar1 = iVar2 - iVar7;
    p_Var4 = p_Var6;
    p_Var8 = (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
              *)0x0;
    if (iVar7 <= iVar2) {
      p_Var8 = p_Var5;
    }
  }
  else {
    iVar7 = *param_3;
    if (*(int *)(param_2 + 0x20) <= iVar7) {
                    /* try { // try from 005506c0 to 006506c7 has its CatchHandler @ 005506f8 */
      if (iVar7 <= *(int *)(param_2 + 0x20)) {
        p_Var4 = (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                  *)0x0;
        p_Var8 = param_2;
        goto LAB_005507bc;
      }
                    /* try { // try from 005506c8 to 00650727 has its CatchHandler @ 005506a8 */
      p_Var4 = *(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                 **)(this + 0x20);
      if (p_Var4 != param_2) {
        p_Var5 = (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                  *)FUN_0064c640(param_2);
        if (iVar7 < *(int *)(p_Var5 + 0x20)) {
          p_Var4 = param_2;
          p_Var8 = (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                    *)0x0;
          if (*(long *)(param_2 + 0x18) != 0) {
            p_Var4 = p_Var5;
            p_Var8 = p_Var5;
          }
          goto LAB_005507bc;
        }
                    /* try { // try from 00550764 to 00650767 has its CatchHandler @ 005507ac */
                    /* catch() { ... } // from try @ 00550728 with catch @ 00550768 */
        p_Var4 = *(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                   **)(this + 0x10);
        if (*(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
              **)(this + 0x10) !=
            (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
             *)0x0) {
          do {
            p_Var6 = p_Var4;
            p_Var5 = p_Var6 + 0x10;
            if (*(int *)(p_Var6 + 0x20) <= iVar7) {
              p_Var5 = p_Var6 + 0x18;
            }
            p_Var4 = *(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                       **)p_Var5;
          } while (*(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                     **)p_Var5 !=
                   (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                    *)0x0);
                    /* try { // try from 0055078c to 00650793 has its CatchHandler @ 00550798 */
          p_Var4 = p_Var6;
          if (*(int *)(p_Var6 + 0x20) <= iVar7) goto LAB_00550798;
        }
        p_Var4 = p_Var6;
        if (p_Var6 == *(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                        **)(this + 0x18)) goto LAB_005507b8;
        goto LAB_00550758;
      }
LAB_005506fc:
      p_Var8 = (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                *)0x0;
      goto LAB_005507bc;
    }
    p_Var8 = *(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
               **)(this + 0x18);
    p_Var4 = p_Var8;
    if (p_Var8 == param_2) goto LAB_005507bc;
    p_Var4 = (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
              *)FUN_0064c700(param_2);
    if (*(int *)(p_Var4 + 0x20) < iVar7) {
      p_Var8 = (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                *)0x0;
      if (*(long *)(p_Var4 + 0x18) != 0) {
        p_Var4 = param_2;
        p_Var8 = param_2;
      }
      goto LAB_005507bc;
    }
    p_Var4 = *(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
               **)(this + 0x10);
    if (*(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
          **)(this + 0x10) ==
        (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
         *)0x0) {
                    /* catch() { ... } // from try @ 00550764 with catch @ 005507ac */
                    /* try { // try from 005507b0 to 006507b3 has its CatchHandler @ 005507bc */
      p_Var4 = p_Var6;
                    /* try { // try from 005507b4 to 006507bf has its CatchHandler @ 005506a8 */
      if (p_Var6 != p_Var8) goto LAB_00550758;
      goto LAB_005507b8;
    }
    do {
      p_Var6 = p_Var4;
                    /* try { // try from 00550728 to 00650733 has its CatchHandler @ 00550768 */
      p_Var5 = p_Var6 + 0x10;
      if (*(int *)(p_Var6 + 0x20) <= iVar7) {
        p_Var5 = p_Var6 + 0x18;
      }
      p_Var4 = *(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                 **)p_Var5;
    } while (*(_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
               **)p_Var5 !=
             (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
              *)0x0);
    p_Var4 = p_Var6;
    if (iVar7 < *(int *)(p_Var6 + 0x20)) {
      if (p_Var6 == p_Var8) goto LAB_005507b8;
LAB_00550758:
                    /* try { // try from 00550758 to 0065075b has its CatchHandler @ 0055079c */
      p_Var6 = (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
                *)FUN_0064c700(p_Var4);
    }
LAB_00550798:
                    /* catch() { ... } // from try @ 0055078c with catch @ 00550798 */
    iVar2 = *(int *)(p_Var6 + 0x20);
                    /* catch() { ... } // from try @ 00550758 with catch @ 0055079c */
    bVar3 = SBORROW4(iVar2,iVar7);
    iVar1 = iVar2 - iVar7;
    p_Var8 = (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
              *)0x0;
    if (iVar7 <= iVar2) {
      p_Var8 = p_Var6;
    }
  }
  if (iVar1 < 0 == bVar3) {
    p_Var4 = (_Rb_tree<int,std::pair<int_const,int>,std::_Select1st<std::pair<int_const,int>>,std::less<int>,std::allocator<std::pair<int_const,int>>>
              *)0x0;
  }
LAB_005507bc:
                    /* catch() { ... } // from try @ 005507b0 with catch @ 005507bc */
  auVar9._8_8_ = p_Var4;
  auVar9._0_8_ = p_Var8;
                    /* catch() { ... } // from try @ 0055087c with catch @ 005507c4 */
  return auVar9;
}


