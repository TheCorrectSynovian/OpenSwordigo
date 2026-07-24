/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00316d3c
 * Function: std::_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>::_M_insert_unique
 * Signature: undefined __thiscall _M_insert_unique(_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>> * this, pair * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<Caver::CollisionPair, std::pair<Caver::CollisionPair const, bool>,
   std::_Select1st<std::pair<Caver::CollisionPair const, bool> >, std::less<Caver::CollisionPair>,
   std::allocator<std::pair<Caver::CollisionPair const, bool> >
   >::_M_insert_unique(std::pair<Caver::CollisionPair const, bool> const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
::_M_insert_unique(_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
                   *this,pair *param_1)

{
  _Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
  *p_Var1;
  bool bVar2;
  _Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
  *p_Var3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  _Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
  *p_Var7;
  undefined1 auVar8 [16];
  
  p_Var1 = this + 8;
  p_Var7 = p_Var1;
  if (*(_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
        **)(this + 0x10) ==
      (_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
       *)0x0) {
LAB_00316dbc:
    if (p_Var7 != *(_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
                    **)(this + 0x18)) {
      p_Var3 = (_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
                *)FUN_0064c700(p_Var7);
      uVar5 = *(ulong *)param_1;
      goto LAB_00316dd8;
    }
  }
  else {
    uVar5 = *(ulong *)param_1;
    p_Var3 = *(_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
               **)(this + 0x10);
    do {
      while ((p_Var7 = p_Var3, *(ulong *)(p_Var7 + 0x20) <= uVar5 &&
             ((uVar5 != *(ulong *)(p_Var7 + 0x20) ||
              (*(ulong *)(p_Var7 + 0x28) <= *(ulong *)(param_1 + 8)))))) {
        bVar2 = false;
        p_Var3 = *(_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
                   **)(p_Var7 + 0x18);
        if (*(_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
              **)(p_Var7 + 0x18) ==
            (_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
             *)0x0) goto LAB_00316dac;
      }
      bVar2 = true;
      p_Var3 = *(_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
                 **)(p_Var7 + 0x10);
    } while (*(_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
               **)(p_Var7 + 0x10) !=
             (_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
              *)0x0);
LAB_00316dac:
    p_Var3 = p_Var7;
    if (bVar2) goto LAB_00316dbc;
LAB_00316dd8:
    if ((uVar5 <= *(ulong *)(p_Var3 + 0x20)) &&
       ((*(ulong *)(p_Var3 + 0x20) != uVar5 ||
        (*(ulong *)(param_1 + 8) <= *(ulong *)(p_Var3 + 0x28))))) {
      uVar4 = 0;
      goto LAB_00316eb8;
    }
  }
  if (p_Var7 == (_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
                 *)0x0) {
    p_Var3 = (_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
              *)0x0;
    uVar4 = 0;
    goto LAB_00316eb8;
  }
  if (p_Var1 == p_Var7) {
LAB_00316e00:
    bVar2 = true;
  }
  else {
    if (*(ulong *)param_1 < *(ulong *)(p_Var7 + 0x20)) goto LAB_00316e00;
    if (*(ulong *)param_1 == *(ulong *)(p_Var7 + 0x20)) {
      bVar2 = *(ulong *)(param_1 + 8) < *(ulong *)(p_Var7 + 0x28);
    }
    else {
      bVar2 = false;
    }
  }
  p_Var3 = operator_new(0x38);
  lVar6 = *(long *)param_1;
  *(long *)(p_Var3 + 0x20) = lVar6;
  if (lVar6 != 0) {
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
  }
  lVar6 = *(long *)(param_1 + 8);
  *(long *)(p_Var3 + 0x28) = lVar6;
  if (lVar6 != 0) {
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
  }
  p_Var3[0x30] = *(_Rb_tree<Caver::CollisionPair,std::pair<Caver::CollisionPair_const,bool>,std::_Select1st<std::pair<Caver::CollisionPair_const,bool>>,std::less<Caver::CollisionPair>,std::allocator<std::pair<Caver::CollisionPair_const,bool>>>
                   *)(param_1 + 0x10);
  FUN_0064c8a0(bVar2,p_Var3,p_Var7,p_Var1);
  uVar4 = 1;
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
LAB_00316eb8:
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = p_Var3;
  return auVar8;
}


