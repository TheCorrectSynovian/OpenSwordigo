/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00587580
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>::_M_get_insert_unique_pos
 * Signature: undefined __thiscall _M_get_insert_unique_pos(_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::weak_ptr<Caver::AudioBuffer> >,
   std::_Select1st<std::pair<std::string const, boost::weak_ptr<Caver::AudioBuffer> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::weak_ptr<Caver::AudioBuffer> > > >::_M_get_insert_unique_pos(std::string const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
::_M_get_insert_unique_pos
          (_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
           *this,string *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  _Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
  *p_Var4;
  size_t sVar5;
  _Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
  *p_Var6;
  void *__s1;
  _Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
  *p_Var7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  if (*(_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
        **)(this + 0x10) ==
      (_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
       *)0x0) {
    p_Var6 = this + 8;
LAB_0058762c:
    if (p_Var6 == *(_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
                    **)(this + 0x18)) {
      p_Var7 = (_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
                *)0x0;
      goto LAB_0058769c;
    }
    p_Var4 = (_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
              *)FUN_0064c700(p_Var6);
  }
  else {
    __s1 = *(void **)param_1;
    uVar8 = *(ulong *)((long)__s1 + -0x18);
    p_Var4 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
               **)(this + 0x10);
    do {
      while( true ) {
                    /* try { // try from 005875c0 to 006875cb has its CatchHandler @ 00586478 */
        p_Var6 = p_Var4;
                    /* catch() { ... } // from try @ 00586f5c with catch @ 005875c8 */
                    /* try { // try from 005875cc to 0068768b has its CatchHandler @ 005875cc
                       catch() { ... } // from try @ 005875cc with catch @ 005875cc
                       catch() { ... } // from try @ 005876e8 with catch @ 005875cc
                       catch() { ... } // from try @ 00587798 with catch @ 005875cc
                       catch() { ... } // from try @ 00587820 with catch @ 005875cc
                       catch() { ... } // from try @ 0058794c with catch @ 005875cc
                       catch() { ... } // from try @ 005879fc with catch @ 005875cc
                       catch() { ... } // from try @ 00587cdc with catch @ 005875cc
                       catch() { ... } // from try @ 00587dcc with catch @ 005875cc
                       catch() { ... } // from try @ 00587e94 with catch @ 005875cc
                       catch() { ... } // from try @ 00587f30 with catch @ 005875cc
                       catch() { ... } // from try @ 0058811c with catch @ 005875cc
                       catch() { ... } // from try @ 005882c0 with catch @ 005875cc
                       catch() { ... } // from try @ 00588440 with catch @ 005875cc */
        sVar5 = *(ulong *)((long)*(void **)(p_Var6 + 0x20) + -0x18);
        lVar1 = uVar8 - sVar5;
        if (uVar8 < sVar5 || lVar1 == 0) {
          sVar5 = uVar8;
        }
        iVar3 = memcmp(__s1,*(void **)(p_Var6 + 0x20),sVar5);
        if (iVar3 != 0) break;
        if (lVar1 < 0x80000000) {
          iVar3 = (int)lVar1;
          if (lVar1 < -0x7fffffff) {
            iVar3 = -0x80000000;
          }
          if (iVar3 < 0) goto LAB_005875e4;
        }
LAB_0058760c:
        bVar2 = false;
        p_Var4 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
                   **)(p_Var6 + 0x18);
        if (*(_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
              **)(p_Var6 + 0x18) ==
            (_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
             *)0x0) goto LAB_0058761c;
      }
      if (-1 < iVar3) goto LAB_0058760c;
LAB_005875e4:
      bVar2 = true;
      p_Var4 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
                 **)(p_Var6 + 0x10);
    } while (*(_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
               **)(p_Var6 + 0x10) !=
             (_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
              *)0x0);
LAB_0058761c:
    p_Var4 = p_Var6;
    if (bVar2) goto LAB_0058762c;
  }
  uVar8 = *(ulong *)((long)*(void **)(p_Var4 + 0x20) + -0x18);
  sVar5 = *(ulong *)((long)*(void **)param_1 + -0x18);
  lVar1 = uVar8 - sVar5;
  if (uVar8 < sVar5 || lVar1 == 0) {
    sVar5 = uVar8;
  }
  iVar3 = memcmp(*(void **)(p_Var4 + 0x20),*(void **)param_1,sVar5);
  if (iVar3 == 0) {
    if (0x7fffffff < lVar1) {
      p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
                *)0x0;
      p_Var7 = p_Var4;
      goto LAB_0058769c;
    }
                    /* try { // try from 0058768c to 0068769f has its CatchHandler @ 005882c8 */
    iVar3 = (int)lVar1;
    if (lVar1 < -0x7fffffff) {
      iVar3 = -0x80000000;
    }
  }
  p_Var7 = (_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
            *)0x0;
  if (-1 < iVar3) {
    p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>,std::_Select1st<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::weak_ptr<Caver::AudioBuffer>>>>
              *)0x0;
    p_Var7 = p_Var4;
  }
LAB_0058769c:
  auVar9._8_8_ = p_Var6;
  auVar9._0_8_ = p_Var7;
                    /* try { // try from 005876a0 to 006876b3 has its CatchHandler @ 00588334 */
                    /* try { // try from 005876b4 to 006876c3 has its CatchHandler @ 00588294 */
  return auVar9;
}


