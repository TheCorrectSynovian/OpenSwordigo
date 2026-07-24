/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b350c
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>::_M_get_insert_hint_unique_pos
 * Signature: undefined __thiscall _M_get_insert_hint_unique_pos(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>> * this, _Rb_tree_const_iterator param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::shared_ptr<Caver::EntityClass> >,
   std::_Select1st<std::pair<std::string const, boost::shared_ptr<Caver::EntityClass> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::shared_ptr<Caver::EntityClass> > >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,
   boost::shared_ptr<Caver::EntityClass> > >, std::string const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
           *this,_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
                 *param_2,string *param_3)

{
  long lVar1;
  int iVar2;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
  *p_Var3;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
  *p_Var4;
  size_t sVar5;
  void *__s1;
  void *__s2;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
  *p_Var6;
  size_t __n;
  ulong uVar7;
  undefined1 auVar8 [16];
  
                    /* catch() { ... } // from try @ 004b3620 with catch @ 004b3524
                       catch() { ... } // from try @ 004b36f0 with catch @ 004b3524 */
  if (this + 8 == param_2) {
    if (*(long *)(this + 0x28) != 0) {
      p_Var3 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
                 **)(this + 0x20);
                    /* try { // try from 004b35b4 to 005b35b7 has its CatchHandler @ 004b3644 */
      sVar5 = *(ulong *)((long)*(void **)param_3 + -0x18);
      uVar7 = *(ulong *)((long)*(void **)(p_Var3 + 0x20) + -0x18);
      lVar1 = uVar7 - sVar5;
      if (uVar7 < sVar5 || lVar1 == 0) {
        sVar5 = uVar7;
      }
      iVar2 = memcmp(*(void **)(p_Var3 + 0x20),*(void **)param_3,sVar5);
      if (iVar2 != 0) {
        if (-1 < iVar2) goto LAB_004b36f8;
LAB_004b36c8:
        p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
                  *)0x0;
        goto LAB_004b370c;
      }
      if (lVar1 < 0x80000000) {
        iVar2 = (int)lVar1;
        if (lVar1 < -0x7fffffff) {
          iVar2 = -0x80000000;
        }
        if (iVar2 < 0) goto LAB_004b36c8;
      }
    }
LAB_004b36f8:
                    /* catch() { ... } // from try @ 004b367c with catch @ 004b36f8 */
                    /* catch() { ... } // from try @ 004b3710 with catch @ 004b36fc */
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
                    /* try { // try from 004b35e8 to 005b35eb has its CatchHandler @ 004b363c */
        iVar2 = (int)lVar1;
        if (lVar1 < -0x7fffffff) {
          iVar2 = -0x80000000;
        }
        goto joined_r0x004b35f4;
      }
    }
    else {
joined_r0x004b35f4:
      if (iVar2 < 0) {
        p_Var6 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
                   **)(this + 0x18);
        p_Var3 = p_Var6;
        if (p_Var6 == param_2) goto LAB_004b370c;
        p_Var3 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
                  *)FUN_0064c700(param_2);
        uVar7 = *(ulong *)((long)*(void **)(p_Var3 + 0x20) + -0x18);
                    /* try { // try from 004b358c to 005b358f has its CatchHandler @ 004b364c */
        lVar1 = uVar7 - __n;
        if (uVar7 < __n || lVar1 == 0) {
          __n = uVar7;
        }
        iVar2 = memcmp(*(void **)(p_Var3 + 0x20),__s1,__n);
        if (iVar2 == 0) {
          if (0x7fffffff < lVar1) goto LAB_004b36f8;
                    /* try { // try from 004b36f0 to 005b36fb has its CatchHandler @ 004b3524 */
          iVar2 = (int)lVar1;
          if (lVar1 < -0x7fffffff) {
            iVar2 = -0x80000000;
          }
        }
        if (iVar2 < 0) {
                    /* try { // try from 004b3734 to 005b374f has its CatchHandler @ 004b3734
                       catch() { ... } // from try @ 004b3734 with catch @ 004b3734
                       catch() { ... } // from try @ 004b3754 with catch @ 004b3734 */
          p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
                    *)0x0;
          if (*(long *)(p_Var3 + 0x18) != 0) {
            p_Var6 = param_2;
            p_Var3 = param_2;
          }
          goto LAB_004b370c;
        }
        goto LAB_004b36f8;
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
        goto joined_r0x004b369c;
      }
    }
    else {
joined_r0x004b369c:
      if (iVar2 < 0) {
        p_Var3 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
                   **)(this + 0x20);
                    /* try { // try from 004b361c to 005b361f has its CatchHandler @ 004b3634 */
        if (p_Var3 == param_2) goto LAB_004b36c8;
                    /* try { // try from 004b3620 to 005b367b has its CatchHandler @ 004b3524 */
        p_Var4 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
                  *)FUN_0064c640(param_2);
                    /* catch() { ... } // from try @ 004b361c with catch @ 004b3634 */
        sVar5 = *(ulong *)((long)*(void **)(p_Var4 + 0x20) + -0x18);
        lVar1 = __n - sVar5;
                    /* catch() { ... } // from try @ 004b35e8 with catch @ 004b363c */
        if (__n < sVar5 || lVar1 == 0) {
          sVar5 = __n;
        }
        iVar2 = memcmp(__s1,*(void **)(p_Var4 + 0x20),sVar5);
                    /* catch() { ... } // from try @ 004b35b4 with catch @ 004b3644 */
        if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 004b358c with catch @ 004b364c */
          if (0x7fffffff < lVar1) goto LAB_004b36f8;
          iVar2 = (int)lVar1;
          if (lVar1 < -0x7fffffff) {
            iVar2 = -0x80000000;
          }
        }
        if (iVar2 < 0) {
          p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
                    *)0x0;
          p_Var3 = param_2;
          if (*(long *)(param_2 + 0x18) != 0) {
            p_Var6 = p_Var4;
            p_Var3 = p_Var4;
          }
          goto LAB_004b370c;
        }
        goto LAB_004b36f8;
      }
    }
    p_Var6 = param_2;
    p_Var3 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
              *)0x0;
  }
LAB_004b370c:
                    /* try { // try from 004b370c to 005b370f has its CatchHandler @ 004b3720 */
  auVar8._8_8_ = p_Var3;
  auVar8._0_8_ = p_Var6;
                    /* try { // try from 004b3710 to 005b3733 has its CatchHandler @ 004b36fc */
                    /* catch() { ... } // from try @ 004b370c with catch @ 004b3720 */
  return auVar8;
}


