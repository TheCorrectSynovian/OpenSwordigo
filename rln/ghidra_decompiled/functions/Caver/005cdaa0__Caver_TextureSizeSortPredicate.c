/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cdaa0
 * Function: Caver::TextureSizeSortPredicate
 * Signature: undefined __cdecl TextureSizeSortPredicate(Texture * param_1, Texture * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureSizeSortPredicate(Caver::Texture const*, Caver::Texture const*) */

bool Caver::TextureSizeSortPredicate(Texture *param_1,Texture *param_2)

{
                    /* try { // try from 005cdaa4 to 006cdaa7 has its CatchHandler @ 005cdae0 */
  return *(int *)(param_2 + 0x48) < *(int *)(param_1 + 0x48);
}


