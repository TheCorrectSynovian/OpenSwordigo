/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bef98
 * Function: boost::function3<void,std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&>::swap
 * Signature: undefined __thiscall swap(function3<void,std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&> * this, function3 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::function3<void, std::string const&, boost::shared_ptr<Caver::StoreProduct> const&,
   std::string const&>::swap(boost::function3<void, std::string const&,
   boost::shared_ptr<Caver::StoreProduct> const&, std::string const&>&) */

void __thiscall
boost::
function3<void,std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&>::
swap(function3<void,std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&>
     *this,function3 *param_1)

{
  long lVar1;
  ulong local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005befc4 to 006befc7 has its CatchHandler @ 005bf14c */
  if (param_1 != (function3 *)this) {
                    /* try { // try from 005befc8 to 006bf15f has its CatchHandler @ 005bee30 */
    local_58 = 0;
    move_assign((function3<void,std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&>
                 *)&local_58,(function3 *)this);
    move_assign(this,param_1);
    move_assign((function3<void,std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&>
                 *)param_1,(function3 *)&local_58);
    if (local_58 != 0) {
      if (((local_58 & 1) == 0) && (*(code **)(local_58 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(local_58 & 0xfffffffffffffffe))(auStack_50,auStack_50,2);
      }
      local_58 = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


