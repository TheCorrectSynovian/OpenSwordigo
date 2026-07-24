/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ba0ec
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>::find
 * Signature: undefined __thiscall find(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::shared_ptr<Caver::LevelState> >,
   std::_Select1st<std::pair<std::string const, boost::shared_ptr<Caver::LevelState> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::shared_ptr<Caver::LevelState> > > >::find(std::string const&) */

_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
* __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
::find(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
       *this,string *param_1)

{
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
  *p_Var1;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
  *p_Var2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  size_t sVar6;
  void *__s2;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
  *p_Var7;
  ulong uVar8;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
  *p_Var9;
  
  p_Var1 = this + 8;
                    /* catch() { ... } // from try @ 004b9f78 with catch @ 004ba114 */
  if (*(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
        **)(this + 0x10) ==
      (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
       *)0x0) {
    return p_Var1;
  }
  __s2 = *(void **)param_1;
  uVar8 = *(ulong *)((long)__s2 + -0x18);
  p_Var7 = p_Var1;
  p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
             **)(this + 0x10);
  do {
    while( true ) {
                    /* try { // try from 004ba138 to 005ba13f has its CatchHandler @ 004ba144 */
      uVar5 = *(ulong *)((long)*(void **)(p_Var9 + 0x20) + -0x18);
      lVar3 = uVar5 - uVar8;
      sVar6 = uVar8;
      if (uVar5 < uVar8 || lVar3 == 0) {
        sVar6 = uVar5;
      }
                    /* catch() { ... } // from try @ 004ba138 with catch @ 004ba144 */
      iVar4 = memcmp(*(void **)(p_Var9 + 0x20),__s2,sVar6);
                    /* catch() { ... } // from try @ 004b9fdc with catch @ 004ba148 */
      if (iVar4 != 0) break;
      if (lVar3 < 0x80000000) {
        iVar4 = (int)lVar3;
        if (lVar3 < -0x7fffffff) {
          iVar4 = -0x80000000;
        }
        if (iVar4 < 0) goto LAB_004ba150;
      }
LAB_004ba174:
      p_Var2 = p_Var9 + 0x10;
                    /* try { // try from 004ba17c to 005ba23b has its CatchHandler @ 004ba25c */
      p_Var7 = p_Var9;
      p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
                 **)p_Var2;
      if (*(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
            **)p_Var2 ==
          (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
           *)0x0) goto LAB_004ba184;
    }
    if (-1 < iVar4) goto LAB_004ba174;
LAB_004ba150:
    p_Var2 = p_Var9 + 0x18;
    p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
               **)p_Var2;
  } while (*(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
             **)p_Var2 !=
           (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::LevelState>>>>
            *)0x0);
LAB_004ba184:
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
    if (0x7fffffff < lVar3) {
      return p_Var7;
    }
                    /* catch() { ... } // from try @ 004b9ea8 with catch @ 004ba1d4
                       catch() { ... } // from try @ 004ba01c with catch @ 004ba1d4 */
    iVar4 = (int)lVar3;
    if (lVar3 < -0x7fffffff) {
      iVar4 = -0x80000000;
    }
  }
  if (-1 < iVar4) {
    return p_Var7;
  }
  return p_Var1;
}


