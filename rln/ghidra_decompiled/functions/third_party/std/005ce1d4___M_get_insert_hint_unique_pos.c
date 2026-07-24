/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ce1d4
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>::_M_get_insert_hint_unique_pos
 * Signature: undefined __thiscall _M_get_insert_hint_unique_pos(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>> * this, _Rb_tree_const_iterator param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::intrusive_ptr<Caver::Texture> >,
   std::_Select1st<std::pair<std::string const, boost::intrusive_ptr<Caver::Texture> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::intrusive_ptr<Caver::Texture> > >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,
   boost::intrusive_ptr<Caver::Texture> > >, std::string const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
           *this,_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
                 *param_2,string *param_3)

{
  long lVar1;
  int iVar2;
  _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
  *p_Var3;
  _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
  *p_Var4;
  size_t sVar5;
  void *__s1;
  void *__s2;
  _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
  *p_Var6;
  size_t __n;
  ulong uVar7;
  undefined1 auVar8 [16];
  
                    /* catch() { ... } // from try @ 005cdea0 with catch @ 005ce1f4 */
                    /* catch() { ... } // from try @ 005cdf0c with catch @ 005ce1f8
                       catch() { ... } // from try @ 005cdfa4 with catch @ 005ce1f8
                       catch() { ... } // from try @ 005ce034 with catch @ 005ce1f8 */
                    /* catch() { ... } // from try @ 005ce09c with catch @ 005ce1fc */
                    /* catch() { ... } // from try @ 005ce07c with catch @ 005ce200 */
  if (this + 8 == param_2) {
    if (*(long *)(this + 0x28) != 0) {
      p_Var3 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
                 **)(this + 0x20);
      sVar5 = *(ulong *)((long)*(void **)param_3 + -0x18);
      uVar7 = *(ulong *)((long)*(void **)(p_Var3 + 0x20) + -0x18);
      lVar1 = uVar7 - sVar5;
      if (uVar7 < sVar5 || lVar1 == 0) {
        sVar5 = uVar7;
      }
      iVar2 = memcmp(*(void **)(p_Var3 + 0x20),*(void **)param_3,sVar5);
      if (iVar2 != 0) {
        if (-1 < iVar2) goto LAB_005ce3c0;
LAB_005ce390:
        p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
                  *)0x0;
        goto LAB_005ce3d4;
      }
      if (lVar1 < 0x80000000) {
        iVar2 = (int)lVar1;
        if (lVar1 < -0x7fffffff) {
          iVar2 = -0x80000000;
        }
        if (iVar2 < 0) goto LAB_005ce390;
      }
    }
LAB_005ce3c0:
                    /* catch() { ... } // from try @ 005cdec8 with catch @ 005ce3c8
                       catch() { ... } // from try @ 005ce0c8 with catch @ 005ce3c8 */
    auVar8 = _M_get_insert_unique_pos(this,param_3);
    p_Var6 = auVar8._0_8_;
    p_Var3 = auVar8._8_8_;
  }
  else {
                    /* catch() { ... } // from try @ 005cdfec with catch @ 005ce204 */
    __s1 = *(void **)param_3;
                    /* catch() { ... } // from try @ 005cdf5c with catch @ 005ce208 */
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
                    /* catch() { ... } // from try @ 005cddc0 with catch @ 005ce2a8 */
      if (lVar1 < 0x80000000) {
        iVar2 = (int)lVar1;
        if (lVar1 < -0x7fffffff) {
          iVar2 = -0x80000000;
        }
        goto joined_r0x005ce2bc;
      }
    }
    else {
joined_r0x005ce2bc:
      if (iVar2 < 0) {
        p_Var6 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
                   **)(this + 0x18);
        p_Var3 = p_Var6;
        if (p_Var6 == param_2) goto LAB_005ce3d4;
        p_Var3 = (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
                  *)FUN_0064c700(param_2);
        uVar7 = *(ulong *)((long)*(void **)(p_Var3 + 0x20) + -0x18);
        lVar1 = uVar7 - __n;
                    /* catch() { ... } // from try @ 005cde74 with catch @ 005ce258 */
        if (uVar7 < __n || lVar1 == 0) {
          __n = uVar7;
        }
        iVar2 = memcmp(*(void **)(p_Var3 + 0x20),__s1,__n);
        if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 005cdd34 with catch @ 005ce3a4 */
                    /* catch() { ... } // from try @ 005cdd74 with catch @ 005ce3a8
                       catch() { ... } // from try @ 005ce110 with catch @ 005ce3a8 */
          if (0x7fffffff < lVar1) goto LAB_005ce3c0;
                    /* catch() { ... } // from try @ 005cdd2c with catch @ 005ce3b8
                       catch() { ... } // from try @ 005ce134 with catch @ 005ce3b8 */
          iVar2 = (int)lVar1;
          if (lVar1 < -0x7fffffff) {
            iVar2 = -0x80000000;
          }
        }
        if (iVar2 < 0) {
          p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
                    *)0x0;
          if (*(long *)(p_Var3 + 0x18) != 0) {
            p_Var6 = param_2;
            p_Var3 = param_2;
          }
          goto LAB_005ce3d4;
        }
        goto LAB_005ce3c0;
      }
    }
                    /* catch() { ... } // from try @ 005cdd90 with catch @ 005ce2c0 */
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
        goto joined_r0x005ce364;
      }
    }
    else {
joined_r0x005ce364:
      if (iVar2 < 0) {
        p_Var3 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
                   **)(this + 0x20);
        if (p_Var3 == param_2) goto LAB_005ce390;
        p_Var4 = (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
                  *)FUN_0064c640(param_2);
        sVar5 = *(ulong *)((long)*(void **)(p_Var4 + 0x20) + -0x18);
        lVar1 = __n - sVar5;
        if (__n < sVar5 || lVar1 == 0) {
          sVar5 = __n;
        }
        iVar2 = memcmp(__s1,*(void **)(p_Var4 + 0x20),sVar5);
        if (iVar2 == 0) {
          if (0x7fffffff < lVar1) goto LAB_005ce3c0;
          iVar2 = (int)lVar1;
          if (lVar1 < -0x7fffffff) {
            iVar2 = -0x80000000;
          }
        }
                    /* catch() { ... } // from try @ 005cdd7c with catch @ 005ce32c */
        if (iVar2 < 0) {
                    /* catch() { ... } // from try @ 005cdd48 with catch @ 005ce330 */
          p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
                    *)0x0;
          p_Var3 = param_2;
          if (*(long *)(param_2 + 0x18) != 0) {
            p_Var6 = p_Var4;
            p_Var3 = p_Var4;
          }
          goto LAB_005ce3d4;
        }
        goto LAB_005ce3c0;
      }
    }
    p_Var6 = param_2;
    p_Var3 = (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::Texture>>>>
              *)0x0;
  }
LAB_005ce3d4:
  auVar8._8_8_ = p_Var3;
  auVar8._0_8_ = p_Var6;
                    /* catch() { ... } // from try @ 005cddb4 with catch @ 005ce3d8
                       catch() { ... } // from try @ 005cddc8 with catch @ 005ce3d8 */
  return auVar8;
}


