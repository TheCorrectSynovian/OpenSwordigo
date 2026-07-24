/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a8ccc
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_get_insert_hint_unique_pos
 * Signature: undefined __thiscall _M_get_insert_hint_unique_pos(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>> * this, _Rb_tree_const_iterator param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::shared_ptr<Caver::GUIViewLayout>
   >, std::_Select1st<std::pair<std::string const, boost::shared_ptr<Caver::GUIViewLayout> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::shared_ptr<Caver::GUIViewLayout> > >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,
   boost::shared_ptr<Caver::GUIViewLayout> > >, std::string const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>
           *this,_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>
                 *param_2,string *param_3)

{
  long lVar1;
  int iVar2;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>
  *p_Var3;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>
  *p_Var4;
  size_t sVar5;
  void *__s1;
  void *__s2;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>
  *p_Var6;
  size_t __n;
  ulong uVar7;
  undefined1 auVar8 [16];
  
                    /* try { // try from 005a8cd4 to 006a8cfb has its CatchHandler @ 005a8d60 */
  if (this + 8 == param_2) {
    if (*(long *)(this + 0x28) != 0) {
      p_Var3 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>
                 **)(this + 0x20);
      sVar5 = *(ulong *)((long)*(void **)param_3 + -0x18);
      uVar7 = *(ulong *)((long)*(void **)(p_Var3 + 0x20) + -0x18);
      lVar1 = uVar7 - sVar5;
                    /* try { // try from 005a8d84 to 006a8db3 has its CatchHandler @ 005a8dbc */
      if (uVar7 < sVar5 || lVar1 == 0) {
        sVar5 = uVar7;
      }
      iVar2 = memcmp(*(void **)(p_Var3 + 0x20),*(void **)param_3,sVar5);
      if (iVar2 != 0) {
        if (-1 < iVar2) goto LAB_005a8eb8;
LAB_005a8e88:
        p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>
                  *)0x0;
        goto LAB_005a8ecc;
      }
                    /* try { // try from 005a8e68 to 006a8e6b has its CatchHandler @ 005a9050 */
                    /* try { // try from 005a8e6c to 006a8f4f has its CatchHandler @ 005a8e38 */
      if (lVar1 < 0x80000000) {
        iVar2 = (int)lVar1;
        if (lVar1 < -0x7fffffff) {
          iVar2 = -0x80000000;
        }
        if (iVar2 < 0) goto LAB_005a8e88;
      }
    }
LAB_005a8eb8:
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
                    /* try { // try from 005a8d1c to 006a8d43 has its CatchHandler @ 005a8d58 */
    iVar2 = memcmp(__s1,__s2,sVar5);
    if (iVar2 == 0) {
      if (lVar1 < 0x80000000) {
        iVar2 = (int)lVar1;
        if (lVar1 < -0x7fffffff) {
          iVar2 = -0x80000000;
        }
        goto joined_r0x005a8db4;
      }
    }
    else {
joined_r0x005a8db4:
                    /* try { // try from 005a8db4 to 006a8dbf has its CatchHandler @ 005a8c90 */
      if (iVar2 < 0) {
        p_Var6 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>
                   **)(this + 0x18);
        p_Var3 = p_Var6;
        if (p_Var6 == param_2) goto LAB_005a8ecc;
        p_Var3 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>
                  *)FUN_0064c700(param_2);
                    /* try { // try from 005a8d44 to 006a8d83 has its CatchHandler @ 005a8c90 */
        uVar7 = *(ulong *)((long)*(void **)(p_Var3 + 0x20) + -0x18);
        lVar1 = uVar7 - __n;
        if (uVar7 < __n || lVar1 == 0) {
          __n = uVar7;
        }
        iVar2 = memcmp(*(void **)(p_Var3 + 0x20),__s1,__n);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005a8d1c with catch @ 005a8d58
                        */
        if (iVar2 == 0) {
          if (0x7fffffff < lVar1) goto LAB_005a8eb8;
          iVar2 = (int)lVar1;
          if (lVar1 < -0x7fffffff) {
            iVar2 = -0x80000000;
          }
        }
        if (iVar2 < 0) {
          p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>
                    *)0x0;
          if (*(long *)(p_Var3 + 0x18) != 0) {
            p_Var6 = param_2;
            p_Var3 = param_2;
          }
          goto LAB_005a8ecc;
        }
        goto LAB_005a8eb8;
      }
    }
    lVar1 = uVar7 - __n;
    sVar5 = __n;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005a8d84 with catch @ 005a8dbc
                        */
    if (uVar7 < __n || lVar1 == 0) {
      sVar5 = uVar7;
    }
                    /* catch() { ... } // from try @ 005a8dd4 with catch @ 005a8dc0 */
    iVar2 = memcmp(__s2,__s1,sVar5);
    if (iVar2 == 0) {
      if (lVar1 < 0x80000000) {
        iVar2 = (int)lVar1;
        if (lVar1 < -0x7fffffff) {
          iVar2 = -0x80000000;
        }
        goto joined_r0x005a8e5c;
      }
    }
    else {
joined_r0x005a8e5c:
      if (iVar2 < 0) {
                    /* try { // try from 005a8dd4 to 006a8df7 has its CatchHandler @ 005a8dc0 */
        p_Var3 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>
                   **)(this + 0x20);
        if (p_Var3 == param_2) goto LAB_005a8e88;
                    /* catch() { ... } // from try @ 005a8dd0 with catch @ 005a8de4 */
        p_Var4 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>
                  *)FUN_0064c640(param_2);
        sVar5 = *(ulong *)((long)*(void **)(p_Var4 + 0x20) + -0x18);
        lVar1 = __n - sVar5;
        if (__n < sVar5 || lVar1 == 0) {
          sVar5 = __n;
        }
        iVar2 = memcmp(__s1,*(void **)(p_Var4 + 0x20),sVar5);
        if (iVar2 == 0) {
          if (0x7fffffff < lVar1) goto LAB_005a8eb8;
          iVar2 = (int)lVar1;
          if (lVar1 < -0x7fffffff) {
            iVar2 = -0x80000000;
          }
        }
        if (iVar2 < 0) {
          p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>
                    *)0x0;
          p_Var3 = param_2;
          if (*(long *)(param_2 + 0x18) != 0) {
            p_Var6 = p_Var4;
            p_Var3 = p_Var4;
          }
          goto LAB_005a8ecc;
        }
        goto LAB_005a8eb8;
      }
    }
    p_Var6 = param_2;
    p_Var3 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::GUIViewLayout>>>>
              *)0x0;
  }
LAB_005a8ecc:
  auVar8._8_8_ = p_Var3;
  auVar8._0_8_ = p_Var6;
  return auVar8;
}


