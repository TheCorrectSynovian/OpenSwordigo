/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ae9cc
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>::_M_get_insert_hint_unique_pos
 * Signature: undefined __thiscall _M_get_insert_hint_unique_pos(_Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>> * this, _Rb_tree_const_iterator param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, Caver::CharacterState::ItemState>,
   std::_Select1st<std::pair<std::string const, Caver::CharacterState::ItemState> >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   Caver::CharacterState::ItemState> >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,
   Caver::CharacterState::ItemState> >, std::string const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
           *this,_Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
                 *param_2,string *param_3)

{
  long lVar1;
  int iVar2;
  _Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
  *p_Var3;
  _Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
  *p_Var4;
  size_t sVar5;
  void *__s1;
  void *__s2;
  _Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
  *p_Var6;
  size_t __n;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  if (this + 8 == param_2) {
    if (*(long *)(this + 0x28) != 0) {
      p_Var3 = *(_Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
                 **)(this + 0x20);
                    /* try { // try from 004aea78 to 005aea7b has its CatchHandler @ 004aea8c */
      sVar5 = *(ulong *)((long)*(void **)param_3 + -0x18);
                    /* try { // try from 004aea7c to 005aeac7 has its CatchHandler @ 004ae9c8 */
      uVar7 = *(ulong *)((long)*(void **)(p_Var3 + 0x20) + -0x18);
      lVar1 = uVar7 - sVar5;
      if (uVar7 < sVar5 || lVar1 == 0) {
        sVar5 = uVar7;
      }
      iVar2 = memcmp(*(void **)(p_Var3 + 0x20),*(void **)param_3,sVar5);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004aea78 with catch @ 004aea8c
                        */
      if (iVar2 != 0) {
        if (-1 < iVar2) goto LAB_004aebb8;
LAB_004aeb88:
        p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
                  *)0x0;
        goto LAB_004aebcc;
      }
      if (lVar1 < 0x80000000) {
                    /* catch() { ... } // from try @ 004aeb34 with catch @ 004aeb7c */
        iVar2 = (int)lVar1;
        if (lVar1 < -0x7fffffff) {
          iVar2 = -0x80000000;
        }
        if (iVar2 < 0) goto LAB_004aeb88;
      }
    }
LAB_004aebb8:
    auVar8 = _M_get_insert_unique_pos(this,param_3);
    p_Var6 = auVar8._0_8_;
    p_Var3 = auVar8._8_8_;
  }
  else {
    __s1 = *(void **)param_3;
    __s2 = *(void **)(param_2 + 0x20);
    __n = *(ulong *)((long)__s1 + -0x18);
    uVar7 = *(ulong *)((long)__s2 + -0x18);
    lVar1 = __n - uVar7;
    sVar5 = uVar7;
    if (__n < uVar7 || lVar1 == 0) {
      sVar5 = __n;
    }
    iVar2 = memcmp(__s1,__s2,sVar5);
    if (iVar2 == 0) {
      if (lVar1 < 0x80000000) {
        iVar2 = (int)lVar1;
        if (lVar1 < -0x7fffffff) {
          iVar2 = -0x80000000;
        }
        goto joined_r0x004aeab4;
      }
    }
    else {
joined_r0x004aeab4:
      if (iVar2 < 0) {
        p_Var6 = *(_Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
                   **)(this + 0x18);
        p_Var3 = p_Var6;
        if (p_Var6 == param_2) goto LAB_004aebcc;
        p_Var3 = (_Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
                  *)FUN_0064c700(param_2);
                    /* try { // try from 004aea44 to 005aea47 has its CatchHandler @ 004aea94 */
        uVar7 = *(ulong *)((long)*(void **)(p_Var3 + 0x20) + -0x18);
        lVar1 = uVar7 - __n;
        if (uVar7 < __n || lVar1 == 0) {
          __n = uVar7;
        }
        iVar2 = memcmp(*(void **)(p_Var3 + 0x20),__s1,__n);
        if (iVar2 == 0) {
          if (0x7fffffff < lVar1) goto LAB_004aebb8;
          iVar2 = (int)lVar1;
          if (lVar1 < -0x7fffffff) {
            iVar2 = -0x80000000;
          }
        }
        if (iVar2 < 0) {
          p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
                    *)0x0;
          if (*(long *)(p_Var3 + 0x18) != 0) {
            p_Var6 = param_2;
            p_Var3 = param_2;
          }
          goto LAB_004aebcc;
        }
        goto LAB_004aebb8;
      }
    }
    lVar1 = uVar7 - __n;
    sVar5 = __n;
    if (uVar7 < __n || lVar1 == 0) {
      sVar5 = uVar7;
    }
                    /* try { // try from 004aeac8 to 005aead3 has its CatchHandler @ 004aeadc */
    iVar2 = memcmp(__s2,__s1,sVar5);
    if (iVar2 == 0) {
      if (lVar1 < 0x80000000) {
        iVar2 = (int)lVar1;
        if (lVar1 < -0x7fffffff) {
          iVar2 = -0x80000000;
        }
        goto joined_r0x004aeb5c;
      }
    }
    else {
joined_r0x004aeb5c:
      if (iVar2 < 0) {
                    /* try { // try from 004aead4 to 005aeadf has its CatchHandler @ 004ae9c8 */
        p_Var3 = *(_Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
                   **)(this + 0x20);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004aeac8 with catch @ 004aeadc
                        */
        if (p_Var3 == param_2) goto LAB_004aeb88;
                    /* catch() { ... } // from try @ 004aeaf4 with catch @ 004aeae0 */
        p_Var4 = (_Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
                  *)FUN_0064c640(param_2);
                    /* try { // try from 004aeaf0 to 005aeaf3 has its CatchHandler @ 004aeb04 */
                    /* try { // try from 004aeaf4 to 005aeb17 has its CatchHandler @ 004aeae0 */
        sVar5 = *(ulong *)((long)*(void **)(p_Var4 + 0x20) + -0x18);
        lVar1 = __n - sVar5;
        if (__n < sVar5 || lVar1 == 0) {
          sVar5 = __n;
        }
        iVar2 = memcmp(__s1,*(void **)(p_Var4 + 0x20),sVar5);
                    /* catch() { ... } // from try @ 004aeaf0 with catch @ 004aeb04 */
        if (iVar2 == 0) {
          if (0x7fffffff < lVar1) goto LAB_004aebb8;
                    /* try { // try from 004aeb18 to 005aeb33 has its CatchHandler @ 004aeb18
                       catch() { ... } // from try @ 004aeb18 with catch @ 004aeb18
                       catch() { ... } // from try @ 004aeb38 with catch @ 004aeb18 */
          iVar2 = (int)lVar1;
          if (lVar1 < -0x7fffffff) {
            iVar2 = -0x80000000;
          }
        }
        if (iVar2 < 0) {
          p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
                    *)0x0;
          p_Var3 = param_2;
          if (*(long *)(param_2 + 0x18) != 0) {
                    /* try { // try from 004aeb34 to 005aeb37 has its CatchHandler @ 004aeb7c */
            p_Var6 = p_Var4;
            p_Var3 = p_Var4;
          }
          goto LAB_004aebcc;
        }
        goto LAB_004aebb8;
      }
    }
    p_Var6 = param_2;
    p_Var3 = (_Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
              *)0x0;
  }
LAB_004aebcc:
  auVar8._8_8_ = p_Var3;
  auVar8._0_8_ = p_Var6;
  return auVar8;
}


