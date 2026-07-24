/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005248e8
 * Function: Caver::MapView::LocationMarkerFrameForMapNode
 * Signature: undefined __cdecl LocationMarkerFrameForMapNode(MapNode * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::LocationMarkerFrameForMapNode(Caver::MapNode*) */

void Caver::MapView::LocationMarkerFrameForMapNode(MapNode *param_1)

{
  long *in_x1;
  undefined8 *in_x8;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x2a8) + 0x7c);
  uVar2 = *(undefined8 *)(**(long **)(*(long *)(param_1 + 0x118) + *in_x1 * 0x10) + 8);
  *in_x8 = CONCAT44((float)((ulong)uVar2 >> 0x20) + 7.0,(float)uVar2 + (float)uVar1 * -0.5 + -3.0);
  in_x8[1] = uVar1;
  return;
}


