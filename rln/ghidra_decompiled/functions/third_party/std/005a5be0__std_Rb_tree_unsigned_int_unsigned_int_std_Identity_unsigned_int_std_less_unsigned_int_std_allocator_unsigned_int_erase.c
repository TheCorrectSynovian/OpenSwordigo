/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a5be0
 * Function: std::_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>::erase
 * Signature: undefined __thiscall erase(_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>> * this, uint * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<unsigned int, unsigned int, std::_Identity<unsigned int>, std::less<unsigned int>,
   std::allocator<unsigned int> >::erase(unsigned int const&) */

long __thiscall
std::
_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
::erase(_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
        *this,uint *param_1)

{
  _Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
  *p_Var1;
  uint uVar2;
  _Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
  *p_Var3;
  void *pvVar4;
  _Rb_tree_node *p_Var5;
  long lVar6;
  _Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
  *p_Var7;
  _Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
  *p_Var8;
  _Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
  *p_Var9;
  _Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
  *p_Var10;
  long lVar11;
  
                    /* try { // try from 005a5bf0 to 006a5c2f has its CatchHandler @ 005a5b3c */
  p_Var5 = *(_Rb_tree_node **)(this + 0x10);
  p_Var1 = this + 8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005a5bc8 with catch @ 005a5c04
                        */
  p_Var9 = p_Var1;
  p_Var10 = p_Var1;
  if (p_Var5 != (_Rb_tree_node *)0x0) {
    uVar2 = *param_1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005a5b80 with catch @ 005a5c0c
                        */
    p_Var3 = (_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
              *)p_Var5;
    do {
      while (p_Var8 = p_Var3, p_Var10 = p_Var9, uVar2 <= *(uint *)(p_Var8 + 0x20)) {
                    /* try { // try from 005a5c30 to 006a5c5f has its CatchHandler @ 005a5c68 */
        p_Var3 = *(_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
                   **)(p_Var8 + 0x10);
        if (*(uint *)(p_Var8 + 0x20) <= uVar2) {
          p_Var7 = *(_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
                     **)(p_Var8 + 0x18);
                    /* try { // try from 005a5c60 to 006a5c6b has its CatchHandler @ 005a5b3c */
          while (p_Var3 != (_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
                            *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005a5c30 with catch @ 005a5c68
                        */
                    /* catch() { ... } // from try @ 005a5c80 with catch @ 005a5c6c */
            p_Var9 = p_Var3 + 0x18;
            if (uVar2 <= *(uint *)(p_Var3 + 0x20)) {
              p_Var8 = p_Var3;
              p_Var9 = p_Var3 + 0x10;
            }
                    /* try { // try from 005a5c7c to 006a5c7f has its CatchHandler @ 005a5c90 */
            p_Var3 = *(_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
                       **)p_Var9;
                    /* try { // try from 005a5c80 to 006a5ca3 has its CatchHandler @ 005a5c6c */
          }
          while (p_Var9 = p_Var8,
                p_Var7 != (_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
                           *)0x0) {
                    /* catch() { ... } // from try @ 005a5c7c with catch @ 005a5c90 */
            p_Var9 = p_Var7;
            p_Var3 = p_Var7 + 0x10;
            if (*(uint *)(p_Var7 + 0x20) <= uVar2) {
              p_Var9 = p_Var10;
              p_Var3 = p_Var7 + 0x18;
            }
            p_Var10 = p_Var9;
            p_Var7 = *(_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
                       **)p_Var3;
          }
          goto LAB_005a5ca8;
        }
        p_Var9 = p_Var8;
        p_Var10 = p_Var8;
        if (p_Var3 == (_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
                       *)0x0) goto LAB_005a5ca8;
      }
      p_Var3 = *(_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
                 **)(p_Var8 + 0x18);
    } while (*(_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
               **)(p_Var8 + 0x18) !=
             (_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
              *)0x0);
  }
LAB_005a5ca8:
  lVar11 = *(long *)(this + 0x28);
  lVar6 = lVar11;
  if ((p_Var1 == p_Var10) &&
     (*(_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
        **)(this + 0x18) == p_Var9)) {
    _M_erase(this,p_Var5);
    lVar6 = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
      **)(this + 0x18) = p_Var1;
    *(_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
      **)(this + 0x20) = p_Var1;
    *(undefined8 *)(this + 0x28) = 0;
  }
  else {
    while (p_Var9 != p_Var10) {
      p_Var3 = (_Rb_tree<unsigned_int,unsigned_int,std::_Identity<unsigned_int>,std::less<unsigned_int>,std::allocator<unsigned_int>>
                *)FUN_0064c6a0(p_Var9);
      pvVar4 = (void *)FUN_0064ca60(p_Var9,p_Var1);
      operator_delete(pvVar4);
      lVar6 = *(long *)(this + 0x28);
      *(long *)(this + 0x28) = lVar6 + -1;
      lVar6 = lVar6 + -1;
      p_Var9 = p_Var3;
    }
  }
  return lVar11 - lVar6;
}


