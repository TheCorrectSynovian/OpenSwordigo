/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b8080
 * Function: boost::uuids::detail::sha1::process_block
 * Signature: undefined __thiscall process_block(sha1 * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::uuids::detail::sha1::process_block() */

void __thiscall boost::uuids::detail::sha1::process_block(sha1 *this)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint3 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  uint local_130 [66];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 005b7f70 with catch @ 005b8098 */
                    /* catch() { ... } // from try @ 005b7f64 with catch @ 005b809c */
  uVar16 = *(undefined8 *)(this + 0x1c);
  uVar15 = *(undefined8 *)(this + 0x14);
                    /* catch() { ... } // from try @ 005b7f38 with catch @ 005b80ac */
                    /* catch() { ... } // from try @ 005b7f78 with catch @ 005b80c0 */
  uVar4 = CONCAT12((char)((ulong)uVar15 >> 0x20),(short)uVar15) & 0xff00ff;
                    /* try { // try from 005b8130 to 006b8157 has its CatchHandler @ 005b8178 */
                    /* try { // try from 005b8158 to 006b817b has its CatchHandler @ 005b7ec0 */
  uStack_168 = CONCAT17((char)((ulong)uVar16 >> 0x20),
                        CONCAT16((char)((ulong)uVar16 >> 0x28),
                                 CONCAT15((char)((ulong)uVar16 >> 0x30),
                                          CONCAT14((char)((ulong)uVar16 >> 0x38),
                                                   CONCAT13((char)uVar16,
                                                            CONCAT12((char)((ulong)uVar16 >> 8),
                                                                     CONCAT11((char)((ulong)uVar16
                                                                                    >> 0x10),
                                                                              (char)((ulong)uVar16
                                                                                    >> 0x18))))))));
  local_170 = CONCAT17((char)(uVar4 >> 0x10),
                       CONCAT16((char)((ulong)uVar15 >> 0x28),
                                CONCAT15((char)((ulong)uVar15 >> 0x30),
                                         CONCAT14((char)((ulong)uVar15 >> 0x38),
                                                  CONCAT13((char)uVar4,
                                                           CONCAT12((char)((ulong)uVar15 >> 8),
                                                                    CONCAT11((char)((ulong)uVar15 >>
                                                                                   0x10),
                                                                             (char)((ulong)uVar15 >>
                                                                                   0x18))))))));
  uVar16 = *(undefined8 *)(this + 0x2c);
  uVar15 = *(undefined8 *)(this + 0x24);
                    /* catch() { ... } // from try @ 005b8130 with catch @ 005b8178 */
  uVar4 = CONCAT12((char)((ulong)uVar15 >> 0x20),(short)uVar15) & 0xff00ff;
  uStack_158 = CONCAT17((char)((ulong)uVar16 >> 0x20),
                        CONCAT16((char)((ulong)uVar16 >> 0x28),
                                 CONCAT15((char)((ulong)uVar16 >> 0x30),
                                          CONCAT14((char)((ulong)uVar16 >> 0x38),
                                                   CONCAT13((char)uVar16,
                                                            CONCAT12((char)((ulong)uVar16 >> 8),
                                                                     CONCAT11((char)((ulong)uVar16
                                                                                    >> 0x10),
                                                                              (char)((ulong)uVar16
                                                                                    >> 0x18))))))));
  local_160 = CONCAT17((char)(uVar4 >> 0x10),
                       CONCAT16((char)((ulong)uVar15 >> 0x28),
                                CONCAT15((char)((ulong)uVar15 >> 0x30),
                                         CONCAT14((char)((ulong)uVar15 >> 0x38),
                                                  CONCAT13((char)uVar4,
                                                           CONCAT12((char)((ulong)uVar15 >> 8),
                                                                    CONCAT11((char)((ulong)uVar15 >>
                                                                                   0x10),
                                                                             (char)((ulong)uVar15 >>
                                                                                   0x18))))))));
  uVar16 = *(undefined8 *)(this + 0x3c);
  uVar15 = *(undefined8 *)(this + 0x34);
  uVar4 = CONCAT12((char)((ulong)uVar15 >> 0x20),(short)uVar15) & 0xff00ff;
                    /* try { // try from 005b82d4 to 006b840f has its CatchHandler @ 005b82d4
                       catch() { ... } // from try @ 005b82d4 with catch @ 005b82d4
                       catch() { ... } // from try @ 005b8424 with catch @ 005b82d4
                       catch() { ... } // from try @ 005b8610 with catch @ 005b82d4 */
  uStack_148 = CONCAT17((char)((ulong)uVar16 >> 0x20),
                        CONCAT16((char)((ulong)uVar16 >> 0x28),
                                 CONCAT15((char)((ulong)uVar16 >> 0x30),
                                          CONCAT14((char)((ulong)uVar16 >> 0x38),
                                                   CONCAT13((char)uVar16,
                                                            CONCAT12((char)((ulong)uVar16 >> 8),
                                                                     CONCAT11((char)((ulong)uVar16
                                                                                    >> 0x10),
                                                                              (char)((ulong)uVar16
                                                                                    >> 0x18))))))));
  local_150 = CONCAT17((char)(uVar4 >> 0x10),
                       CONCAT16((char)((ulong)uVar15 >> 0x28),
                                CONCAT15((char)((ulong)uVar15 >> 0x30),
                                         CONCAT14((char)((ulong)uVar15 >> 0x38),
                                                  CONCAT13((char)uVar4,
                                                           CONCAT12((char)((ulong)uVar15 >> 8),
                                                                    CONCAT11((char)((ulong)uVar15 >>
                                                                                   0x10),
                                                                             (char)((ulong)uVar15 >>
                                                                                   0x18))))))));
  uVar16 = *(undefined8 *)(this + 0x4c);
  uVar15 = *(undefined8 *)(this + 0x44);
  uVar4 = CONCAT12((char)((ulong)uVar15 >> 0x20),(short)uVar15) & 0xff00ff;
  uStack_138 = CONCAT17((char)((ulong)uVar16 >> 0x20),
                        CONCAT16((char)((ulong)uVar16 >> 0x28),
                                 CONCAT15((char)((ulong)uVar16 >> 0x30),
                                          CONCAT14((char)((ulong)uVar16 >> 0x38),
                                                   CONCAT13((char)uVar16,
                                                            CONCAT12((char)((ulong)uVar16 >> 8),
                                                                     CONCAT11((char)((ulong)uVar16
                                                                                    >> 0x10),
                                                                              (char)((ulong)uVar16
                                                                                    >> 0x18))))))));
  local_140 = CONCAT17((char)(uVar4 >> 0x10),
                       CONCAT16((char)((ulong)uVar15 >> 0x28),
                                CONCAT15((char)((ulong)uVar15 >> 0x30),
                                         CONCAT14((char)((ulong)uVar15 >> 0x38),
                                                  CONCAT13((char)uVar4,
                                                           CONCAT12((char)((ulong)uVar15 >> 8),
                                                                    CONCAT11((char)((ulong)uVar15 >>
                                                                                   0x10),
                                                                             (char)((ulong)uVar15 >>
                                                                                   0x18))))))));
  lVar13 = 0;
  do {
    lVar1 = lVar13 + 4;
    uVar9 = *(uint *)((long)&local_150 + lVar13) ^ *(uint *)((long)&local_140 + lVar13 + 4) ^
            *(uint *)((long)&uStack_168 + lVar13) ^ *(uint *)((long)&local_170 + lVar13);
    *(uint *)((long)local_130 + lVar13) = uVar9 >> 0x1f | uVar9 << 1;
    lVar13 = lVar1;
  } while (lVar1 != 0x100);
  uVar14 = 0;
  uVar5 = *(uint *)(this + 0x10);
  uVar6 = *(uint *)(this + 4);
  uVar8 = *(uint *)(this + 0xc);
  uVar9 = *(uint *)this;
  uVar2 = *(uint *)(this + 8);
  do {
    uVar7 = uVar2;
    uVar12 = uVar9;
    uVar10 = uVar8;
    if (uVar14 < 0x14) {
                    /* try { // try from 005b8410 to 006b8417 has its CatchHandler @ 005b85c8 */
      uVar9 = uVar10 & (uVar6 ^ 0xffffffff) | uVar7 & uVar6;
                    /* try { // try from 005b8418 to 006b8423 has its CatchHandler @ 005b8568 */
      iVar11 = 0x5a827999;
    }
    else {
                    /* try { // try from 005b8424 to 006b85e7 has its CatchHandler @ 005b82d4 */
      if (uVar14 < 0x28) {
        uVar9 = uVar7 ^ uVar6 ^ uVar10;
        iVar11 = 0x6ed9eba1;
      }
      else if (uVar14 < 0x3c) {
        uVar9 = (uVar10 | uVar7) & uVar6 | uVar10 & uVar7;
        iVar11 = -0x70e44324;
      }
      else {
        uVar9 = uVar7 ^ uVar6 ^ uVar10;
        iVar11 = -0x359d3e2a;
      }
    }
    lVar13 = uVar14 * 4;
    uVar14 = uVar14 + 1;
    uVar9 = uVar5 + (uVar12 >> 0x1b | uVar12 << 5) + uVar9 + iVar11 +
            *(int *)((long)&local_170 + lVar13);
    uVar2 = uVar6 >> 2 | uVar6 << 0x1e;
    uVar5 = uVar10;
    uVar6 = uVar12;
    uVar8 = uVar7;
  } while (uVar14 != 0x50);
  *(uint *)this = uVar9 + *(uint *)this;
  *(uint *)(this + 4) = uVar12 + *(uint *)(this + 4);
  *(uint *)(this + 8) = uVar2 + *(uint *)(this + 8);
  *(uint *)(this + 0xc) = uVar7 + *(uint *)(this + 0xc);
  *(uint *)(this + 0x10) = uVar10 + *(uint *)(this + 0x10);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


