/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b73a0
 * Function: boost::uuids::detail::seed_rng::sha1_random_digest_
 * Signature: undefined __thiscall sha1_random_digest_(seed_rng * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* boost::uuids::detail::seed_rng::sha1_random_digest_() */

void __thiscall boost::uuids::detail::seed_rng::sha1_random_digest_(seed_rng *this)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  time_t tVar5;
  clock_t cVar6;
  void *pvVar7;
  unsigned_int extraout_w1;
  unsigned_int uVar8;
  uchar extraout_w1_00;
  uchar uStack_ea;
  uchar uStack_e9;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  puVar2 = PTR_state_007e5b20;
                    /* try { // try from 005b73b0 to 006b750b has its CatchHandler @ 005b71cc */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_a8 = _UNK_00697378;
  local_b0 = _DAT_00697370;
  uStack_c8 = *(undefined8 *)(PTR_state_007e5b20 + 8);
  local_d0 = *(undefined8 *)PTR_state_007e5b20;
  local_c0 = *(undefined4 *)(PTR_state_007e5b20 + 0x10);
  local_a0 = 0xc3d2e1f0;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  sha1::process_byte((sha1 *)&local_b0,(uchar)local_d0);
  sha1::process_byte((sha1 *)&local_b0,local_d0._1_1_);
  sha1::process_byte((sha1 *)&local_b0,local_d0._2_1_);
  sha1::process_byte((sha1 *)&local_b0,local_d0._3_1_);
  sha1::process_byte((sha1 *)&local_b0,local_d0._4_1_);
  sha1::process_byte((sha1 *)&local_b0,local_d0._5_1_);
  sha1::process_byte((sha1 *)&local_b0,local_d0._6_1_);
  sha1::process_byte((sha1 *)&local_b0,local_d0._7_1_);
  sha1::process_byte((sha1 *)&local_b0,(uchar)uStack_c8);
                    /* catch() { ... } // from try @ 005b7388 with catch @ 005b746c */
  sha1::process_byte((sha1 *)&local_b0,uStack_c8._1_1_);
  sha1::process_byte((sha1 *)&local_b0,uStack_c8._2_1_);
  sha1::process_byte((sha1 *)&local_b0,uStack_c8._3_1_);
  sha1::process_byte((sha1 *)&local_b0,uStack_c8._4_1_);
  sha1::process_byte((sha1 *)&local_b0,uStack_c8._5_1_);
  sha1::process_byte((sha1 *)&local_b0,uStack_c8._6_1_);
  sha1::process_byte((sha1 *)&local_b0,uStack_c8._7_1_);
  sha1::process_byte((sha1 *)&local_b0,(uchar)local_c0);
  sha1::process_byte((sha1 *)&local_b0,local_c0._1_1_);
                    /* catch() { ... } // from try @ 005b72bc with catch @ 005b74dc */
  sha1::process_byte((sha1 *)&local_b0,local_c0._2_1_);
                    /* catch() { ... } // from try @ 005b72cc with catch @ 005b74e8 */
  sha1::process_byte((sha1 *)&local_b0,local_c0._3_1_);
  sha1::process_byte((sha1 *)&local_b0,(uchar)puVar2);
  sha1::process_byte((sha1 *)&local_b0,(uchar)((ulong)puVar2 >> 8));
                    /* try { // try from 005b750c to 006b7533 has its CatchHandler @ 005b75a0 */
  sha1::process_byte((sha1 *)&local_b0,(uchar)((ulong)puVar2 >> 0x10));
  sha1::process_byte((sha1 *)&local_b0,(uchar)((ulong)puVar2 >> 0x18));
  sha1::process_byte((sha1 *)&local_b0,(uchar)((ulong)puVar2 >> 0x20));
                    /* try { // try from 005b7534 to 006b760f has its CatchHandler @ 005b71cc */
  sha1::process_byte((sha1 *)&local_b0,(uchar)((ulong)puVar2 >> 0x28));
  uStack_ea = (uchar)((ulong)puVar2 >> 0x30);
  sha1::process_byte((sha1 *)&local_b0,uStack_ea);
  uStack_e9 = (uchar)((ulong)puVar2 >> 0x38);
  sha1::process_byte((sha1 *)&local_b0,uStack_e9);
  tVar5 = time((time_t *)0x0);
  local_e8 = (void *)tVar5;
  sha1::process_byte((sha1 *)&local_b0,(uchar)tVar5);
  sha1::process_byte((sha1 *)&local_b0,(uchar)((ulong)tVar5 >> 8));
  sha1::process_byte((sha1 *)&local_b0,(uchar)((ulong)tVar5 >> 0x10));
  sha1::process_byte((sha1 *)&local_b0,(uchar)((ulong)tVar5 >> 0x18));
  sha1::process_byte((sha1 *)&local_b0,(uchar)((ulong)tVar5 >> 0x20));
                    /* catch() { ... } // from try @ 005b750c with catch @ 005b75a0 */
  sha1::process_byte((sha1 *)&local_b0,(uchar)((ulong)tVar5 >> 0x28));
  sha1::process_byte((sha1 *)&local_b0,local_e8._6_1_);
  sha1::process_byte((sha1 *)&local_b0,local_e8._7_1_);
  cVar6 = clock();
  local_e8 = (void *)cVar6;
  sha1::process_byte((sha1 *)&local_b0,(uchar)cVar6);
  sha1::process_byte((sha1 *)&local_b0,(uchar)((ulong)cVar6 >> 8));
  sha1::process_byte((sha1 *)&local_b0,(uchar)((ulong)cVar6 >> 0x10));
  sha1::process_byte((sha1 *)&local_b0,(uchar)((ulong)cVar6 >> 0x18));
  sha1::process_byte((sha1 *)&local_b0,(uchar)((ulong)cVar6 >> 0x20));
                    /* try { // try from 005b7610 to 006b765f has its CatchHandler @ 005b7610
                       catch() { ... } // from try @ 005b7610 with catch @ 005b7610
                       catch() { ... } // from try @ 005b7664 with catch @ 005b7610
                       catch() { ... } // from try @ 005b76e4 with catch @ 005b7610
                       catch() { ... } // from try @ 005b7788 with catch @ 005b7610
                       catch() { ... } // from try @ 005b77e0 with catch @ 005b7610
                       catch() { ... } // from try @ 005b7920 with catch @ 005b7610
                       catch() { ... } // from try @ 005b7b1c with catch @ 005b7610 */
  sha1::process_byte((sha1 *)&local_b0,(uchar)((ulong)cVar6 >> 0x28));
  sha1::process_byte((sha1 *)&local_b0,local_e8._6_1_);
  sha1::process_byte((sha1 *)&local_b0,local_e8._7_1_);
  iVar3 = rand();
  local_e8 = (void *)CONCAT44(local_e8._4_4_,iVar3);
  iVar4 = rand();
  local_e8 = (void *)CONCAT44(iVar4,(uint)local_e8);
  local_e0 = rand();
  sha1::process_byte((sha1 *)&local_b0,(uchar)iVar3);
                    /* try { // try from 005b7660 to 006b7663 has its CatchHandler @ 005b7bec */
  sha1::process_byte((sha1 *)&local_b0,(uchar)((uint)iVar3 >> 8));
                    /* try { // try from 005b7664 to 006b76df has its CatchHandler @ 005b7610 */
  sha1::process_byte((sha1 *)&local_b0,(uchar)((uint)iVar3 >> 0x10));
  sha1::process_byte((sha1 *)&local_b0,(uchar)((uint)iVar3 >> 0x18));
  sha1::process_byte((sha1 *)&local_b0,(uchar)iVar4);
  sha1::process_byte((sha1 *)&local_b0,local_e8._5_1_);
  sha1::process_byte((sha1 *)&local_b0,local_e8._6_1_);
  sha1::process_byte((sha1 *)&local_b0,local_e8._7_1_);
  sha1::process_byte((sha1 *)&local_b0,(uchar)local_e0);
  sha1::process_byte((sha1 *)&local_b0,local_e0._1_1_);
  sha1::process_byte((sha1 *)&local_b0,local_e0._2_1_);
  sha1::process_byte((sha1 *)&local_b0,local_e0._3_1_);
                    /* try { // try from 005b76e0 to 006b76e3 has its CatchHandler @ 005b7c78 */
  uVar8 = extraout_w1;
  if (*(FILE **)(this + 0x18) != (FILE *)0x0) {
                    /* try { // try from 005b76e4 to 006b7783 has its CatchHandler @ 005b7610 */
    fread(&local_e8,1,0x14,*(FILE **)(this + 0x18));
    uVar8 = local_e8._0_1_;
  }
  sha1::process_byte((sha1 *)&local_b0,(uchar)uVar8);
  sha1::process_byte((sha1 *)&local_b0,local_e8._1_1_);
  sha1::process_byte((sha1 *)&local_b0,local_e8._2_1_);
  sha1::process_byte((sha1 *)&local_b0,local_e8._3_1_);
  sha1::process_byte((sha1 *)&local_b0,local_e8._4_1_);
  sha1::process_byte((sha1 *)&local_b0,local_e8._5_1_);
  sha1::process_byte((sha1 *)&local_b0,local_e8._6_1_);
  sha1::process_byte((sha1 *)&local_b0,local_e8._7_1_);
  sha1::process_byte((sha1 *)&local_b0,(uchar)local_e0);
  sha1::process_byte((sha1 *)&local_b0,local_e0._1_1_);
  sha1::process_byte((sha1 *)&local_b0,local_e0._2_1_);
                    /* try { // try from 005b7784 to 006b7787 has its CatchHandler @ 005b7c74 */
  sha1::process_byte((sha1 *)&local_b0,local_e0._3_1_);
                    /* try { // try from 005b7788 to 006b77db has its CatchHandler @ 005b7610 */
  sha1::process_byte((sha1 *)&local_b0,(uchar)local_dc);
  sha1::process_byte((sha1 *)&local_b0,local_dc._1_1_);
  sha1::process_byte((sha1 *)&local_b0,local_dc._2_1_);
  sha1::process_byte((sha1 *)&local_b0,local_dc._3_1_);
  sha1::process_byte((sha1 *)&local_b0,(uchar)local_d8);
  sha1::process_byte((sha1 *)&local_b0,local_d8._1_1_);
  sha1::process_byte((sha1 *)&local_b0,local_d8._2_1_);
                    /* try { // try from 005b77dc to 006b77df has its CatchHandler @ 005b7be8 */
                    /* try { // try from 005b77e0 to 006b78fb has its CatchHandler @ 005b7610 */
  sha1::process_byte((sha1 *)&local_b0,local_d8._3_1_);
  pvVar7 = operator_new(4);
  local_e8 = pvVar7;
  sha1::process_byte((sha1 *)&local_b0,extraout_w1_00);
  sha1::process_byte((sha1 *)&local_b0,*(uchar *)((long)pvVar7 + 1));
  sha1::process_byte((sha1 *)&local_b0,*(uchar *)((long)pvVar7 + 2));
  sha1::process_byte((sha1 *)&local_b0,*(uchar *)((long)pvVar7 + 3));
  sha1::process_byte((sha1 *)&local_b0,(uchar)pvVar7);
  sha1::process_byte((sha1 *)&local_b0,(uchar)((ulong)pvVar7 >> 8));
  sha1::process_byte((sha1 *)&local_b0,(uchar)((ulong)pvVar7 >> 0x10));
  sha1::process_byte((sha1 *)&local_b0,(uchar)((ulong)pvVar7 >> 0x18));
  sha1::process_byte((sha1 *)&local_b0,(uchar)((ulong)pvVar7 >> 0x20));
  sha1::process_byte((sha1 *)&local_b0,(uchar)((ulong)pvVar7 >> 0x28));
  sha1::process_byte((sha1 *)&local_b0,local_e8._6_1_);
  sha1::process_byte((sha1 *)&local_b0,local_e8._7_1_);
  operator_delete(pvVar7);
  sha1::process_byte((sha1 *)&local_b0,(uchar)*this);
  sha1::process_byte((sha1 *)&local_b0,(uchar)this[1]);
  sha1::process_byte((sha1 *)&local_b0,(uchar)this[2]);
  sha1::process_byte((sha1 *)&local_b0,(uchar)this[3]);
  sha1::process_byte((sha1 *)&local_b0,(uchar)this[4]);
  sha1::process_byte((sha1 *)&local_b0,(uchar)this[5]);
  sha1::process_byte((sha1 *)&local_b0,(uchar)this[6]);
  sha1::process_byte((sha1 *)&local_b0,(uchar)this[7]);
  sha1::process_byte((sha1 *)&local_b0,(uchar)this[8]);
                    /* try { // try from 005b78fc to 006b791f has its CatchHandler @ 005b7bf8 */
  sha1::process_byte((sha1 *)&local_b0,(uchar)this[9]);
  sha1::process_byte((sha1 *)&local_b0,(uchar)this[10]);
  sha1::process_byte((sha1 *)&local_b0,(uchar)this[0xb]);
                    /* try { // try from 005b7920 to 006b7b17 has its CatchHandler @ 005b7610 */
  sha1::process_byte((sha1 *)&local_b0,(uchar)this[0xc]);
  sha1::process_byte((sha1 *)&local_b0,(uchar)this[0xd]);
  sha1::process_byte((sha1 *)&local_b0,(uchar)this[0xe]);
  sha1::process_byte((sha1 *)&local_b0,(uchar)this[0xf]);
  sha1::process_byte((sha1 *)&local_b0,(uchar)this[0x10]);
  sha1::process_byte((sha1 *)&local_b0,(uchar)this[0x11]);
  sha1::process_byte((sha1 *)&local_b0,(uchar)this[0x12]);
  sha1::process_byte((sha1 *)&local_b0,(uchar)this[0x13]);
  sha1::get_digest((sha1 *)&local_b0,(unsigned_int *)&local_e8);
  *(uint *)puVar2 = *(uint *)puVar2 ^ (uint)local_e8;
  *(uint *)this = *(uint *)this ^ (uint)local_e8;
  *(uint *)(puVar2 + 4) = *(uint *)(puVar2 + 4) ^ local_e8._4_4_;
  *(uint *)(this + 4) = *(uint *)(this + 4) ^ local_e8._4_4_;
  *(uint *)(puVar2 + 8) = *(uint *)(puVar2 + 8) ^ local_e0;
  *(uint *)(this + 8) = *(uint *)(this + 8) ^ local_e0;
  *(uint *)(puVar2 + 0xc) = *(uint *)(puVar2 + 0xc) ^ local_dc;
  *(uint *)(this + 0xc) = *(uint *)(this + 0xc) ^ local_dc;
  *(uint *)(puVar2 + 0x10) = *(uint *)(puVar2 + 0x10) ^ local_d8;
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) ^ local_d8;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


