/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b4dd4
 * Function: boost::gregorian::date::date
 * Signature: undefined __thiscall date(date * this, greg_year param_1, greg_month param_2, greg_day param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::gregorian::date::date(boost::gregorian::greg_year, boost::gregorian::greg_month,
   boost::gregorian::greg_day) */

void __thiscall boost::gregorian::date::date(date *this,uint param_2,uint param_3,ushort param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ushort uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined *local_40 [3];
  long local_28;
  
                    /* catch() { ... } // from try @ 005b4da0 with catch @ 005b4dd8 */
                    /* try { // try from 005b4de0 to 006b4de7 has its CatchHandler @ 005b4df4 */
  uVar1 = param_3 & 0xffff;
                    /* try { // try from 005b4df0 to 006b4df3 has its CatchHandler @ 005b4e04 */
                    /* catch() { ... } // from try @ 005b4de0 with catch @ 005b4df4 */
                    /* catch() { ... } // from try @ 005b4df0 with catch @ 005b4e04 */
                    /* try { // try from 005b4e08 to 006b4e0b has its CatchHandler @ 005b4e14 */
  iVar4 = (int)(0xe - uVar1) / 0xc;
                    /* try { // try from 005b4e0c to 006b4e17 has its CatchHandler @ 005b4d88 */
                    /* catch() { ... } // from try @ 005b4e08 with catch @ 005b4e14 */
  lVar3 = tpidr_el0;
                    /* catch() { ... } // from try @ 005b4e38 with catch @ 005b4e1c */
  local_28 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005b4e30 to 006b4e37 has its CatchHandler @ 005b4e54 */
                    /* try { // try from 005b4e38 to 006b4e67 has its CatchHandler @ 005b4e1c */
  uVar2 = (param_2 + 0x12c0) - iVar4 & 0xffff;
                    /* catch() { ... } // from try @ 005b4e30 with catch @ 005b4e54 */
  *(uint *)this =
       ((uVar2 * 0x16d + (uint)param_4 + (uVar2 >> 2) + -0x7d2d) - uVar2 / 100) + uVar2 / 400 +
       ((param_3 + iVar4 * 0xc + 0xfffd & 0xffff) * 0x99 + 2) / 5;
  if (uVar1 < 0xc) {
    if ((1 << (ulong)(param_3 & 0x1f) & 0xa50U) != 0) {
      uVar5 = 0x1e;
      goto LAB_005b4eb0;
    }
    if (uVar1 == 2) {
      uVar5 = 0x1c;
      if (((param_2 & 3) == 0) &&
         (uVar5 = 0x1c, (param_2 & 0xffff) % 400 == 0 || (param_2 & 0xffff) % 100 != 0)) {
        uVar5 = 0x1d;
      }
      goto LAB_005b4eb0;
    }
  }
  uVar5 = 0x1f;
LAB_005b4eb0:
  if (uVar5 < param_4) {
    FUN_00666bb8(auStack_48,"Day of month is not valid for year",auStack_50);
    FUN_0064aadc(local_40,auStack_48);
    local_40[0] = PTR_vtable_007e56d8 + 0x10;
    throw_exception<boost::gregorian::bad_day_of_month>((bad_day_of_month *)local_40);
  }
  else if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


