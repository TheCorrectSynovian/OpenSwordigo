/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a151c
 * Function: Caver::ProfileSortPredicate
 * Signature: undefined __cdecl ProfileSortPredicate(shared_ptr * param_1, shared_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileSortPredicate(boost::shared_ptr<Caver::PlayerProfile> const&,
   boost::shared_ptr<Caver::PlayerProfile> const&) */

bool Caver::ProfileSortPredicate(shared_ptr *param_1,shared_ptr *param_2)

{
  return *(double *)(*(long *)param_2 + 0x28) < *(double *)(*(long *)param_1 + 0x28);
}


