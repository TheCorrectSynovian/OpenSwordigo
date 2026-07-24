/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c8f18
 * Function: Caver::Texture::CreateSubtexture
 * Signature: undefined __cdecl CreateSubtexture(Rectangle * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Texture::CreateSubtexture(Caver::Rectangle const&, float) */

void Caver::Texture::CreateSubtexture(Rectangle *param_1,float param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *in_x1;
  long lVar6;
  long *in_x8;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  
  plVar5 = operator_new(0xa8);
  puVar4 = PTR_vtable_007e6648;
  *(undefined4 *)(plVar5 + 1) = 1;
  *plVar5 = (long)(puVar4 + 0x10);
  puVar3 = PTR_DAT_007e5de8;
  *(undefined4 *)(plVar5 + 5) = 0;
  *(undefined4 *)(plVar5 + 7) = 0;
                    /* try { // try from 005c8f74 to 006c8f9b has its CatchHandler @ 005c90b4 */
  *(undefined8 *)((long)plVar5 + 0x44) = 0;
  *(undefined8 *)((long)plVar5 + 100) = 0;
  *(undefined8 *)((long)plVar5 + 0x5c) = 0;
  *(undefined8 *)((long)plVar5 + 0x54) = 0;
  *(undefined8 *)((long)plVar5 + 0x4c) = 0;
  *(undefined1 *)(plVar5 + 0x14) = 0;
  plVar5[0x12] = 0;
  plVar5[0x13] = 0;
  plVar5[0x10] = 0;
  plVar5[0x11] = 0;
  plVar5[0xe] = (long)param_1;
  plVar5[0xf] = 0;
  *in_x8 = (long)plVar5;
  plVar5[2] = (long)(puVar4 + 0x60);
  plVar5[3] = 0;
  plVar5[4] = (long)(puVar3 + 0x18);
  plVar5[6] = (long)(puVar3 + 0x18);
  uVar10 = in_x1[1];
  uVar8 = *in_x1;
  *(float *)((long)plVar5 + 0x6c) = param_2;
  *(undefined8 *)((long)plVar5 + 0x54) = uVar10;
  *(undefined8 *)((long)plVar5 + 0x4c) = uVar8;
  puVar1 = *(undefined8 **)(param_1 + 0x80);
                    /* try { // try from 005c8fbc to 006c8fe3 has its CatchHandler @ 005c90a4 */
  if (puVar1 == *(undefined8 **)(param_1 + 0x88)) {
    std::
    vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>
    ::_M_insert_aux((vector<boost::intrusive_ptr<Caver::Texture>,std::allocator<boost::intrusive_ptr<Caver::Texture>>>
                     *)(param_1 + 0x78));
    iVar2 = *(int *)(param_1 + 0x38);
  }
  else {
    *puVar1 = plVar5;
    *(undefined4 *)(plVar5 + 1) = 2;
    *(undefined8 **)(param_1 + 0x80) = puVar1 + 1;
    iVar2 = *(int *)(param_1 + 0x38);
  }
  if (iVar2 != 0) {
    lVar6 = *in_x8;
    lVar7 = *(long *)(lVar6 + 0x70);
    *(undefined8 *)(lVar6 + 0x98) = *(undefined8 *)(lVar7 + 0x98);
                    /* try { // try from 005c9004 to 006c902b has its CatchHandler @ 005c9094 */
    *(undefined4 *)(lVar6 + 0x38) = *(undefined4 *)(lVar7 + 0x38);
    *(undefined4 *)(lVar6 + 0x44) = *(undefined4 *)(lVar7 + 0x44);
    uVar8 = *(undefined8 *)(lVar7 + 0x3c);
    *(undefined8 *)(lVar6 + 0x3c) = uVar8;
    if (((int)uVar8 != 0) && ((int)((ulong)uVar8 >> 0x20) != 0)) {
      fVar11 = *(float *)(lVar6 + 0x6c);
      uVar8 = NEON_scvtf(uVar8,4);
      fVar9 = (float)((ulong)uVar8 >> 0x20);
                    /* try { // try from 005c904c to 006c9073 has its CatchHandler @ 005c908c */
      *(ulong *)(lVar6 + 0x5c) =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar6 + 0x4c) >> 0x20) * fVar11) / fVar9,
                    ((float)*(undefined8 *)(lVar6 + 0x4c) * fVar11) / (float)uVar8);
      *(ulong *)(lVar6 + 100) =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar6 + 0x54) >> 0x20) * fVar11) / fVar9,
                    ((float)*(undefined8 *)(lVar6 + 0x54) * fVar11) / (float)uVar8);
    }
    if (*(undefined8 **)(lVar6 + 0x18) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar6 + 0x18))();
    }
  }
                    /* try { // try from 005c9074 to 006c90f3 has its CatchHandler @ 005c8e60 */
  return;
}


