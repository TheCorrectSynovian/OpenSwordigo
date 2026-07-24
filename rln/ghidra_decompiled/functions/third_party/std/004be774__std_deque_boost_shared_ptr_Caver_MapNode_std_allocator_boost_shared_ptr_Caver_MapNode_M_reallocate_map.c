/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004be774
 * Function: std::deque<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::_M_reallocate_map
 * Signature: undefined __thiscall _M_reallocate_map(deque<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>> * this, ulong param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::deque<boost::shared_ptr<Caver::MapNode>, std::allocator<boost::shared_ptr<Caver::MapNode> >
   >::_M_reallocate_map(unsigned long, bool) */

void __thiscall
std::deque<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::
_M_reallocate_map(deque<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>
                  *this,ulong param_1,bool param_2)

{
  ulong uVar1;
  void *pvVar2;
  long *__dest;
  long *__src;
  size_t sVar3;
  long lVar4;
  ulong uVar5;
  long *__dest_00;
  long lVar6;
  
                    /* try { // try from 004be77c to 005be78f has its CatchHandler @ 004be7b4 */
                    /* try { // try from 004be790 to 005be7b7 has its CatchHandler @ 004be760 */
  __src = *(long **)(this + 0x28);
  uVar5 = *(ulong *)(this + 8);
  lVar6 = *(long *)(this + 0x48) - (long)__src >> 3;
  lVar4 = lVar6 + 1 + param_1;
                    /* catch() { ... } // from try @ 004be77c with catch @ 004be7b4 */
  if ((ulong)(lVar4 * 2) < uVar5) {
    if (!param_2) {
      param_1 = 0;
    }
    __dest_00 = (long *)(*(long *)this + ((uVar5 - lVar4) * 4 & 0xfffffffffffffff8) + param_1 * 8);
    sVar3 = (*(long *)(this + 0x48) + 8) - (long)__src;
    if (__dest_00 < __src) {
      __dest = __dest_00;
      if (sVar3 == 0) goto LAB_004be874;
    }
    else {
      if (sVar3 == 0) goto LAB_004be874;
      __dest = (long *)((long)__dest_00 + ((lVar6 + 1) * 8 - sVar3));
    }
    memmove(__dest,__src,sVar3);
  }
  else {
    uVar1 = param_1;
    if (param_1 <= uVar5) {
      uVar1 = uVar5;
    }
    uVar5 = uVar5 + uVar1 + 2;
    if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00665294();
    }
    pvVar2 = operator_new(uVar5 * 8);
    if (!param_2) {
      param_1 = 0;
    }
    sVar3 = (*(long *)(this + 0x48) + 8) - (long)*(void **)(this + 0x28);
    __dest_00 = (long *)((long)pvVar2 + param_1 * 8 + ((uVar5 - lVar4) * 4 & 0xfffffffffffffff8));
    if (sVar3 != 0) {
      memmove(__dest_00,*(void **)(this + 0x28),sVar3);
    }
    operator_delete(*(void **)this);
    *(void **)this = pvVar2;
    *(ulong *)(this + 8) = uVar5;
  }
LAB_004be874:
  *(long **)(this + 0x28) = __dest_00;
  lVar4 = *__dest_00;
  *(long **)(this + 0x48) = __dest_00 + lVar6;
  *(long *)(this + 0x18) = lVar4;
  *(long *)(this + 0x20) = lVar4 + 0x200;
  lVar4 = __dest_00[lVar6];
  *(long *)(this + 0x38) = lVar4;
  *(long *)(this + 0x40) = lVar4 + 0x200;
  return;
}


