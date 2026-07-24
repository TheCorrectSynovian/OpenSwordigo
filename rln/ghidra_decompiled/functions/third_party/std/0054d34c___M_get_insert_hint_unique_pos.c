/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054d34c
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>::_M_get_insert_hint_unique_pos
 * Signature: undefined __thiscall _M_get_insert_hint_unique_pos(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>> * this, _Rb_tree_const_iterator param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::shared_ptr<Caver::Model const> >,
   std::_Select1st<std::pair<std::string const, boost::shared_ptr<Caver::Model const> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::shared_ptr<Caver::Model const> > >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,
   boost::shared_ptr<Caver::Model const> > >, std::string const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
           *this,_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
                 *param_2,string *param_3)

{
  long lVar1;
  int iVar2;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
  *p_Var3;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
  *p_Var4;
  size_t sVar5;
  void *__s1;
  void *__s2;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
  *p_Var6;
  size_t __n;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  if (this + 8 == param_2) {
    if (*(long *)(this + 0x28) != 0) {
      p_Var3 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
                 **)(this + 0x20);
      sVar5 = *(ulong *)((long)*(void **)param_3 + -0x18);
      uVar7 = *(ulong *)((long)*(void **)(p_Var3 + 0x20) + -0x18);
      lVar1 = uVar7 - sVar5;
      if (uVar7 < sVar5 || lVar1 == 0) {
        sVar5 = uVar7;
      }
      iVar2 = memcmp(*(void **)(p_Var3 + 0x20),*(void **)param_3,sVar5);
      if (iVar2 != 0) {
        if (-1 < iVar2) goto LAB_0054d538;
LAB_0054d508:
        p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
                  *)0x0;
                    /* try { // try from 0054d50c to 0064d51b has its CatchHandler @ 0054d5fc */
        goto LAB_0054d54c;
      }
      if (lVar1 < 0x80000000) {
                    /* try { // try from 0054d4f8 to 0064d50b has its CatchHandler @ 0054d5f8 */
        iVar2 = (int)lVar1;
        if (lVar1 < -0x7fffffff) {
          iVar2 = -0x80000000;
        }
        if (iVar2 < 0) goto LAB_0054d508;
      }
    }
LAB_0054d538:
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
                    /* catch() { ... } // from try @ 0054d30c with catch @ 0054d3a0 */
    if (iVar2 == 0) {
      if (lVar1 < 0x80000000) {
        iVar2 = (int)lVar1;
        if (lVar1 < -0x7fffffff) {
          iVar2 = -0x80000000;
        }
        goto joined_r0x0054d434;
      }
    }
    else {
joined_r0x0054d434:
      if (iVar2 < 0) {
        p_Var6 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
                   **)(this + 0x18);
        p_Var3 = p_Var6;
        if (p_Var6 == param_2) goto LAB_0054d54c;
        p_Var3 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
                  *)FUN_0064c700(param_2);
        uVar7 = *(ulong *)((long)*(void **)(p_Var3 + 0x20) + -0x18);
        lVar1 = uVar7 - __n;
        if (uVar7 < __n || lVar1 == 0) {
          __n = uVar7;
        }
        iVar2 = memcmp(*(void **)(p_Var3 + 0x20),__s1,__n);
                    /* catch() { ... } // from try @ 0054d2f4 with catch @ 0054d3d8 */
        if (iVar2 == 0) {
                    /* try { // try from 0054d51c to 0064d6cb has its CatchHandler @ 0054d490 */
          if (0x7fffffff < lVar1) goto LAB_0054d538;
          iVar2 = (int)lVar1;
          if (lVar1 < -0x7fffffff) {
            iVar2 = -0x80000000;
          }
        }
        if (iVar2 < 0) {
          p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
                    *)0x0;
          if (*(long *)(p_Var3 + 0x18) != 0) {
            p_Var6 = param_2;
            p_Var3 = param_2;
          }
          goto LAB_0054d54c;
        }
        goto LAB_0054d538;
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
                    /* try { // try from 0054d4d0 to 0064d4f7 has its CatchHandler @ 0054d660 */
        iVar2 = (int)lVar1;
        if (lVar1 < -0x7fffffff) {
          iVar2 = -0x80000000;
        }
        goto joined_r0x0054d4dc;
      }
    }
    else {
joined_r0x0054d4dc:
      if (iVar2 < 0) {
        p_Var3 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
                   **)(this + 0x20);
        if (p_Var3 == param_2) goto LAB_0054d508;
        p_Var4 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
                  *)FUN_0064c640(param_2);
        sVar5 = *(ulong *)((long)*(void **)(p_Var4 + 0x20) + -0x18);
        lVar1 = __n - sVar5;
        if (__n < sVar5 || lVar1 == 0) {
          sVar5 = __n;
        }
        iVar2 = memcmp(__s1,*(void **)(p_Var4 + 0x20),sVar5);
        if (iVar2 == 0) {
                    /* try { // try from 0054d490 to 0064d4cf has its CatchHandler @ 0054d490
                       catch() { ... } // from try @ 0054d490 with catch @ 0054d490
                       catch() { ... } // from try @ 0054d51c with catch @ 0054d490 */
          if (0x7fffffff < lVar1) goto LAB_0054d538;
          iVar2 = (int)lVar1;
          if (lVar1 < -0x7fffffff) {
            iVar2 = -0x80000000;
          }
        }
        if (iVar2 < 0) {
          p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
                    *)0x0;
          p_Var3 = param_2;
          if (*(long *)(param_2 + 0x18) != 0) {
            p_Var6 = p_Var4;
            p_Var3 = p_Var4;
          }
          goto LAB_0054d54c;
        }
        goto LAB_0054d538;
      }
    }
    p_Var6 = param_2;
    p_Var3 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Model_const>>>>
              *)0x0;
  }
LAB_0054d54c:
  auVar8._8_8_ = p_Var3;
  auVar8._0_8_ = p_Var6;
  return auVar8;
}


