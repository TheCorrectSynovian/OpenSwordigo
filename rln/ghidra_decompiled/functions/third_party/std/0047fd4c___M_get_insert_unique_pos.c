/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0047fd4c
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>::_M_get_insert_unique_pos
 * Signature: undefined __thiscall _M_get_insert_unique_pos(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::shared_ptr<Caver::Achievement> >,
   std::_Select1st<std::pair<std::string const, boost::shared_ptr<Caver::Achievement> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::shared_ptr<Caver::Achievement> > > >::_M_get_insert_unique_pos(std::string const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
::_M_get_insert_unique_pos
          (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
           *this,string *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
  *p_Var4;
  size_t sVar5;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
  *p_Var6;
  void *__s1;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
  *p_Var7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  if (*(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
        **)(this + 0x10) ==
      (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
       *)0x0) {
    p_Var6 = this + 8;
LAB_0047fdf8:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0047fd84 with catch @ 0047fe00
                        */
    if (p_Var6 == *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
                    **)(this + 0x18)) {
      p_Var7 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
                *)0x0;
      goto LAB_0047fe68;
    }
                    /* try { // try from 0047fe04 to 0057fe0b has its CatchHandler @ 0047fe1c */
    p_Var4 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
              *)FUN_0064c700(p_Var6);
                    /* try { // try from 0047fe0c to 0057fe1f has its CatchHandler @ 0047fd04 */
  }
  else {
    __s1 = *(void **)param_1;
                    /* try { // try from 0047fd84 to 0057fd87 has its CatchHandler @ 0047fe00 */
                    /* try { // try from 0047fd88 to 0057fe03 has its CatchHandler @ 0047fd04 */
    uVar8 = *(ulong *)((long)__s1 + -0x18);
    p_Var4 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
               **)(this + 0x10);
    do {
      while( true ) {
        p_Var6 = p_Var4;
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
          if (iVar3 < 0) goto LAB_0047fdb0;
        }
LAB_0047fdd8:
        bVar2 = false;
        p_Var4 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
                   **)(p_Var6 + 0x18);
        if (*(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
              **)(p_Var6 + 0x18) ==
            (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
             *)0x0) goto LAB_0047fde8;
      }
      if (-1 < iVar3) goto LAB_0047fdd8;
LAB_0047fdb0:
      bVar2 = true;
      p_Var4 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
                 **)(p_Var6 + 0x10);
    } while (*(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
               **)(p_Var6 + 0x10) !=
             (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
              *)0x0);
LAB_0047fde8:
    p_Var4 = p_Var6;
    if (bVar2) goto LAB_0047fdf8;
  }
  uVar8 = *(ulong *)((long)*(void **)(p_Var4 + 0x20) + -0x18);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0047fe04 with catch @ 0047fe1c
                        */
  sVar5 = *(ulong *)((long)*(void **)param_1 + -0x18);
  lVar1 = uVar8 - sVar5;
  if (uVar8 < sVar5 || lVar1 == 0) {
    sVar5 = uVar8;
  }
  iVar3 = memcmp(*(void **)(p_Var4 + 0x20),*(void **)param_1,sVar5);
  if (iVar3 == 0) {
    if (0x7fffffff < lVar1) {
      p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
                *)0x0;
      p_Var7 = p_Var4;
      goto LAB_0047fe68;
    }
    iVar3 = (int)lVar1;
    if (lVar1 < -0x7fffffff) {
      iVar3 = -0x80000000;
    }
  }
  p_Var7 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
            *)0x0;
  if (-1 < iVar3) {
    p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::Achievement>>>>
              *)0x0;
    p_Var7 = p_Var4;
  }
LAB_0047fe68:
  auVar9._8_8_ = p_Var6;
  auVar9._0_8_ = p_Var7;
                    /* catch() { ... } // from try @ 0047feb0 with catch @ 0047fe80 */
  return auVar9;
}


