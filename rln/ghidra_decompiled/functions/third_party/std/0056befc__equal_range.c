/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056befc
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>::equal_range
 * Signature: undefined __thiscall equal_range(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const,
   boost::intrusive_ptr<Caver::SceneObjectGroup> >, std::_Select1st<std::pair<std::string const,
   boost::intrusive_ptr<Caver::SceneObjectGroup> > >, std::less<std::string >,
   std::allocator<std::pair<std::string const, boost::intrusive_ptr<Caver::SceneObjectGroup> > >
   >::equal_range(std::string const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
::equal_range(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
              *this,string *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  size_t sVar4;
  _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
  *p_Var5;
  _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
  *p_Var6;
  void *__s2;
  void *__s1;
  _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
  *p_Var7;
  ulong uVar8;
  size_t __n;
  _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
  *p_Var9;
  undefined1 auVar10 [16];
  
                    /* try { // try from 0056bf00 to 0066bf0f has its CatchHandler @ 0056bf9c */
                    /* try { // try from 0056bf10 to 0066c00f has its CatchHandler @ 0056be98 */
  p_Var5 = this + 8;
  p_Var7 = p_Var5;
  if (*(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
        **)(this + 0x10) !=
      (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
       *)0x0) {
    __s2 = *(void **)param_1;
    uVar8 = *(ulong *)((long)__s2 + -0x18);
    p_Var6 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
               **)(this + 0x10);
LAB_0056bf38:
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
          goto joined_r0x0056bf7c;
        }
LAB_0056bf80:
        lVar1 = uVar8 - __n;
        if (uVar8 < __n || lVar1 == 0) {
          __n = uVar8;
        }
        iVar2 = memcmp(__s2,__s1,__n);
        if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 0056bf00 with catch @ 0056bf9c */
          if (lVar1 < 0x80000000) {
            iVar2 = (int)lVar1;
            if (lVar1 < -0x7fffffff) {
              iVar2 = -0x80000000;
            }
            goto LAB_0056bfa8;
          }
          p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
                     **)(p_Var6 + 0x10);
        }
        else {
LAB_0056bfa8:
          p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
                     **)(p_Var6 + 0x10);
          if (iVar2 < 0) {
            p_Var5 = p_Var6;
            p_Var7 = p_Var6;
            p_Var6 = p_Var9;
            if (p_Var9 == (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
                           *)0x0) break;
            goto LAB_0056bf38;
          }
        }
        p_Var7 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
                   **)(p_Var6 + 0x18);
        goto joined_r0x0056bfec;
      }
joined_r0x0056bf7c:
      if (-1 < iVar2) goto LAB_0056bf80;
      p_Var9 = p_Var6 + 0x18;
      p_Var7 = p_Var5;
      p_Var6 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
                 **)p_Var9;
    } while (*(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
               **)p_Var9 !=
             (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
              *)0x0);
  }
LAB_0056bfc0:
  auVar10._8_8_ = p_Var5;
  auVar10._0_8_ = p_Var7;
  return auVar10;
joined_r0x0056bfec:
  if (p_Var9 != (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
                 *)0x0) {
    do {
      uVar3 = *(ulong *)((long)*(void **)(p_Var9 + 0x20) + -0x18);
      lVar1 = uVar3 - uVar8;
      sVar4 = uVar8;
                    /* catch() { ... } // from try @ 0056beec with catch @ 0056c00c */
      if (uVar3 < uVar8 || lVar1 == 0) {
        sVar4 = uVar3;
      }
                    /* try { // try from 0056c010 to 0066c077 has its CatchHandler @ 0056c010
                       catch() { ... } // from try @ 0056c010 with catch @ 0056c010
                       catch() { ... } // from try @ 0056c168 with catch @ 0056c010
                       catch() { ... } // from try @ 0056c2ac with catch @ 0056c010
                       catch() { ... } // from try @ 0056c308 with catch @ 0056c010
                       catch() { ... } // from try @ 0056c410 with catch @ 0056c010 */
      iVar2 = memcmp(*(void **)(p_Var9 + 0x20),__s2,sVar4);
      if (iVar2 == 0) {
        if (0x7fffffff < lVar1) goto LAB_0056c040;
        iVar2 = (int)lVar1;
        if (lVar1 < -0x7fffffff) {
          iVar2 = -0x80000000;
        }
      }
      if (-1 < iVar2) goto LAB_0056c040;
      p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
                 **)(p_Var9 + 0x18);
      if (p_Var9 == (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
                     *)0x0) break;
    } while( true );
  }
  goto joined_r0x0056c050;
LAB_0056c040:
  p_Var6 = p_Var9;
  p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
             **)(p_Var9 + 0x10);
  goto joined_r0x0056bfec;
joined_r0x0056c050:
  p_Var9 = p_Var7;
  p_Var7 = p_Var6;
  if (p_Var9 != (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
                 *)0x0) {
    do {
      sVar4 = *(ulong *)((long)*(void **)(p_Var9 + 0x20) + -0x18);
      lVar1 = uVar8 - sVar4;
      if (uVar8 < sVar4 || lVar1 == 0) {
        sVar4 = uVar8;
      }
      iVar2 = memcmp(__s2,*(void **)(p_Var9 + 0x20),sVar4);
                    /* try { // try from 0056c078 to 0066c07f has its CatchHandler @ 0056c3c8 */
      if (iVar2 == 0) {
        if (lVar1 < 0x80000000) {
          iVar2 = (int)lVar1;
          if (lVar1 < -0x7fffffff) {
            iVar2 = -0x80000000;
          }
          goto joined_r0x0056c0a4;
        }
      }
      else {
joined_r0x0056c0a4:
        if (iVar2 < 0) goto LAB_0056c080;
      }
      p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
                 **)(p_Var9 + 0x18);
      if (p_Var9 == (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
                     *)0x0) break;
    } while( true );
  }
  goto LAB_0056bfc0;
LAB_0056c080:
  p_Var7 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SceneObjectGroup>>>>
             **)(p_Var9 + 0x10);
  p_Var5 = p_Var9;
  goto joined_r0x0056c050;
}


