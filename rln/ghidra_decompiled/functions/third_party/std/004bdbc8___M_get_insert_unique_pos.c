/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bdbc8
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>::_M_get_insert_unique_pos
 * Signature: undefined __thiscall _M_get_insert_unique_pos(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::shared_ptr<Caver::MapZone> >,
   std::_Select1st<std::pair<std::string const, boost::shared_ptr<Caver::MapZone> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::shared_ptr<Caver::MapZone> > > >::_M_get_insert_unique_pos(std::string const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
::_M_get_insert_unique_pos
          (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
           *this,string *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
  *p_Var4;
  size_t sVar5;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
  *p_Var6;
  void *__s1;
  _Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
  *p_Var7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
                    /* catch() { ... } // from try @ 004bd214 with catch @ 004bdbd4 */
  if (*(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
        **)(this + 0x10) ==
      (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
       *)0x0) {
    p_Var6 = this + 8;
LAB_004bdc74:
    if (p_Var6 == *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
                    **)(this + 0x18)) {
      p_Var7 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
                *)0x0;
      goto LAB_004bdce4;
    }
    p_Var4 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
              *)FUN_0064c700(p_Var6);
  }
  else {
    __s1 = *(void **)param_1;
    uVar8 = *(ulong *)((long)__s1 + -0x18);
    p_Var4 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
               **)(this + 0x10);
    do {
      while( true ) {
        p_Var6 = p_Var4;
                    /* catch() { ... } // from try @ 004bd1f0 with catch @ 004bdc0c */
                    /* catch() { ... } // from try @ 004bd4f0 with catch @ 004bdc10 */
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
          if (iVar3 < 0) goto LAB_004bdc2c;
        }
LAB_004bdc54:
        bVar2 = false;
        p_Var4 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
                   **)(p_Var6 + 0x18);
        if (*(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
              **)(p_Var6 + 0x18) ==
            (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
             *)0x0) goto LAB_004bdc64;
      }
      if (-1 < iVar3) goto LAB_004bdc54;
LAB_004bdc2c:
      bVar2 = true;
      p_Var4 = *(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
                 **)(p_Var6 + 0x10);
    } while (*(_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
               **)(p_Var6 + 0x10) !=
             (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
              *)0x0);
LAB_004bdc64:
    p_Var4 = p_Var6;
    if (bVar2) goto LAB_004bdc74;
  }
  uVar8 = *(ulong *)((long)*(void **)(p_Var4 + 0x20) + -0x18);
  sVar5 = *(ulong *)((long)*(void **)param_1 + -0x18);
  lVar1 = uVar8 - sVar5;
  if (uVar8 < sVar5 || lVar1 == 0) {
    sVar5 = uVar8;
  }
                    /* catch() { ... } // from try @ 004bd4a0 with catch @ 004bdca4 */
  iVar3 = memcmp(*(void **)(p_Var4 + 0x20),*(void **)param_1,sVar5);
                    /* catch() { ... } // from try @ 004bd444 with catch @ 004bdca8 */
  if (iVar3 == 0) {
    if (0x7fffffff < lVar1) {
      p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
                *)0x0;
      p_Var7 = p_Var4;
      goto LAB_004bdce4;
    }
    iVar3 = (int)lVar1;
    if (lVar1 < -0x7fffffff) {
      iVar3 = -0x80000000;
    }
  }
  p_Var7 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
            *)0x0;
  if (-1 < iVar3) {
    p_Var6 = (_Rb_tree<std::string,std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::shared_ptr<Caver::MapZone>>>>
              *)0x0;
    p_Var7 = p_Var4;
  }
LAB_004bdce4:
  auVar9._8_8_ = p_Var6;
  auVar9._0_8_ = p_Var7;
                    /* catch() { ... } // from try @ 004bd418 with catch @ 004bdd04 */
  return auVar9;
}


