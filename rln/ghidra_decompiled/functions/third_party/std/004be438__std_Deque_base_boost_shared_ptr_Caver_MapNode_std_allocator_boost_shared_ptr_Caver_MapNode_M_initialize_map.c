/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004be438
 * Function: std::_Deque_base<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::_M_initialize_map
 * Signature: undefined __thiscall _M_initialize_map(_Deque_base<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>> * this, ulong param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Removing unreachable block (ram,0x004be4e4) */
/* std::_Deque_base<boost::shared_ptr<Caver::MapNode>,
   std::allocator<boost::shared_ptr<Caver::MapNode> > >::_M_initialize_map(unsigned long) */

void __thiscall
std::
_Deque_base<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::
_M_initialize_map(_Deque_base<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>
                  *this,ulong param_1)

{
  ulong uVar1;
  long lVar2;
  shared_ptr **ppsVar3;
  shared_ptr **ppsVar4;
  void *pvVar5;
  shared_ptr *psVar6;
  
  uVar1 = (param_1 >> 5) + 3;
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  *(ulong *)(this + 8) = uVar1;
  lVar2 = (param_1 >> 5) + 1;
  pvVar5 = operator_new(uVar1 << 3);
  *(void **)this = pvVar5;
  ppsVar3 = (shared_ptr **)
            ((long)pvVar5 + ((*(long *)(this + 8) - lVar2) * 4 & 0xfffffffffffffff8U));
  ppsVar4 = ppsVar3 + lVar2;
  _M_create_nodes(this,ppsVar3,ppsVar4);
  psVar6 = *ppsVar3;
  *(shared_ptr ***)(this + 0x48) = ppsVar4 + -1;
                    /* catch() { ... } // from try @ 004be5ac with catch @ 004be4b0
                       catch() { ... } // from try @ 004be67c with catch @ 004be4b0 */
  *(shared_ptr **)(this + 0x10) = psVar6;
  *(shared_ptr **)(this + 0x18) = psVar6;
  *(shared_ptr **)(this + 0x20) = psVar6 + 0x200;
  *(shared_ptr ***)(this + 0x28) = ppsVar3;
  psVar6 = ppsVar4[-1];
  *(shared_ptr **)(this + 0x30) = psVar6 + (param_1 & 0x1f) * 0x10;
  *(shared_ptr **)(this + 0x38) = psVar6;
  *(shared_ptr **)(this + 0x40) = psVar6 + 0x200;
  return;
}


