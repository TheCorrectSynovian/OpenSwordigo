/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a7f2c
 * Function: std::_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>::erase
 * Signature: undefined __thiscall erase(_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>> * this, IProfileManagerDelegate * * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<Caver::IProfileManagerDelegate*, Caver::IProfileManagerDelegate*,
   std::_Identity<Caver::IProfileManagerDelegate*>, std::less<Caver::IProfileManagerDelegate*>,
   std::allocator<Caver::IProfileManagerDelegate*> >::erase(Caver::IProfileManagerDelegate* const&)
    */

long __thiscall
std::
_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
::erase(_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
        *this,IProfileManagerDelegate **param_1)

{
  _Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
  *p_Var1;
  _Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
  *p_Var2;
  void *pvVar3;
  _Rb_tree_node *p_Var4;
  IProfileManagerDelegate *pIVar5;
  long lVar6;
  _Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
  *p_Var7;
  _Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
  *p_Var8;
  _Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
  *p_Var9;
  _Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
  *p_Var10;
  long lVar11;
  
  p_Var4 = *(_Rb_tree_node **)(this + 0x10);
  p_Var1 = this + 8;
  p_Var9 = p_Var1;
  p_Var10 = p_Var1;
  if (p_Var4 != (_Rb_tree_node *)0x0) {
    pIVar5 = *param_1;
    p_Var2 = (_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
              *)p_Var4;
    do {
      while (p_Var8 = p_Var2, p_Var10 = p_Var9,
            pIVar5 <= *(IProfileManagerDelegate **)(p_Var8 + 0x20)) {
        p_Var2 = *(_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
                   **)(p_Var8 + 0x10);
        if (*(IProfileManagerDelegate **)(p_Var8 + 0x20) <= pIVar5) {
          p_Var7 = *(_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
                     **)(p_Var8 + 0x18);
          while (p_Var2 != (_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
                            *)0x0) {
                    /* try { // try from 004a7fb0 to 005a7fc3 has its CatchHandler @ 004a8fbc */
            p_Var9 = p_Var2 + 0x18;
            if (pIVar5 <= *(IProfileManagerDelegate **)(p_Var2 + 0x20)) {
              p_Var8 = p_Var2;
              p_Var9 = p_Var2 + 0x10;
            }
                    /* try { // try from 004a7fc4 to 005a7fcf has its CatchHandler @ 004a8f0c */
            p_Var2 = *(_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
                       **)p_Var9;
          }
                    /* try { // try from 004a7fd0 to 005a7fe3 has its CatchHandler @ 004a8eb0 */
          while (p_Var9 = p_Var8,
                p_Var7 != (_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
                           *)0x0) {
            p_Var9 = p_Var7;
            p_Var2 = p_Var7 + 0x10;
            if (*(IProfileManagerDelegate **)(p_Var7 + 0x20) <= pIVar5) {
              p_Var9 = p_Var10;
              p_Var2 = p_Var7 + 0x18;
            }
                    /* try { // try from 004a7ff0 to 005a7ffb has its CatchHandler @ 004a8e5c */
            p_Var10 = p_Var9;
            p_Var7 = *(_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
                       **)p_Var2;
          }
          goto LAB_004a7ff4;
        }
                    /* try { // try from 004a7f88 to 005a7faf has its CatchHandler @ 004a8fc4 */
        p_Var9 = p_Var8;
        p_Var10 = p_Var8;
        if (p_Var2 == (_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
                       *)0x0) goto LAB_004a7ff4;
      }
      p_Var2 = *(_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
                 **)(p_Var8 + 0x18);
    } while (*(_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
               **)(p_Var8 + 0x18) !=
             (_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
              *)0x0);
  }
LAB_004a7ff4:
  lVar11 = *(long *)(this + 0x28);
  lVar6 = lVar11;
                    /* try { // try from 004a7ffc to 005a8007 has its CatchHandler @ 004a8e04 */
                    /* try { // try from 004a8008 to 005a8013 has its CatchHandler @ 004a8da8 */
  if ((p_Var1 == p_Var10) &&
     (*(_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
        **)(this + 0x18) == p_Var9)) {
    _M_erase(this,p_Var4);
    lVar6 = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
      **)(this + 0x18) = p_Var1;
    *(_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
      **)(this + 0x20) = p_Var1;
    *(undefined8 *)(this + 0x28) = 0;
  }
  else {
    while (p_Var9 != p_Var10) {
      p_Var2 = (_Rb_tree<Caver::IProfileManagerDelegate*,Caver::IProfileManagerDelegate*,std::_Identity<Caver::IProfileManagerDelegate*>,std::less<Caver::IProfileManagerDelegate*>,std::allocator<Caver::IProfileManagerDelegate*>>
                *)FUN_0064c6a0(p_Var9);
      pvVar3 = (void *)FUN_0064ca60(p_Var9,p_Var1);
      operator_delete(pvVar3);
      lVar6 = *(long *)(this + 0x28);
      *(long *)(this + 0x28) = lVar6 + -1;
                    /* try { // try from 004a805c to 005a8067 has its CatchHandler @ 004a8d70 */
      lVar6 = lVar6 + -1;
      p_Var9 = p_Var2;
    }
  }
  return lVar11 - lVar6;
}


