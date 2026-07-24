/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055e5ac
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>::_M_get_insert_unique_pos
 * Signature: undefined __thiscall _M_get_insert_unique_pos(_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::weak_ptr<Caver::ObjectLibrary> >,
   std::_Select1st<std::pair<std::string const, boost::weak_ptr<Caver::ObjectLibrary> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::weak_ptr<Caver::ObjectLibrary> > > >::_M_get_insert_unique_pos(std::string const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
::_M_get_insert_unique_pos
          (_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
           *this,string *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  _Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
  *p_Var4;
  size_t sVar5;
  _Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
  *p_Var6;
  void *__s1;
  _Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
  *p_Var7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
                    /* catch() { ... } // from try @ 0055e41c with catch @ 0055e5d4 */
  if (*(_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
        **)(this + 0x10) ==
      (_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
       *)0x0) {
    p_Var6 = this + 8;
LAB_0055e658:
    if (p_Var6 == *(_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
                    **)(this + 0x18)) {
      p_Var7 = (_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
                *)0x0;
      goto LAB_0055e6c8;
    }
    p_Var4 = (_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
              *)FUN_0064c700(p_Var6);
                    /* try { // try from 0055e66c to 0065e67f has its CatchHandler @ 0055e834 */
  }
  else {
                    /* catch() { ... } // from try @ 0055e4a8 with catch @ 0055e5d8 */
    __s1 = *(void **)param_1;
    uVar8 = *(ulong *)((long)__s1 + -0x18);
    p_Var4 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
               **)(this + 0x10);
    do {
      while( true ) {
        p_Var6 = p_Var4;
        sVar5 = *(ulong *)((long)*(void **)(p_Var6 + 0x20) + -0x18);
        lVar1 = uVar8 - sVar5;
        if (uVar8 < sVar5 || lVar1 == 0) {
          sVar5 = uVar8;
        }
        iVar3 = memcmp(__s1,*(void **)(p_Var6 + 0x20),sVar5);
        if (iVar3 != 0) break;
        if (lVar1 < 0x80000000) {
          iVar3 = (int)lVar1;
          if (lVar1 < -0x7fffffff) {
            iVar3 = -0x80000000;
          }
          if (iVar3 < 0) goto LAB_0055e610;
        }
LAB_0055e638:
        bVar2 = false;
                    /* try { // try from 0055e640 to 0065e66b has its CatchHandler @ 0055e640
                       catch() { ... } // from try @ 0055e640 with catch @ 0055e640
                       catch() { ... } // from try @ 0055e690 with catch @ 0055e640
                       catch() { ... } // from try @ 0055e724 with catch @ 0055e640 */
        p_Var4 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
                   **)(p_Var6 + 0x18);
        if (*(_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
              **)(p_Var6 + 0x18) ==
            (_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
             *)0x0) goto LAB_0055e648;
      }
      if (-1 < iVar3) goto LAB_0055e638;
LAB_0055e610:
      bVar2 = true;
      p_Var4 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
                 **)(p_Var6 + 0x10);
    } while (*(_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
               **)(p_Var6 + 0x10) !=
             (_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
              *)0x0);
LAB_0055e648:
    p_Var4 = p_Var6;
    if (bVar2) goto LAB_0055e658;
  }
  uVar8 = *(ulong *)((long)*(void **)(p_Var4 + 0x20) + -0x18);
  sVar5 = *(ulong *)((long)*(void **)param_1 + -0x18);
  lVar1 = uVar8 - sVar5;
                    /* try { // try from 0055e684 to 0065e68f has its CatchHandler @ 0055e7f4 */
  if (uVar8 < sVar5 || lVar1 == 0) {
    sVar5 = uVar8;
  }
  iVar3 = memcmp(*(void **)(p_Var4 + 0x20),*(void **)param_1,sVar5);
  if (iVar3 == 0) {
                    /* try { // try from 0055e690 to 0065e6f7 has its CatchHandler @ 0055e640 */
    if (0x7fffffff < lVar1) {
      p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
                *)0x0;
      p_Var7 = p_Var4;
      goto LAB_0055e6c8;
    }
    iVar3 = (int)lVar1;
    if (lVar1 < -0x7fffffff) {
      iVar3 = -0x80000000;
    }
  }
  p_Var7 = (_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
            *)0x0;
  if (-1 < iVar3) {
    p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::ObjectLibrary>>>>
              *)0x0;
    p_Var7 = p_Var4;
  }
LAB_0055e6c8:
  auVar9._8_8_ = p_Var6;
  auVar9._0_8_ = p_Var7;
  return auVar9;
}


