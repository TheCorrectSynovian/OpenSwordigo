/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a7a1c
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>::_M_get_insert_hint_unique_pos
 * Signature: undefined __thiscall _M_get_insert_hint_unique_pos(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>> * this, _Rb_tree_const_iterator param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::shared_ptr<Caver::PlayerProfile>
   >, std::_Select1st<std::pair<std::string const, boost::shared_ptr<Caver::PlayerProfile> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::shared_ptr<Caver::PlayerProfile> > >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,
   boost::shared_ptr<Caver::PlayerProfile> > >, std::string const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
           *this,_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
                 *param_2,string *param_3)

{
  long lVar1;
  int iVar2;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
  *p_Var3;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
  *p_Var4;
  size_t sVar5;
  void *__s1;
  void *__s2;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
  *p_Var6;
  size_t __n;
  ulong uVar7;
  undefined1 auVar8 [16];
  
                    /* try { // try from 004a7a24 to 005a7a2f has its CatchHandler @ 004a877c */
  if (this + 8 == param_2) {
                    /* try { // try from 004a7ab4 to 005a7ac7 has its CatchHandler @ 004a871c */
    if (*(long *)(this + 0x28) != 0) {
      p_Var3 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
                 **)(this + 0x20);
      sVar5 = *(ulong *)((long)*(void **)param_3 + -0x18);
      uVar7 = *(ulong *)((long)*(void **)(p_Var3 + 0x20) + -0x18);
      lVar1 = uVar7 - sVar5;
      if (uVar7 < sVar5 || lVar1 == 0) {
        sVar5 = uVar7;
      }
                    /* try { // try from 004a7ad8 to 005a7ae3 has its CatchHandler @ 004a86e4 */
      iVar2 = memcmp(*(void **)(p_Var3 + 0x20),*(void **)param_3,sVar5);
      if (iVar2 != 0) {
        if (-1 < iVar2) goto LAB_004a7c08;
LAB_004a7bd8:
        p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
                  *)0x0;
        goto LAB_004a7c1c;
      }
      if (lVar1 < 0x80000000) {
        iVar2 = (int)lVar1;
        if (lVar1 < -0x7fffffff) {
          iVar2 = -0x80000000;
        }
        if (iVar2 < 0) goto LAB_004a7bd8;
      }
    }
LAB_004a7c08:
    auVar8 = _M_get_insert_unique_pos(this,param_3);
    p_Var6 = auVar8._0_8_;
    p_Var3 = auVar8._8_8_;
  }
  else {
    __s1 = *(void **)param_3;
    __s2 = *(void **)(param_2 + 0x20);
    __n = *(ulong *)((long)__s1 + -0x18);
                    /* try { // try from 004a7a58 to 005a7a93 has its CatchHandler @ 004a8720 */
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
        goto joined_r0x004a7b04;
      }
    }
    else {
joined_r0x004a7b04:
                    /* try { // try from 004a7b04 to 005a7b3f has its CatchHandler @ 004a8688 */
      if (iVar2 < 0) {
        p_Var6 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
                   **)(this + 0x18);
        p_Var3 = p_Var6;
        if (p_Var6 == param_2) goto LAB_004a7c1c;
        p_Var3 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
                  *)FUN_0064c700(param_2);
        uVar7 = *(ulong *)((long)*(void **)(p_Var3 + 0x20) + -0x18);
        lVar1 = uVar7 - __n;
        if (uVar7 < __n || lVar1 == 0) {
          __n = uVar7;
        }
        iVar2 = memcmp(*(void **)(p_Var3 + 0x20),__s1,__n);
        if (iVar2 == 0) {
                    /* try { // try from 004a7bec to 005a7f87 has its CatchHandler @ 004a724c */
          if (0x7fffffff < lVar1) goto LAB_004a7c08;
          iVar2 = (int)lVar1;
          if (lVar1 < -0x7fffffff) {
            iVar2 = -0x80000000;
          }
        }
        if (iVar2 < 0) {
          p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
                    *)0x0;
          if (*(long *)(p_Var3 + 0x18) != 0) {
            p_Var6 = param_2;
            p_Var3 = param_2;
          }
          goto LAB_004a7c1c;
        }
        goto LAB_004a7c08;
      }
    }
    lVar1 = uVar7 - __n;
    sVar5 = __n;
    if (uVar7 < __n || lVar1 == 0) {
      sVar5 = uVar7;
    }
    iVar2 = memcmp(__s2,__s1,sVar5);
    if (iVar2 == 0) {
      if (lVar1 < 0x80000000) {
        iVar2 = (int)lVar1;
        if (lVar1 < -0x7fffffff) {
          iVar2 = -0x80000000;
        }
        goto joined_r0x004a7bac;
      }
    }
    else {
joined_r0x004a7bac:
      if (iVar2 < 0) {
        p_Var3 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
                   **)(this + 0x20);
        if (p_Var3 == param_2) goto LAB_004a7bd8;
        p_Var4 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
                  *)FUN_0064c640(param_2);
        sVar5 = *(ulong *)((long)*(void **)(p_Var4 + 0x20) + -0x18);
        lVar1 = __n - sVar5;
        if (__n < sVar5 || lVar1 == 0) {
          sVar5 = __n;
        }
        iVar2 = memcmp(__s1,*(void **)(p_Var4 + 0x20),sVar5);
        if (iVar2 == 0) {
                    /* try { // try from 004a7b60 to 005a7b73 has its CatchHandler @ 004a8684 */
          if (0x7fffffff < lVar1) goto LAB_004a7c08;
          iVar2 = (int)lVar1;
          if (lVar1 < -0x7fffffff) {
            iVar2 = -0x80000000;
          }
        }
        if (iVar2 < 0) {
          p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
                    *)0x0;
          p_Var3 = param_2;
          if (*(long *)(param_2 + 0x18) != 0) {
                    /* try { // try from 004a7b84 to 005a7b8f has its CatchHandler @ 004a864c */
            p_Var6 = p_Var4;
            p_Var3 = p_Var4;
          }
          goto LAB_004a7c1c;
        }
        goto LAB_004a7c08;
      }
    }
                    /* try { // try from 004a7bb0 to 005a7beb has its CatchHandler @ 004a85f0 */
    p_Var6 = param_2;
    p_Var3 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::PlayerProfile>>>>
              *)0x0;
  }
LAB_004a7c1c:
  auVar8._8_8_ = p_Var3;
  auVar8._0_8_ = p_Var6;
  return auVar8;
}


