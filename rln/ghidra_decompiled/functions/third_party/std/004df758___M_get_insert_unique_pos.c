/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004df758
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>::_M_get_insert_unique_pos
 * Signature: undefined __thiscall _M_get_insert_unique_pos(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, unsigned long>,
   std::_Select1st<std::pair<std::string const, unsigned long> >, std::less<std::string >,
   std::allocator<std::pair<std::string const, unsigned long> >
   >::_M_get_insert_unique_pos(std::string const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
::_M_get_insert_unique_pos
          (_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
           *this,string *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  _Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
  *p_Var4;
  size_t sVar5;
  _Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
  *p_Var6;
  void *__s1;
  _Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
  *p_Var7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  if (*(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
        **)(this + 0x10) ==
      (_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
       *)0x0) {
    p_Var6 = this + 8;
LAB_004df804:
    if (p_Var6 == *(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                    **)(this + 0x18)) {
                    /* catch() { ... } // from try @ 004df840 with catch @ 004df850 */
      p_Var7 = (_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                *)0x0;
                    /* try { // try from 004df854 to 005df85b has its CatchHandler @ 004df864 */
      goto LAB_004df874;
    }
    p_Var4 = (_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
              *)FUN_0064c700(p_Var6);
  }
  else {
    __s1 = *(void **)param_1;
    uVar8 = *(ulong *)((long)__s1 + -0x18);
    p_Var4 = *(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
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
                    /* catch() { ... } // from try @ 004df85c with catch @ 004df7d4 */
        if (lVar1 < 0x80000000) {
          iVar3 = (int)lVar1;
          if (lVar1 < -0x7fffffff) {
            iVar3 = -0x80000000;
          }
          if (iVar3 < 0) goto LAB_004df7bc;
        }
LAB_004df7e4:
        bVar2 = false;
        p_Var4 = *(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                   **)(p_Var6 + 0x18);
        if (*(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
              **)(p_Var6 + 0x18) ==
            (_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
             *)0x0) goto LAB_004df7f4;
      }
      if (-1 < iVar3) goto LAB_004df7e4;
LAB_004df7bc:
      bVar2 = true;
      p_Var4 = *(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                 **)(p_Var6 + 0x10);
    } while (*(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
               **)(p_Var6 + 0x10) !=
             (_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
              *)0x0);
LAB_004df7f4:
    p_Var4 = p_Var6;
    if (bVar2) goto LAB_004df804;
  }
  uVar8 = *(ulong *)((long)*(void **)(p_Var4 + 0x20) + -0x18);
  sVar5 = *(ulong *)((long)*(void **)param_1 + -0x18);
  lVar1 = uVar8 - sVar5;
  if (uVar8 < sVar5 || lVar1 == 0) {
    sVar5 = uVar8;
  }
  iVar3 = memcmp(*(void **)(p_Var4 + 0x20),*(void **)param_1,sVar5);
  if (iVar3 == 0) {
                    /* try { // try from 004df840 to 005df843 has its CatchHandler @ 004df850 */
    if (0x7fffffff < lVar1) {
      p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                *)0x0;
      p_Var7 = p_Var4;
      goto LAB_004df874;
    }
                    /* try { // try from 004df85c to 005df867 has its CatchHandler @ 004df7d4 */
                    /* catch() { ... } // from try @ 004df854 with catch @ 004df864 */
    iVar3 = (int)lVar1;
    if (lVar1 < -0x7fffffff) {
      iVar3 = -0x80000000;
    }
  }
                    /* try { // try from 004df868 to 005df8af has its CatchHandler @ 004df868
                       catch(type#1 @ 00000000) { ... } // from try @ 004df868 with catch @ 004df868
                       catch(type#1 @ 00000000) { ... } // from try @ 004df8cc with catch @ 004df868
                       catch(type#1 @ 00000000) { ... } // from try @ 004dfaf8 with catch @ 004df868
                        */
  p_Var7 = (_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
            *)0x0;
  if (-1 < iVar3) {
    p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
              *)0x0;
    p_Var7 = p_Var4;
  }
LAB_004df874:
  auVar9._8_8_ = p_Var6;
  auVar9._0_8_ = p_Var7;
  return auVar9;
}


