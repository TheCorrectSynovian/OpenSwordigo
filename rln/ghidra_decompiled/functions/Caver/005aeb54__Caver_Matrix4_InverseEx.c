/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005aeb54
 * Function: Caver::Matrix4::InverseEx
 * Signature: undefined __cdecl InverseEx(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Matrix4::InverseEx() const */

void Caver::Matrix4::InverseEx(void)

{
  long lVar1;
  float *in_x0;
  float *in_x8;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  fVar19 = *in_x0;
  fVar30 = in_x0[1];
  fVar22 = in_x0[4];
  fVar31 = in_x0[5];
  fVar21 = in_x0[8];
  fVar29 = in_x0[9];
  fVar23 = in_x0[0xc];
  fVar11 = in_x0[0xd];
  fVar3 = in_x0[2];
  fVar9 = in_x0[3];
  fVar5 = in_x0[6];
  fVar10 = in_x0[7];
  fVar4 = in_x0[10];
  fVar7 = in_x0[0xb];
  fVar6 = in_x0[0xe];
  fVar17 = in_x0[0xf];
  fVar8 = fVar19 * fVar31 - fVar22 * fVar30;
  fVar16 = fVar19 * fVar29 - fVar21 * fVar30;
  fVar18 = fVar19 * fVar11 - fVar23 * fVar30;
  fVar20 = fVar22 * fVar29 - fVar21 * fVar31;
  fVar24 = fVar22 * fVar11 - fVar23 * fVar31;
  fVar26 = fVar21 * fVar11 - fVar23 * fVar29;
  fVar14 = fVar3 * fVar7 - fVar4 * fVar9;
  fVar15 = fVar3 * fVar17 - fVar6 * fVar9;
  fVar27 = fVar5 * fVar7 - fVar4 * fVar10;
  fVar28 = fVar5 * fVar17 - fVar6 * fVar10;
  fVar12 = fVar4 * fVar17 - fVar6 * fVar7;
  fVar13 = fVar3 * fVar10 - fVar5 * fVar9;
  fVar25 = fVar26 * fVar13 +
           ((fVar20 * fVar15 + fVar18 * fVar27 + (fVar8 * fVar12 - fVar16 * fVar28)) -
           fVar24 * fVar14);
  if (fVar25 != 0.0) {
                    /* try { // try from 005aed44 to 006aed63 has its CatchHandler @ 005aed44
                       catch() { ... } // from try @ 005aed44 with catch @ 005aed44
                       catch() { ... } // from try @ 005aed6c with catch @ 005aed44
                       catch() { ... } // from try @ 005aedbc with catch @ 005aed44 */
                    /* try { // try from 005aed64 to 006aed6b has its CatchHandler @ 005aeda4 */
    fVar25 = 1.0 / fVar25;
                    /* try { // try from 005aed6c to 006aedaf has its CatchHandler @ 005aed44 */
                    /* catch() { ... } // from try @ 005aed64 with catch @ 005aeda4 */
                    /* try { // try from 005aedb0 to 006aedb3 has its CatchHandler @ 005aedb4 */
                    /* catch() { ... } // from try @ 005aedb0 with catch @ 005aedb4 */
                    /* try { // try from 005aedb8 to 006aedbb has its CatchHandler @ 005aedc4 */
                    /* try { // try from 005aedbc to 006aedc7 has its CatchHandler @ 005aed44 */
                    /* catch() { ... } // from try @ 005aedb8 with catch @ 005aedc4 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005aef1c with catch @ 005aedc8
                       catch(type#1 @ 00000000) { ... } // from try @ 005af198 with catch @ 005aedc8
                        */
                    /* try { // try from 005aee88 to 006aeeaf has its CatchHandler @ 005af150 */
    *in_x8 = fVar25 * (fVar11 * fVar27 + (fVar31 * fVar12 - fVar29 * fVar28));
    in_x8[1] = fVar25 * ((fVar29 * fVar15 - fVar30 * fVar12) - fVar11 * fVar14);
    in_x8[4] = fVar25 * ((fVar21 * fVar28 - fVar22 * fVar12) - fVar23 * fVar27);
    in_x8[5] = fVar25 * (fVar23 * fVar14 + (fVar19 * fVar12 - fVar21 * fVar15));
    in_x8[8] = fVar25 * ((fVar26 * fVar10 - fVar24 * fVar7) + fVar20 * fVar17);
    in_x8[9] = fVar25 * ((fVar18 * fVar7 - fVar26 * fVar9) - fVar16 * fVar17);
    in_x8[0xc] = fVar25 * ((fVar24 * fVar4 - fVar5 * fVar26) - fVar20 * fVar6);
    in_x8[0xd] = fVar25 * ((fVar3 * fVar26 - fVar18 * fVar4) + fVar16 * fVar6);
    in_x8[2] = fVar25 * (fVar11 * fVar13 + (fVar30 * fVar28 - fVar31 * fVar15));
    in_x8[3] = fVar25 * ((fVar31 * fVar14 - fVar30 * fVar27) - fVar29 * fVar13);
    in_x8[6] = fVar25 * ((fVar22 * fVar15 - fVar19 * fVar28) - fVar23 * fVar13);
    in_x8[7] = fVar25 * (fVar21 * fVar13 + (fVar19 * fVar27 - fVar22 * fVar14));
    in_x8[10] = fVar25 * ((fVar24 * fVar9 - fVar18 * fVar10) + fVar8 * fVar17);
    in_x8[0xb] = fVar25 * ((fVar16 * fVar10 - fVar20 * fVar9) - fVar8 * fVar7);
    in_x8[0xe] = fVar25 * ((fVar5 * fVar18 - fVar3 * fVar24) - fVar8 * fVar6);
    in_x8[0xf] = fVar25 * ((fVar3 * fVar20 - fVar16 * fVar5) + fVar8 * fVar4);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 005aeef4 to 006aef1b has its CatchHandler @ 005af144 */
  __stack_chk_fail();
}


