/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005afc08
 * Function: Caver::OrientedRect::OBFromRectangle
 * Signature: undefined __thiscall OBFromRectangle(OrientedRect * this, Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::OrientedRect::OBFromRectangle(Caver::Rectangle const&) */

void __thiscall Caver::OrientedRect::OBFromRectangle(OrientedRect *this,Rectangle *param_1)

{
  undefined8 uVar1;
  undefined8 *in_x8;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = _DAT_00697340;
  uVar2 = *(undefined8 *)this;
                    /* try { // try from 005afc14 to 006afc63 has its CatchHandler @ 005afcf0 */
  fVar3 = (float)*(undefined8 *)(this + 8) * 0.5;
  fVar4 = (float)((ulong)*(undefined8 *)(this + 8) >> 0x20) * 0.5;
  in_x8[2] = _UNK_00697348;
  in_x8[1] = uVar1;
  *in_x8 = CONCAT44((float)((ulong)uVar2 >> 0x20) + fVar4,(float)uVar2 + fVar3);
  in_x8[3] = CONCAT44(fVar4,fVar3);
  return;
}


