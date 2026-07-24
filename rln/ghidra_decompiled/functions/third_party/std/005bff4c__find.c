/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bff4c
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>::find
 * Signature: undefined __thiscall find(_Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, Caver::TargetAction<void (std::string
   const&, bool, std::string const&)> >, std::_Select1st<std::pair<std::string const,
   Caver::TargetAction<void (std::string const&, bool, std::string const&)> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const, Caver::TargetAction<void
   (std::string const&, bool, std::string const&)> > > >::find(std::string const&) */

_Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
* __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
::find(_Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
       *this,string *param_1)

{
  _Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
  *p_Var1;
  _Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
  *p_Var2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  size_t sVar6;
  void *__s2;
  _Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
  *p_Var7;
  ulong uVar8;
  _Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
  *p_Var9;
  
                    /* catch() { ... } // from try @ 005bfe50 with catch @ 005bff5c */
  p_Var1 = this + 8;
  if (*(_Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
        **)(this + 0x10) ==
      (_Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
       *)0x0) {
    return p_Var1;
  }
  __s2 = *(void **)param_1;
  uVar8 = *(ulong *)((long)__s2 + -0x18);
  p_Var7 = p_Var1;
  p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
             **)(this + 0x10);
  do {
    while( true ) {
      uVar5 = *(ulong *)((long)*(void **)(p_Var9 + 0x20) + -0x18);
      lVar3 = uVar5 - uVar8;
      sVar6 = uVar8;
      if (uVar5 < uVar8 || lVar3 == 0) {
        sVar6 = uVar5;
      }
      iVar4 = memcmp(*(void **)(p_Var9 + 0x20),__s2,sVar6);
      if (iVar4 != 0) break;
                    /* catch() { ... } // from try @ 005bfe40 with catch @ 005bffc0 */
      if (lVar3 < 0x80000000) {
        iVar4 = (int)lVar3;
        if (lVar3 < -0x7fffffff) {
          iVar4 = -0x80000000;
        }
        if (iVar4 < 0) goto LAB_005bffb0;
      }
LAB_005bffd4:
      p_Var2 = p_Var9 + 0x10;
      p_Var7 = p_Var9;
      p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
                 **)p_Var2;
      if (*(_Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
            **)p_Var2 ==
          (_Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
           *)0x0) goto LAB_005bffe4;
    }
    if (-1 < iVar4) goto LAB_005bffd4;
LAB_005bffb0:
    p_Var2 = p_Var9 + 0x18;
    p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
               **)p_Var2;
  } while (*(_Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
             **)p_Var2 !=
           (_Rb_tree<std::string,std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>,std::_Select1st<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>>>
            *)0x0);
LAB_005bffe4:
  if (p_Var7 == p_Var1) {
    return p_Var1;
  }
  uVar8 = *(ulong *)((long)*(void **)param_1 + -0x18);
  sVar6 = *(ulong *)((long)*(void **)(p_Var7 + 0x20) + -0x18);
  lVar3 = uVar8 - sVar6;
  if (uVar8 < sVar6 || lVar3 == 0) {
    sVar6 = uVar8;
  }
  iVar4 = memcmp(*(void **)param_1,*(void **)(p_Var7 + 0x20),sVar6);
  if (iVar4 == 0) {
                    /* catch() { ... } // from try @ 005bfe2c with catch @ 005c0028 */
                    /* catch() { ... } // from try @ 005bfe84 with catch @ 005c002c */
    if (0x7fffffff < lVar3) {
      return p_Var7;
    }
                    /* try { // try from 005c0030 to 006c0037 has its CatchHandler @ 005c0040 */
                    /* try { // try from 005c0038 to 006c0043 has its CatchHandler @ 005bfdfc */
    iVar4 = (int)lVar3;
    if (lVar3 < -0x7fffffff) {
      iVar4 = -0x80000000;
    }
  }
                    /* catch() { ... } // from try @ 005c0030 with catch @ 005c0040 */
  if (-1 < iVar4) {
                    /* try { // try from 005c0044 to 006c007b has its CatchHandler @ 005c0044
                       catch() { ... } // from try @ 005c0044 with catch @ 005c0044
                       catch() { ... } // from try @ 005c01b4 with catch @ 005c0044
                       catch() { ... } // from try @ 005c0404 with catch @ 005c0044
                       catch() { ... } // from try @ 005c08a8 with catch @ 005c0044 */
    return p_Var7;
  }
  return p_Var1;
}


