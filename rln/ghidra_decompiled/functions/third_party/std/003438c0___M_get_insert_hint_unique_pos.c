/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003438c0
 * Function: std::_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>::_M_get_insert_hint_unique_pos
 * Signature: undefined __thiscall _M_get_insert_hint_unique_pos(_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>> * this, _Rb_tree_const_iterator param_1, int * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<int, std::pair<int const, Caver::Component::OutletBinding>,
   std::_Select1st<std::pair<int const, Caver::Component::OutletBinding> >, std::less<int>,
   std::allocator<std::pair<int const, Caver::Component::OutletBinding> >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<int const,
   Caver::Component::OutletBinding> >, int const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
           *this,_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  _Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
  *p_Var4;
  _Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
  *p_Var5;
  _Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
  *p_Var6;
  int iVar7;
  _Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
  *p_Var8;
  undefined1 auVar9 [16];
  
  p_Var6 = this + 8;
  if (p_Var6 == param_2) {
    if ((*(long *)(this + 0x28) != 0) &&
       (p_Var4 = *(_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                   **)(this + 0x20), *(int *)(p_Var4 + 0x20) < *param_3)) goto LAB_003439ec;
    p_Var4 = p_Var6;
    if (*(_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
          **)(this + 0x10) ==
        (_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
         *)0x0) {
LAB_00343984:
      p_Var6 = param_2;
      if (p_Var4 == *(_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                      **)(this + 0x18)) {
LAB_00343aa8:
        p_Var4 = p_Var6;
        p_Var8 = (_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                  *)0x0;
        goto LAB_00343aac;
      }
      p_Var5 = (_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                *)FUN_0064c700(p_Var4);
      iVar7 = *param_3;
    }
    else {
      iVar7 = *param_3;
      p_Var4 = *(_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                 **)(this + 0x10);
      do {
        p_Var6 = p_Var4;
        p_Var5 = p_Var6 + 0x10;
        if (*(int *)(p_Var6 + 0x20) <= iVar7) {
          p_Var5 = p_Var6 + 0x18;
        }
        p_Var4 = *(_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                   **)p_Var5;
      } while (*(_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                 **)p_Var5 !=
               (_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                *)0x0);
      param_2 = p_Var6;
      p_Var5 = p_Var6;
      p_Var4 = p_Var6;
      if (iVar7 < *(int *)(p_Var6 + 0x20)) goto LAB_00343984;
    }
    iVar2 = *(int *)(p_Var5 + 0x20);
    bVar3 = SBORROW4(iVar2,iVar7);
    iVar1 = iVar2 - iVar7;
    p_Var4 = p_Var6;
    p_Var8 = (_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
              *)0x0;
    if (iVar7 <= iVar2) {
      p_Var8 = p_Var5;
    }
  }
  else {
    iVar7 = *param_3;
    if (*(int *)(param_2 + 0x20) <= iVar7) {
      if (iVar7 <= *(int *)(param_2 + 0x20)) {
        p_Var4 = (_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                  *)0x0;
        p_Var8 = param_2;
        goto LAB_00343aac;
      }
      p_Var4 = *(_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                 **)(this + 0x20);
      if (p_Var4 != param_2) {
        p_Var5 = (_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                  *)FUN_0064c640(param_2);
        if (iVar7 < *(int *)(p_Var5 + 0x20)) {
          p_Var4 = param_2;
          p_Var8 = (_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                    *)0x0;
          if (*(long *)(param_2 + 0x18) != 0) {
            p_Var4 = p_Var5;
            p_Var8 = p_Var5;
          }
          goto LAB_00343aac;
        }
        p_Var4 = *(_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                   **)(this + 0x10);
        if (*(_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
              **)(this + 0x10) !=
            (_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
             *)0x0) {
          do {
            p_Var6 = p_Var4;
            p_Var5 = p_Var6 + 0x10;
            if (*(int *)(p_Var6 + 0x20) <= iVar7) {
              p_Var5 = p_Var6 + 0x18;
            }
            p_Var4 = *(_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                       **)p_Var5;
          } while (*(_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                     **)p_Var5 !=
                   (_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                    *)0x0);
          p_Var4 = p_Var6;
          if (*(int *)(p_Var6 + 0x20) <= iVar7) goto LAB_00343a88;
        }
        p_Var4 = p_Var6;
        if (p_Var6 == *(_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                        **)(this + 0x18)) goto LAB_00343aa8;
        goto LAB_00343a48;
      }
LAB_003439ec:
      p_Var8 = (_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                *)0x0;
      goto LAB_00343aac;
    }
    p_Var8 = *(_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
               **)(this + 0x18);
    p_Var4 = p_Var8;
    if (p_Var8 == param_2) goto LAB_00343aac;
    p_Var4 = (_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
              *)FUN_0064c700(param_2);
    if (*(int *)(p_Var4 + 0x20) < iVar7) {
      p_Var8 = (_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                *)0x0;
      if (*(long *)(p_Var4 + 0x18) != 0) {
        p_Var4 = param_2;
        p_Var8 = param_2;
      }
      goto LAB_00343aac;
    }
    p_Var4 = *(_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
               **)(this + 0x10);
    if (*(_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
          **)(this + 0x10) ==
        (_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
         *)0x0) {
      p_Var4 = p_Var6;
      if (p_Var6 != p_Var8) goto LAB_00343a48;
      goto LAB_00343aa8;
    }
    do {
      p_Var6 = p_Var4;
      p_Var5 = p_Var6 + 0x10;
      if (*(int *)(p_Var6 + 0x20) <= iVar7) {
        p_Var5 = p_Var6 + 0x18;
      }
      p_Var4 = *(_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                 **)p_Var5;
    } while (*(_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
               **)p_Var5 !=
             (_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
              *)0x0);
    p_Var4 = p_Var6;
    if (iVar7 < *(int *)(p_Var6 + 0x20)) {
      if (p_Var6 == p_Var8) goto LAB_00343aa8;
LAB_00343a48:
      p_Var6 = (_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
                *)FUN_0064c700(p_Var4);
    }
LAB_00343a88:
    iVar2 = *(int *)(p_Var6 + 0x20);
    bVar3 = SBORROW4(iVar2,iVar7);
    iVar1 = iVar2 - iVar7;
    p_Var8 = (_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
              *)0x0;
    if (iVar7 <= iVar2) {
      p_Var8 = p_Var6;
    }
  }
  if (iVar1 < 0 == bVar3) {
    p_Var4 = (_Rb_tree<int,std::pair<int_const,Caver::Component::OutletBinding>,std::_Select1st<std::pair<int_const,Caver::Component::OutletBinding>>,std::less<int>,std::allocator<std::pair<int_const,Caver::Component::OutletBinding>>>
              *)0x0;
  }
LAB_00343aac:
  auVar9._8_8_ = p_Var4;
  auVar9._0_8_ = p_Var8;
  return auVar9;
}


