/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00344f18
 * Function: std::_Rb_tree<std::string,std::pair<std::string_const,boost::function<Caver::Component*()>>,std::_Select1st<std::pair<std::string_const,boost::function<Caver::Component*()>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>::_M_create_node
 * Signature: undefined __thiscall _M_create_node(_Rb_tree<std::string,std::pair<std::string_const,boost::function<Caver::Component*()>>,std::_Select1st<std::pair<std::string_const,boost::function<Caver::Component*()>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>> * this, pair * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Rb_tree<std::string, std::pair<std::string const, boost::function<Caver::Component* ()> >,
   std::_Select1st<std::pair<std::string const, boost::function<Caver::Component* ()> > >,
   std::less<std::string >, std::allocator<std::pair<std::string const,
   boost::function<Caver::Component* ()> > > >::_M_create_node(std::pair<std::string const,
   boost::function<Caver::Component* ()> > const&) */

void * __thiscall
std::
_Rb_tree<std::string,std::pair<std::string_const,boost::function<Caver::Component*()>>,std::_Select1st<std::pair<std::string_const,boost::function<Caver::Component*()>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
::_M_create_node(_Rb_tree<std::string,std::pair<std::string_const,boost::function<Caver::Component*()>>,std::_Select1st<std::pair<std::string_const,boost::function<Caver::Component*()>>>,std::less<std::string>,std::allocator<std::pair<std::string_const,boost::function<Caver::Component*()>>>>
                 *this,pair *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x48);
  FUN_0066a528((long)pvVar2 + 0x20,param_1);
  *(undefined8 *)((long)pvVar2 + 0x28) = 0;
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 != 0) {
    *(ulong *)((long)pvVar2 + 0x28) = uVar4;
    if ((uVar4 & 1) == 0) {
      (**(code **)(uVar4 & 0xfffffffffffffffe))(param_1 + 0x10,(long)pvVar2 + 0x30,0);
    }
    else {
      *(undefined8 *)((long)pvVar2 + 0x40) = *(undefined8 *)(param_1 + 0x20);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)((long)pvVar2 + 0x38) = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)((long)pvVar2 + 0x30) = uVar5;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


