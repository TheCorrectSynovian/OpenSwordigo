/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0055f6d0
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>::equal_range
 * Signature: undefined __thiscall equal_range(_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const,
   Caver::ObjectLibrary::ObjectTemplateInfo>, std::_Select1st<std::pair<std::string const,
   Caver::ObjectLibrary::ObjectTemplateInfo> >, std::less<std::string >,
   std::allocator<std::pair<std::string const, Caver::ObjectLibrary::ObjectTemplateInfo> >
   >::equal_range(std::string const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
::equal_range(_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
              *this,string *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  size_t sVar4;
  _Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
  *p_Var5;
  _Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
  *p_Var6;
  void *__s2;
  void *__s1;
  _Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
  *p_Var7;
  ulong uVar8;
  size_t __n;
  _Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
  *p_Var9;
  undefined1 auVar10 [16];
  
  p_Var5 = this + 8;
  p_Var7 = p_Var5;
  if (*(_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
        **)(this + 0x10) !=
      (_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
       *)0x0) {
    __s2 = *(void **)param_1;
    uVar8 = *(ulong *)((long)__s2 + -0x18);
    p_Var6 = *(_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
               **)(this + 0x10);
LAB_0055f70c:
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
          goto joined_r0x0055f750;
        }
LAB_0055f754:
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
            goto LAB_0055f77c;
          }
          p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
                     **)(p_Var6 + 0x10);
        }
        else {
LAB_0055f77c:
          p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
                     **)(p_Var6 + 0x10);
          if (iVar2 < 0) {
            p_Var5 = p_Var6;
            p_Var7 = p_Var6;
            p_Var6 = p_Var9;
            if (p_Var9 == (_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
                           *)0x0) break;
            goto LAB_0055f70c;
          }
        }
        p_Var7 = *(_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
                   **)(p_Var6 + 0x18);
        goto joined_r0x0055f7c0;
      }
joined_r0x0055f750:
      if (-1 < iVar2) goto LAB_0055f754;
                    /* catch() { ... } // from try @ 0055f614 with catch @ 0055f730 */
      p_Var9 = p_Var6 + 0x18;
                    /* catch() { ... } // from try @ 0055f4e8 with catch @ 0055f734 */
                    /* catch() { ... } // from try @ 0055f44c with catch @ 0055f738 */
      p_Var7 = p_Var5;
      p_Var6 = *(_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
                 **)p_Var9;
    } while (*(_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
               **)p_Var9 !=
             (_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
              *)0x0);
  }
LAB_0055f794:
  auVar10._8_8_ = p_Var5;
  auVar10._0_8_ = p_Var7;
                    /* catch() { ... } // from try @ 0055f434 with catch @ 0055f7a0 */
                    /* catch() { ... } // from try @ 0055f4c0 with catch @ 0055f7a4
                       catch() { ... } // from try @ 0055f63c with catch @ 0055f7a4 */
                    /* catch() { ... } // from try @ 0055f538 with catch @ 0055f7ac */
  return auVar10;
joined_r0x0055f7c0:
  if (p_Var9 != (_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
                 *)0x0) {
    do {
      uVar3 = *(ulong *)((long)*(void **)(p_Var9 + 0x20) + -0x18);
      lVar1 = uVar3 - uVar8;
      sVar4 = uVar8;
      if (uVar3 < uVar8 || lVar1 == 0) {
        sVar4 = uVar3;
      }
      iVar2 = memcmp(*(void **)(p_Var9 + 0x20),__s2,sVar4);
      if (iVar2 == 0) {
        if (0x7fffffff < lVar1) goto LAB_0055f814;
                    /* catch() { ... } // from try @ 0055f50c with catch @ 0055f808 */
        iVar2 = (int)lVar1;
        if (lVar1 < -0x7fffffff) {
          iVar2 = -0x80000000;
        }
      }
      if (-1 < iVar2) goto LAB_0055f814;
      p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
                 **)(p_Var9 + 0x18);
      if (p_Var9 == (_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
                     *)0x0) break;
    } while( true );
  }
  goto joined_r0x0055f824;
LAB_0055f814:
  p_Var6 = p_Var9;
  p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
             **)(p_Var9 + 0x10);
  goto joined_r0x0055f7c0;
joined_r0x0055f824:
  p_Var9 = p_Var7;
  p_Var7 = p_Var6;
  if (p_Var9 != (_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
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
          goto joined_r0x0055f878;
        }
      }
      else {
joined_r0x0055f878:
        if (iVar2 < 0) goto LAB_0055f854;
      }
      p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
                 **)(p_Var9 + 0x18);
      if (p_Var9 == (_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
                     *)0x0) break;
    } while( true );
  }
  goto LAB_0055f794;
LAB_0055f854:
                    /* try { // try from 0055f854 to 0065f8b7 has its CatchHandler @ 0055f404 */
  p_Var7 = *(_Rb_tree<std::string,std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>,std::_Select1st<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::ObjectLibrary::ObjectTemplateInfo>>>
             **)(p_Var9 + 0x10);
  p_Var5 = p_Var9;
  goto joined_r0x0055f824;
}


