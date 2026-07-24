/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cd7c0
 * Function: Caver::TextureLoadTimeSortPredicate
 * Signature: undefined __cdecl TextureLoadTimeSortPredicate(intrusive_ptr * param_1, intrusive_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureLoadTimeSortPredicate(boost::intrusive_ptr<Caver::Texture> const&,
   boost::intrusive_ptr<Caver::Texture> const&) */

bool Caver::TextureLoadTimeSortPredicate(intrusive_ptr *param_1,intrusive_ptr *param_2)

{
  return *(double *)(*(long *)param_2 + 0x98) < *(double *)(*(long *)param_1 + 0x98);
}


