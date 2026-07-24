/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005934bc
 * Function: std::_Deque_base<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_initialize_map
 * Signature: undefined __thiscall _M_initialize_map(_Deque_base<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>> * this, ulong param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Deque_base<Caver::GUIApplication::QueuedEvent,
   std::allocator<Caver::GUIApplication::QueuedEvent> >::_M_initialize_map(unsigned long) */

void __thiscall
std::
_Deque_base<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::
_M_initialize_map(_Deque_base<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>
                  *this,ulong param_1)

{
  ulong uVar1;
  long lVar2;
  QueuedEvent **ppQVar3;
  QueuedEvent **ppQVar4;
  void *pvVar5;
  QueuedEvent *pQVar6;
  
  uVar1 = param_1 / 7 + 3;
                    /* try { // try from 00593500 to 00693503 has its CatchHandler @ 0059350c */
  if (uVar1 < 9) {
    uVar1 = 8;
  }
                    /* try { // try from 00593504 to 0069352f has its CatchHandler @ 00593430 */
                    /* catch() { ... } // from try @ 0059346c with catch @ 0059350c
                       catch() { ... } // from try @ 00593500 with catch @ 0059350c */
  *(ulong *)(this + 8) = uVar1;
  if (uVar1 >> 0x3d == 0) {
    lVar2 = param_1 / 7 + 1;
    pvVar5 = operator_new(uVar1 << 3);
    *(void **)this = pvVar5;
                    /* try { // try from 00593530 to 00693557 has its CatchHandler @ 00593560 */
    ppQVar3 = (QueuedEvent **)
              ((long)pvVar5 + ((*(long *)(this + 8) - lVar2) * 4 & 0xfffffffffffffff8U));
    ppQVar4 = ppQVar3 + lVar2;
    _M_create_nodes(this,ppQVar3,ppQVar4);
    pQVar6 = *ppQVar3;
    *(QueuedEvent ***)(this + 0x48) = ppQVar4 + -1;
                    /* try { // try from 00593558 to 00693563 has its CatchHandler @ 00593430 */
                    /* catch() { ... } // from try @ 00593530 with catch @ 00593560 */
    *(QueuedEvent **)(this + 0x10) = pQVar6;
    *(QueuedEvent **)(this + 0x18) = pQVar6;
    *(QueuedEvent **)(this + 0x20) = pQVar6 + 0x1f8;
    *(QueuedEvent ***)(this + 0x28) = ppQVar3;
    pQVar6 = ppQVar4[-1];
    *(QueuedEvent **)(this + 0x30) = pQVar6 + (param_1 % 7) * 0x48;
    *(QueuedEvent **)(this + 0x38) = pQVar6;
    *(QueuedEvent **)(this + 0x40) = pQVar6 + 0x1f8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00665294();
}


