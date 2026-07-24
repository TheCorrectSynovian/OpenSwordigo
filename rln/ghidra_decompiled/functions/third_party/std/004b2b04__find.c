/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b2b04
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>>::find
 * Signature: undefined __thiscall find(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::shared_ptr<Caver::Quest> >,
   std::_Select1st<std::pair<std::string const, boost::shared_ptr<Caver::Quest> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::shared_ptr<Caver::Quest> > > >::find(std::string const&) */

_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>>
* __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>>
::find(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>>
       *this,string *param_1)

{
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>>
  *p_Var1;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>>
  *p_Var2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  size_t sVar6;
  void *__s2;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>>
  *p_Var7;
  ulong uVar8;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>>
  *p_Var9;
  
  p_Var1 = this + 8;
  if (*(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>>
        **)(this + 0x10) ==
      (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>>
       *)0x0) {
    return p_Var1;
  }
  __s2 = *(void **)param_1;
                    /* try { // try from 004b2b3c to 005b2ceb has its CatchHandler @ 004b2a7c */
  uVar8 = *(ulong *)((long)__s2 + -0x18);
  p_Var7 = p_Var1;
  p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>>
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
        if (iVar4 < 0) goto LAB_004b2b68;
      }
LAB_004b2b8c:
      p_Var2 = p_Var9 + 0x10;
      p_Var7 = p_Var9;
      p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>>
                 **)p_Var2;
      if (*(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>>
            **)p_Var2 ==
          (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>>
           *)0x0) goto LAB_004b2b9c;
    }
    if (-1 < iVar4) goto LAB_004b2b8c;
LAB_004b2b68:
    p_Var2 = p_Var9 + 0x18;
    p_Var9 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>>
               **)p_Var2;
  } while (*(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>>
             **)p_Var2 !=
           (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Quest>>>>
            *)0x0);
LAB_004b2b9c:
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
                    /* catch() { ... } // from try @ 004b2b00 with catch @ 004b2c18 */
    return p_Var7;
  }
  return p_Var1;
}


