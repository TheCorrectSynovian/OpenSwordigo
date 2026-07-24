/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00587190
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>::_M_insert_equal
 * Signature: undefined __thiscall _M_insert_equal(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>> * this, pair * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::intrusive_ptr<Caver::SoundEffect>
   >, std::_Select1st<std::pair<std::string const, boost::intrusive_ptr<Caver::SoundEffect> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::intrusive_ptr<Caver::SoundEffect> > > >::_M_insert_equal(std::pair<std::string const,
   boost::intrusive_ptr<Caver::SoundEffect> > const&) */

undefined8 __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
::_M_insert_equal(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
                  *this,pair *param_1)

{
  _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
  *p_Var1;
  long lVar2;
  _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
  *p_Var3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  size_t sVar7;
  _Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
  *p_Var8;
  void *__s1;
  ulong uVar9;
  
  p_Var1 = this + 8;
  p_Var8 = p_Var1;
  if (*(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
        **)(this + 0x10) !=
      (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
       *)0x0) {
    __s1 = *(void **)param_1;
                    /* catch() { ... } // from try @ 00586860 with catch @ 005871d0 */
    uVar9 = *(ulong *)((long)__s1 + -0x18);
    p_Var3 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
               **)(this + 0x10);
    do {
      while( true ) {
                    /* catch() { ... } // from try @ 005867dc with catch @ 005871d4 */
        p_Var8 = p_Var3;
                    /* catch() { ... } // from try @ 0058677c with catch @ 005871d8 */
        sVar7 = *(ulong *)((long)*(void **)(p_Var8 + 0x20) + -0x18);
        lVar2 = uVar9 - sVar7;
        if (uVar9 < sVar7 || lVar2 == 0) {
          sVar7 = uVar9;
        }
        iVar4 = memcmp(__s1,*(void **)(p_Var8 + 0x20),sVar7);
        if (iVar4 != 0) break;
        if (lVar2 < 0x80000000) {
          iVar4 = (int)lVar2;
          if (lVar2 < -0x7fffffff) {
            iVar4 = -0x80000000;
          }
          if (iVar4 < 0) goto LAB_005871f8;
        }
LAB_0058721c:
        p_Var3 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
                   **)(p_Var8 + 0x18);
        if (*(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
              **)(p_Var8 + 0x18) ==
            (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
             *)0x0) goto LAB_00587228;
      }
      if (-1 < iVar4) goto LAB_0058721c;
LAB_005871f8:
      p_Var3 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
                 **)(p_Var8 + 0x10);
    } while (*(_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
               **)(p_Var8 + 0x10) !=
             (_Rb_tree<std::string,std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>,std::_Select1st<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::intrusive_ptr<Caver::SoundEffect>>>>
              *)0x0);
LAB_00587228:
                    /* catch() { ... } // from try @ 005865c0 with catch @ 00587228 */
                    /* catch() { ... } // from try @ 0058656c with catch @ 0058722c */
    if (p_Var1 != p_Var8) {
      uVar9 = *(ulong *)((long)*(void **)param_1 + -0x18);
      sVar7 = *(ulong *)((long)*(void **)(p_Var8 + 0x20) + -0x18);
      lVar2 = uVar9 - sVar7;
      if (uVar9 < sVar7 || lVar2 == 0) {
        sVar7 = uVar9;
      }
      uVar5 = memcmp(*(void **)param_1,*(void **)(p_Var8 + 0x20),sVar7);
      uVar9 = (ulong)uVar5;
      if ((uVar5 == 0) && (uVar9 = 0, lVar2 < 0x80000000)) {
        uVar5 = (uint)lVar2;
        if (lVar2 < -0x7fffffff) {
          uVar5 = 0x80000000;
        }
        uVar9 = (ulong)uVar5;
      }
      uVar9 = uVar9 >> 0x1f;
      goto LAB_00587284;
    }
  }
  uVar9 = 1;
LAB_00587284:
  uVar6 = _M_create_node(this,param_1);
                    /* catch() { ... } // from try @ 00586cb0 with catch @ 00587294
                       catch() { ... } // from try @ 00586d44 with catch @ 00587294 */
  FUN_0064c8a0(uVar9,uVar6,p_Var8,p_Var1);
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
                    /* catch() { ... } // from try @ 005869e8 with catch @ 005872cc
                       catch() { ... } // from try @ 00586a7c with catch @ 005872cc */
  return uVar6;
}


