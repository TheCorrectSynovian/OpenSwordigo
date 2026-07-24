/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034493c
 * Function: Caver::ComponentFactory::NewComponentWithClassName
 * Signature: undefined __thiscall NewComponentWithClassName(ComponentFactory * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ComponentFactory::NewComponentWithClassName(std::string const&) */

undefined8 __thiscall
Caver::ComponentFactory::NewComponentWithClassName(ComponentFactory *this,string *param_1)

{
  long lVar1;
  ComponentFactory *pCVar2;
  undefined8 uVar3;
  undefined8 extraout_x0;
  bad_function_call abStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pCVar2 = (ComponentFactory *)
           std::
           _Rb_tree<std::string,std::pair<std::string_const,boost::function<Caver::Component*()>>,std::_Select1st<std::pair<std::string_const,boost::function<Caver::Component*()>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
           ::find((_Rb_tree<std::string,std::pair<std::string_const,boost::function<Caver::Component*()>>,std::_Select1st<std::pair<std::string_const,boost::function<Caver::Component*()>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
                   *)this,param_1);
  if (this + 8 == pCVar2) {
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return 0;
    }
  }
  else {
    if (*(ulong *)(pCVar2 + 0x28) == 0) {
      boost::bad_function_call::bad_function_call(abStack_38);
      boost::throw_exception<boost::bad_function_call>(abStack_38);
      FUN_0064a024(abStack_38);
                    /* WARNING: Subroutine does not return */
      FUN_006818c4(extraout_x0);
    }
    uVar3 = (**(code **)((*(ulong *)(pCVar2 + 0x28) & 0xfffffffffffffffe) + 8))(pCVar2 + 0x30);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


