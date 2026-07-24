/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054f98c
 * Function: Caver::PODLoader::DestroyModel
 * Signature: undefined __thiscall DestroyModel(PODLoader * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PODLoader::DestroyModel() */

void __thiscall Caver::PODLoader::DestroyModel(PODLoader *this)

{
  CPVRTModelPOD::Destroy(*(CPVRTModelPOD **)this);
  return;
}


