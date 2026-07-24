/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bf248
 * Function: boost::function3<void,std::string_const&,bool,std::string_const&>::swap
 * Signature: undefined __thiscall swap(function3<void,std::string_const&,bool,std::string_const&> * this, function3 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::function3<void, std::string const&, bool, std::string const&>::swap(boost::function3<void,
   std::string const&, bool, std::string const&>&) */

void __thiscall
boost::function3<void,std::string_const&,bool,std::string_const&>::swap
          (function3<void,std::string_const&,bool,std::string_const&> *this,function3 *param_1)

{
  long lVar1;
  ulong local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
                    /* catch() { ... } // from try @ 005bf22c with catch @ 005bf248 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005bf274 to 006bf2d3 has its CatchHandler @ 005bf274
                       catch() { ... } // from try @ 005bf274 with catch @ 005bf274
                       catch() { ... } // from try @ 005bf2e8 with catch @ 005bf274 */
  if (param_1 != (function3 *)this) {
    local_58 = 0;
    move_assign((function3<void,std::string_const&,bool,std::string_const&> *)&local_58,
                (function3 *)this);
    move_assign(this,param_1);
    move_assign((function3<void,std::string_const&,bool,std::string_const&> *)param_1,
                (function3 *)&local_58);
    if (local_58 != 0) {
      if (((local_58 & 1) == 0) && (*(code **)(local_58 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_58 & 0xfffffffffffffffe))(auStack_50,auStack_50,2);
      }
      local_58 = 0;
    }
  }
                    /* try { // try from 005bf2d4 to 006bf2e7 has its CatchHandler @ 005bf2f0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 005bf2e8 to 006bf2f3 has its CatchHandler @ 005bf274 */
                    /* catch() { ... } // from try @ 005bf2d4 with catch @ 005bf2f0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005bf2f4 to 006bf3af has its CatchHandler @ 005bf2f4
                       catch() { ... } // from try @ 005bf2f4 with catch @ 005bf2f4
                       catch() { ... } // from try @ 005bf3e4 with catch @ 005bf2f4
                       catch() { ... } // from try @ 005bf500 with catch @ 005bf2f4
                       catch() { ... } // from try @ 005bf6f8 with catch @ 005bf2f4 */
  __stack_chk_fail();
}


