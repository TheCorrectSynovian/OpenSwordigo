/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bb600
 * Function: std::list<Caver::TargetAction<void(bool,std::string_const&)>,std::allocator<Caver::TargetAction<void(bool,std::string_const&)>>>::_M_create_node
 * Signature: undefined __thiscall _M_create_node(list<Caver::TargetAction<void(bool,std::string_const&)>,std::allocator<Caver::TargetAction<void(bool,std::string_const&)>>> * this, TargetAction * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::list<Caver::TargetAction<void (bool, std::string const&)>,
   std::allocator<Caver::TargetAction<void (bool, std::string const&)> >
   >::_M_create_node(Caver::TargetAction<void (bool, std::string const&)> const&) */

void * __thiscall
std::
list<Caver::TargetAction<void(bool,std::string_const&)>,std::allocator<Caver::TargetAction<void(bool,std::string_const&)>>>
::_M_create_node(list<Caver::TargetAction<void(bool,std::string_const&)>,std::allocator<Caver::TargetAction<void(bool,std::string_const&)>>>
                 *this,TargetAction *param_1)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
                    /* catch() { ... } // from try @ 005bb2d4 with catch @ 005bb60c */
  pvVar1 = operator_new(0x40);
                    /* catch() { ... } // from try @ 005bb244 with catch @ 005bb61c */
  *(undefined8 *)((long)pvVar1 + 0x10) = *(undefined8 *)param_1;
  lVar2 = *(long *)(param_1 + 8);
  *(long *)((long)pvVar1 + 0x18) = lVar2;
  if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 005bb2dc with catch @ 005bb634 */
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
  }
  *(undefined8 *)((long)pvVar1 + 0x20) = 0;
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (uVar3 != 0) {
    *(ulong *)((long)pvVar1 + 0x20) = uVar3;
    if ((uVar3 & 1) == 0) {
      (**(code **)(uVar3 & 0xfffffffffffffffe))(param_1 + 0x18,(long)pvVar1 + 0x28,0);
    }
    else {
      *(undefined8 *)((long)pvVar1 + 0x38) = *(undefined8 *)(param_1 + 0x28);
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)((long)pvVar1 + 0x30) = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)((long)pvVar1 + 0x28) = uVar4;
    }
  }
  return pvVar1;
}


