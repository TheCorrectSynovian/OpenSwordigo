/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b2480
 * Function: Caver::Rectangle::Intersection
 * Signature: undefined __cdecl Intersection(Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::Intersection(Caver::Rectangle const&) const */

void Caver::Rectangle::Intersection(Rectangle *param_1)

{
  ulong *in_x1;
  ulong *in_x8;
  float fVar1;
  ulong uVar2;
  float fVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  
  uVar2 = *in_x1;
  uVar4 = *(ulong *)param_1;
  fVar3 = (float)(uVar2 >> 0x20);
  fVar1 = (float)(uVar4 >> 0x20);
  fVar5 = (float)uVar4 + (float)*(undefined8 *)(param_1 + 8);
  fVar6 = fVar1 + (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  uVar4 = uVar4 ^ (uVar4 ^ uVar2) &
                  CONCAT44(-(uint)(fVar1 < fVar3),-(uint)((float)uVar4 < (float)uVar2));
  fVar1 = (float)uVar2 + (float)in_x1[1];
  fVar3 = fVar3 + (float)(in_x1[1] >> 0x20);
  uVar2 = CONCAT44(fVar3,fVar1);
  uVar2 = uVar2 ^ (uVar2 ^ CONCAT44(fVar6,fVar5)) &
                  CONCAT44(-(uint)(fVar6 < fVar3),-(uint)(fVar5 < fVar1));
  *in_x8 = uVar4;
  in_x8[1] = CONCAT44((float)(uVar2 >> 0x20) - (float)(uVar4 >> 0x20),(float)uVar2 - (float)uVar4);
  return;
}


