/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00390308
 * Function: Caver::SpellComponent::CastPoint
 * Signature: undefined __cdecl CastPoint(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SpellComponent::CastPoint() */

void Caver::SpellComponent::CastPoint(void)

{
  int iVar1;
  long in_x0;
  long *plVar2;
  undefined8 *in_x8;
  float fVar3;
  float fVar4;
  
  plVar2 = *(long **)(in_x0 + 0x70);
  if (plVar2 != (long *)0x0) {
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  }
  fVar3 = *(float *)(plVar2 + 0xf);
  fVar4 = *(float *)(in_x0 + 0x80);
  *in_x8 = CONCAT44((float)((ulong)plVar2[0xe] >> 0x20) -
                    (float)((ulong)*(undefined8 *)(in_x0 + 0x78) >> 0x20),
                    (float)plVar2[0xe] - (float)*(undefined8 *)(in_x0 + 0x78));
  *(float *)(in_x8 + 1) = fVar3 - fVar4;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00390360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}


