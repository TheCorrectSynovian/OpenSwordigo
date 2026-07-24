/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005482a4
 * Function: Caver::MeshClipper::ClippedMesh
 * Signature: undefined __cdecl ClippedMesh(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshClipper::ClippedMesh(int) */

void Caver::MeshClipper::ClippedMesh(int param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *puVar6;
  int in_w1;
  undefined8 *in_x8;
  ulong uVar7;
  long lVar8;
  int iVar9;
  MeshBuilder aMStack_b0 [8];
  long *local_a8;
  void *local_98;
  void *local_78;
  long local_58;
  
  uVar4 = (ulong)(uint)param_1;
                    /* try { // try from 005482b0 to 006482d7 has its CatchHandler @ 005482e0 */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005482d8 to 006482e3 has its CatchHandler @ 00548060 */
  uVar1 = *(uint *)(uVar4 + 0x98);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)(int)uVar1;
                    /* catch() { ... } // from try @ 0054824c with catch @ 005482e0
                       catch() { ... } // from try @ 005482b0 with catch @ 005482e0 */
  uVar7 = (long)(int)uVar1 << 2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005483a8 with catch @ 005482ec
                       catch(type#1 @ 00000000) { ... } // from try @ 00548418 with catch @ 005482ec
                        */
  if (SUB168(auVar2 * ZEXT816(4),8) != 0) {
    uVar7 = 0xffffffffffffffff;
  }
  piVar5 = operator_new__(uVar7);
  if (0 < (int)uVar1) {
    lVar8 = *(long *)(uVar4 + 0xb8);
    uVar7 = 0;
    iVar9 = 0;
    do {
      if (*(int *)(lVar8 + uVar7 * 4) == in_w1) {
        piVar5[iVar9] = (int)uVar7;
        iVar9 = iVar9 + 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar7);
                    /* try { // try from 00548338 to 0064835f has its CatchHandler @ 005483c4 */
    if (0 < iVar9) {
      MeshBuilder::MeshBuilder(aMStack_b0);
      MeshBuilder::InitWithMeshBuilderFaceSubset
                (aMStack_b0,(MeshBuilder *)(uVar4 + 0x48),piVar5,iVar9);
      puVar6 = (undefined8 *)MeshBuilder::GenerateMesh(aMStack_b0);
      *in_x8 = *puVar6;
      lVar8 = puVar6[1];
      in_x8[1] = lVar8;
      if (lVar8 != 0) {
        *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 1;
      }
                    /* try { // try from 00548380 to 006483a7 has its CatchHandler @ 005483bc */
      if (local_78 != (void *)0x0) {
        operator_delete(local_78);
      }
      if (local_98 != (void *)0x0) {
        operator_delete(local_98);
      }
                    /* try { // try from 005483a8 to 006483e7 has its CatchHandler @ 005482ec */
      if ((local_a8 != (long *)0x0) &&
         (lVar8 = local_a8[1], local_a8[1] = lVar8 + -1, lVar8 + -1 == 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00548380 with catch @ 005483bc
                        */
        (**(code **)(*local_a8 + 0x10))(local_a8);
        lVar8 = local_a8[2];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00548338 with catch @ 005483c4
                        */
        local_a8[2] = lVar8 + -1;
        if (lVar8 + -1 == 0) {
          (**(code **)(*local_a8 + 0x18))(local_a8);
        }
      }
      goto LAB_005483e8;
    }
  }
  *in_x8 = 0;
  in_x8[1] = 0;
LAB_005483e8:
                    /* try { // try from 005483e8 to 00648417 has its CatchHandler @ 00548420 */
  operator_delete__(piVar5);
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 00548418 to 00648423 has its CatchHandler @ 005482ec */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


