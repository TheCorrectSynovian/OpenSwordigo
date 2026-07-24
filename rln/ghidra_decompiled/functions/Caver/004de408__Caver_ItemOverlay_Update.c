/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004de408
 * Function: Caver::ItemOverlay::Update
 * Signature: undefined __cdecl Update(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemOverlay::Update(float) */

void Caver::ItemOverlay::Update(float param_1)

{
  ItemOverlay *in_x0;
  
  if (in_x0[0x100] != (ItemOverlay)0x0) {
    in_x0[0x100] = (ItemOverlay)0x0;
    UpdateSprites(in_x0);
    return;
  }
  return;
}


