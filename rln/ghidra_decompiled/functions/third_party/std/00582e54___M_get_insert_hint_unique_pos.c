/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00582e54
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>>::_M_get_insert_hint_unique_pos
 * Signature: undefined __thiscall _M_get_insert_hint_unique_pos(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>> * this, _Rb_tree_const_iterator param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::shared_ptr<Caver::MusicPlaylist>
   >, std::_Select1st<std::pair<std::string const, boost::shared_ptr<Caver::MusicPlaylist> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::shared_ptr<Caver::MusicPlaylist> > >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,
   boost::shared_ptr<Caver::MusicPlaylist> > >, std::string const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>>
           *this,_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>>
                 *param_2,string *param_3)

{
  long lVar1;
  int iVar2;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>>
  *p_Var3;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>>
  *p_Var4;
  size_t sVar5;
  void *__s1;
  void *__s2;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>>
  *p_Var6;
  size_t __n;
  ulong uVar7;
  undefined1 auVar8 [16];
  
                    /* catch() { ... } // from try @ 00581554 with catch @ 00582e5c */
  if (this + 8 == param_2) {
    if (*(long *)(this + 0x28) != 0) {
      p_Var3 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>>
                 **)(this + 0x20);
      sVar5 = *(ulong *)((long)*(void **)param_3 + -0x18);
      uVar7 = *(ulong *)((long)*(void **)(p_Var3 + 0x20) + -0x18);
                    /* catch() { ... } // from try @ 005814f0 with catch @ 00582f08 */
      lVar1 = uVar7 - sVar5;
      if (uVar7 < sVar5 || lVar1 == 0) {
        sVar5 = uVar7;
      }
                    /* catch() { ... } // from try @ 005814e4 with catch @ 00582f10 */
      iVar2 = memcmp(*(void **)(p_Var3 + 0x20),*(void **)param_3,sVar5);
      if (iVar2 != 0) {
        if (-1 < iVar2) goto LAB_00583040;
LAB_00583010:
        p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>>
                  *)0x0;
        goto LAB_00583054;
      }
      if (lVar1 < 0x80000000) {
        iVar2 = (int)lVar1;
        if (lVar1 < -0x7fffffff) {
          iVar2 = -0x80000000;
        }
                    /* catch() { ... } // from try @ 00581790 with catch @ 0058300c
                       catch() { ... } // from try @ 005817d0 with catch @ 0058300c */
        if (iVar2 < 0) goto LAB_00583010;
      }
    }
LAB_00583040:
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
        goto joined_r0x00582f3c;
      }
    }
    else {
joined_r0x00582f3c:
      if (iVar2 < 0) {
                    /* catch() { ... } // from try @ 005814fc with catch @ 00582eb0 */
        p_Var6 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>>
                   **)(this + 0x18);
        p_Var3 = p_Var6;
        if (p_Var6 == param_2) goto LAB_00583054;
        p_Var3 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>>
                  *)FUN_0064c700(param_2);
        uVar7 = *(ulong *)((long)*(void **)(p_Var3 + 0x20) + -0x18);
        lVar1 = uVar7 - __n;
        if (uVar7 < __n || lVar1 == 0) {
          __n = uVar7;
        }
        iVar2 = memcmp(*(void **)(p_Var3 + 0x20),__s1,__n);
        if (iVar2 == 0) {
          if (0x7fffffff < lVar1) goto LAB_00583040;
          iVar2 = (int)lVar1;
          if (lVar1 < -0x7fffffff) {
            iVar2 = -0x80000000;
          }
        }
        if (iVar2 < 0) {
          p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>>
                    *)0x0;
          if (*(long *)(p_Var3 + 0x18) != 0) {
            p_Var6 = param_2;
            p_Var3 = param_2;
          }
          goto LAB_00583054;
        }
        goto LAB_00583040;
      }
    }
    lVar1 = uVar7 - __n;
    sVar5 = __n;
    if (uVar7 < __n || lVar1 == 0) {
      sVar5 = uVar7;
    }
    iVar2 = memcmp(__s2,__s1,sVar5);
    if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 00581474 with catch @ 00582fc8 */
                    /* catch() { ... } // from try @ 00581bf8 with catch @ 00582fd0
                       catch() { ... } // from try @ 00581c9c with catch @ 00582fd0 */
      if (lVar1 < 0x80000000) {
                    /* catch() { ... } // from try @ 00581804 with catch @ 00582fd4
                       catch() { ... } // from try @ 00581844 with catch @ 00582fd4 */
        iVar2 = (int)lVar1;
        if (lVar1 < -0x7fffffff) {
          iVar2 = -0x80000000;
        }
        goto joined_r0x00582fe4;
      }
    }
    else {
joined_r0x00582fe4:
      if (iVar2 < 0) {
        p_Var3 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>>
                   **)(this + 0x20);
        if (p_Var3 == param_2) goto LAB_00583010;
                    /* catch() { ... } // from try @ 005814d8 with catch @ 00582f68 */
        p_Var4 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>>
                  *)FUN_0064c640(param_2);
                    /* catch() { ... } // from try @ 00581480 with catch @ 00582f70 */
        sVar5 = *(ulong *)((long)*(void **)(p_Var4 + 0x20) + -0x18);
        lVar1 = __n - sVar5;
        if (__n < sVar5 || lVar1 == 0) {
          sVar5 = __n;
        }
        iVar2 = memcmp(__s1,*(void **)(p_Var4 + 0x20),sVar5);
        if (iVar2 == 0) {
          if (0x7fffffff < lVar1) goto LAB_00583040;
          iVar2 = (int)lVar1;
          if (lVar1 < -0x7fffffff) {
            iVar2 = -0x80000000;
          }
        }
        if (iVar2 < 0) {
          p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>>
                    *)0x0;
          p_Var3 = param_2;
          if (*(long *)(param_2 + 0x18) != 0) {
            p_Var6 = p_Var4;
            p_Var3 = p_Var4;
          }
          goto LAB_00583054;
        }
        goto LAB_00583040;
      }
    }
    p_Var6 = param_2;
    p_Var3 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MusicPlaylist>>>>
              *)0x0;
  }
LAB_00583054:
  auVar8._8_8_ = p_Var3;
  auVar8._0_8_ = p_Var6;
                    /* catch() { ... } // from try @ 00581670 with catch @ 00583064
                       catch() { ... } // from try @ 00581700 with catch @ 00583064 */
  return auVar8;
}


