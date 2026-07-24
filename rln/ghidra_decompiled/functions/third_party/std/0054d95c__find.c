/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054d95c
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>>::find
 * Signature: undefined __thiscall find(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const,
   boost::shared_ptr<Caver::KeyframeAnimation const> >, std::_Select1st<std::pair<std::string const,
   boost::shared_ptr<Caver::KeyframeAnimation const> > >, std::less<std::string >,
   std::allocator<std::pair<std::string const, boost::shared_ptr<Caver::KeyframeAnimation const> > >
   >::find(std::string const&) */

_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>>
* __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>>
::find(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>>
       *this,string *param_1)

{
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>>
  *p_Var1;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>>
  *p_Var2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  size_t sVar6;
  void *__s2;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>>
  *p_Var7;
  ulong uVar8;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>>
  *p_Var9;
  
                    /* try { // try from 0054d95c to 0064dbcb has its CatchHandler @ 0054dbd4 */
  p_Var1 = this + 8;
  if (*(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>>
        **)(this + 0x10) ==
      (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>>
       *)0x0) {
    return p_Var1;
  }
  __s2 = *(void **)param_1;
  uVar8 = *(ulong *)((long)__s2 + -0x18);
  p_Var7 = p_Var1;
  p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>>
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
      if (lVar3 < 0x80000000) {
        iVar4 = (int)lVar3;
        if (lVar3 < -0x7fffffff) {
          iVar4 = -0x80000000;
        }
        if (iVar4 < 0) goto LAB_0054d9c0;
      }
LAB_0054d9e4:
      p_Var2 = p_Var9 + 0x10;
      p_Var7 = p_Var9;
      p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>>
                 **)p_Var2;
      if (*(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>>
            **)p_Var2 ==
          (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>>
           *)0x0) goto LAB_0054d9f4;
    }
    if (-1 < iVar4) goto LAB_0054d9e4;
LAB_0054d9c0:
    p_Var2 = p_Var9 + 0x18;
    p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>>
               **)p_Var2;
  } while (*(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>>
             **)p_Var2 !=
           (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::KeyframeAnimation_const>>>>
            *)0x0);
LAB_0054d9f4:
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


