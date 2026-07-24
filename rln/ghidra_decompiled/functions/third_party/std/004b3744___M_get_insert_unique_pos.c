/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b3744
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>::_M_get_insert_unique_pos
 * Signature: undefined __thiscall _M_get_insert_unique_pos(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::shared_ptr<Caver::EntityClass> >,
   std::_Select1st<std::pair<std::string const, boost::shared_ptr<Caver::EntityClass> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::shared_ptr<Caver::EntityClass> > > >::_M_get_insert_unique_pos(std::string const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
::_M_get_insert_unique_pos
          (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
           *this,string *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
  *p_Var4;
  size_t sVar5;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
  *p_Var6;
  void *__s1;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
  *p_Var7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
                    /* try { // try from 004b3750 to 005b3753 has its CatchHandler @ 004b37a0 */
                    /* try { // try from 004b3754 to 005b37b3 has its CatchHandler @ 004b3734 */
  if (*(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
        **)(this + 0x10) ==
      (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
       *)0x0) {
    p_Var6 = this + 8;
LAB_004b37f0:
    if (p_Var6 == *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
                    **)(this + 0x18)) {
      p_Var7 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
                *)0x0;
      goto LAB_004b3860;
    }
    p_Var4 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
              *)FUN_0064c700(p_Var6);
  }
  else {
    __s1 = *(void **)param_1;
    uVar8 = *(ulong *)((long)__s1 + -0x18);
    p_Var4 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
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
                    /* catch() { ... } // from try @ 004b3750 with catch @ 004b37a0 */
        if (iVar3 != 0) break;
        if (lVar1 < 0x80000000) {
          iVar3 = (int)lVar1;
          if (lVar1 < -0x7fffffff) {
            iVar3 = -0x80000000;
          }
          if (iVar3 < 0) goto LAB_004b37a8;
        }
LAB_004b37d0:
        bVar2 = false;
        p_Var4 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
                   **)(p_Var6 + 0x18);
        if (*(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
              **)(p_Var6 + 0x18) ==
            (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
             *)0x0) goto LAB_004b37e0;
      }
      if (-1 < iVar3) goto LAB_004b37d0;
LAB_004b37a8:
      bVar2 = true;
      p_Var4 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
                 **)(p_Var6 + 0x10);
    } while (*(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
               **)(p_Var6 + 0x10) !=
             (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
              *)0x0);
LAB_004b37e0:
    p_Var4 = p_Var6;
    if (bVar2) goto LAB_004b37f0;
  }
  uVar8 = *(ulong *)((long)*(void **)(p_Var4 + 0x20) + -0x18);
                    /* catch() { ... } // from try @ 004b3844 with catch @ 004b3814 */
  sVar5 = *(ulong *)((long)*(void **)param_1 + -0x18);
  lVar1 = uVar8 - sVar5;
  if (uVar8 < sVar5 || lVar1 == 0) {
    sVar5 = uVar8;
  }
  iVar3 = memcmp(*(void **)(p_Var4 + 0x20),*(void **)param_1,sVar5);
  if (iVar3 == 0) {
                    /* try { // try from 004b3830 to 005b3843 has its CatchHandler @ 004b3868 */
    if (0x7fffffff < lVar1) {
      p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
                *)0x0;
      p_Var7 = p_Var4;
      goto LAB_004b3860;
    }
                    /* try { // try from 004b3844 to 005b386b has its CatchHandler @ 004b3814 */
    iVar3 = (int)lVar1;
    if (lVar1 < -0x7fffffff) {
      iVar3 = -0x80000000;
    }
  }
  p_Var7 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
            *)0x0;
  if (-1 < iVar3) {
    p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::EntityClass>>>>
              *)0x0;
    p_Var7 = p_Var4;
  }
LAB_004b3860:
  auVar9._8_8_ = p_Var6;
  auVar9._0_8_ = p_Var7;
                    /* catch() { ... } // from try @ 004b3830 with catch @ 004b3868 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004b3968 with catch @ 004b3878
                       catch(type#1 @ 00000000) { ... } // from try @ 004b3a84 with catch @ 004b3878
                        */
  return auVar9;
}


