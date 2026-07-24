/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b02f8
 * Function: Caver::Polygon::Polygon
 * Signature: undefined __thiscall Polygon(Polygon * this, int param_1, Vector2 * param_2, bool param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Polygon::Polygon(int, Caver::Vector2 const*, bool) */

void __thiscall Caver::Polygon::Polygon(Polygon *this,int param_1,Vector2 *param_2,bool param_3)

{
  long lVar1;
  ulong __n;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005b0318 to 006b040b has its CatchHandler @ 005b0278 */
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  this[0x20] = (Polygon)0x0;
  this[0x21] = (Polygon)param_3;
  if (param_1 != 0) {
    *(int *)this = param_1;
    if (param_1 + 1 != 0) {
      std::vector<Caver::Vector2,std::allocator<Caver::Vector2>>::_M_fill_insert
                ((vector<Caver::Vector2,std::allocator<Caver::Vector2>> *)(this + 8),0,
                 (long)(param_1 + 1),auStack_50);
    }
  }
  if (param_2 != (Vector2 *)0x0) {
    __n = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)param_1 << 3;
    memcpy(*(void **)(this + 8),param_2,__n);
    *(undefined8 *)((long)*(undefined8 **)(this + 8) + __n) = **(undefined8 **)(this + 8);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 005b02ac with catch @ 005b039c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


