/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0047e0f0
 * Function: std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
 * Signature: undefined __thiscall insert(set<std::string,std::less<std::string>,std::allocator<std::string>> * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::set<std::string, std::less<std::string >, std::allocator<std::string > >::insert(std::string
   const&) */

long __thiscall
std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
          (set<std::string,std::less<std::string>,std::allocator<std::string>> *this,string *param_1
          )

{
  uint uVar1;
  long lVar2;
  set<std::string,std::less<std::string>,std::allocator<std::string>> *psVar3;
  size_t __n;
  ulong uVar4;
  undefined1 auVar5 [16];
  
                    /* try { // try from 0047e0f0 to 0057e197 has its CatchHandler @ 0047e034 */
  auVar5 = _Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
           ::_M_get_insert_unique_pos
                     ((_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
                       *)this,param_1);
  psVar3 = auVar5._8_8_;
  lVar2 = auVar5._0_8_;
  if (psVar3 != (set<std::string,std::less<std::string>,std::allocator<std::string>> *)0x0) {
    uVar4 = 1;
    if ((lVar2 == 0) && (this + 8 != psVar3)) {
      uVar4 = *(ulong *)((long)*(void **)param_1 + -0x18);
      __n = *(ulong *)((long)*(void **)(psVar3 + 0x20) + -0x18);
      lVar2 = uVar4 - __n;
      if (uVar4 < __n || lVar2 == 0) {
        __n = uVar4;
      }
      uVar1 = memcmp(*(void **)param_1,*(void **)(psVar3 + 0x20),__n);
      uVar4 = (ulong)uVar1;
      if ((uVar1 == 0) && (uVar4 = 0, lVar2 < 0x80000000)) {
        uVar1 = (uint)lVar2;
        if (lVar2 < -0x7fffffff) {
          uVar1 = 0x80000000;
        }
        uVar4 = (ulong)uVar1;
      }
      uVar4 = uVar4 >> 0x1f;
    }
    lVar2 = _Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
            ::_M_create_node((_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>
                              *)this,param_1);
                    /* catch() { ... } // from try @ 0047e0ec with catch @ 0047e184 */
    FUN_0064c8a0(uVar4,lVar2,psVar3,this + 8);
                    /* try { // try from 0047e198 to 0057e1c7 has its CatchHandler @ 0047e198
                       catch() { ... } // from try @ 0047e198 with catch @ 0047e198
                       catch() { ... } // from try @ 0047e7d0 with catch @ 0047e198 */
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  }
  return lVar2;
}


