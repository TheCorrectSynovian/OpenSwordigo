/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004dfa34
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>::equal_range
 * Signature: undefined __thiscall equal_range(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, unsigned long>,
   std::_Select1st<std::pair<std::string const, unsigned long> >, std::less<std::string >,
   std::allocator<std::pair<std::string const, unsigned long> > >::equal_range(std::string const&)
    */

undefined1  [16] __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
::equal_range(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
              *this,string *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  size_t sVar4;
  _Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
  *p_Var5;
  _Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
  *p_Var6;
  void *__s2;
  void *__s1;
  _Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
  *p_Var7;
  ulong uVar8;
  size_t __n;
  _Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
  *p_Var9;
  undefined1 auVar10 [16];
  
  p_Var5 = this + 8;
  p_Var7 = p_Var5;
  if (*(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
        **)(this + 0x10) !=
      (_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
       *)0x0) {
    __s2 = *(void **)param_1;
    uVar8 = *(ulong *)((long)__s2 + -0x18);
    p_Var6 = *(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
               **)(this + 0x10);
LAB_004dfa70:
    do {
      __s1 = *(void **)(p_Var6 + 0x20);
      __n = *(ulong *)((long)__s1 + -0x18);
      lVar1 = __n - uVar8;
      sVar4 = uVar8;
      if (__n < uVar8 || lVar1 == 0) {
        sVar4 = __n;
      }
      iVar2 = memcmp(__s1,__s2,sVar4);
      if (iVar2 == 0) {
        if (lVar1 < 0x80000000) {
          iVar2 = (int)lVar1;
          if (lVar1 < -0x7fffffff) {
            iVar2 = -0x80000000;
          }
          goto joined_r0x004dfab4;
        }
LAB_004dfab8:
        lVar1 = uVar8 - __n;
        if (uVar8 < __n || lVar1 == 0) {
          __n = uVar8;
        }
        iVar2 = memcmp(__s2,__s1,__n);
        if (iVar2 == 0) {
          if (lVar1 < 0x80000000) {
            iVar2 = (int)lVar1;
            if (lVar1 < -0x7fffffff) {
              iVar2 = -0x80000000;
            }
            goto LAB_004dfae0;
          }
          p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                     **)(p_Var6 + 0x10);
        }
        else {
LAB_004dfae0:
          p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                     **)(p_Var6 + 0x10);
          if (iVar2 < 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004df8b0 with catch @ 004dfaec
                        */
                    /* try { // try from 004dfaf0 to 005dfaf7 has its CatchHandler @ 004dfb00 */
            p_Var5 = p_Var6;
            p_Var7 = p_Var6;
            p_Var6 = p_Var9;
            if (p_Var9 == (_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                           *)0x0) break;
            goto LAB_004dfa70;
          }
        }
        p_Var7 = *(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                   **)(p_Var6 + 0x18);
        goto joined_r0x004dfb24;
      }
joined_r0x004dfab4:
      if (-1 < iVar2) goto LAB_004dfab8;
      p_Var9 = p_Var6 + 0x18;
      p_Var7 = p_Var5;
      p_Var6 = *(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                 **)p_Var9;
    } while (*(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
               **)p_Var9 !=
             (_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
              *)0x0);
  }
LAB_004dfaf8:
                    /* try { // try from 004dfaf8 to 005dfb03 has its CatchHandler @ 004df868 */
  auVar10._8_8_ = p_Var5;
  auVar10._0_8_ = p_Var7;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004dfaf0 with catch @ 004dfb00
                        */
                    /* catch() { ... } // from try @ 004dfb28 with catch @ 004dfb04
                       catch() { ... } // from try @ 004dfb44 with catch @ 004dfb04 */
  return auVar10;
joined_r0x004dfb24:
                    /* try { // try from 004dfb24 to 005dfb27 has its CatchHandler @ 004dfb38 */
  if (p_Var9 != (_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                 *)0x0) {
    do {
                    /* catch() { ... } // from try @ 004dfb24 with catch @ 004dfb38 */
                    /* try { // try from 004dfb3c to 005dfb43 has its CatchHandler @ 004dfb4c */
      uVar3 = *(ulong *)((long)*(void **)(p_Var9 + 0x20) + -0x18);
      lVar1 = uVar3 - uVar8;
      sVar4 = uVar8;
                    /* try { // try from 004dfb44 to 005dfb4f has its CatchHandler @ 004dfb04 */
      if (uVar3 < uVar8 || lVar1 == 0) {
        sVar4 = uVar3;
      }
      iVar2 = memcmp(*(void **)(p_Var9 + 0x20),__s2,sVar4);
                    /* catch() { ... } // from try @ 004dfb3c with catch @ 004dfb4c */
      if (iVar2 == 0) {
        if (0x7fffffff < lVar1) goto LAB_004dfb78;
        iVar2 = (int)lVar1;
        if (lVar1 < -0x7fffffff) {
          iVar2 = -0x80000000;
        }
      }
      if (-1 < iVar2) goto LAB_004dfb78;
      p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                 **)(p_Var9 + 0x18);
      if (p_Var9 == (_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                     *)0x0) break;
    } while( true );
  }
  goto joined_r0x004dfb88;
LAB_004dfb78:
  p_Var6 = p_Var9;
  p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
             **)(p_Var9 + 0x10);
  goto joined_r0x004dfb24;
joined_r0x004dfb88:
  p_Var9 = p_Var7;
  p_Var7 = p_Var6;
  if (p_Var9 != (_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                 *)0x0) {
    do {
      sVar4 = *(ulong *)((long)*(void **)(p_Var9 + 0x20) + -0x18);
      lVar1 = uVar8 - sVar4;
      if (uVar8 < sVar4 || lVar1 == 0) {
        sVar4 = uVar8;
      }
      iVar2 = memcmp(__s2,*(void **)(p_Var9 + 0x20),sVar4);
      if (iVar2 == 0) {
        if (lVar1 < 0x80000000) {
          iVar2 = (int)lVar1;
          if (lVar1 < -0x7fffffff) {
            iVar2 = -0x80000000;
          }
          goto joined_r0x004dfbdc;
        }
      }
      else {
joined_r0x004dfbdc:
        if (iVar2 < 0) goto LAB_004dfbb8;
      }
      p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                 **)(p_Var9 + 0x18);
      if (p_Var9 == (_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
                     *)0x0) break;
    } while( true );
  }
  goto LAB_004dfaf8;
LAB_004dfbb8:
  p_Var7 = *(_Rb_tree<std::string,std::pair<std::string_const,unsigned_long>,std::_Select1st<std::pair<std::string_const,unsigned_long>>,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_long>>>
             **)(p_Var9 + 0x10);
  p_Var5 = p_Var9;
  goto joined_r0x004dfb88;
}


