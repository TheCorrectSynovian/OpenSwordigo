/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a98ec
 * Function: Caver::GUIRoundedRect::InitWithTexture
 * Signature: undefined __thiscall InitWithTexture(GUIRoundedRect * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIRoundedRect::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&) */

void __thiscall Caver::GUIRoundedRect::InitWithTexture(GUIRoundedRect *this,intrusive_ptr *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar3 = *(long *)param_1;
  if (lVar3 != 0) {
                    /* try { // try from 005a9908 to 006a990b has its CatchHandler @ 005a99a8 */
                    /* try { // try from 005a990c to 006a99cb has its CatchHandler @ 005a9710 */
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  plVar2 = *(long **)this;
  *(long *)this = lVar3;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
    lVar3 = *(long *)this;
  }
  fVar4 = (float)*(undefined8 *)(lVar3 + 0x54);
  fVar5 = (float)((ulong)*(undefined8 *)(lVar3 + 0x54) >> 0x20);
  fVar8 = (float)*(undefined8 *)(lVar3 + 100) / fVar4;
  fVar9 = (float)((ulong)*(undefined8 *)(lVar3 + 100) >> 0x20) / fVar5;
  fVar10 = fVar4 * 0.5 + -0.5;
  fVar11 = fVar5 * 0.5 + -0.5;
  fVar6 = fVar4 - (fVar4 * 0.5 + 0.5);
  fVar7 = fVar5 - (fVar5 * 0.5 + 0.5);
  *(ulong *)(this + 0x2c) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x5c) >> 0x20) + fVar11 * fVar9,
                (float)*(undefined8 *)(lVar3 + 0x5c) + fVar10 * fVar8);
  *(int *)(this + 0x3c) = (int)fVar10;
  *(int *)(this + 0x40) = (int)fVar6;
  *(ulong *)(this + 0x34) =
       CONCAT44(((fVar5 - fVar7) - fVar11) * fVar9,((fVar4 - fVar6) - fVar10) * fVar8);
  *(int *)(this + 0x44) = (int)fVar11;
  *(int *)(this + 0x48) = (int)fVar7;
                    /* catch() { ... } // from try @ 005a9908 with catch @ 005a99a8 */
  return;
}


