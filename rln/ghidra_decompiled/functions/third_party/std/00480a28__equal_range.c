/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00480a28
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>::equal_range
 * Signature: undefined __thiscall equal_range(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::shared_ptr<Caver::Achievement> >,
   std::_Select1st<std::pair<std::string const, boost::shared_ptr<Caver::Achievement> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::shared_ptr<Caver::Achievement> > > >::equal_range(std::string const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
::equal_range(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
              *this,string *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  size_t sVar4;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
  *p_Var5;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
  *p_Var6;
  void *__s2;
  void *__s1;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
  *p_Var7;
  ulong uVar8;
  size_t __n;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
  *p_Var9;
  undefined1 auVar10 [16];
  
  p_Var5 = this + 8;
  p_Var7 = p_Var5;
  if (*(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
        **)(this + 0x10) !=
      (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
       *)0x0) {
    __s2 = *(void **)param_1;
    uVar8 = *(ulong *)((long)__s2 + -0x18);
    p_Var6 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
               **)(this + 0x10);
LAB_00480a64:
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
          goto joined_r0x00480aa8;
        }
LAB_00480aac:
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
            goto LAB_00480ad4;
          }
          p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
                     **)(p_Var6 + 0x10);
        }
        else {
LAB_00480ad4:
          p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
                     **)(p_Var6 + 0x10);
          if (iVar2 < 0) {
            p_Var5 = p_Var6;
            p_Var7 = p_Var6;
            p_Var6 = p_Var9;
            if (p_Var9 == (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
                           *)0x0) break;
            goto LAB_00480a64;
          }
        }
        p_Var7 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
                   **)(p_Var6 + 0x18);
        goto joined_r0x00480b18;
      }
joined_r0x00480aa8:
      if (-1 < iVar2) goto LAB_00480aac;
      p_Var9 = p_Var6 + 0x18;
      p_Var7 = p_Var5;
      p_Var6 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
                 **)p_Var9;
    } while (*(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
               **)p_Var9 !=
             (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
              *)0x0);
  }
LAB_00480aec:
  auVar10._8_8_ = p_Var5;
  auVar10._0_8_ = p_Var7;
                    /* try { // try from 00480af8 to 00580b27 has its CatchHandler @ 00480af8
                       catch() { ... } // from try @ 00480af8 with catch @ 00480af8
                       catch() { ... } // from try @ 00480dc4 with catch @ 00480af8 */
  return auVar10;
joined_r0x00480b18:
  if (p_Var9 != (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
                 *)0x0) {
    do {
                    /* try { // try from 00480b28 to 00580b3b has its CatchHandler @ 004812cc */
      uVar3 = *(ulong *)((long)*(void **)(p_Var9 + 0x20) + -0x18);
      lVar1 = uVar3 - uVar8;
      sVar4 = uVar8;
      if (uVar3 < uVar8 || lVar1 == 0) {
        sVar4 = uVar3;
      }
      iVar2 = memcmp(*(void **)(p_Var9 + 0x20),__s2,sVar4);
      if (iVar2 == 0) {
        if (0x7fffffff < lVar1) goto LAB_00480b6c;
        iVar2 = (int)lVar1;
        if (lVar1 < -0x7fffffff) {
          iVar2 = -0x80000000;
        }
      }
      if (-1 < iVar2) goto LAB_00480b6c;
                    /* try { // try from 00480b48 to 00580b53 has its CatchHandler @ 00481260 */
      p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
                 **)(p_Var9 + 0x18);
      if (p_Var9 == (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
                     *)0x0) break;
    } while( true );
  }
  goto joined_r0x00480b7c;
LAB_00480b6c:
  p_Var6 = p_Var9;
  p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
             **)(p_Var9 + 0x10);
  goto joined_r0x00480b18;
joined_r0x00480b7c:
  p_Var9 = p_Var7;
                    /* try { // try from 00480b7c to 00580bb7 has its CatchHandler @ 004811fc */
  p_Var7 = p_Var6;
  if (p_Var9 != (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
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
          goto joined_r0x00480bd0;
        }
      }
      else {
joined_r0x00480bd0:
        if (iVar2 < 0) goto LAB_00480bac;
      }
      p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
                 **)(p_Var9 + 0x18);
      if (p_Var9 == (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
                     *)0x0) break;
    } while( true );
  }
  goto LAB_00480aec;
LAB_00480bac:
  p_Var7 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
             **)(p_Var9 + 0x10);
  p_Var5 = p_Var9;
  goto joined_r0x00480b7c;
}


