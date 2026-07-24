/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bee90
 * Function: boost::function<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>::operator=
 * Signature: undefined __thiscall operator=(function<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)> * this, function * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::function<void (std::string const&, boost::shared_ptr<Caver::StoreProduct> const&,
   std::string const&)>::TEMPNAMEPLACEHOLDERVALUE(boost::function<void (std::string const&,
   boost::shared_ptr<Caver::StoreProduct> const&, std::string const&)> const&) */

function<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)> *
__thiscall
boost::
function<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>::
operator=(function<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>
          *this,function *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_48 = 0;
  uVar2 = *(ulong *)param_1;
  if (uVar2 != 0) {
    local_48 = uVar2;
    if ((uVar2 & 1) == 0) {
      (**(code **)(uVar2 & 0xfffffffffffffffe))(param_1 + 8,&local_40,0);
    }
    else {
      local_30 = *(undefined8 *)(param_1 + 0x18);
      uStack_38 = *(undefined8 *)(param_1 + 0x10);
      local_40 = *(undefined8 *)(param_1 + 8);
    }
  }
  function3<void,std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&>
  ::swap((function3<void,std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&>
          *)&local_48,(function3 *)this);
  if (local_48 != 0) {
    if (((local_48 & 1) == 0) && (*(code **)(local_48 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(local_48 & 0xfffffffffffffffe))(&local_40,&local_40,2);
    }
    local_48 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


