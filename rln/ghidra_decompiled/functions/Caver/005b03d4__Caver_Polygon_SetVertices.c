/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b03d4
 * Function: Caver::Polygon::SetVertices
 * Signature: undefined __thiscall SetVertices(Polygon * this, int param_1, Vector2 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Polygon::SetVertices(int, Caver::Vector2 const*) */

void __thiscall Caver::Polygon::SetVertices(Polygon *this,int param_1,Vector2 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)this != param_1) {
                    /* try { // try from 005b040c to 006b0497 has its CatchHandler @ 005b040c
                       catch() { ... } // from try @ 005b040c with catch @ 005b040c
                       catch() { ... } // from try @ 005b049c with catch @ 005b040c
                       catch() { ... } // from try @ 005b053c with catch @ 005b040c
                       catch() { ... } // from try @ 005b05d4 with catch @ 005b040c
                       catch() { ... } // from try @ 005b0670 with catch @ 005b040c
                       catch() { ... } // from try @ 005b0710 with catch @ 005b040c */
    *(int *)this = param_1;
    lVar2 = *(long *)(this + 8);
    uVar4 = (long)param_1 + 1;
    uVar3 = *(long *)(this + 0x10) - lVar2 >> 3;
    if (uVar3 < uVar4) {
      std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::_M_fill_insert
                ((vector<Caver::Vector2,std::allocator<Caver::Vector2>> *)(this + 8),
                 *(long *)(this + 0x10),uVar4 - uVar3,auStack_40);
    }
    else if (uVar3 != uVar4) {
      *(ulong *)(this + 0x10) = lVar2 + uVar4 * 8;
    }
  }
  if (param_2 != (Vector2 *)0x0) {
    uVar4 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)param_1 << 3;
    memcpy(*(void **)(this + 8),param_2,uVar4);
    *(undefined8 *)((long)*(undefined8 **)(this + 8) + uVar4) = **(undefined8 **)(this + 8);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005b049c to 006b0537 has its CatchHandler @ 005b040c */
    __stack_chk_fail();
  }
                    /* try { // try from 005b0498 to 006b049b has its CatchHandler @ 005b0774 */
  return;
}


